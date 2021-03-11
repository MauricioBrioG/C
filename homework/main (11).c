#include <stdio.h>          //input para ejemplo: 486 456.789 "5989" (78541) [495974] {4163569956} <59644> HOLA
#define TRUE 1              //Agradezco a mi compañero Ruben y Miguel quienes me ayudaron a resolver dudas y darme consejos
#define FALSE 0             

int main() {
int c, par, quo, number;
par = quo = number = FALSE;

while ((c = getchar()) != EOF ) {
    switch (c) {
        case '(':
        case '{':
        case '[':
        case '<':
        par = TRUE;
        putchar (c);
        break;
        
        case ')':
        case '}':
        case ']':
        case '>':
        par = FALSE;
        putchar (c);
        break;
        
        case '\'':
        putchar(c);
        quo++;
        break;
        
        case '"':
        putchar(c);
        quo++;
        break;
        
    default: 
        if (c != ',' && c != '.' && c != '?' && c != '!' && c != '-' && c != '_' && c != '¿') {
            if (par == TRUE || quo == TRUE) {
                putchar (c);
            } else { 
                if (par==2){
                    par = 0;
                }
                if (c == 0,1,2,3,4,5,6,7,8,9){
                number = number + 1;
                } else {
                    number == 0;
                } if (number == 1) {
                    putchar('X');
                }
                if (number == 0) {
                    putchar(c);
                }
                
            }
        }
            
    
    }
} return 0;
}