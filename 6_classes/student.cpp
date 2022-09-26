#include "student.h"
#include <iostream>
#include <string>
using namespace std;

/* Constructors: 
        - Define how the member variables of an object is initialized
        - What gets called when you first create a Student object   
        - Overloadable!      */
Student::Student(){
    age = 0;
    name = "";
    state = "";
}

Student::Student(string name, int age, string state){
    this->name = name;
    this->age = age;
    this->state = state;
}


std::string Student::getName(){
    return name;
}
void Student::setName(std::string name){
    // Use this for naming conflicts!
    this->name = name; // set the Student *private member variable name* equal to the *parameter name*
}

int Student::getAge(){
    return age;
}
void Student::setAge(int age){
    //We can define what “age” means!
    if(age >= 0){
    this -> age = age;
    }
    else printf("Age cannot be negative!");
}

string Student::getState(){
    return state;
}

void Student::setState(string state){
    this->state = state;
}