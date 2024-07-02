#include <iostream>

using namespace std;

/*
ExamScore
Grade

INPUT ExamScore
IF ExamScore > 70 THEN
PRINT ExamScore, "is a Grade A"
ELSE IF ExamScore > 60 THEN
PRINT ExamScore, "is a Grade B"
ELSE IF ExamScore > 50 THEN
PRINT ExamScore, "is a Grade C"
ELSE IF ExamScore > 40 THEN
PRINT ExamScore, "is a Grade D"
ELSE 
PRINT ExamScore, "is a Grade F"
END IF
*/

//Input
double ExamScore;

int main() {

    cout << "Enter your Exams Score: ";
    cin >> ExamScore;

    if (ExamScore >= 70) {
        cout << ExamScore << " is a Grade A" <<endl;
    }

    else if (ExamScore >=60) {
        cout << ExamScore << " is a Grade B" <<endl;
    }
    
    else if (ExamScore >=50) {
        cout << ExamScore << " is a Grade C" <<endl;
    }

    else if (ExamScore >=40) {
        cout << ExamScore << " is a Grade D" <<endl;
    }

    else {
        cout << ExamScore << " is a Grade F" <<endl;
    }

    return 0;
}