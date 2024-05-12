#include<stdio.h>


struct student
{
    int roll;
    char name[20];
    char course[15];
} ;

enum boolean{false=5,true=10};




void main()
{
    struct student s;    //s is a student
   enum boolean flag;
   flag=true;
   if(flag==false)    
    printf("Enter the roll");
    scanf("%d",&s.roll);

    printf("Roll = %d",s.roll);


}