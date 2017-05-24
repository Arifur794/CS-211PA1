#include "fifth.h"

int main(int argc, char *argv[]){
	if (argc != 2){
		printf("error\n");
		return 0;
	}
	int num;
	FILE *fp = fopen(argv[1], "r");
	if(fp == NULL){
		printf("error\n");
		return 0;
	}
	int rows;
	fscanf(fp, "%d", &rows);
	if(feof(fp)){
		printf("\n");
		return 0;
	}
	int i, j;
	int columns;
	fscanf(fp, "%d", &columns);
	int result[rows][columns];

	



	for(i = 0; i < rows; i++){
		for(j = 0; j < columns; j++){
			fscanf(fp, "%d", &num);
			result[i][j] = num;
			/*printf("%d  ", num);*/
		}
	}
	
	for(i = 0; i < rows; i++){
		for(j = 0; j < columns; j++){
			fscanf(fp, "%d", &num);
			result[i][j] += num;
			printf("%d\t", result[i][j]);
		}
		printf("\n");
	}

	return 0;	
}
