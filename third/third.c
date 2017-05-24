/*#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "third.h"

struct node{
	int data;
	struct node *next;
};

char search(int d);
void insert(int d);
void delete(int d);*/

#include "third.h"
struct node *head;

int main(int argc, char *argv[]){
	int num;
	char c;
	char check;
	struct node *ptr;
	FILE *fp;
	
	if(argc != 2){
		printf("error\n");
		return 0;
	}
	fp = fopen(argv[1], "r");
	if(fp == NULL){
		printf("error\n");
		return 0;
	}
	fseek(fp, 0, SEEK_END);
 	if (ftell(fp) == 0){ 
		printf("\n"); 
		return 0;
	}
        rewind(fp);
 	
 	num = 2147483647;
	c = '=';
 	fscanf(fp ,"%c %d\n", &c, &num);

	if(c == '=' || num == 2147483647){
		printf("error\n");
		return 0;
	}
	else{
		if(c == 'i'){
		head = malloc(sizeof(struct node));
		head->data = num;
		head->next = NULL;
		}
		else if(c!= 'i' && c != 'd'){
			printf("error\n");
			return 0;
		}
	}
	

	while(!feof(fp)){
		num = 2147483647;
		c = '=';
		fscanf (fp ,"%c       %d\n", &c, &num);
		if(c == '=' || num == 2147483647){
			printf("error\n");
			return 0;
		}
		if(c!= 'i' && c != 'd'){
			printf("error\n");
			return 0;
		}
		/*insert*/
		if(c == 'i'){
			if(head == NULL){
				head = malloc(sizeof(struct node));
				head->data = num;
				head->next = NULL;
			}
			else{
				check = search(num);
				if(check == 'f'){
					insert(num);
				}
			}
		}
		else if(c == 'd'){
			delete(num);
		}
	}

			
	/*fscanf(fp, "%c", &c);
	if(feof(fp)){
		printf("\n");
		return 0;
	}*/

	/*printf("%c and %d", c, num);
			
			
	head->data = 5;
	one = malloc(sizeof(struct node));
	two = malloc(sizeof(struct node));
	head->data = 5;
	one->data = 6;
	two->data = 7;
	head->next = one;
	one->next = two;
	two->next = NULL;
	delete(7);
	insert(2);
	insert(1);
	insert(3);
	insert(4);
	insert(6);*/


	ptr = head;
	while(ptr != NULL){
		if(ptr->next == NULL){
			printf("%d", ptr->data);
			break;
		}
		printf("%d\t", ptr->data);
		ptr = ptr->next;
	}
	printf("\n");

	/*else{

		while( c != EOF){
			FILE *fp = fopen(argv[1], "r");
			fscanf(fp, "%c", &c);
			if(c == 'i'){
				fcanf(fp, "%c", &c);
				fcanf(fp, "%d", &input);
				insert(%head, input);
			}
			else if(c == 'd'){
				fscan(fp, "%")
			}
		}

		num = argv[1];
		num2 = atoi(num);
		head = malloc(sizeof(Node));

		
		printf("%d\n", head.data);
	}*/
		return 0;
	
}
void delete(int d){
	struct node *ptr, *prev;
	ptr = head;
	prev = NULL;
	while(ptr != NULL){
		if(ptr->data == d){
			/*1st item in the list*/
			if(prev == NULL){
				head = head->next;
				return;
			}
			prev->next = prev->next->next;
			free(ptr);
			return;
		}
		prev = ptr;
		ptr = ptr->next;
	}

}
char search(int d){
	struct node *ptr;
	ptr = head;
	while(ptr != NULL){
		if(ptr->data == d){
			return 't';
		}
	ptr = ptr->next;
	}
	
	return 'f';
}
void insert(int d){
	struct node *ptr, *prev, *storage;
	ptr = head;
	prev = NULL;
	storage = malloc(sizeof(struct node));
	storage->data = d; 
	while(ptr != NULL){
		if(ptr->data > d){
			/*1st item in the list*/
			if(prev == NULL){
				storage->next = ptr;
				head = storage;
				return;
			}
			prev->next = storage;
			storage->next = ptr;
			return;
		}
		prev = ptr;
		ptr = ptr->next;
	}
	prev->next = storage;
	storage->next = NULL;
}

	
	
	


