#include <iostream>
#include <cstdio>
using namespace std;


int main() {
    double finalGrade;
    cout << "Enter the final grade: ";
    cin >> finalGrade;

    bool goodBehavior;
    cout << "Is he/she well-behaved? ";
    cin >> goodBehavior;

    bool goodStudent = finalGrade >= 9 && goodBehavior;
    bool avarageStudent = finalGrade >= 9 != goodBehavior;
    bool badStudent = finalGrade <= 3 && !goodBehavior;

    cout << "Good student? " << goodStudent << endl;
    cout << "Avarage student " << avarageStudent << endl;
    cout << "Bad student " << badStudent << endl;

    return 0;
}
