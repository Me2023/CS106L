#include <string>
#include <iostream>
#include <vector>
using std::cin; using std::cout; 
using std::endl; using std::vector;

void changeX(int& x){ //changes to x will persist
    x = 0;
}
void keepX(int x){
    x = 0;
}

int main() {
    int a = 100;
    int b = 100;
    changeX(a); //a becomes a reference to x
    keepX(b); //b becomes a copy of x
    cout << a << endl; //0
    cout << b << endl; //100

    vector<int> original{1, 2};
    vector<int> copy = original;        // “=” automatically makes a copy! Must use & to avoid this.
    vector<int>& ref = original;
    original.push_back(3);
    copy.push_back(4);
    ref.push_back(5);
    /* can't output
    cout << original << endl; // {1, 2, 3, 5}
    cout << copy << endl; // {1, 2, 4}
    cout << ref << endl;
    */
}

/* can't use auto[ , ]
void shift(vector<std::pair<int, int>>& nums) {
    for (size_t i = 0; i < nums.size(); ++i) {
        auto [num1, num2] = nums[i];
        num1++;
        num2++;
    }
}
*/