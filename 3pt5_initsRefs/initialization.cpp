#include <string>
#include <iostream>
#include <vector>

#include "student.cpp"
using std::string;

// uniform initialization
void uniformInit() {
    std::vector<int> vec{1,3,5};
    std::pair<int, string> numSuffix1{1,"st"};
    Student s{"Frankie", "MN", 21};
    // less common/nice for primitive types, but possible!
    int x{5};
    string f{"Frankie"};

    std::vector<int> vec1(3,5);
    // makes {5, 5, 5}, not {3, 5}!
    //uses a std::initializer_list (more later)
    std::vector<int> vec2{3,5};
    // makes {3, 5}

    
}

/* 
void autoDemo() {
    auto p = std::make_pair("s", 5);
    auto [a, b] = p;
}
*/