#include<stdio.h>
typedef struct Student
     { int rollno;
       char name[30];
       float p,c,m;
       }STD;
void main()
     {
     STD S;
     char ch;
     FILE *F;
     F=fopen("std.db","r");
     if(F==NULL)
     {
     	F=fopen("std.db","w");
	 }
	 else
	 {
	 	F=fopen("std.db","a");
	 }
     do{
	 
     
     printf("Enter Roll Number:");
     scanf("%d",&S.rollno);
     
     printf("Enter Name:");
     fflush(stdin);
     gets(S.name);
     
     printf("Enter Physics Marks:");
     scanf("%f",&S.p);
     
     printf("Enter Chemistry Marks:");
     scanf("%f",&S.c);
     
     printf("Enter Maths Marks:");
     scanf("%f",&S.m);
     fwrite(&S,sizeof(S),1,F);
     //read 46 bytes from S and write into F
     printf("Add More Students y/n?");
     fflush(stdin);
     scanf("%c",&ch);
 } while(ch=='y' || ch=='Y');
     
  fclose(F);
      }
       
       
       
