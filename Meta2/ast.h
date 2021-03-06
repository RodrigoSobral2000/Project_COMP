//PL5_COMPILADORES@2020
//Eduardo Filipe Ferreira Cruz          2018285164
//Rodrigo Fernando Henriques Sobral     2018298209

#ifndef AST_H 
#define AST_H

/*Structures [linked lists tree]*/
typedef struct node{
    char *str; //name
    struct node *next;
    struct node *child; 
} node;

/*Function Declaration*/
void initTree(node* n);
int programIsEmpty(void);
node *createNode(char *str);
node *getCopyNode(node *n);
node *getDeclarationNodes(node* n,node *typeSpecNode);
int isNullNode(node *n);
void addNext(node *n, node *next);
void addChild(node *n, node *child);
static void preOrder_(node *n, int h);
void printTree(void);
static void freeAll_(node *n); 
void freeAll(void);

#endif