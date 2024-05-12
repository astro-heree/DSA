#include<stdio.h>
#include<stdlib.h>
void main( int argc,char *argv[])
{
   FILE *fp;
   //char str[100];
   char ch;

   if(argc<2)
   {
     printf("Please enter the file name");
     exit(0);
   }
   fp = fopen(argv[1],"r");

   //fscanf(fp,"%s",str);
   //fscanf(fp,"%c",ch);
   //fgets(str,100,fp);
   
   printf("Data :-");
   ch= fgetc(fp);
   while(!feof(fp))
   {
    printf("%c",ch);
    ch=fgetc(fp);
   }
   //printf("Data :- %s",str);

   fclose(fp);
   
}