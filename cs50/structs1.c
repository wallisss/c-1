#include<stdlib.h>
#include<stdio.h>
#include "cs50.h"  
#include <string.h>

#include"structs.h"

#define STUDENTS 3


int main (void)
{
    student students[STUDENTS];

    for (int i=0; i<STUDENTS; i++)
    {
        printf("Student`s name: ");
        students[i].name=GetString();

        printf("Student`s dorm: ");
        students[i].dorm=GetString();
    }

    FILE* file=fopen("students.cvs","w");
    if ( file !=NULL)
    {
         for (int i=0; i<STUDENTS; i++)
        {
        fprintf(file,"%s,%s\n",students[i].name, students[i].dorm);
        }
        fclose(file);
    }

     for (int i=0; i<STUDENTS; i++)
     {
         free(students[i].name);
         free(students[i].dorm);

     }




    return 0;


}