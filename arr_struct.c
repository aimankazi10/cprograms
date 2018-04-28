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

        //student[i].rollno = i+1;

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