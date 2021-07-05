# Low Level Calculator

Sebuah program kalkulator sederhana yang menjalankan semua operasi perhitungan secara low-level. 

Struktur data pada program ini terdiri dari 4 register, yaitu `reg1` sebagai accumulator, `reg2` dan `reg3` sebagai general-purpose register dan `reg4` sebagai flag register.

Operasi-operasi yang didukung oleh program ini yaitu 

1. '\*' (perkalian), contoh: 2*2 akan menghasilkan 4.
2. '/' (pembagian integer), contoh: 2/2 akan menghasilkan 1, 3/2 juga akan menghasilkan 1.
3. '^' (pangkat), contoh: 2^2 akan menghasilkan 4.
4. '+' (penjumlahan), contoh: 2+2 akan menghasilkan 4.
5. '-' (pengurangan), contoh: 2-2 akan menghasilkan 0.
6. '%' (modulo), contoh: 2%2 akan menghasilkan 0.
7. 'r' (akar pangkat 2 dengan pembulatan), contoh: r9 akan menghasilkan 3, r10 juga akan menghasilkan 3.

Presedensi operator adalah pangkat dan akar dikerjakan terlebih dahulu, sisanya mengikuti aturan kedatangan. 

## Compile
Untuk melakukan compile pada source code program jalankan perintah berikut:
```
gcc -o main calculator.c
```

## Run 
Program dapat dijalankan dengan perintah berikut:
```
./main <filename>
```
Format penulisan file yaitu semua operasi ditulis dalam satu baris. setiap operator dan operand harus diberi spasi, kecuali untuk operator 'r'.

Pada repositori ini sudah disediakan beberapa file uji yang siap pakai pada folder `test`. Contohnya soal nomor 2 ada pada file `test2.txt` dan dapat dijalankan dengan perintah berikut.
```
./main test/test2.txt
```