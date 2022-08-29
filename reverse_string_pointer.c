#include<stdio.h>
#include<string.h>

// void reverseRecursion(char* input, int begin, int end){
//     if( begin >= end) return;
//     char temp = *(input + begin);
//     *(input + begin) = *(input + end);
//     *(input + end) = temp;
//     reverseRecursion(input, begin++, end--);
// }

void reverse(char s[]){
    int size = strlen(s);
    for(int i = 0; i <= size/2; i++){
        char temp = s[i];
        s[i] = s[size - 1 - i];
        s[size - 1 - i] = temp;
    }
}

int main(){
    char input[100];
    printf("Please enter the string: \n");
    gets(input);
    printf("String : ");
    puts(input);
    // reverse(input);
    reverseRecursion(input, 0, strlen(input) - 1);
    printf("\nReverse string: ");
    puts(input);
}