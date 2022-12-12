#include <iostream>
using namespace std;

int main(){
    if(__cplusplus == 202002L) cout<< "c++20\n";
    else if(__cplusplus == 202302L) cout<< "c++20\n";
    else if(__cplusplus == 201703L) cout<< "c++17\n";
    else cout<< "c++14\n";
    
}
//g++ -std=c++23 prac.cpp 