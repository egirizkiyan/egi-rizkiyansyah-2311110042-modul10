#include <iostream>

using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    // Basis: Jika n adalah 0 atau 1, kembalikan 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Rekurens: n! = n * (n-1)!
        return n * faktorial(n - 1);
    }
}

int main() {
    int number = 5; // Bilangan yang akan dihitung faktorialnya

    // Menampilkan bilangan yang diinput
    cout << "Masukkan bilangan bulat positif: " << number << endl;

    // Menghitung dan menampilkan hasil faktorial
    cout << "Faktorial dari " << number << " adalah " << faktorial(number) << endl;

    return 0;
}
