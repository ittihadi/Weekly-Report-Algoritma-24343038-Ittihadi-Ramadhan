### 🔗 Modul 7 - _Array_

Sebuah `array` adalah koleksi dari satu tipe data, di C ini ditandakan dengan
simbol `[]`. Untuk mendeklarasi `array`, letakkan `[]` bersama ukuran dari
array tersebut di dalamnya setelah _identifier_ dari variabel tersebut. Untuk
mengakses nilai pada array gunakan `[]` serta indeks dari elemen yang ingin
diakses - dimulai dari nol - di dalam kurung itu. Ukuran array tidak harus
diberikan jika saat deklarasi langsung diisi dengan nilai, hanya jika tidak
diberi ukuran dari array hanya sebesar jumlah elemen yang diberikan.

Array bisa berisi array lain, ini disebut array _multi-dimentional_, untuk
mendeklarasikannya letakkan satu (atau lebih) pasang `[]` lagi di belakang
pasangan pertama, pasangan-pasangan ini mesti diisi dengan ukurannya. Akses
elemen ini dari kiri ke kanan.

Teks (atau _string_) pada C jugalah berbentuk array, isinya adalah tiap
karakter dalam teks ditambah satu karakter `nul` (bernilai 0) di akhirnya.
C memberikan beberapa fungsi di pustaka standarnya untuk memanipulasi _string_,
beberapa darinya termasuk: `strcmp` untuk membandingkan dua _string_, `strlen`
untuk membaca panjang _string_, `strcpy` untuk menyalin sebuah _string_ ke
_string_ lain, dan lainnya.

Latihan di modul ini:

1. **Program rata-rata nilai**

   <div align='center'>
      <img src="/assets/Modul_7_Jobsheet_1.gif" width="540" />
   </div>

   program ini meminta pengguna untuk memasukkan 20 data nilai dari mahasiswa,
   lalu menyimpan tiap nilai tersebut ke dalam _array_ dan mengeluarkan
   rata-rata dari nilai-nilai tersebut
   
2. **Program nama mahasiswa**

   <div align='center'>
      <img src="/assets/Modul_7_Jobsheet_2.gif" width="540" />
   </div>

   program ini pertama meminta pengguna untuk memasukkan berapa banyak nama
   mahasiswa yang ingin dimasukkan, lalu meminta nama sebanyak yang dimasukkan
   pengguna dan memasukkannya ke dalam sebuah _array_. Setelah semua nama
   dimasukkan oleh pengguna, program mengeluarkannya kembali dari _array_ tadi

3. **Program login**

   <div align='center'>
      <img src="/assets/Modul_7_Jobsheet_3.gif" width="540" />
   </div>

   program ini meminta pengguna untuk memasukkan sebuah _username_ dan
   _password_, kemudian melakukan perbandingan `string` terhadap keduanya,
   apabila _username_ salah, program menyatakan pengguna tidak terdaftar dan
   berhenti, lalu apabila _username_ benar dan _password_ salah, program
   menyatakan password salah, terakhir, apabila keduanya benar, program
   menyatakan login berhasil
