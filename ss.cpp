#include <iostream>

using namespace std;

int main() {
    int numStars;
    cout << "Enter the number of stars: ";
    cin >> numStars;

    // چاپ بخش بالایی شکل
    for (int i = 0; i < numStars; ++i) {
        for (int j = 0; j < numStars; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // چاپ خط خالی
    for (int i = 0; i < numStars; ++i) {
        cout << endl;
    }

    // چاپ بخش پایینی شکل
    for (int i = 0; i < numStars; ++i) {
        for (int j = 0; j < numStars; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
