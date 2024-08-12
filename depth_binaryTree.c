// C program to find height of full binary tree 
// using preorder 
#include <stdio.h> 
#include <string.h>
  
// function to return max of left subtree height 
// or right subtree height 
int findDepth(char tree[], int n, int index) 
{ 
    int max = 0 ;
    if (index >= n || tree[index] == 'l') 
        return 0; 
  
    // calc height of left subtree (In preorder 
    // left subtree is processed before right) 
    index++; 
    int left = findDepth(tree, n, index); 
  
    // calc height of right subtree 
    index++; 
    int right = findDepth(tree, n, index); 
  
    max = (left > right)?left:right;
    
    return (max + 1); 
} 
  
// Driver program 
int main() 
{ 
    // Your C++ Code 
    char tree[] = "nlnnlll"; 
    int n = strlen(tree); 
  
    printf("Depth of tree is %d\n",findDepth(tree, n, 0)); 
  
    return 0; 
} 
