// program31.cpp
#include <iostream>
using namespace std;
class Calculator {
public:
    int multiply(int a, int b) {
        return a * b;
    }
};
int main() {
    Calculator calc;
    cout << "Result: " << calc.multiply(4, 5) << endl;
    return 0;
}
