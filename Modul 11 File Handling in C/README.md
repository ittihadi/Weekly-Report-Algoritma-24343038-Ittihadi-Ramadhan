### 📁 Modul 11 - _File Handling in C_

Dalam C, file dapat dibuka menggunakan fungsi `fopen` dan ditutup menggunakan
`fclose`, `fopen` meminta lokasi dari file yang ingin dibuka serta mode
pembukaan file, mode ini bisa berupa "baca", "tulis", "tambah", dan lainnya,
fungsi ini kemudian mengembalikan sebuah pointer `FILE` untuk file yang baru
saja dibuka.

Pointer ini dapat digunakan dengan fungsi-fungsi manipulasi data seperti
`fprintf`, `fscanf`, `fgets`, dan lain-lain. Setelah manipulasi data selesai
dilakukan, file ditutup menggunakan fungsi `fclose` dengan memberikannya
pointer file yang ingin ditutup sebagai parameternya

Latihan di modul ini:

1. **Program biodata mahasiswa**, menggunakan perulangan, program ini meminta
   pengguna untuk memasukkan biodata mahasiswa, kemudian menulis data tersebut
   ke dalam sebuah file dengan nama `datamahasiswa.txt`, setelah tiap
   perulangan program juga memastikan apakah pengguna masih ingin memasukkan
   data baru lagi atau tidak, jika tidak maka program menutup file dan keluar

