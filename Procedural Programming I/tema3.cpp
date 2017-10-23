//Check a number if it's "perfect" or not.
//A "perfect" number is a number which is equal to the sum of its divisors, exculding itself
//Example of perfect number: 6 = 1 + 2 + 3

#include <iostream>

using namespace std;

bool perfect(int x){
    int suma_divizori = 0;
    for (int i = 1; i < x; i++)
        if (x % i == 0)
            suma_divizori += i;
    return (suma_divizori == x);
}

int n;

int main(){

    cout << "Input positive integer n = ";
    cin >> n;
    if (perfect(n))
        cout << "\n" << n << " is a perfect number!";
    else
        cout << "n" << n << " IS NOT a perfect number!";

    char ch;
    cin >> ch;

    return 0;
}
