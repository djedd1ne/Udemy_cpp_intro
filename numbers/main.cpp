#include <iostream>
#include <cmath>

using namespace std;

int main (){
    double a = 34;
    double b = 56.7;
    double c = 95.45;
    double d = 87.23;

    double x = a - b;
    int y = a / b;

    double e = a / b;
    double f = c * d;
    double z = c + e / a + (b + c) * 9;

    cout << "a - b = " << x << endl;
    cout << "int division a/b = " << y << endl;
    cout << "z = " << z << endl;

    double op1 = min(a,b);
    cout << "min (a,b) = " << op1 << endl;
    double op2 = floor(z);
    double op3 = ceil(z);
    cout << "round down z value, z = " << op2 << endl;
    cout << "round up z value, z = " << op3 << endl;

    double op4 = pow(a, 3);
    cout << "a ^ 3 = " << op4 << endl;
    return 0;
} 