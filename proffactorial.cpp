#include <iostream>

using namespace std;

int factorial(int);

int main(){
    int n,r,ncr;
    do{
        cout << "Input n: ";
        cin >> n;
        cout << "Input r: ";
        cin >> r;
    } while(r<0||r>n);
    ncr=factorial(n)/(factorial(r)*factorial(n-r));

    cout << ncr;

    return 0;
}

int factorial(int x){
    int fact=1, i;
    for (i=1; i<=x; i++){
        fact=fact*i;
    }

    return fact;
}