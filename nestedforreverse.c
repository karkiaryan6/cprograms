#include<stdio.h>
int main() {
	int row, col, n=4;
	int number=1;
	
	for(row = 1; row <=4; row++) {
	
		for(col = 1; col <=4; col++) {
			if(col >=n-row+1)
		
			printf("*");
			else
			printf(" ");
		
		}
		printf("\n");
	}
	return 0;
}
