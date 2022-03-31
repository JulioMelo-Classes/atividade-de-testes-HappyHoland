#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int nums[SIZE];
    int cont = 0;

    for (int i = 0; i < SIZE, i++) {
        cin >> nums[i];

        if(nums[i] < 0) {
            cont++;
        }
    }

    cout << cont << endl;

    return 0;
}
