#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string name = "Bob";
    int val1 = 2;
    int val2 = 12;
    string ex1 = "run";
    int val3 = 30;
    int val4 = 400;
    int val5 = 500;

    cout << "hello " << name << endl;
    cout << "you ate  " << min(val1, val2) << " slices of pizza and it cost you " << max(val1, val2) << " dollars !" << endl;
    cout << "You have also " << ex1 << " for about" << min(val3, val4) << " and you have burned " << max(val3,val4) << " calories" << endl;
    cout << "your calorie intake was of " << val5-val4 << " calories!" << endl;
    return 0;
}