#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "cons.h"

int main() {
    int historial;
    int fin = 0;
    int i,j;
    int x,y;
    char tablero[dimension][dimension];
    char actual[dimension][dimension];
    int bombas[BOMB][2];
    srand(time(0));

    int move(char board[][dimension], char tabreal[][dimension],
            int bombas[][2], int vertical, int horizontal, int *historial) {
    int i, j, num;
    if (tabreal[horizontal][vertical]=='*') { // Cuando se toca una bomba
        board[horizontal][vertical]='*';
        for (i=0;i<BOMB;i++)
            board[bombas[i][0]][bombas[i][1]]='*';
        printboard(board);
        printf("Haz perdido. Suerte para la próxima. \n");
        return 1;
    }else if (board[horizontal][vertical]!='#') {
        printf("Esa coordenada ya fue usada. Intenta con otra. \n");
        return 0;
    }else {
        num = numberbombs(horizontal, vertical, bombas);
        (*historial)--;
        board[horizontal][vertical]=(char)(num+'0');
        if (num == 0) {
            for (i=-1;i<2;i++) {
            for (j=-1;j<2;j++) {
              if (valid(horizontal+i,vertical+j) && (board[horizontal+i][vertical+j]=='#'))
	      move(board, tabreal, bombas, horizontal+i, vertical+j, historial);
	  }
         }
        }
      return 0;
    }
} //se colocan las bombas de forma aleatoria
    for (i=0;i<dimension;i++) {
        for (j=0;j<dimension;j++) {
            actual[i][j] = '#';
            tablero[i][j] = '#';
        }
    }
    randombomb(bombas);
    for (i=0;i<BOMB;i++)
    tablero[bombas[i][0]][bombas[i][1]]='*';
    historial = dimension*dimension - BOMB;
    while (!fin) {
        printboard(actual);
        instruccion(&x,&y);
        printf(" %c\n", actual[7][1]);
        fin = move(actual,tablero,bombas,x,y,&historial);
        if ((!fin) && (historial==0)) {
            printf(" ¡Felicidades has ganado! :D \n");
            fin = 1;
        }
    }
    return 0;
}

int valid(int horizontal, int vertical) {
    if (horizontal < 0){return 0;
    }else if (horizontal >= dimension) {return 0;
    	}else if (vertical < 0) {return 0;
    		}else if (vertical >= dimension) {return 0;
    			}else {return 1;
    }
}
int numberbombs(int horizontal ,int vertical ,int bombas[][2]) {
int i;
int count = 0;
    for (i=0;i<BOMB;i++) {
        if ((abs(horizontal-bombas[i][0])<=1+tol) && (abs(vertical-bombas[i][1])<=1+tol)) {
            count++;
        }
    }
    return count;
}


