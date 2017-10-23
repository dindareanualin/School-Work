//7. Solve a 2 equations with 2 unknows system
//a1 * x + b1 * y = c1
//a2 * x + b2 * y = c2

//Input: a1, b1, c1, a2, b2, c2.
//Solve for x and y.
//This implementation uses Cramer's rule to solve the system.

#include <iostream>

using namespace std;

int main(){

    float a1, a2, b1, b2, c1, c2, x, y, delta, delta_x, delta_y;

    cout << "\nInput the coefficients for the first equation a1*x + b1*y = c1";
    cout << "\na1 = ";
    cin >> a1;
    cout << "\nb1 = ";
    cin >> b1;
    cout << "\nc1 = ";
    cin >> c1;

    cout << "\nInput the coefficients for the first equation a2*x + b2*y = c2";
    cout << "\na2 = ";
    cin >> a2;
    cout << "\nb2 = ";
    cin >> b2;
    cout << "\nc2 = ";
    cin >> c2;

    delta = a1 * b2 - a2 * b1;
    if (delta == 0) {
            cout << "\nThe system does not allow any solution!";
            return 0;
    }

    delta_x = c1 * b2 - c2 * b1;
    delta_y = a1 * c2 - a2 * c1;
    x = delta_x / delta;
    y = delta_y / delta;

    cout << "\nx = " << x << "; y = " << y;

    //citeste un caracter urmat de ENTER la sfarsitul programului, pentru a preveni inchiderea ferestrei automat
    //dupa afisarea rezultatului pentru anumite IDE-uri/sisteme de operare.
    char ch;
    cin >> ch;

    return 0;
}

