#include <stdio.h>
 
void copyString(char [], char [], int);
 
int main()
{
    char stng1[20], stng2[20];
    printf("\n\n Recursion : Copy One string to another :\n");
	printf("---------------------------------------------\n"); 	
 
    printf(" Input the  string to copy : ");
    scanf("%s", stng1);
    copyString(stng1, stng2, 0);
    printf("\n The string successfully copied.\n\n");
    printf(" The first string is : %s\n", stng1);
    printf(" The copied string is : %s\n\n", stng2);
    return 0;
}
 
void copyString(char stng1[], char stng2[], int ctr)
{
    stng2[ctr] = stng1[ctr];
    if (stng1[ctr] == '\0')
        return;
    copyString(stng1, stng2, ctr + 1);
}
