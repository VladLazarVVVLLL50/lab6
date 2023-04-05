#include <stdio.h>
#include <stdlib.h>

struct N {
    int num;
    char type;
    struct N *left ,*right; 
};


typedef struct N Node;
Node* createNode(char type, int num);
Node* createTree(Node *root);
void parcurgere_preordine(Node *curent, int pas,int v[]);