//10. Given an n lines, m columns matrix, write an algorithm which will
// first display the matrix with each line sorted in ascending order,
//then display the matrix with each column sorted in ascending order.

#include <iostream>

using namespace std;

int main(){

    int m, n;
    int matrice[50][50], copie_matrice[50][50];

    cout << "\nIntroduceti m,n positive integers, 1 > m,n <= 50 (size of the matrix):";
    cout << "\nm = ";
    cin >> m;
    cout << "\nn = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++){
        cout << "\nelement [" << j << "][" << i << "] = ";
        cin >> matrice[j][i];
        copie_matrice[j][i] = matrice[j][i];
    }

    cout << "\nInitial matrix:";
    cout << "\n";

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cout << "  " << matrice[j][i] << "  ";
        }
        cout << "\n";
    }

    for (int i = 1; i <= n; i++){
        bool sortat = false;
        while (not sortat){
            sortat = true;
            for (int j = 1; j <= m - 1; j++){
                if (matrice[j + 1][i] < matrice[j][i]){
                    int temp = matrice[j][i];
                    matrice[j][i] = matrice[j + 1][i];
                    matrice[j + 1][i] = temp;
                    sortat = false;
                    }
            }
        }
    }

    cout << "\nLines sorted in ascending order: ";
    cout << "\n";

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cout << "  " << matrice[j][i] << "  ";
        }
        cout << "\n";
    }

    //matrice = copie_matrice;
    for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
        matrice[j][i] = copie_matrice[j][i];

     for (int i = 1; i <= n; i++){
        bool sortat = false;
        while (not sortat){
            sortat = true;
            for (int j = 1; j <= m - 1; j++){
                if (matrice[i][j + 1] < matrice[i][j]){
                    int temp = matrice[j][i];
                    matrice[i][j] = matrice[i][j + 1];
                    matrice[i][j + 1] = temp;
                    sortat = false;
                    }
            }
        }
    }

    cout << "\nColumns sorted in ascending order: ";
    cout << "\n";

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cout << "  " << matrice[j][i] << "  ";
        }
        cout << "\n";
    }


    char ch;
    cin >> ch;

    return 0;
}




