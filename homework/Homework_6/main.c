//Hice el intento, pero tengo varios errores que no me permiten copilar, para que si quieren se ahorren el checar si copila//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "tree.h"

node *insert(char *user, char *pass, node *pos)
{ node *temp;
  if (pos == NULL)
  {
    pos = (node *)malloc(sizeof(node));
    pos->user = user;
    pos->pass = pass;
  }
  return pos;
}

void main()
{
  node *n = NULL;
  node *tree = NULL;

  int i = 0, j = 0, count = 0;
  char c, user[100], pass[100], line[200], type[100];
  printf("Bienvenido para agregar a un usuario con su respectiva contraseña\n");
  printf("Escribelo de la siguiente forma: add usuario contraseña \n");
  printf("Conforme registre datos, se le mostrará la lista\n");

  while (1)
  {
    i = 0, j = 0;
    while ((c = getchar()) != EOF && c != '\n')
    {
      line[i++] = c;
      if (isspace(c))
        count++;
    }
    line[i] = '\0';
    if (strstr(type, "add"))
    {
      n = insert(user, pass, tree);
      if (tree == NULL)
        tree = n;
      show(tree);
    }
  }
  return 0;
}
int getdata(char *user, char *line)
(int i = 0, j = 0;
  if (isspace(line[0]))
    while (isspace(line[++i]))
      ;
  while (!isspace(line[i]))
    user[j++] = line[i++];
  return i;
}
 void show(node *position)
{if (position != NULL)
  {
    printf("%s,  ", position->user);
    if (position->left != NULL)
      printf("%s,  ", position->left);
    if (position->right != NULL)
      printf("%s,  ", position->right);
  }
  printf("\n");
  return;
}
