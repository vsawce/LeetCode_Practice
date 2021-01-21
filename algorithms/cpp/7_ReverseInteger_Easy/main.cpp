#include <iostream>
#include <cmath>

using namespace std;

int reverse(int x) {
    int y = 0, z = x;
    bool negative = false;
    int base = 0;

    while (z) {
        z /= 10;
        if (z)
            base++;
    }

    if (base > 9) return 0;

    int arr[10];

    //cout << "base: " << base << " num: " << x << endl;
    for (int i = 0; i <= base; i++) {
        arr[i] = (x%10);
        //cout << arr[i] << " ";
        x /= 10;
    }

    //cout << "arr: " << arr[0] << endl;

    if (base == 9 && (arr[0] > 2 || arr[0] < -2)) {
        //cout << "Ans: ";
        return 0;
    }

    for (int i = 0; i <= base; i++) {
        y += arr[base-i]*pow(10, i);
        if (i == 8 && base == 9 && (y >= 147483647 || y <= -147483648) && (arr[0] == 2 || arr[0] == -2)) {
            return 0;
        }
    }

    return y;
}


int main() {

    cout << reverse(123) << endl;
    cout << reverse(-123) << endl;
    cout << reverse(120) << endl;
    cout << reverse(0) << endl;
    cout << reverse(10) << endl;
    cout << reverse(1000000004) << endl;
    cout << reverse(-2147483412) << endl;
    cout << reverse(-2147483648) << endl;
    cout << reverse(463847412) << endl;
    cout << reverse(-1563847412) << endl;

    return 0;
}