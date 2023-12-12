/*Q.2 Write a Program to find the largest element from a given 2D array.
output:
Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements of the array:5
Enter the elements of the array:6
Enter the elements of the array:150
Enter the elements of the array:175
large elements are :- 175
*/
#include <stdio.h>

int main() {
	
    int a[200][200];
	int largestElement,i,j,r,c;
    
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);

    for (i=0; i<r; i++){
        for (j=0; j<c; j++){
        	printf("Enter the elements of the array:");
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            if(a[i][j]>largestElement) {
                largestElement = a[i][j];
            }
        }
    }
    printf("large elements are :- %d\n",largestElement);

}

