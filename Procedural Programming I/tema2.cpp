//2. Read a positive integer n. Display how many odd and how many even 
//digits n is made out of, using a function for odd digits and a 
//separate function for even digits.

#include <iostream>

using namespace std;

int pare(int x){
    int copie = x;
    int temp, numar = 0;
    while (copie > 0){
        temp = copie % 10;
        if (temp % 2 == 0)
            numar++;
        copie = copie / 10;
    }
    return numar;
}

int impare(int x){
    int copie = x;
    int temp, numar = 0;
    while (copie > 0){
        temp = copie % 10;
        if (temp % 2 != 0)
            numar++;
        copie = copie / 10;
    }
    return numar;
}

int n;

int main(){

    cout << "\nInput a positive integer n = ";
    cin >> n;

    cout << "Even digits = " << pare(n) << "\n";
    cout << "Odd digits = " << impare(n) << "\n";

    char ch;
    cin >> ch;

    return 0;
}
