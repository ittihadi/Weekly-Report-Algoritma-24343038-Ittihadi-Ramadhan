### 📋 Modul 8 - Fungsi dan Prosedur

Sebuah fungsi adalah sejumlah instruksi yang dapat digunakan berulang kali.
Pada C, sebuah fungsi dapat dideklarasikan dengan struktur `tipe-kembali
identifier(argumen) { blok }`. `tipe-kembali` adalah tipe data yang akan
dikembalikan oleh fungsi ini, `void` dapat digunakan jika fungsi tidak
mengembalikan data apapun. `argumen` adalah nol atau lebih tipe dan nama
data yang dimasukkan kepada fungsi.

Sebuah fungsi dapat dipanggil (dieksekusi) dengan cara `identifier(arguemen);`.
Sebuah fungsi dapat memanggil fungsi lain maupun dia sendiri, Fungsi yang
memanggil dirinya sendiri diberi nama "fungsi rekursif".

Variabel yang didefinisikan di dalam sebuah fungsi hanya bisa diakses dalam
fungsi itu, ini disebut dengan nama "variabel lokal", dimana variabel yang
didefinisikan di luar fungsi apapun disebut "variabel global".

Argumen dari sebuah fungsi juga dapat berbentuk `pointer`, ini disebut dengan
`pass-by-reference`. Sebaliknya disebut dengan `pass-by-value`.

Latihan di modul ini:

1. **Program perkalian dengan penjumlahan**

   <div align='center'>
      <img src="/assets/Modul_8_Jobsheet_1.gif" width="540" />
   </div>

   program ini melakukan operasi perkalian, tetapi menggunakan penjumlahan
   dalam bentuk fungsi rekursif untuk melakukannya

2. **Program kalkulator fungsi**

   <div align='center'>
      <img src="/assets/Modul_8_Jobsheet_2.gif" width="540" />
   </div>

   program ini melakukan operasi aritmetik seperti kalkulator, tetapi
   menggunakan fungsi untuk melakukan operasi tersebut

3. **Program luas dan keliling lingkaran**

   <div align='center'>
      <img src="/assets/Modul_8_Jobsheet_3.gif" width="540" />
   </div>

   program ini menghitung luas dan keliling sebuah lingakaran yang ukurannya
   dimasukkan oleh pengguna, tetapi menggunakan dua fungsi berbeda `luas` dan
   `keliling` untuk melakukan perhitungannya

4. **Program diskon dengan fungsi**

   <div align='center'>
      <img src="/assets/Modul_8_Jobsheet_4.gif" width="540" />
   </div>

   program ini meminta jumlah pembelian dari pengguna, kemudian menggunakan
   sebuah fungsi `potong` untuk menentukan berapa banyak diskon yang didapat
   oleh pengguna, informasi ini kemudian ditampilkan kembali bersama dengan
   harga akhir yang harus dibayar pengguna
