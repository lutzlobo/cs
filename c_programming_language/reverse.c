#include<stdio.h>


int main()
    {
        int i = 0; // declaramos i
        int j = 0; // declaramos j
        int temp = 0; // declaramos uma variável temporária
        int time[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

        for (i = 0; i < 5; ++i) {
            j = 9 - i; // j começa na última pos. do array enquanto i começa na primeira

            /* 
            É aqui que a mágica acontece. 
            (1) Começamos guardando o valor de array[i] dentro da variável temporária
            (2) Depois transformamos o valor de [i] para [j]
            (3) E por fim, transformamos o valor de [j] para temp(antigo i);
            Uma lógica muito inteligente! Gostei.
            */
            temp = time[i]; // temp vira 10
            time[i] = time[j]; //i vira 1
            time[j] = temp; //j vira temp(10)
        }

        //Printamos o novo array
        for(i = 0; i < 10; i++) {
            printf("%d ", time[i]);
        }

        return 0;
    }