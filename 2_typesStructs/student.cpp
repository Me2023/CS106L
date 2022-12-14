#include <string>
#include <iostream>
#include <experimental/random>

using std::string; using std::cout;
using std::cin; 
using std::endl;
using std::experimental::randint;


struct Student {
    string name; // these are called fields
    string state; // separate these by semicolons
    int age;
};

void printStudentInfo(Student student) {
    cout << student.name << " from " << student.state;
    cout << " (" << student.age << ")" << endl; 
}

Student randomStudentFrom(std::string state) {
    Student s;
    s.name = "Frankie";//random = always Frankie
    s.state = state;
    s.age = std::experimental::randint(0, 100);
    return s;
}

bool found(string name) {}
Student getStudentWithName(string name) {}

/* std::pair

struct Pair {
fill_in_type first;
fill_in_type second;
};                */
std::pair<bool, Student> lookupStudent(string name) {
    Student blank;
    // To avoid specifying the types of a pair, use std::make_pair(field1,field2)
    if (found(name)) return std::make_pair(false, blank);
    Student result = getStudentWithName(name); 
    return std::make_pair(true, result);
}


int main(){
    Student s = {"Frankie", "MN", 21};
    printStudentInfo(s);
    Student foundStudent = randomStudentFrom("MN");
    cout << foundStudent.name << endl; // Frankie
    // std::pair
    std::pair<int, string> numSuffix = {1,"st"};
    cout << numSuffix.first << numSuffix.second;
    return 0;
    // Aside: auto
    auto a = 3;
    auto b = 4.3;
    auto c = 'X';
    auto d = "Hello";
    auto e = std::make_pair(3, "Hello");
}


//prints 1st