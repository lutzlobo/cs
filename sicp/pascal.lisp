;        1
;       1 1
;      1 2 1
;     1 3 3 1 
;    1 4 6 4 1

;A ideia desse exercício é descobrir qual número seria numa posição
;específica do triangulo de Pascal.
;Para isso precisamos definir uma função que pega dois parâmetros:
;Coluna e Linha (Row and Column).

(defun pascal (row col)
    (cond 
    ((or (= col 1) (= col row)) 1)
    ((< 1 col row) (+ (pascal (- row 1) (- col 1)) (pascal (- row 1) col)))
    )
)

