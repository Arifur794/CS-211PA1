#include "second.h"

int main(int argc, char *argv[]){
	char *num;
	int num2;
	int i;

	/*printf("%d\n", num2);*/
	
	if(argc < 2 || argc > 2){
		printf("error\n");
	}
	
	else{
		num = argv[1];
		num2 = atoi(num);

		if (num2 == 1){
			printf("no\n");
			return 0;
		}
		
		if (num2 == 2){
			printf("yes\n");
			return 0;
		}
		
		for(i = 2; i < num2; i++){
			if(num2 % i == 0){
				printf("no\n");
				return 0;
			}
		}
		
		printf("yes\n");
	}
		return 0;
	
}
	
