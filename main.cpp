#include <iostream>
#include "function1.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    std::cout << knapSack(W, wt, val, n);

    return 0;
}
