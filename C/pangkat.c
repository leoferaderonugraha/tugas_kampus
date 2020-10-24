/* Judul  : Implementasi fungsi eksponen
 * Nama   : Leo Feradero Nugraha
 * Kelas  : D
 * NPM    : 0620101063
 */

#include <stdio.h>
#include <math.h>

/* eksponen positif:
 *    (x = x * (nilai awal x)) * n-1 kali
 * eksponen negatif:
 *    1 / (x = x * (nilai awal x)) * n-1 kali
 */

// NOTE: compile dengan library math (-lm)

// untuk bilangan pangkat negatif,
// menggunakan tipe data double (double precision floating number).
double eksponen(int angka, int pangkat)
{
  if (pangkat < 0){
    // ubah ke positif untuk perulangan
    pangkat *= -1;
    // rekursif
    return 1.0 / eksponen(angka, pangkat);

  } else if (pangkat == 0) {
    return 1;

  } else {
    // Note:  looping ini karena variable pangkat
    //        tidak terpakai selain untuk iterator
    for (int nilai_awal = angka; ((pangkat--) - 1);) {
      angka *= nilai_awal;
    }
    return angka;
  }
}

int main()
{
  int angka;
  // edge-case test
  // pencegahan jika compiler menggunakan unsigned
  // secara default
  signed int pangkat;

  printf("Masukkan angka: ");
  scanf("%d", &angka);
  printf("Masukkan pangkat: ");
  scanf("%d", &pangkat);
 
  printf("%d pangkat %d = ", angka, pangkat);

  double hasil = eksponen(angka, pangkat);
  
  // check jika terdapat angka di belakang koma
  if (fmod(hasil, 1)) {
    // 3 digit di belakang koma
    // (tampilkan presisi hasil rendah)
    printf("%.3lf\n", hasil);
  } else {
    // jangan tampilkan jika tidak ada
    printf("%.0lf\n", hasil);
  }
}
