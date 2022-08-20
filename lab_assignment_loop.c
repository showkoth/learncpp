#include<stdio.h>

int main(){
    double marks, cgpa, age, sum = 0, count = 0;
    char gender, name;
    int i = 0;
    while(i < 10){
        printf("Please enter the info of student: %d (marks, cgpa, gender, age, name) \n", i + 1);
        scanf("%lf %lf %c %lf %c", &marks, &cgpa, &gender, &age, &name);
        if(gender == 'F' && (age >= 18 && age <= 28) && name == 'N'){
            sum += cgpa;
            count++;
        }
        i++;
    }
    double avg = sum / count;
    printf("The sum and avg are : %lf , %lf", sum, avg);
}   