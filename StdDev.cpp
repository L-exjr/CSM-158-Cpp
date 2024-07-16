#include <iostream>
#include <cmath>

using namespace std;

/*
Array=number of elements
Var=Sum(diff(Ele-mean)^2)/number of elements
*/

int main(){
    int N = 0;
    
    cout << "Enter number of elements: ";
    cin >> N;

    double Values[N];
    double Sum=0, Avg=0, Var=0, StdDev=0, Ele=0;

    for (int i=0; i<N; i++){
        cout << "Enter a number: ";
        cin >> Ele;

        Values[i] = Ele;
        Sum = Sum + Ele;
    }

    cout << "The sum of the numbers is: " << Sum << endl;

    Avg = Sum/N;
    cout << "The Average is: " << Avg << endl;

    for (int i=0; i<N; i++){
        Var = Var + pow(Values[i]-Avg, 2);
    }

    Var = Var / N;
    cout << " The Variance is: " << Var << endl;

    StdDev = sqrt(Var);
    cout << "The Standard Deviation is: " << StdDev << endl;

    return 0;
}