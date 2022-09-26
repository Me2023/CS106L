#include <iostream>
// data structure imports
#include <set>
#include <map>
#include <iterator>
#include <utility>
#include <vector>

using std::cout;    using std::endl;


int main() {
    /*
    std::vector<int> vec{3, 1, 4, 1, 5, 9};
    for (std::size_t i = 0; i < vec.size(); ++i) {
        const auto& elem = vec[i];
        cout << elem << endl;
    }

    std::set<int> s = {0, 1, 2, 3, 4};
    std::set<int>::iterator iter = s.begin(); // at 0
    ++iter; // at 1
    *iter;   cout << *iter << endl; // 1
    (iter != s.end());              // can compare iterator equality
    auto second_iter = iter;        // "copy construction"
    */

    std::set<int> set{3, 1, 4, 1, 5, 9};
    for (auto iter = set.begin(); iter != set.end(); ++iter) {
        const auto& elem = *iter;
        cout << elem << endl;
    }

    std::map<int, int> map{{1, 6}, {1, 8}, {0, 3}, {3, 9}};
    for (auto iter = map.begin(); iter != map.end(); ++iter) {
        const auto& key = (*iter).first;        // key = iter->first;
        const auto& value = (*iter).second;
        cout << key << ":" << value << ", " << endl;
    }
}