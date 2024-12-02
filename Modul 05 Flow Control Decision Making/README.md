### ❔ Modul 5 - _Flow Control: Decision Making_

Salah satu hal yang penting saat membuat suatu program adalah kemampuan untuk
mengatur alur kerja program tersebut untuk berbagai macam situasi (atau juga
disebut _flow control_). Pengambilan keputusan (atau _decision making_) adalah
satu bagian dari hal tersebut. Pada C, ada tiga cara utama untuk melakukan
pengambilan keputusan, menggunakan `if` dan `else`, menggunakan `switch`, serta
menggunakan operasi `ternary`.

`if` adalah bentuk _decision making_ tersederhana di C, diberikan suatu
ekspresi yang mengembalikan nilai benar atau salah, program akan menjalankan
_statement_ dari `if` jika nilai ekspresi tersebut benar, _statement_ juga bisa
berbentuk balok kode (`{ ... }`). Sebaliknya, jika nilai ekspresi tersebut
salah, maka program akan menjalankan _statement_ dari `else` yang terletak
setelah `if` tersebut, apabila ada. _Statement_ pada `else` juga dapat dalam
bentuk balok kode. Terakhir, sebuah `if` baru juga dapat diletak setelah `else`
sehingga membuat kondisi berbeda untuk balok selanjutnya.

`switch` adalah bentuk lain dari _decision making_ yang biasa digunakan jika
nilai yang akan dijadikan patokan berupa konstanta tetap, seperti angka. Setiap
balok `switch` diberikan suatu nilai yang kemudian akan dibandingkan dengan
sekian _statement_ `case` di dalamnya. Tiap `case` ini hanya memeriksa apakah
nilai yang diberi pada awal sama dengan nilai pada `case`.

C juga memiliki operasi yang dapat digunakan untuk menentukan suatu nilai
berdasarkan nilai benar atau salah lain dalam bentuk operator `ternary`.
Operator ini memiliki struktur `eksp ? benar : salah` dimana `eksp` adalah
ekspresi yang mengembalikan nilai benar atau salah, dan `benar` dan `salah`
merupakan nilai yang akan dikembalikan jika nilai `eksp` benar atau salah.

Terakhir, setiap dari _decision making_ ini juga bisa diletakkan di dalam
_deicison making_ lain, hal ini dinamakan dengan "_nesting_", atau "bersarang".

Latihan di modul ini:

1. **Program kalkulator bercabang**

   <div align='center'>
      <img src="/assets/Modul_5_Jobsheet_1.gif" width="540" />
   </div>

   program ini menggunakan `if-else` untuk membiarkan pengguna memilih operasi
   apa yang ingin dilakukannya, kemudian meminta dua angka dari pengguna yang
   kemudian dioperasikan dan dikeluarkan.

2. **Program diskon TOSERBA**

   <div align='center'>
      <img src="/assets/Modul_5_Jobsheet_2.gif" width="540" />
   </div>

   program ini meminta pengguna untuk memasukkan jumlah pembeliannya, kemudia
   menggunakan `if-else` untuk menentukan jumlah diskon dan _cashback_ yang
   didapat oleh pengguna

3. **Program luas permukaan bangun**

   <div align='center'>
      <img src="/assets/Modul_5_Jobsheet_3.gif" width="540" />
   </div>

   program ini memberi pilihan bagi pengguna untuk menghitung luas dari bangun
   ruang bola, kubus, balok, dan tabung menggunakan percabangan `switch-case`,
   meminta angka-angka yang tepat untuk bangun tersebut dan mengeluarkan hasil
   yang tepat

4. **Program nilai akhir**

   <div align='center'>
      <img src="/assets/Modul_5_Jobsheet_4.gif" width="540" />
   </div>

   program ini menentukan program akhir mahasiswa menggunakan nilai kehadiran,
   tugas, UTS, dan UAS, yang dimasukkan pengguna. Program menghitung nilai
   akhir, menentukan _grade_, dan mengeluarkan keduanya bersama dengan pesan
   berbeda berdasarkan nilai yang dihitung

