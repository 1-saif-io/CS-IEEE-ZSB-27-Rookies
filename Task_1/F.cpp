#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int lastTwo = N - (N / 100) * 100;

    if (lastTwo < 10)
        cout << "0";

    cout << lastTwo;

    return 0;
}