# Singly Linked List (Modul 4)

Implementasi ADT Singly Linked List dalam C++ untuk praktikum Struktur Data, Modul 4 (Singly Linked List Bagian Pertama). Elemen list menyimpan data bertipe `int` dan dihubungkan dengan pointer `next`.

## Struktur File

| File | Isi |
|------|-----|
| `Singlylist.h` | Deklarasi tipe (`infotype`, `address`, `ElmList`, `List`) dan prototype semua primitif |
| `Singlylist.cpp` | Implementasi semua primitif |
| `main.cpp` | Program uji untuk mencoba semua operasi |

## Operasi yang Tersedia

| Operasi | Fungsi | Keterangan |
|---------|--------|------------|
| Create | `CreateList(L)` | Membuat list kosong (`First = Nil`) |
| Alokasi | `alokasi(x)` | Membuat elemen baru dengan info `x` |
| Dealokasi | `dealokasi(P)` | Membebaskan memori elemen `P` |
| Insert | `insertFirst(L, P)` | Menyisipkan elemen `P` di awal list |
| View | `printInfo(L)` | Menampilkan semua info dalam list |
| Search | `findElm(L, x)` | Mengembalikan address elemen dengan info `x`, atau `Nil` jika tidak ada |
| Delete | `delFirst(L, P)` | Melepas elemen pertama, address-nya disimpan di `P` |
| Delete | `delLast(L, P)` | Melepas elemen terakhir, address-nya disimpan di `P` |
| Delete | `delAfter(L, P, Prec)` | Melepas elemen setelah `Prec`, address-nya disimpan di `P` |
| Delete | `delAll(L)` | Menghapus dan mendealokasi seluruh elemen |
| Update | `updateElm(L, lama, baru)` | Mengganti info `lama` menjadi `baru` (mencari dengan `findElm`) |

> `delFirst`, `delLast`, dan `delAfter` hanya melepas elemen dari list. Panggil `dealokasi(P)` sesudahnya untuk membebaskan memori.

## Cara Compile dan Run

### Command line (g++)

```bash
g++ main.cpp Singlylist.cpp -o singlylist
./singlylist
```

Di Windows, jalankan dengan `singlylist.exe`.

### Code::Blocks

1. Buat project baru: File > New > Project > Console application > C++.
2. Tambahkan `Singlylist.h`, `Singlylist.cpp`, dan `main.cpp` ke project.
3. Pastikan opsi "all in build target" tercentang untuk setiap file.
4. Build and Run dengan `F9`.

## Contoh Output

```
List awal        : 9 12 8 0 2 
Setelah delFirst : 12 8 0 2 
Setelah delLast  : 12 8 0 
Setelah delAfter (setelah 12): 12 0 
Setelah update 0 -> 5 : 12 5 
Setelah delAll   : (list kosong)
```

List awal berurutan `9 12 8 0 2` karena `insertFirst` selalu menaruh elemen baru di depan, sehingga elemen yang dimasukkan terakhir menjadi elemen pertama.

## Catatan

- `delLast` menangani kasus khusus saat list hanya berisi satu elemen.
- `delAfter` mengembalikan `Nil` pada `P` jika `Prec` bernilai `Nil` atau tidak ada elemen setelahnya.
- `updateElm` menampilkan pesan jika elemen yang dicari tidak ditemukan.
