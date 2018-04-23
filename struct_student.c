/******************************************************************************
 * WAP to accept student information and display them using a structure
 * Filename: struct_student.c
 * Path: /home/diamond/cprograms
 * Created Date: Monday, April 23rd 2018, 7:45:14 pm
 * Author: Aiman Kazi
 * 
 * Copyright (c) 2018 Visual Labs
 ******************************************************************************/

#include <stdio.h>

struct Student
{
    char name[20];
    int rollno;
    int marks;
};
int main()
{
    struct Student student[100];
    int numberOfStudents;
    int i;
    
    printf("Enter the number of Students : \n");
    scanf("%d",&numberOfStudents);
    
    for(i = 0; i < numberOfStudents; i++)
    {

        printf("Enter Student name : \n");
        scanf("%s", &student[i].name);

        printf("Enter Student marks : \n");
        scanf("%d", &student[i].marks);

        printf("Enter Student rollno : \n");
        scanf("%d", &student[i].rollno);
    }

    printf("Fetching Details\n");

    for(i = 0; i < numberOfStudents; i++)
    {
        printf("Student rollno : %d \n", student[i].rollno);
        printf("Student name : %s \n", student[i].name);
        printf("Student marks : %d \n", student[i].marks);
        printf("---------------------------------------------\n");
    }
}