#include<stdio.h>

int main(){
    char operation;
    float d1, d2;
    printf("Enter the operation (+ , - , * , / ):");
    scanf("%c", &operation);
    
    printf("Enter the numbers:");
    scanf("%f %f", &d1, &d2);
    switch (operation)
    {
    case '+':
        printf("%f + %f = %f \n", d1, d2, d1 + d2);
        break;

    case '-':
        printf("%f - %f = %f \n", d1, d2, d1 - d2);
        break;

    case '*':
        printf("%f * %f = %f \n", d1, d2, d1 * d2);
        break;

    case '/':
        printf("%f / %f = %f \n", d1, d2, d1 / d2);
        break;
    
    default:
        printf("Incorrect operator \n");
        break;
    }
    return 0;
}