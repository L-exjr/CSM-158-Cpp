#include <iostream>

using namespace std;

bool isPrime=0;

int main() {
    cout << "Prime numbers less than or equal to 1000" << endl;

    for (int num=2; num <= 1000; num++){
        isPrime = true;
        if (num <= 1) {
            isPrime = false;
        } else {
            for (int i=2; i*i <= num; i++){
                if (num%i==0) {
                    isPrime=false;
                    break;
                }
            }
        }
        if (isPrime){
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}