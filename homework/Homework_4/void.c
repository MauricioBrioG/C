#include <stdio.h>

int dimen= 10;
void printboard(char[][dimen]);
void printboard(char board[][dimen]) {
    int i,j;
    printf("    ");
    for (i=0;i<dimen;i++)
        printf("%d ", i);
    printf("\n\n");
    for (i=0;i<dimen;i++) {
    printf("%d   ", i);
    for (j=0;j<dimen;j++)
        printf("%c ",board[i][j]);
        printf("\n");
    }
}
void instruccion(int *x,int *y) {
    printf("El primer numero es x y el segundo es y \n");
    printf ("No olvides colocar un espacio entre las coordenadas \n");
    printf ("Las dimensiones de la tabla son de 10x10 las coordenadas van del 0 al 9 \n");
    printf("Ingresa los datos: ");
    scanf("%d%d", x, y);
    printf("------------------------------------------------------------- \n");

    while (!valid(*x,*y)) {
        printf(" Ingresa otras coordenadas, ya que no son validas las que escribiste.\n");
        printf("----> ");
        scanf("%d%d", x, y);
    }
}

void randombomb(int bombardeo[][2]) {
int i;
int h;
int BOMB=20;
int actb[dimen*dimen];
    for (i=0; i<dimen*dimen; i++)
    actb[i] = 0;
    i = 0;
    while(i<BOMB) {
    h = rand()%(dimen*dimen);
    if (actb[h]==0) {
        bombardeo[i][0] = h/dimen;
        bombardeo[i][1] = h%dimen;
        i++;
        actb[h] = 1;
        }
    }
}
