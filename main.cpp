#include <iostream>  // cout

#include "tasks.hpp"

using namespace std;

void swap_args(int *lhs, int *rhs) {
    int k = *lhs;
    lhs = rhs;
    rhs = &k;
    cout << *lhs << " " << *rhs;
}

int main() {
int n = 10;
int m = 15;
swap_args(&n, &m);
return 0;
}