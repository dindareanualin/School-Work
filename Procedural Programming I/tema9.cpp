//9. Input an n lines, m columns matrix of positive integers.
//Write an algorith which computes how many prime numbers are contained
//within the matrix, using a function that determines if a number is prime or not.


#include <iostream>

using namespace std;

bool is_prime(int n){
    for (int i = 2; i <= n / 2; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(){

    int m, n, prime;
    int matrice[50][50];

    cout << "\nInput m and n positive integers , 1 > m,n <= 50 (the matrix size):";
    cout << "\nm = ";
    cin >> m;
    cout << "\nn = ";
    cin >> n;

    prime = 0;

    for (int i = 1; i <= m; i++)
    for (int j = 1; j <= n; j++){
        cout << "\nelement [" << i << "][" << j << "] = ";
        cin >> matrice[i][j];
        if (is_prime(matrice[i][j]))
            prime++;
    }

    cout << "\nThere are " << prime << " prime numbers in the matrix!";

    char ch;
    cin >> ch;

    return 0;
}



