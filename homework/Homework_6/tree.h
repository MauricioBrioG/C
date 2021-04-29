char copy(char name);
int getdata(char *user, char *line);
char strstr(char, char *);

typedef struct treenode
{
  char *user;
  char *pass;
  struct treenode *left;
  struct treenode *right;
} node;

node *insert(char *user, char pass, node pos, node *tree);
void show(node *position);
