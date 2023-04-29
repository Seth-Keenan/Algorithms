#include <stdio.h>
#include <stdlib.h>

typedef struct tree tree;

//This function is used to insert data in the form of integers into the tree structure.
//This is the time complexity of O(log(n)).
void insert(tree **, int);

//This function is simply called to print the tree structure.
//This is the time complexity of O(log(n)).
void printTree(tree *);

//This function is used to free the tree structure back to memory
//This function is the time complexity of O(log(n)).
void freeTree(tree *);