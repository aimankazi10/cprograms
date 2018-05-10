#include <stdio.h>


int main(int argc, char const *argv[])
{
    /* code */

    FILE *fp; 
    // this is a file pointer

    char c = ' ';

    // opening a file
    fp = fopen("abc.txt","w");
    printf("write data to be stored in a file and once completed press full stop.\n");

    // checking for the '.' to end the file write
    while(c!= '.'){
        // reading one character at a time
        scanf("%c",&c);
        // writing one char at a time and saving it in a file
        fputc(c,fp);
    }
    //closing file 
    fclose(fp);

    printf("--------------------\n");
    
    // Operation to read the file and display it on the console

    fp = fopen("abc.txt","r");
    printf("Reading data from the file.\n");

    while(!feof(fp))
    {
        printf("%c",getc(fp));
    }

    fclose(fp);
    
    return 0;
}
