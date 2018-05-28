#include <stdio.h>

int main()
{
    FILE *fp;

    char name[20]; // accept student name
    int roll_no; // accept student roll no

    char temp1[20]; // 
    int temp2; //

    // Open the file
    fp = fopen("abc.txt","w+");

    // Asking USer for his input
    printf("Enter name of the student: ");
    scanf("%s", name); 

    printf("-----------\n");
    
    printf("Enter roll no of the student: ");
    scanf("%d", &roll_no);

    // Printing it in a file
    fprintf(fp, "%s %d",name,roll_no);    
    
    // Takes the cursor to the begining of the file
    rewind(fp);

    printf("\n");

    // Scanning content from the file    
    fscanf(fp, "%s %d", temp1, &temp2);
    
    // Printing it on the terminal
    printf("%s %d", temp1, temp2);

    // Closing the file
    fclose(fp);
}