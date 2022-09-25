// stream: an abstraction for input/output. 
// Streams convert between data and the string representation of data.
#include <string>
#include <iostream>
#include <fstream> //ofstream
#include <sstream> // ostringstream
#include "student.cpp"
using std::string; 
using std::cin; using std::cout; using std::endl;

void print() {
    std::cout << 5 << std::endl; // prints 5
    // use a stream to print any primitive type!
    std::cout << "Frankie" << std::endl;
    // Mix types!
    std::cout << "Frankie is " << 21 << std::endl;
    // Any primitive type + most from the STL work!
    // For other types, you will have to write the << operator yourself!
}

void ostreamTest() {
    // std::cout is an *output* stream. It has type std::ostream
    std::ofstream out("out.txt");
    // out is now an ofstream that outputs to out.txt
    out << 5 << std::endl; // out.txt contains 5
}

void istreamTest() {
    // std::cin is an *input* stream. It has type std::istream
    int x;
    string str;
    std::cin >> x >> str;
    // reads exactly one int then 1 string from console

    cout << "Please enter a string and a number: ";
    std::cin >> str >> x;
    std::cout << str << x << endl;
    // what happens if input is blah blah?

    int age; double hourlyWage;
    cout << "Please enter your age: ";
    cin >> age;
    cout << "Your age is " << age << endl;
    cout << "Please enter your hourly wage: ";
    cin >> hourlyWage;
    cout << "Your hourly wage is " << hourlyWage << endl;
    // what happens if first input is 2.17?  -> age = 2, hourlyWage = .17

    std::ifstream in("out.txt");
    // in is now an ifstream that reads from out.txt
    in >> str; // first word in out.txt goes into str
}

void getlineTest() {
    std::string line;
    std::getline(cin, line); //now line has changed!
    //say the user entered “Hello World 42!”
    std::cout << line << std::endl;
    //should print out“Hello World 42!”
}

string judgementCall(int age, string name, bool lovesCpp)
{
    std::ostringstream formatter;
    formatter << name <<", age " << age;
    if(lovesCpp) formatter << ", rocks.";
    else formatter << " could be better";
    return formatter.str();
}

Student reverseJudgementCall(string judgement)
    { //input: “Frankie age 22, rocks”
    std::istringstream converter;
    string fluff; int age; bool lovesCpp; string name;
    converter >> name;
    converter >> fluff;
    converter >> age;
    converter >> fluff;
    string cool;
    converter >> cool;
    if(cool == "rocks") return Student{name, "bliss", age};
    else return Student{name, "misery", age};
}// returns: {“Frankie”, 22, “bliss”}

int main() {

    std::ofstream out("out.txt");
    // out is now an ofstream that outputs to out.txt
    out << 5 << std::endl; // out.txt contains 5

    std::ifstream in("out.txt");
    // in is now an ifstream that reads from out.txt
    string str;
    in >> str; // first word in out.txt goes into str
    cout << str << endl;

    cout << judgementCall(20, "Zoey", true)  << endl;
}


