# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Egi Rizkiyansyah</p>

## Dasar Teori
Rekursif merupakan salah satu proses pengulangan fungsi atau prosedur yang memanggil dirinya sendiri. Dalam sebuah fungsi rekursif pemanggilan dapat terjadi berulang kali. Karena ada proses yang berulang-ulang maka harus ada suatu kondisi yang mengakhiri prosesnya. Jika tidak, maka proses tidak akan pernah berhenti sampai memori yang digunakan tidak dapat menampung lagi.

Kode rekursif cenderung lebih singkat dan lebih mudah dibuat dibandingkan dengan kode iteratif. Biasanya, perulangan dapat diubah menjadi fungsi rekursif saat proses kompilasi atau interpretasi. Rekursi sangat efektif untuk menangani tugas yang dapat diuraikan menjadi sub tugas yang serupa. Sebagai contoh, masalah pengurutan, pencarian, dan penjelajahan sering kali dapat diselesaikan dengan solusi rekursif yang sederhana.

## Guided 
### 1. [Rekursif Langsung (Direct Recursion)]

```C++
#include <iostream>
using namespace std;

//Code ini berfungsi untuk melakukan hitung mundur
//dari angka yang diinputkan

void countdown(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    countdown(n - 1);
}

int main() {
    cout << "Rekursi Langsung: ";
    countdown(5); //5 merupakan input nya
    cout << endl;
    return 0;
}

```
#### Full code Screenshot:
![Screenshot 2024-05-25 153247](https://github.com/egirizkiyan/egi123/assets/162097461/22f7efcc-5ddf-4166-96d3-be0e4c9e7491)

#### Output:
![Screenshot 2024-05-25 153436](https://github.com/egirizkiyan/egi123/assets/162097461/47eaf5f2-bcfa-4450-adb4-c75862b73278)


Kesimpulan
  - Kode ini merupakan contoh dari rekursi langsung, di mana sebuah fungsi memanggil dirinya sendiri secara langsung.
  - Fungsi countdown melakukan hitung mundur dari nilai yang diberikan sebagai argumen hingga 0, mencetak setiap nilai dalam prosesnya.
  - Basis rekursi (if (n == 0) return;) mencegah fungsi berjalan tanpa henti dan memastikan bahwa fungsi berhenti ketika n mencapai 0.
Program ini dengan efektif menunjukkan konsep dasar dari rekursi dan bagaimana sebuah fungsi dapat memanggil dirinya sendiri untuk menyelesaikan tugas yang lebih besar dengan memecahnya menjadi sub-tugas yang lebih kecil.

### 2. [Rekursif Tidak Langsung (Indirect Recursion)

]

```C++
#include <iostream>
using namespace std;

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); // Panggilan rekursif tidak langsung
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); // Panggilan rekursif tidak langsung
    }
}

int main() {
    int num = 5;
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    return 0;
}

```
#### Full code Screenshot:
![Screenshot 2024-05-25 154158](https://github.com/egirizkiyan/egi123/assets/162097461/6f390a99-1e4e-41ce-a136-d63b6149bd63)

#### Output:
![Screenshot 2024-05-25 154300](https://github.com/egirizkiyan/egi123/assets/162097461/2d26bbb2-71e4-4d27-95ce-d96826f4e4dd)

## Unguided 
### 1. [program Rekursif Langsung (Direct Recursion) ]

```C++
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

```
#### Output:
![Screenshot 2024-05-25 154731](https://github.com/egirizkiyan/egi123/assets/162097461/e69668eb-7d28-4bf0-b0a1-6dc9881474e0)


#### Full code Screenshot:
![Screenshot 2024-05-25 154624](https://github.com/egirizkiyan/egi123/assets/162097461/d1482b52-98f3-4998-9529-36bef3fd1b9a)

Kesimpulan
  - Kode ini menunjukkan implementasi dari rekursi langsung untuk menghitung nilai faktorial dari sebuah bilangan bulat positif.
  - Fungsi faktorial memecah masalah menjadi sub-masalah yang lebih kecil hingga mencapai basis rekursi.
  - Contoh ini menunjukkan prinsip dasar rekursi dalam pemrograman, di mana sebuah fungsi memanggil dirinya sendiri untuk menyelesaikan tugas.
  - Nilai faktorial dari 5 adalah 120, dan program ini menghitungnya dengan memanfaatkan sifat rekursif dari fungsi faktorial.

### 2. [program Rekursif Tidak Langsung (Indirect Recursion) ]

```C++
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
```
#### Output:
![Screenshot 2024-05-25 155314](https://github.com/egirizkiyan/egi123/assets/162097461/6b39ad13-7d7d-4a32-ac7a-7ba345fe282a)

#### Full code Screenshot:
![Screenshot 2024-05-25 155136](https://github.com/egirizkiyan/egi123/assets/162097461/a7dd69b2-4836-4aea-b90e-2f764635fd57)

Kesimpulan
  - Kode ini menunjukkan implementasi dari rekursi tidak langsung untuk menghitung nilai faktorial dari sebuah bilangan bulat positif.
  - Rekursi tidak langsung terjadi ketika faktorialA dan faktorialB saling memanggil satu sama lain.
  - Fungsi faktorialA dan faktorialB bekerja bersama untuk menghitung faktorial dari 3.
  - Nilai faktorial dari 3 adalah 6, dan program ini menghitungnya dengan memanfaatkan sifat rekursif dari dua fungsi yang saling memanggil.

## Kesimpulan
Kesimpulan Utama dari Semua Kode
 - Rekursi Langsung vs Tidak Langsung:
    - Rekursi langsung terjadi ketika sebuah fungsi memanggil dirinya sendiri secara langsung (countdown dan faktorial).
    - Rekursi tidak langsung terjadi ketika dua fungsi saling memanggil satu sama lain (functionA dan functionB, serta faktorialA dan faktorialB).

- Penggunaan Rekursi:
   - Rekursi digunakan untuk menyelesaikan masalah dengan memecahnya menjadi sub-masalah yang lebih kecil hingga mencapai basis yang sederhana.
   - Pada hitung mundur, rekursi mengurangi nilai hingga mencapai 0.
   - Pada perhitungan faktorial, rekursi mengalikan nilai hingga mencapai 1.

- Output Program:
  - Hitung mundur (rekursi langsung): 5 4 3 2 1
  - Hitung mundur (rekursi tidak langsung): 5 4 2 1
  - Faktorial (rekursi langsung): Faktorial dari 5 adalah 120
  - Faktorial (rekursi tidak langsung): Faktorial dari 3 adalah 6

Dengan demikian, kode-kode ini menunjukkan konsep dasar rekursi, baik langsung maupun tidak langsung, dan bagaimana mereka dapat diterapkan untuk berbagai jenis masalah dalam pemrograman.

## Referensi
[1] "Introduction to Algorithms" oleh Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, dan Clifford Stein
Tahun Terbit: 1990 (Edisi Pertama)
[2] Data Structures and Algorithm Analysis in C++" oleh Mark Allen Weiss
Tahun Terbit: 1994 (Edisi Pertama)
[3] "The Art of Computer Programming" oleh Donald E. Knuth
Tahun Terbit: 1968 (Volume 1, Edisi Pertama)