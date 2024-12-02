### 💾 Modul 3 - Variabel, Konsanta, dan Tipe Data

Sebuah `variabel` adalah tempat sebuah program menyimpan data, tiap variabel
memiliki sebuah tipe, yang disebut sebagai `tipe data`, tipe data membatasi
bentuk dari data yang disimpan dalam variabel tersebut. C memiliki beberapa
tipe data dasar, diantaranya `char`, `int`, `float`, dan lain-lain. Tiap tipe
memiliki sifat yang berbeda, seperti sebuah `char` menyimpan satu karakter,
`int` menyimpan sebuah angka bulat berukuran 32-bit, `float` menyimpan angka
pecahan dengan presisi 32-bit, dan seterusnya. Nama dari sebuah variabel
mengikuti peraturan yang sama dengan [peraturan _identifier_ pada modul
2](/Modul%2002%20Pemrograman%20Dasar%20C).

Sebuah variabel juga dapat dijadikan konstan, C memilki dua cara utama untuk
melakukan ini, yaitu:

1. `#define NAMA NILAI`, cara ini menggunakan _preprocessor directive_
   `#define`, pada proses kompilasi tiap tempat yang menggunakan `NAMA`
   akan disubstitusi dengan `NILAI`
2. `const type identifier = value`, cara ini memberi penanda `const` pada awal
   sebuah variabel, dengan ini penggunaan konstanta sama dengan variabel biasa
   hanya saja variabel tersebut tidak dapat diubah nilainya

Latihan di modul ini:

1. **Program konversi mata uang**

   <div align='center'>
      <img src="/assets/Modul_3_Jobsheet_1.gif" width="540" />
   </div>

   program ini meminta pengguna untuk memasukkan jumlah uang dalam bentuk
   rupiah dan mengeluarkan hasil konversi jumlah uang tersebut ke dalam bentuk
   dollar

2. **Program konversi suhu**

   <div align='center'>
      <img src="/assets/Modul_3_Jobsheet_2.gif" width="540" />
   </div>

   program ini meminta pengguna untuk memasukkan sebuah nilai suhu dalam bentuk
   celcius, kemudian mengeluarkan suhu tersebut dalam bentuk kelvin,
   fahrenheit, dan reamur

3. **Program luas permukaan dan volume bola**

   <div align='center'>
      <img src="/assets/Modul_3_Jobsheet_3.gif" width="540" />
   </div>

   program ini menghitung luas permukaan dan volume dari sebuah bola yang
   diketahui ukurannya, kemudian mengeluarkan hasil itu kepada pengguna. Di
   samping itu nilai dari pi diimplementasikan menggunakan konstanta

