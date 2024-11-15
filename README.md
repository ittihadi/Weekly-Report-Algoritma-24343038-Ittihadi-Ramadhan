## Penjelasan Singkat

### Modul 2 - Pemrograman Dasar C

Modul ini mengenalkan pembaca kepada konsep-konsep dasar pemrograman
menggunakan bahasa C, seperti sintaks dan _input output_ dari program C

Modul ini memiliki empat latihan pembuatan program:

1. Program pertama meminta nama lengkap dari pengguna kemudian mengeluarkan
   kembali nama itu dalam pesan sambutan
2. Program kedua meminta beberapa data dari pengguna, diantaranya nama, NIM,
   program studi, fakultas, serta hasil nilai-nilai, program ini kemudian
   menghitung nilai akhir dari pengguna dan menampilkan kembali data yang
   dimasukkannya tadi dalam format yang lebih rapi
3. Program ketiga menghitung luas dari segitiga yang diketahui ukurannya dan
   mengeluarkan hasilnya
4. Program keempat menghitung luas dari persegi panjang yang diketahui
   ukurannya kemudian mengeluarkan hasilnya

### Modul 3 - Variabel, Konsanta, dan Tipe Data

Modul ini mengenalkan konsep variabel, tipe data variabel, dan variabel
konstanta, serta cara penggunaan dan kegunaannya dalam sebuah program. Selain
itu modul ini juga menunjukkan peraturan penamaan dari sebuah variabel dan
perbedaan sifat dari tipe-tipe data variabel

Modul ini memiliki tiga latihan pembuatan program

1. **Program konversi mata uang**, program ini meminta pengguna untuk
   memasukkan jumlah uang dalam bentuk rupiah dan mengeluarkan hasil konversi
   jumlah uang tersebut ke dalam bentuk dollar
2. **Program konversi suhu**, program ini meminta pengguna untuk memasukkan
   sebuah nilai suhu dalam bentuk celcius, kemudian mengeluarkan suhu tersebut
   dalam bentuk kelvin, fahrenheit, dan reamur
3. **Program luas permukaan dan volume bola**, program ini menghitung luas
   permukaan dan volume dari sebuah bola yang diketahui ukurannya, kemudian
   mengeluarkan hasil itu kepada pengguna. Di samping itu nilai dari pi
   diimplementasikan menggunakan konstanta

## Membangun

### Menggunakan CMake

Buka sebuah _terminal_ dan masuk ke folder projek ini, lalu ketik:

```sh
cmake -B build
cmake --build build
```

Pasangan perintah di atas akan membuat sebuah folder bernama `build` dan di
dalamnya akan terdapat hasil _compilation_ dari semua modul di dalam foldernya
masing-masing
