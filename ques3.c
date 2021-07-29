#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr1 = fopen("Q3file1.txt","r");
    FILE *fptr2 = fopen("Q3file2.txt","r");

    FILE *fptr3 = fopen("Q3file3.txt","w");
    char ch;

    if(fptr1==NULL || fptr2==NULL || fptr3==NULL){
        printf("Could not open files");
        exit(0);
    }

    while((ch = fgetc(fptr1)) != EOF){
        putc(ch,fptr3);
    }

    while((ch = fgetc(fptr2)) != EOF){
        putc(ch,fptr3);
    }

    printf("\n\nTwo files Q3file1.txt and Q3file2.txt get merged in Q3file3.txt\n\n");

    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);

    return 0;
}
