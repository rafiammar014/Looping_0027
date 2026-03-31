include <iostream>
#include <ctime>
using namespace std;

int main() {
    int x;

    // Perulangan dengan FOR
    // Mencetak tulisan sebanyak 5 kali
    cout << "PERULANGAN FOR" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Teknologi Informasi UMY" << endl;
    }
    cout << endl;

    // Untuk mendapatkan urutan angka acak yang berbeda
    srand(time(0));