#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


struct node{
	int data;
	struct node *next;
};

char search(int d);
void insert(int d);
void delete(int d);

