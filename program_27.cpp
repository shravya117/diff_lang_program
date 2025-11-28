// program27.cpp
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
