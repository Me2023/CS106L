#include <string>
#include <iostream>
#include <experimental/random>

using std::string; using std::cout;
using std::cin; using std::pow;
using std::sqrt; using std::endl;
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

int main(){
    Student s = {"Frankie", "MN", 21};
    printStudentInfo(s);
    Student foundStudent = randomStudentFrom("MN");
    cout << foundStudent.name << endl; // Frankie
    return 0;
}
