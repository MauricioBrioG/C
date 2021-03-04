#include <stdio.h>
//Quiero agradecer a Miguel que me ayudo a comprender fallas que tenía en el código al momento de querer imprimir los numeros
int main () 
{
    int j,k,n,bin[1000];
    int conta = 0;
    int i = 0;
    k = 100;

    for(k = 2; k <= 100; k++) {   //De aquí se generan los numeros primos
       for(j = 2; j <= k; j++){ //se valida que sea primo
        if(k % j == 0){
            conta++;
        }
       }
    
        if(conta <= 1){  //Si es primo se convierte a binario
            n = k;
            while (n > 0){  //comienza expresión algebraica para binario
                bin[i] = n % 2;
                n /= 2;
                i++;
            }
            
            
            while (i>=0){ //Coloque un while para que este proceso se repitiera, pero solo imprime el primer numero primo 2:(
                printf("%i", bin[i]);
                i--;
                
            }
        }
    }
    return 0;
}
