#include <stdio.h>

int main ()
{
  FILE *fptr;
  int i,n;
  char str[100];
  char fname[20]="test.txt";
  char str1;
  
    printf("\n\n Test Data\n"); 
	printf(" Input the number of lines to be written : ");
	scanf("%d", &n);
	printf("\nThe lines are : \n");
	fptr = fopen (fname,"w"); 
	for(i = 0; i < n+1;i++)
		{
		fgets(str, sizeof str, stdin);
		fputs(str, fptr);
		}
    fclose (fptr);

	fptr = fopen (fname, "r");  
	printf("\nThe content of the file %s is  :",fname);
	str1 = fgetc(fptr);
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(fptr);
		}
    printf("\n\n");
    fclose (fptr);
    return 0;
}