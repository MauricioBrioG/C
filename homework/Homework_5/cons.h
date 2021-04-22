int dimension= 5;
void printboard(char[][dimension]);
int numberbombs(int,int,int[][2]);
int movement(char[][dimension], char[][dimension], int[][2], int, int, int*);
void randombomb(int[][2]);
void instruccion(int*, int*);
int valid(int,int);
int BOMB = 6;
double tol = 0.1;
