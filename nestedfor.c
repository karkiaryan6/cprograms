#include<stdio.h>
int main() {
	int row, col;
	int number=1;
	
	for(row = 1; row<=4; row++) {
	
		for(col = 1; col <=row; col++) {
		
			printf("%d \t",number);
			number = number+1;
		
		}
		printf("\n");
	}
	return 0;
}
