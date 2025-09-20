// Structures are a collection of values of different dataTypes

#include<stdio.h>
#include<string.h>
//Structure is a user defined datatype
struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student stud;
    strcpy(stud.name,"Vansh Jain");
    stud.roll = 20;
    stud.cgpa = 8.68;

    struct student stud2 = {"Manjul Sharma",23,9.3};

    printf("%d\n",stud.roll);
    printf("%f\n",stud.cgpa);
    puts(stud.name);
    printf("%d\n",stud2.roll);
    printf("%f\n",stud2.cgpa);
    puts(stud2.name);

    return 0;
}

/*

we can assign pointers values in struct as
1) (*ptr).roll
2) ptr->roll


typedef is used to create alias for datatypes\\
typedef struct ComputerEngineeringStudent{
    int roll;
    float cgpa;
    char name[100];
} coe;

here why coe is written we can give any name and then use in main like
struct ComputerEnginneringStudent C1;
or
coe C1;


*/