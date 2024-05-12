#include<stdio.h>


void main()
{
   FILE *fp;
   char str[100];

   fp = fopen("abc.txt","w");

   printf("Enter the contents for the file. - ");

   gets(str);

   fprintf(fp,"%s",str);
   fclose(fp);
   printf("the data written to the file.");
   

}