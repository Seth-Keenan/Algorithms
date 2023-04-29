#include "treeSort.h"

int main(){
    struct tree *root;
    int array[10] = {3,17,38,18,64,28,22,71,83,67};
    root = NULL;

    printf("Array:\n");

    for(int i = 0; i < 10; i++){
        printf("%d\t", array[i]);
    }
    printf("\nTree:\n");
    
    for(int i = 0; i < 10; i++){
        insert(&root, array[i]);
    }

    printTree(root);
    printf("\n");

    freeTree(root);

    return 0;
}