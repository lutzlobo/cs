; Define cube
(defun improve (cube x)
    (* x x x))

; Define improve
(defun improve (guess x)
    (/ (+ (* 2 guess) (/ x (* guess guess))) 3))

; Define good-enough?
(defun good-enough? (guess x)
    (< (abs (- (cube guess) x)) 0.001))

; Define the Newton's method
(defun cbrt-iter (guess x)
    (if (good-enough? guess x)
        guess
        (cbrt-iter (improve guess x) x)))

; Define cube root
(defun cuberoot (x)
 (cbrt-iter 1.0 x))
