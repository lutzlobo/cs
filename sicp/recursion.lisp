(defun factorial (n)
    (if (= n 1)
        1
        (* n (factorial (- n 1))))
)

;Quando uma função aparece no código, precisamos esperar ela retornar.

(defun fibonacci (x)
    (if (<= x 1) x
    (+(fibonacci(- x 1)) (fibonacci(- x 2))))
)

;Recursive Process
(defun f (n)
    (if (< n 3) n
    (+ (f(- n 1)) (* 2 (f(- n 2))) (* 3 (f(- n 3))))
    )
)

;Iterative Process
(defun f (n)
    (if (< n 3)
        n
        (fact-iter 2 1 0 3 n)))

(defun fact-iter (n1 n2 n3 counter max-count) 
    (if (> counter max-count)
        n1
        (fact-iter 
            (+ n1 (* 2 n2) (* 3 n3)) n1 n2
            (+ counter 1)
            max-count)))


;f(n)=n if n<3 and f(n)=f(n−1)+2f(n−2)+3f(n−3) if n≥3

;if n < 3  : f(n) = n
;if n > 3 : f(n) = f(n-1) + 2 * f(n-2) + 3 * f(n-3)

;Um "base case" de uma recursion é o cenário onde a função pode prover uma resposta DIRETA sem precisar chamar nenhuma função. Nesse caso, todas as vezes que N for menor que 3


