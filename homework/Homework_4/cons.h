int dimension= 10;
void printboard(char[][dimension]);
int numberbombs(int,int,int[][2]);
int movement(char[][dimension], char[][dimension], int[][2], int, int, int*);
void randombomb(int[][2]);
void instruccion(int*, int*);
int valid(int,int);
int BOMB = 20;
double tol = 0.1;
