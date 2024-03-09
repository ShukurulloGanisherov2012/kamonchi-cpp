#include <iostream>
using namespace std;
int main() {
    int kamonchi_1;
    cout << "1-kamonchining o'qlari sonini kiriting: ";
    cin >> kamonchi_1;

    int kamonchi_2;
    cout << "2-kamonchining o'qlari sonini kiriting: ";
    cin >> kamonchi_2;

    if (kamonchi_1 > kamonchi_2) {
        cout << " " << endl;
        cout << " ";
        cout << "1-kamonchi g'olib!" << endl;
        cout << " ";
    }else {
        cout << " " << endl;
        cout << " ";
        cout << "2-kamonchi g'olib!" << endl;
        cout << " ";
    }
}


