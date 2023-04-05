#include "arbori.h"



int main(){

int v[100];
Node *root=NULL;
root=createTree(root); 
parcurgere_preordine(root,-1,v);

    return 0;
}