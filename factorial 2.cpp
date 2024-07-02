#include <iostream>

using namespace std;

long factorial(int n) {
    if (n==0) {
        return 1;
    }
    else {
        return n * factorial(n -1);
    }
}

int main() {
    int num;

    cout << "Enter number: ";
    cin >> num;

    if (num<0) {
        cout << "Error: Factorial of negative numbers is not defined." << endl;
    }
    else {
        cout << "Factorial of " << num << " = " << factorial(num) << endl;
    }
    return 0;
}