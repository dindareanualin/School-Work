//Solving the 2nd degree polynomial.

#include <iostream>
#include <cmath>
using namespace std;

float a, b, c, delta, x1, x2;

int main(){

    cout << "Solving the 2nd degree polynomial eq: ax^2 + bx + c = 0.\n";
    cout << "Input the equation coefficients a, b, c:\na = ";
    cin >> a;
    cout << "\nb = ";
    cin >> b;
    cout << "\nc = ";
    cin >> c;

    if (a == 0)
          cout << "x = " << -c/b;
    else{
         delta = (b * b) - (4 * a * c);
         if (delta < 0) cout << "There are no real solutions (Delta = " << delta << " less than zero!\n";
         else if (delta == 0)
              cout << "\nx unique solution = " << -b/a;
         else {
              x1 = (-b + sqrt(delta)) / 2 * a;
              x2 = (-b - sqrt(delta)) / 2 * a;
              cout << "\n x1 = " << x1 << "; x2 = " << x2;
              }
    }

    char ch;
    cin >> ch;

    return 0;
}
