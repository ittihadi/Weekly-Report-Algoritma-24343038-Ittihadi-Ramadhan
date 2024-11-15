## Penjelasan Singkat

### Modul 2 - Pemrograman Dasar C

Modul ini mengenalkan pembaca kepada konsep-konsep dasar pemrograman
menggunakan bahasa C, seperti sintaks dan _input output_ dari program C

Modul ini memiliki empat latihan pembuatan program:

1. **Program penyapa**, program ini meminta nama lengkap dari pengguna
   kemudian mengeluarkan kembali nama itu dalam pesan sambutan
2. **Program data mahasiswa**, program ini meminta beberapa data dari
   pengguna, diantaranya nama, NIM, program studi, fakultas, serta hasil
   nilai-nilai, program ini kemudian menghitung nilai akhir dari pengguna dan
   menampilkan kembali data yang dimasukkannya tadi dalam format yang lebih rapi
3. **Program luas segitiga**, program ini menghitung luas dari segitiga yang
   diketahui ukurannya dan mengeluarkan hasilnya
4. **Program luas persegi panjang**, program ini menghitung luas dari persegi
   panjang yang diketahui ukurannya kemudian mengeluarkan hasilnya

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

### Modul 4 - Operator

Modul ini menampilkan berbagai macam operator dalam C, diantaranya operator aritmatika, penegasan, pembandingan, logika, serta bitwise

Terdapat empat latihan pembuatan program di modul ini:

1. **Program penghitung waktu dari detik**, program ini meminta masukkan dari
   pengguna dalam bentuk detik dan menggunakan operasi modulo dan pembagian
   integer untuk menghitung dan mengeluarkan jumlah waktu dalam bentuk jajm,
   menit, dan detik
2. **Program harga barang**, program ini meminta beberapa data, seperti nama
   pembeli, nama barang, harga satuan, dan jumlah barang yang dibeli, kemudian
   mengeluarkan jumlah harga total yang dibeli
3. **Program penghitung nilai akhir**, program ini meminta pengguna untuk
   memasukkan data nilai presensi, praktek, uts, dan uas, lalu mengeluarkan
   nilai akhir dari pengguna menggunakan bobot tertentu
4. **Program rental film**, program ini meminta masukkan jumlah jam rental dari
   pengguna dalam bentuk angka, kemudian dengan ketentuan tarif tertentu,
   program mengeluarkan jumlah uang yang harus dibayar jika pengguna meminjam
   untuk sekian lama

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
