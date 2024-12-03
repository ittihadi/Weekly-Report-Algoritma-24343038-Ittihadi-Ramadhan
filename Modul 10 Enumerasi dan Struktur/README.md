### 🧱 Modul 10 - Enumerasi dan Struktur

Struktur (ditandai dengan `struct`) adalah sebuah tipe data yang dapat dibuat
oleh programer untuk memegang dan menyimpan berbagai macam variabel lain dengan
tipe-tipe data yang bisa berbeda. `struct` dapat diletakkan di dalam `struct`
lain bahkan dirinya sendiri. `typedef` dapat digunakan untuk menyingkatkan
penggunaan sebuah `struct`.

Enumerasi (ditandai dengan `enum`) adalah cara bagi programmer untuk
mendefinisikan sebuah kumpulan konstanta integer yang dapat diakses dan
digunakan dengan mudah. `enum` berguna jika sejumlah konstanta angka dengan
fungsi-fungsi tertentu perlu didefinisikan.

Latihan di modul ini:

1. **Program permainan tebakan**

   <div align='center'>
      <img src="/assets/Modul_10_Jobsheet_1.gif" width="540" />
   </div>

   pada awal proses, program memilih sebuah angka secara acak dari 1-20, lalu
   menggunakan perulangan meminta pengguna untuk memasukkan sebuah tebakan,
   jika tebakan pengguna lebih tinggi atau lebih rendah daripada angka program,
   maka pesan tentang itu dikeluarkan dan program meminta pengguna untuk
   memasukkan tebakan lagi. Apabila tebakan pengguna sama dengan angka program,
   perulangan berhenti dan pengguna diberi selamat, lalu program menanyakan
   apabila pengguna ingin melakukan sebuah permainan lagi. Apabila iya, program
   memilih angka baru dan mengulangi proses, jika tidak, program keluar

2. **Program penentu zodiak**

   <div align='center'>
      <img src="/assets/Modul_10_Jobsheet_2.gif" width="540" />
   </div>

   program ini menggunakan struktur untuk menyimpan data tiap satu dari 12
   zodiak, hal seperti batas awal, batas akhir, serta nama dari zodiak
   tersebut. Program ini kemudian meminta tanggal lahir dari pengguna dan
   menggunakan perulangan, mencari data zodiak yang sesuai berdasarkan data
   pengguna, setelah ditemukan program ini kemudian memberi tahu apa zodiak
   dari pengguna dan mengeluarkannya di layar

3. **Program penyimpan data mahasiswa**

   <div align='center'>
      <img src="/assets/Modul_10_Jobsheet_3.gif" width="540" />
   </div>

   Untuk membantu dalam menyimpan data, program ini menggunakan struktur untuk
   menyimpan data mahasiswa. Pengguna diminta untuk mengisi data dari sebuah
   mahasiswa, lalu ditanyakan apabila ingin memasukkan data lagi, jika pengguna
   memilih iya, maka program meminta lagi sebuah data mahasiswa, jika pengguna
   memilih tidak, program mengeluarkan kembali semua data mahasiswa yang telah
   dimasukkan pengguna secara berturut-turut

