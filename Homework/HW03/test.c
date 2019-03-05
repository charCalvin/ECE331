// Calvin Skinner
// Date: Feb 18, 2019
// Hello World

#include <stdio.h>

int main(int argc, char *argv[]){
	int num = 0;
	
	printf("Enter an integer: ");
	scanf("%d", &num);
//	printf("\n");

	for(int i=0; i<num; i++){
		printf("FORKING...\n");
	}
	
	printf("Done\n");

	return 0;
}
