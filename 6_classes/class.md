## Turning Student into a class: Header File + .cpp File
> ### student.h 
```cpp
class Student {
    public:
    std::string getName();
    void setName(std::string name);
    int getAge();
    void setAge(int age);
    private:
    std::string name;
    std::string state;
    int age;
};
```
1. **Public section**:
    - Users of the Student object can
directly access anything here!
    - Defines interface for interacting with
the private member variables!
2. **Private section**:
    - Usually contains all member
variables
    - Users can’t access or modify
anything in the private section

> ### student.
```cpp
#include student.h
std::string
Student::getName(){
//implementation here!
}
void Student::setName(){
}
int Student::getAge(){
}
void Student::setAge(int age){
}
```