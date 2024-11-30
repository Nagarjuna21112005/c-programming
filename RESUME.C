#include<stdio.h>
int main(){
    FILE *file;
    char data[500];
    clrscr();


    printf("enter data to write to the file\n");
  //  gets(data);

    file = fopen("input.txt","w");
    if(file==NULL){
	  printf("erorr opening file!\n");
	  return 1;
    }
   // fprintf(file,"%s,",data);
   // fclose(file);
     while(fgets(data,500,file)!=NULL){
	printf("%s",data);
     }
      fclose(file);
   // printf("data written to file succesfully\n");
    return 0;
}