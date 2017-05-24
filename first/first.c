#include "first.h"
int main(int argc, char *argv[]){
	char *num;
	int num2;
	
	/*printf("%d\n", num2);*/
	
	if(argc < 2 || argc > 2){
		printf("error\n");
	}
	
	else{
		num = argv[1];
		num2 = atoi(num);
		if(num2 % 2 ==1){
			printf("odd\n");
		}
		else{
			printf("even\n");
		}
	}
	
	return 0;
}
	

