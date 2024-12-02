<div align='center'>

   # Algoritma Pemrograman

   Repository ini mengandung materi dari mata kuliah `Agloritma Pemrograman`
   dengan Pak Randi Proska Sandra S.Pd, M.Sc

</div>

> ```
> Nama : Ittihadi Ramadhan
> NIM  : 24343038
> ```

---

## Penjelasan Singkat

Terdapat sebelas modul pada mata kuliah ini, pembahasan dari tiap modul dapat
dilihat di bawah ini

### 🔥 Modul 1 - Pengantar Algoritma dan Pemrograman

Modul ini adalah sebuah pengantar terhadap konsep algoritma dan pemrograman,
menjelaskan sejarah dari algoritma dan contohnya, lalu menjelaskan pengertian
dari pemrograman, perbedaannya dari _coding_, serta berbagai tingkat bahasa
pemrograman yang dapat digunakan oleh programmer.

Modul ini menjelaskan sejarah bahasa pemrograman C, serta kedudukannya
di masa kini. Lalu modul ini menjelaskan alat-alat yang digunakan dalam
pemrograman bahasa C, apa saja yang perlu dipersiapkan sebelum memulai
pemrograman, serta cara pengaturan sistem Windows agar dapat melakukan
pemrograman dalam bahasa C.

**[\[ Informasi selebihnya dapat dilihat di
sini \]](Modul%2001%20Pengantar%20Algoritma%20dan%20Pemrograman)**

### 🇨 Modul 2 - Pemrograman Dasar C

Modul ini mengenalkan pembaca kepada konsep-konsep dasar pemrograman
menggunakan bahasa C, seperti sintaks dan _input output_ dari program C

**[\[ Informasi selebihnya dapat dilihat di
sini \]](Modul%2002%20Pemrograman%20Dasar%20C)**

### 💾 Modul 3 - Variabel, Konsanta, dan Tipe Data

Modul ini mengenalkan konsep variabel, tipe data variabel, dan variabel
konstanta, serta cara penggunaan dan kegunaannya dalam sebuah program. Selain
itu modul ini juga menunjukkan peraturan penamaan dari sebuah variabel dan
perbedaan sifat dari tipe-tipe data variabel

**[\[ Informasi selebihnya dapat dilihat di
sini \]](Modul%2003%20Variabel%20Konstanta%20dan%20Tipe%20Data)**

### 📐 Modul 4 - Operator

Modul ini menampilkan berbagai macam operator dalam C, diantaranya operator aritmatika, penegasan, pembandingan, logika, serta bitwise

**[\[ Informasi selebihnya dapat dilihat di sini \]](Modul%2004%20Operator)**

### ❔ Modul 5 - _Flow Control: Decision Making_

Modul ini menunjukkan kepada pembaca bagaimana sebuah program mengambil
keputusan dan memilih bagian mana yang harus dijalankan, pembaca diperkenalkan
dengan percabangan `if`, `if else`, `switch case`, `operator ternary` serta
percabangan bersarang.

**[\[ Informasi selebihnya dapat dilihat di sini
\]](Modul%2005%20Flow%20Control%20Decision%20Making)**

### 🔁 Modul 6 - _Flow Control: Looping_

Modul ini adalah lanjutan dari modul sebelumnya, kini mendiskusikan mengenai
perulangan, hal-hal seperti `for`, `while`, `do while`, dan perulangan
bersarang dibahas dalam modul ini

[Pembaca juga diberikan beberapa latihan pembuatan
program](Modul%206%20Flow%20Control%20Looping)

### 🔗 Modul 7 - _Array_

Modul ini mendiskusikan konsep _array_ di dalam C, termasuk cara dan ketentuan
deklarasinya, cara mengisinya, serta tipe-tipe dari _array_, termasuk _array_
satu dimensi, dua dimensi, dan multi dimensi. Modul ini juga menunjukkan
bagaimana sebuah `string` (atau teks) dalam C sebenarnya identik dengan _array_
bertipe `char`, serta beberapa fungsi yang dapat digunakan untuk
mengoperasikannya

[Latihan di modul ini termasuk](Modul%207%20Array)

### 📋 Modul 8 - Fungsi dan Prosedur

Modul ini menunjukkan pembaca bagaimana cara mendeklarasi, mendefinisi, dan
memanggil fungsi di dalam C. Serta detil-detil fungsi dan kegunaan lainnya,
seperti fungsi rekursif, cakupan dari sebuah variabel terhadap fungsi, dan
perbedaan tipe argumen dari fungsi

[Modul ini memiliki beberapa latihan
programming](Modul%208%20Fungsi%20dan%20Prosedur)

### 👇 Modul 9 - _Pointer_

Modul ini mengenalkan pembaca dengan konsep _pointer_ di dalam bahasa C. Sebuah
_pointer_ adalah tipe variabel yang berisi alamat memori ke variabel lain.
Sifat ini dapat digunakkan diantaranya untuk melakukan _pass by reference_,
dimana sebuah fungsi menerima _pointer_ dari sebuah variabel lain dan dapat
merubah data pada alamat itu secara langsung. _Pointer_ juga dapat digunakkan
sebagai titik akses elemen _array_.

[Beberapa tugas yang ada pada modul ini termasuk](Modul%209%20Pointer)

### 🖽 Modul 10 - Enumerasi dan Struktur

Modul ini membahas konsep struktur (_struct_) dan enumerasi (_enum_) pada C.
Struktur (ditandai dengan `struct`) adalah sebuah tipe data yang dapat dibuat
oleh programmer untuk memegang dan menyimpan berbagai macam variabel lain
dengan tipe-tipe data yang berbeda. Dimana enumerasi (ditandai dengan `enum`)
adalah cara bagi programmer untuk mendefinisikan sebuah kumpulan konstanta
integer yang dapat diakses dan digunakan dengan mudah.

[Dalam modul ini terdapat beberapa
latihan](Modul%2010%20Enumerasi%20dan%20Struktur)

### 📁 Modul 11 - _File Handling in C_

Modul ini menunjukkan bagaimana pembaca dapat memanipulasi file di dalam bahasa
C. Dimulai dari membuka, membaca, dan menutup kembali sebuah file.

**[\[ Informasi selebihnya dapat dilihat di sini
\]](Modul%2011%20File%20Handling%20in%20C)**

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

Atau apabila ingin membangun hanya satu program:

```sh
cmake --build build --target jobsheetX_Y
```

dimana `X_Y` adalah kode dari program yang ingin dibangun, nilai ini sama
dengan yang ada di nama file program tersebut

Contohnya, apabila ingin membangun program 3 dari modul 4 maka jalankan

```sh
cmake --build build --target jobsheet4_3
```
