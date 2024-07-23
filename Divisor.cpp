#include <iostream>

using namespace std;

/*
Input: number

Output: perfect, deficient, abundant

Logic: for (i=1; i<numer; i++){
            if number%i==0{
            
                sum=sum+i;
            }
        }
        if (sum=number){
        display "Percent"
        }
        elseif (sum>number){
        display "Abundant"
        }
        else {
        display "Deficient"
        }
*/

int number=0, sum=0;

int main(){
    
    //number to check if perfect, abundant or deficient

    cout << "Please enter the number to check if it's abundant, perfect or deficient: ";
    cin >> number;

    for (int i=1; i<number; i++){
        if (number % i == 0)
            sum = sum + i; 
    }

    if (sum==number)
        cout << "The number " << number <<" divisors sum up to " << sum << " so the number is a perfect number";

    else if (sum<<number)
        cout << "The number " << number <<" divisors sum up to " << sum << " so the number is a deficient number";

    else
        cout << "The number " << number <<" divisors sum up to " << sum << " so the number is a abundant number";    
    return 0;
}