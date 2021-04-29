include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "tree.h"

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

    if (count >= 2)
    {
      i = getdata(type, line);
      i += getdata(user, line + i);
      i += getdata(pass, line + i);
    }

    if (strstr(type, "add") && user && pass)
    {
      n = insert(user, pass, tree);
      if (tree == NULL)
        tree = n;
      show(tree);
    }
  }
  return 0;
}

void show(node *position)
{

  if (position != NULL)
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

node *insert(char *user, char *pass, node *pos)
{

  node *temp;
  if (pos == NULL)
  {
    pos = (node *)malloc(sizeof(node));
    pos->user = user;
    pos->pass = pass;
  }
  else if (pos->right == NULL)
  {
    pos->right = (node *)malloc(sizeof(node));
    pos->user = user;
    pos->pass = pass;
  }
  else if (pos->left == NULL)
  {
    pos->left = (node *)malloc(sizeof(node));
    pos->user = user;
    pos->pass = pass;
  }

  return pos;
}

int getdata(char *user, char *line)
{

  int i = 0, j = 0;
  if (isspace(line[0]))
    while (isspace(line[++i]))
      ;
  while (!isspace(line[i]))
    user[j++] = line[i++];
  user[i] = '\0';
  return i;
}
