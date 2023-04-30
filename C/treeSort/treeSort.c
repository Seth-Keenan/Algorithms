#include "treeSort.h"

struct tree{
    struct tree *right, *left;
    int data, treeSize;
};

void insert(tree **root, int num){
    if(*root == NULL){
        *root = malloc(sizeof(tree));
        (*root)->right = NULL;
        (*root)->left = NULL;
        (*root)->data = num;
        (*root)->treeSize = 1;
    }

    else{
        if(num > (*root)->data){
            insert(&((*root)->right), num);
        }
        else{
            insert(&((*root)->left), num);
        }        
    }    

    (*root)->treeSize++;
}

void printTree(tree *root){
    if (root != NULL){
        printTree(root->left);
        printf("%d\t", root->data);
        printTree(root->right);
    }
}

void freeTree(tree *root){
    if(root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}