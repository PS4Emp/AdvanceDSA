#include <iostream>
using namespace std;

int main() {
    int nums[] [3] = {{1, 4, 9},
                     {11, 4, 3},
                     {2, 2, 3}};

    int sum = 0;
    int rowToSum = 1;
    for(int i =0; i < 3; i++){
        sum += nums[rowToSum][i];
    }
    cout << sum << endl;
    return 0;
}