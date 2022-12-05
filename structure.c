#include <stdio.h>
#include<string.h>
// user defined data type
// 
typedef double DD;
// typedef dataTypeName newDataTypeName

struct Student{
    char firstName[20];
    char lastName[20];
    // structure inside a structure
    struct Address address;
    int roll;
    int marks;
    DD gpa;
};

typedef struct Address
{
    char villageName[50];
    char district[50];
    int zipCode;
} Address;


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
    // struct Student student1; // 56 byte
    // printf("Please enter the student first name: \n");
    // gets(student1.firstName);
    // printf("Please enter the student last name: \n");
    // gets(student1.lastName);
    // printf("Please enter the roll, marks and gpa : \n");
    // scanf("%d %d %lf", &student1.roll, &student1.marks, &student1.gpa);

    struct Student student2;
    strcpy(student2.firstName, "Riyad");
    strcpy(student2.lastName, "Mahmudullah");
    student2.roll = 48;
    setMarks(student2);
    setGpa(student2, 3.5);
    // strcpy(student1.firstName, "Samin")
    // reverse(student1.firstName);
    // printf("Student 1 -> Name: %s %s , Roll: %d , Marks: %d , GPA: %lf \n", student1.firstName, student1.lastName, student1.roll, student1.marks, student1.gpa);
    // printf("Student 2 -> Name: %s \n", student2.firstName);

    // array of structures
    struct Student students[70];
    int marks_1 = students[0].marks; // marks of roll 1

    // pointer of a structure 
    int *x; // pointer of a integer
    struct Student *p; // pointer of a student
    // struct Student *p = &student2;
    p = &student2;
    // accessing the structure member variables using pointer
    printf("Student 2 --> Name : %s %s, Roll: %d , Marks: %d , GPA: %lf \n",p->firstName, p->lastName, p->roll, p->marks, p->gpa);
    //Accessing the members of nested structures
    strcpy(student2.address.villageName, "Khilgaon");
    strcpy(student2.address.district, "Dhaka");
    student2.address.zipCode = 1000;
    p->address.villageName;
    // using typedef
    Address address1; // struct Address address1;
    return 0;
}