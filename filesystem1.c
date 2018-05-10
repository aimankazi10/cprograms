#include <stdio.h>


int main(int argc, char const *argv[])
{
    /* code */

    FILE *fp;

    char name[20], temp1[20];
    int rollno , temp2;

    fp = fopen("test.txt","w+");
    printf("Enter the name and roll no of the student\n");
    scanf("%s%d", name, &rollno);
    fprintf(fp,"%s %d",name,rollno);
     
    rewind(fp);
    
    fscanf(fp,"%s %d", temp1, &temp2);
    printf("Name \t Roll No\n");
    printf("%s\t%d\n",temp1, temp2);

    fclose(fp);
    
    return 0;
}
