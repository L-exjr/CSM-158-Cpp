#include <iostream>

using namespace std;

void greet(), greetings(string name);
string name, Monthword(int monthnumber);
int monthnumber;

int main(){
    greet();
    cout << "Enter your name: ";
    cin >> name;
    greetings(name);
    cout << "Enter the month number: ";
    cin >> monthnumber;
    cout << Monthword(monthnumber);
    return 0;
}

void greet(){
    cout << "Good Morning!, How are you doing?" <<endl;
}

void greetings(string name){
    cout << "Good Moning "  << name << "!, How are you doing?\n";
}


string Monthword(int monthnumber){
    if (monthnumber == 1){
        return "January";
    } else if (monthnumber == 2) {
        return "February";
    } else if (monthnumber == 3) {
        return "March";
    } else if (monthnumber == 4) {
        return "April";
    } else if (monthnumber == 5) {
        return "May";
    } else if (monthnumber == 6) {
        return "June";
    } else if (monthnumber == 7) {
        return "July";
    } else if (monthnumber == 8) {
        return "August";
    } else if (monthnumber == 9) {
        return "September";
    } else if (monthnumber == 10) {
        return "October";
    } else if (monthnumber == 11) {
        return "November";
    } else {
        return "December";
    }
}