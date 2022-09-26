#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

//student.h
class Student {
    public:
        Student();
        Student(string name, int age, string state);
        std::string getName();
        void setName(std::string name);
        int getAge();
        void setAge(int age);
        std::string getState();
        void setState(std::string state);

    private:
        std::string name;
        std::string state;
        int age;
};

#endif