/*
Q.3 Write a Program to find the transpose matrix of a given 2D array.
output:
Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements of array:5
Enter the elements of array:2
Enter the elements of array:1
Enter the elements of array:4
The transpose matrix is:
5 1
2 4
*/
#include <stdio.h>

int main() {
    
	int a[200][200];
	int i,j,r,c;
   
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    
    for (i = 0; i<r; i++) {
        for (j = 0; j<c; j++) {
        	printf("Enter the elements of array:");
            scanf("%d",&a[i][j]);
        }
    }
    int trans[c][r];
    
    for (i=0; i<c; i++) {
        for (j=0; j<r; j++) {
            trans[i][j] = a[j][i];
        }
    }
   printf("The transpose matrix is:\n");
    for (i=0; i<c; i++) {
        for (j=0; j<r; j++) {
        	 
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }

}

