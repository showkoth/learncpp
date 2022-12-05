#include <stdio.h>
#include<string.h>
// user defined data type
// 
struct Student{
    char firstName[20];
    char lastName[20];
    int roll;
    int marks;
    double gpa;
};

// struct Student{
//     char firstName[20];
//     char lastName[20];
//     int roll;
//     int marks;
//     double gpa;
// } student1, student2;

// struct {
//     char firstName[20];
//     char lastName[20];
//     int roll;
//     int marks;
//     double gpa;
// } student1;

// struct tag{

// }stucture_variables; // tag or structure_variables may be absent but not both of them.

// passing a structure variable to a function
void reverse(char a[]){
    //
}
// passing a structure as a function argument 
void setMarks(struct Student s){
    s.marks = 80;
}
void setGpa(struct Student s, double gpa){
    s.gpa = gpa;
}

int main()
{
    int a; // dataType variableName; // 4 byte
    struct Student student1; // 56 byte
    printf("Please enter the student first name: \n");
    gets(student1.firstName);
    printf("Please enter the student last name: \n");
    gets(student1.lastName);
    printf("Please enter the roll, marks and gpa : \n");
    scanf("%d %d %lf", &student1.roll, &student1.marks, &student1.gpa);

    struct Student student2;
    strcpy(student2.firstName, "Riyad");

    setMarks(student2);
    setGpa(student2, 3.5);
    // strcpy(student1.firstName, "Samin")
    reverse(student1.firstName);
    printf("Student 1 -> Name: %s %s , Roll: %d , Marks: %d , GPA: %lf \n", student1.firstName, student1.lastName, student1.roll, student1.marks, student1.gpa);
    printf("Student 2 -> Name: %s \n", student2.firstName);

    // array of structures
    struct Student students[70];
    int marks_1 = students[0].marks; // marks of roll 1
    return 0;
}