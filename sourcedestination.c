#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;
    char s[20], d[20];
    FILE *fp1, *fp2;
    
    printf("Enter the source file name\n");
    //scanf("%s",s);
    gets(s);

    printf("Enter the destination file name\n");
    //scanf("%s",d);
    gets(d);

    fp1 = fopen(s,"r");
    fp2 = fopen(d,"w");

    
    while(!feof(fp1)){

        c = getc(fp1);
        fputc(c,fp2);
    
    }
    
    printf("File Copied.\n");
    fclose(fp1);
    fclose(fp2);

    printf("Reading from the destination file\n");

    fp2 = fopen(d,"r");
    printf("Reading data from the file.\n");

    while(!feof(fp2))
    {
        printf("%c",getc(fp2));
    }

    fclose(fp2);
    


    return 0;
}
