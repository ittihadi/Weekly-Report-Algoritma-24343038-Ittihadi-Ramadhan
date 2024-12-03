### 👇 Modul 9 - _Pointer_

Sebuah `pointer` adalah tipe variabel yang berisi lokasi variabel lain di dalam
memori. Deklarasi _pointer_ dalam C adalah `tipe *identifier` dengan `tipe`
sama dengan tipe dari data yang ditunjuk oleh _pointer_ tersebut. Sebuah
_pointer_ juga dapat didapatkan dari suatu variabel dengan operator `&`
(_reference_), dengan sintaks `&variabel`. Nilai yang ditunjuk oleh pointer
dapat diakses dengan operator `*` (_dereference_), dengan sintaks `*pointer`.

_Pointer_ dapat digunakan sebagai argumen fungsi untuk melakukan
`pass-by-reference`. Atau untuk mengakses _array_ (karena sebuah _array_ pada
dasarnya adalah pointer dan ukuran) dengan melakukan aritmatika _pointer_ dan
_dereference_. Aritmatika _pointer_ adalah aksi menambah/mengurang nilai
pointer dengan angka biasa untuk memindahkan lokasi yang ditunjuknya.

Latihan di modul ini:

1. **Program mencetak kata dari belakang**

   <div align='center'>
      <img src="/assets/Modul_9_Jobsheet_1.gif" width="540" />
   </div>

   program ini menggunakan pointer untuk mengakses sebuah kata dari posisi
   akhir dan mencetak sejumlah baris dimana tiap baris dimulai satu karakter
   lebih ke depan

2. **Program mencetak kalimat terbalik**
   
   <div align='center'>
      <img src="/assets/Modul_9_Jobsheet_2.gif" width="540" />
   </div>

   program ini mengambil masukan kalimat dari pengguna dan menggunakan pointer
   mencetak kembali kata tersebut dari akhir sampai awal

3. **Program pengujian sifat pointer**

   <div align='center'>
      <img src="/assets/Modul_9_Jobsheet_3.gif" width="540" />
   </div>

   program ini memiliki dua kasus yang memiliki beberapa pertanyaan mengenai
   nilai-nilai dari variabel yang hasilnya dicetak ke layar

