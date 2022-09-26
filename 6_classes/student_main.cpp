#include "student.cpp"
#include <iostream>
#include <string>
using namespace std;


int main(){
    Student frankie;
    frankie.setName("Frankie");
    frankie.setAge(21);
    frankie.setState("MN");
    cout << frankie.getName() << " is from " << frankie.getState() << endl;

    Student sathya("Sathya", 20, "New Jersey");
    cout << sathya.getName() << " is from " << sathya.getState();
}