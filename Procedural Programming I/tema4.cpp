//4. Look for an int inside an array of ints and display the position at which
//the int was found (if indeed it was found).
//
//Start the numbering with 1 not zero as the beginning position in the array.



#include <iostream>

using namespace std;

int main(){

    int n, x;
    int vec[100];

    bool gasit = false;


    cout << "\nInput the size of the array (integer) (1 <= n <= 100) n = ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        cout << "\nelement [" << i << "] = ";
        cin >> vec[i];
    }

    cout << "\nInput the number we're searching for -> x = ";
    cin >> x;

    for (int i = 1; i < n + 1; i++){
        if (vec[i] == x){
            gasit = true;
            cout << "\nelement [" << i << "] = " << vec[i];
        }

    }
    if (!gasit)
        cout << "\nx = " << x << " was not found inside the array!";

    //citeste un caracter urmat de ENTER la sfarsitul programului, pentru a preveni inchiderea ferestrei automat
    //dupa afisarea rezultatului pentru anumite IDE-uri/sisteme de operare.
    char ch;
    cin >> ch;

    return 0;

}
