/*Q.1 Write a Program to find all the negative elements from a given 1D array.
output:
enter the size of array : 5
enter element [0]:2
enter element [1]:-6
enter element [2]:8
enter element [3]:-7
enter element [4]:-3

 negative elements are : -6     -7      -3
*/

#include<stdio.h>
void main(){
	
	int a[100];
	int i,n;
	
	printf("enter the size of array : ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("enter element [%d]:",i);
		scanf("%d",&a[i]);
		}
		printf("\n negative elements are : ");
		
		for(i=0; i<n; i++){
			if(a[i]<=0){
				printf("%d\t",a[i]);
			}
		}	
		printf("\n");
}

