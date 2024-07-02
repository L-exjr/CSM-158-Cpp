#include <iostream>

using namespace std;

int main() {
    int num, i=1, fact=1;
    cout << "Enter number: ";
    cin >> num;

    if (num<0) {
        cout << "Error: Factorial of negative numbers is not defined." << endl;
    }
    else {
        do {
            fact*=i;
            i++;
        }
        while (i<=num);
        cout << "Factorial of " << num << " = " << fact << endl;
    }
    return 0;
}