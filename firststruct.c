#include <stdio.h>

struct Student{
    char name[50];
    int rollno;
};

int main()
{
    struct Student s1;
    struct Student s2;
    
    printf("Enter the student name: ");
    gets(s1.name);

    printf("Enter roll no: ");
    scanf("%d",&s1.rollno);

    printf("Student Name is : %s\n",s1.name);
    printf("Student Roll No : %d\n",s1.rollno);
    

    
    printf("Enter the student name: \n");
    gets(s2.name);

    printf("Enter roll no: ");
    scanf("%d",&s2.rollno);

    printf("Student Name is : %s\n",s2.name);
    printf("Student Roll No : %d\n",s2.rollno);
}