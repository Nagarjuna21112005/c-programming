#include<stdio.h>
int mainI(){
    FILE *file;
    char data[500];

    printf("enter data to write to the file\n");
    gets(data);

    file = fopen("output.txt","w");
    if(file==NULL){
	  printf("erorr opening file!\n");
	  return 1;
    }
    fprintf(file,"%s,",data);
    fclose(file);

    printf("data written to file succesfully\n");
    return 0;
}