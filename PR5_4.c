/*
Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
output:
enter the size of row:5
enter the size of coln:5
enter a[0][0] : 2
enter a[0][1] : 5
enter a[0][2] : 4
enter a[0][3] : 6
enter a[0][4] : 8
enter a[1][0] : 5
enter a[1][1] : 2
enter a[1][2] : 1
enter a[1][3] : 6
enter a[1][4] : 3
enter a[2][0] : 4
enter a[2][1] : 5
enter a[2][2] : 6
enter a[2][3] : 7
enter a[2][4] : 8
enter a[3][0] : 5
enter a[3][1] : 5
enter a[3][2] : 5
enter a[3][3] : 2
enter a[3][4] : 4
enter a[4][0] : 6
enter a[4][1] : 8
enter a[4][2] : 9
enter a[4][3] : 3
enter a[4][4] : 5

enter row number:2
4 5 6 7 8
sum of the row is: 30
enter cln number: 3
6 6 7 2 3
sum of the col.. 24
*/
#include<stdio.h>
void main(){

	int large,n,r,c,i,j;
	int x,y;
	int sum=0,add=0;
	
	
	printf("enter the size of row:");
	scanf("%d",&r);
	printf("enter the size of coln:");
	scanf("%d",&c);

	int a[r][c];
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("enter a[%d][%d] : ",i,j);
		scanf("%d",&a[i][j]);
	}
}

	printf("\nenter row number:");
	scanf("%d",&x);
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(i==x){
					printf("%d ",a[x][j]);
					sum+=a[x][j];
		}
	}
}

	printf("\nsum of the row is: %d",sum);
	printf("\nenter cln number: ");
	scanf("%d",&y);

	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(j==y){
			printf("%d ",a[i][y]);
			add+=a[i][y];
			}
		}
	}
	printf("\nsum of the col.. %d",add);
}

