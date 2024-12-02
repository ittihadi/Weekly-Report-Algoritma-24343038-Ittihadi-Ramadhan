### 📐 Modul 4 - Operator

Operator adalah simbol yang digunakan untuk melakukan sebuah operasi tertentu.
Operator di dalam C dibagi menjadi tiga berdasarkan jumlah *operand*nya, yaitu
"Unary" (satu operand), "Binary" (dua operand), dan "Ternary" (tiga operand).
Secara garis besar, operator pada C masuk ke enam kelompok, yaitu:

1. Operator aritmatika, terdiri dari `+` (penjumlahan), `-` (pengurangan),
   `*` (perkalian), `/` (pembagian), dan `%` (modulo/hasil bagi)
2. Operator _bitwise_, yang beroperasi pada bit dari angka, terdiri dari `&`,
   (_bitwise AND_), `|` (_bitwise OR_), `^` (_bitwise XOR_), `~` (_bitwise
   NOT_/komplemen), `>>` (_right shift_), dan `<<` (_left shift_)
3. Operator _assignment_ ("penugasan"), merupakan operator-operator yang
   mengisi nilai dari salah satu *operand*nya, basis dari operator-operator
   ini adalah operator `=` (pengisian nilai), dengan semua operator lain berupa
   gabungan operator aritmatika atau operator bitwise (kecuali _NOT_) dengan
   operator `=`, yaitu: `+=`, `-=`, `*=`, `/=`, `%=`, `&=`, `|=`, `^=`, `>>=`,
   dan `<<=`, semua operator ini sama dengan bentuk `a = a op b` dimana `op`
   adalah operator yang digabungkan
4. Operator pembanding (_comparison operator_), adalah operator yang memberi
   pernyataan benar atau salah berdasarkan relasi dua *operand*nya, yaitu: `>`,
   `<`, `>=`, `<=`, `==`, dan `!=`, untuk "lebih dari", "kurang dari", "lebih
   atau sama", "kurang atau sama", "sama", dan "tidak sama"
5. Operator logika (_logical operator_), operator ini membandingkan dua nilai
   benar atau salah dan mengembalikan sebuah nilai benar atau salah, yaitu `&&`
   (_logical AND_), `||` (_logical OR_), `!` (negasi/_NOT_)
6. Operator lainnya, di luar dari lima kelompok terakhir terdapat beberapa
   operator lain, termasuk `&` untuk mengambil alamat memori sebuah variabel,
   `*` untuk mengambil nilai pada suatu alamat memori, `? :` (ternary) untuk
   memberi nilai berdasarkan pernyataan benar atau salah, `++` untuk menambah
   nilai suatu variabel dengan satu, dan `--` untuk mengurang nilai suatu
   variabel dengan satu

Latihan di modul ini:

1. **Program penghitung waktu dari detik**

   <div align='center'>
      <img src="/assets/Modul_4_Jobsheet_1.gif" width="540" />
   </div>

   program ini meminta masukkan dari pengguna dalam bentuk detik dan
   menggunakan operasi modulo dan pembagian integer untuk menghitung dan
   mengeluarkan jumlah waktu dalam bentuk jajm, menit, dan detik

2. **Program harga barang**
   
   <div align='center'>
      <img src="/assets/Modul_4_Jobsheet_2.gif" width="540" />
   </div>

   program ini meminta beberapa data, seperti nama pembeli, nama barang, harga
   satuan, dan jumlah barang yang dibeli, kemudian mengeluarkan jumlah harga
   total yang dibeli

3. **Program penghitung nilai akhir**

   <div align='center'>
      <img src="/assets/Modul_4_Jobsheet_3.gif" width="540" />
   </div>

   program ini meminta pengguna untuk memasukkan data nilai presensi, praktek,
   uts, dan uas, lalu mengeluarkan nilai akhir dari pengguna menggunakan bobot
   tertentu

4. **Program rental film**

   <div align='center'>
      <img src="/assets/Modul_4_Jobsheet_4.gif" width="540" />
   </div>

   program ini meminta masukkan jumlah jam rental dari pengguna dalam bentuk
   angka, kemudian dengan ketentuan tarif tertentu, program mengeluarkan jumlah
   uang yang harus dibayar jika pengguna meminjam untuk sekian lama

