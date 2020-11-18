#include <iostream>
#include <cstdio>
using namespace std;
void question(string ques);

int score = 0;

void question(string ques) {
    bool answ;
    cout << ques << endl;
    cin >> answ;
    if(answ == true) {
        cout << "\nCongratulations, you won a point!" << endl;
        score++;
    } else{
        cout << "\nLet's hope you do better next time" << endl;
    }
    cout << "Score: " << score << endl;
}





int main() {

    

    bool test;
    cout << "Welcome to the SmartTest, a program that will tell you if \n you are smart or not, to begin , tell me if you ever nailed a test, press 0 to no and 1 to yes" << endl;
    cin >> test;
    if(test == true) {
        cout << "\nCongratulations, you won a point!" << endl;
        score++;
    } else {
        cout << "Let's hope you do better next time" << endl;
    }
    cout << "Score: " << score << endl;

    question("Do you like school?");
    question("Do you study hard?");
    question("Have ambitions?");
    question("Do you like Math?");
    question("Do you like Cien?");
    question("Humans or exacts?");
    question("Do you have a routine?");
    question("Do you organize your time?");
    question("Do you consider yourself smart?");

    if(score >= 5) {
        cout << "Congratulations! Having a score of " << score << " makes you smart" << endl;
    } else {
        cout << "You are a idiot! Having a score of " << score << " makes you a silly billy" << endl;
    }

return 0;
}
