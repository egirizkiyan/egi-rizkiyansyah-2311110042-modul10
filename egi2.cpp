#include <iostream>

using namespace std;

// Deklarasi fungsi faktorialB
int faktorialB(int n);

// Fungsi faktorialA
int faktorialA(int n) {
    // Basis: Jika n adalah 0 atau 1, kembalikan 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Panggil fungsi faktorialB
        return n * faktorialB(n - 1);
    }
}

// Fungsi faktorialB
int faktorialB(int n) {
    // Panggil kembali fungsi faktorialA
    return faktorialA(n);
}

int main() {
    int number = 3; // Bilangan yang akan dihitung faktorialnya

    // Menampilkan bilangan yang diinput
    cout << "Masukkan bilangan bulat positif: " << number << endl;

    // Menghitung dan menampilkan hasil faktorial
    cout << "Faktorial dari " << number << " adalah " << faktorialA(number) << endl;

    return 0;
}
