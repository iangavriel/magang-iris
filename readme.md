# Pointer
Pointer merupakan suatu variabel yang menyimpan alamat pada memori dari sebuah variabel. Untuk mendapatkan alamat memori dari suatu variabel, digunakan **Operator Address-Of (&)**. Sama seperti variabel biasa, pointer harus dideklarasikan terlebih dahulu baru diisi oleh alamat memori / referensi dari sebuah variabel. Untuk mendeklarasikannya sama saja seperti variabel biasa, tetapi ditambahkan tanda asterisk(\*) di antara tipe data dan nama pointer. Berikut contoh inisiasi dari pointer:
```
    int x = 5;
    int* p = &x;
```
Variabel pointer p sekarang berisi alamat memori dari variabel x.

Jika kita ingin mengetahui nilai dari variabel yang direferensi pointer, digunakan **Operator Dereference**. Untuk menggunakannya hanya perlu menambahkan tanda asterisk sebelum pointer. 
```
    cout << *p << endl;
```
Ketika dijalankan, program akan mengeluarkan nilai 5.

Sama seperti variabel biasa, pointer pun memiliki alamat memori sendiri dan alamat tersebut dapat disimpan pada pointer lainnya. Pointer tersebut dapat dikatakan sebagai **Double Pointer**. Pada Double Pointer, digunakan dua tanda asterisk untuk mendeklarasikan.
```
    int** dp = &p;
    cout << **dp << endl;
```
Program akan mengeluarkan nilai dari variabel x.

Pada sebuah array, tiap elemen dari array tersebut memiliki alamat memori tersendiri yang biasanya berurutan letaknya sesuai index. Alamat memori elemen index 0 sama seperti alamat array tersebut. Kita bisa mengetahui alamat memori elemen array dengan syntax:
```
    int arr[3];
    for (int i = 0; i < 3; i++) {
        cout << &arr[i] << endl;
    }
```
Dan untuk medereferensi sama saja, dengan *(arr + i), dengan i merujuk ke index array.

Dengan menggunakan pointer, kita bisa melakukan **Pass by Reference** yang di mana kita mem-passing alamat dari memori variabel yang ingin digunakan dalam sebuah fungsi sehingga nilai dari variabel tersebut dapat diubah di dalam fungsi. Tanpa pointer, kita hanya mem-passing nilai dan nilai dari variabel tersebut tidak berubah di dalam fungsi. 
```
    void fungsi(int *a) {
        *a = 1;
    }
    int main(){
        int a = 0;
        fungsi(&a);
    }
```
Sekarang variabel a bernilai 1. 

Contoh penerapan dari pointer:
User menginput sepuluh integer. Buat fungsi yang mencetak integer-integer yang bernilai genap.
```
#include <bits/stdc++.h>
using namespace std;

void retEven(int* arr, int n);

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    retEven(arr, 10);
    return 0;
}

void retEven(int* arr, int n) {
    int even[10];
    int arr_length = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[arr_length] = arr[i];
            arr_length++;
        }
    }
    for (int k = 0; k < arr_length; k++) {
        cout << even[k] << endl;
    }
}
```
test123
