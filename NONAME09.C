#include<stdio.h>
void main(){
   int*ptr=(int*)malloc(10000000000*sizeof(int));
   if (ptr==null){
	printf("memory allocation failed/n");
	}else{
	printf("memory allocation succeeded\n");
	free(ptr);