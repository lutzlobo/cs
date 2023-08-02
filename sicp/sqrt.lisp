;Define average
(defun average (x y)
    (/ (+ x y) 2))

;Define improve
(defun improve (guess x)
    (average guess (/ x guess)))

;Defining good-enough
(defun good-enough? (guess x)
(< (abs (- (square guess) x)) 0.001))

;Defining the Newton's method
(defun sqrt-iter (guess x)
    (if (good-enough? guess x)
        guess
        (sqrt-iter (improve guess x) x)))

;Defining square root
(defun squareroot (x)
 (sqrt-iter 1.0 x))
    
;AGORA PRECISAMOS FAZER O EXERCISE 1.8