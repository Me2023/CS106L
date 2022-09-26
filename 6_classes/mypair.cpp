#include "mypair.h"
template<typename First, typename Second>
First MyPair<First, Second>::getFirst(){
    return first;
}

template<typename Second, typename First>
First MyPair<Second, First>::getSecond(){
    return second;
}