### 🇨 Modul 2 - Pemrograman Dasar C

Bahasa C, seperti semua bahasa pemrograman lain, memliki sebuah sintaks, yaitu
aturan-aturan penulisan kode dalam bahasa tersebut. Sebuah program C terdiri
dari paling sedikitnya sebuah fungsi bernama `main`, yang berperan sebagai
titik awal perjalanan program. Selain itu, C juga memberi beberapa perintah
khusus yang akan digunakan oleh _compiler_ sebelum program C tersebut sendiri
di-_compile_. Salah satu dari perintah itu adalah `#include`, yang memberi
cara bagi programer untuk menggunakan kembali deklarasi fungsi yang sudah ada
dari file-file yang dinamakan _header file_ (berekstensi `.h`).

Seluruh dari sebuah program C terdiri dari berbagai `statement`, yaitu sebuah
perintah kepada program untuk melakukan sesuatu, setiap _statement_ di dalam C
diakhiri dengan tanda titik koma (`;`) atau "_semicolon_".

Sebuah `identifier` adalah nama yang diberi programer pada suatu variabel,
fungsi, atau objek lainnya agar hal tersebut dapat digunakan kembali kemudian.
Pada umumnya peraturan dalam menulis sebuah _identifier_ adalah:

1. Diawali dengan huruf alfabet (a-z, A-Z) atau _underscore_ (`_`)
2. Boleh mengandung angka (0-9) tetapi tidak pada huruf pertama
3. Tidak menggunakan karakter selain yang disebut di atas
4. Nama mesti unik, jadi tidak dapat sama dengan _identifier_ yang sudah ada
   (pada _scope_ yang tampak) ataupun sama dengan _keyword_ yang telah ada
   pada bahasa C
5. Sebuah _identifier_ bersifat "_case sensitive_" yang berarti penggunaan
   huruf kapital dianggap penting

Sebuah `comment` (komentar) adalah bagian yang akan diabaikan oleh _compiler_,
sehingga dapat digunakan untuk memberi catatan, penjelasan, maupun informasi
tambahan lainnya mengenai fungsi, variabel, ataupun hal lainnya. Terdapat dua
cara membuat komentar di C, yaitu:

1. Menggunakan `//`, yang membuat semua karakter setelahnya sampai akhir baris
   dianggap sebagai komentar

2. Menggunakan `/*` pada awal komentar dan `*/` pada akhirnya, yang membuat
   semua karakter di antara kedua tanda tersebut, termasuk baris baru, dianggap
   sebagai komentar

Proses `Input` dan `Output` adalah aksi mengambil masukan data dari pengguna
dan memberi keluaran data kepada pengguna, _library_ standar C memiliki
beberapa fungsi untuk melakukan ini, seperti `printf`, `scanf`, `fputs`,
`fgets`, dan lainnya.

Latihan di modul ini:

1. **Program penyapa**

   <div align='center'>
      <img src="/assets/Modul_2_Jobsheet_1.gif" width="540" />
   </div>

   program ini meminta nama lengkap dari pengguna
   kemudian mengeluarkan kembali nama itu dalam pesan sambutan

2. **Program data mahasiswa**

   <div align='center'>
      <img src="/assets/Modul_2_Jobsheet_2.gif" width="540" />
   </div>

   program ini meminta beberapa data dari
   pengguna, diantaranya nama, NIM, program studi, fakultas, serta hasil
   nilai-nilai, program ini kemudian menghitung nilai akhir dari pengguna dan
   menampilkan kembali data yang dimasukkannya tadi dalam format yang lebih rapi

3. **Program luas segitiga**

   <div align='center'>
      <img src="/assets/Modul_2_Jobsheet_3.gif" width="540" />
   </div>

   program ini menghitung luas dari segitiga yang
   diketahui ukurannya dan mengeluarkan hasilnya

4. **Program luas persegi panjang**

   <div align='center'>
      <img src="/assets/Modul_2_Jobsheet_4.gif" width="540" />
   </div>

   program ini menghitung luas dari persegi
   panjang yang diketahui ukurannya kemudian mengeluarkan hasilnya

