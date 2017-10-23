//8. Read the lenght and width of a rectangle.
//Create an algorithm which will compute the area and perimeter of the rectangle,
//using separate functions for the area and perimeter computation.


#include <iostream>

using namespace std;

int arie(int lun, int lat){
    return lun * lat;
}

int perimetru(int lun, int lat){
    return lun * 2 + lat * 2;
}

int main(){

    int lungime, latime;
    cout << "\nInput the length and width of the rectangle > 0 : ";
    cout << "\nlength = ";
    cin >> lungime;
    cout << "\nwidth= ";
    cin >> latime;

    if ((lungime == 0) || (latime == 0)){
        cout << "\nLength and width can't be zero!";
        return 0;
    }
    cout << "\nPerimetru = " << perimetru(lungime, latime) << "; Arie = " << arie(lungime, latime);

    char ch;
    cin >> ch;

    return 0;
}


