#include<stdio.h>
#include<stdlib.h>
#define SIZE 200

int main(){
    FILE *fptr = fopen("Q1file.txt","w");
    if(fptr==NULL){
        printf("Could not open files");
        exit(0);
    }

    char content[SIZE];
    printf("Input a sentence for the file: ");
    if(fgets(content,SIZE,stdin) == NULL)
    {
        printf("Error in reading the input data\n");
        fclose(fptr);
        exit(0);
    }
    fwrite(content, sizeof(content[0]), SIZE, fptr);
    fclose(fptr);

    printf("The file test.txt created successfully...!!\n");
    return 0;
}