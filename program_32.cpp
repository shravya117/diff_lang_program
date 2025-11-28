// program32.cpp
#include <iostream>
using namespace std;
int main() {
    try {
        int arr[3] = {1, 2, 3};
        cout << "Array element: " << arr[0] << endl;
    } catch (...) {
        cout << "Exception caught" << endl;
    }
    return 0;
}
