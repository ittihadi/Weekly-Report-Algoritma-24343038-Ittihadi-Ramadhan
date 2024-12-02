### 🔁 Modul 6 - _Flow Control: Looping_

Perulangan (_looping_) adalah bentuk lain pengaturan alur jalan program. Ada
beberapa macam perulangan dalam C, diantaranya adalah:

Perulangan `while`, yang tersusun mirip dengan `if`, tetapi akan menjalankan
_statement_ (atau kode block) selama nilai yang dikembalikan oleh ekspresinya
bernilai benar.

Perulangan `do while` bekerja identik dengan `while`, tetapi _statement_ (atau
blok kode) perulangan dijalankan dulu satu kali sebelum ekspresi perulangan
dicek.

Perulangan `for`, biasa digunakan dalam perulangan yang perlu dihitung, `for`
membutuhkan tiga ekspresi sebelum *statement*nya, yaitu `initializer` yang
jalan sekali pada awal perulangan sebagai penyiap variabel, `condition` yang
menentukan sampai kapan perulangan berjalan, dan `iterator`, yang akan jalan
pada akhir dari _statement_ perulangan `for`.

Seperti _decision making_, perulangan juga dapat diletakkan dalam perulangan
lain.

Latihan di modul ini:

1. **Program deret bilangan**

   <div align='center'>
      <img src="/assets/Modul_6_Jobsheet_1.gif" width="540" />
   </div>

   program ini menggunakan perulangan untuk menghasilkan deret bilangan genap
   dan ganjil dari 0-50

2. **Program segitiga sederhana**

   <div align='center'>
      <img src="/assets/Modul_6_Jobsheet_2.gif" width="540" />
   </div>

   program ini menggunakan perulangan bersarang untuk mengeluarkan motif
   seigitga siku-siku menggunakan karakter _asteriks_ (*).

3. **Program segitiga angka**

   <div align='center'>
      <img src="/assets/Modul_6_Jobsheet_3.gif" width="540" />
   </div>

   program ini menggunakan perulangan bersarang untuk menampilkan motif
   segitiga siku-siku menggunakan angka hasil kali dari kedua indeks perulangan

4. **Program ATM**

   <div align='center'>
      <img src="/assets/Modul_6_Jobsheet_4.gif" width="540" />
   </div>

   program ini memungkinkan pengguna untuk memeriksa, menyetor, dan menarik
   saldo rekening Hattori, dengan ketentuan mesti ada saldo tersisa minimal
   Rp50.000 untuk melakukan penarikan, jika saldo tersisa sama atau kurang dari
   Rp50.000 maka penarikan gagal. Program ini menggunakan perulangan untuk
   memungkinkan pengguna melakukan aksi berulang kali, dan percabangan untuk
   melakukan aksi yang tepat berdasarkan ketentuan
