#include <iostream>
using namespace std;

int main() {
    float GradeX, GradeY, GradeZ;
    float Average;

    cout << "Java Score: ";
    cin >> GradeX;

    cout << "C Score: ";
    cin >> GradeY;

    cout << "Databse Handling Score: ";
    cin >> GradeZ;

    Average = (GradeX + GradeY + GradeZ) / 3;

    cout << "Average Score: " << Average << endl;

    if (Average > 80) {
        if (Average > 90) {
            cout << "Your Grade is: A";
        }
        else {
            cout << "Your Grade is: B";
        }
    }
    else {
        if (Average > 74) {
            cout << "Your Grade is: C";
        }
        else {
            cout << "Your Grade is: F";
        }
    }
    return 0;
}