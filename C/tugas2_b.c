/*
 * Nama       : Leo Feradero Nugraha
 * Kelas      : Informatika 2020 - D
 * NPM        : 0620101063
 * Keterangan : Mohon maaf pak, pada saat ini saya tidak memiliki kertas maupun pena untuk menuliskan algoritma,
 *              saya mohon dengan sangat.
 */

#include <stdio.h>

int main()
{
  int pilihan;
  int angka1, angka2;


  char menu[] = "Kalkulator\n"
                "1. Tambah\n"
                "2. Kurang\n"
                "3. Kali\n"
                "4. Bagi\n"
                "5. Keluar\n";
  
  printf("%s", menu);
  printf("Masukkan nomor menu: ");
  scanf("%d", &pilihan);

  switch(pilihan) {
    case 1:
      printf("Masukkan angka 1 : ");
      scanf("%d", &angka1);
      printf("Masukkan angka 2 : ");
      scanf("%d", &angka2);
      printf("Hasil: %d\n", (angka1 + angka2));
      break;
    case 2:
      printf("Masukkan angka 1 : ");
      scanf("%d", &angka1);
      printf("Masukkan angka 2 : ");
      scanf("%d", &angka2);
      printf("Hasil: %d\n", (angka1 - angka2));
      break;
    case 3:
      printf("Masukkan angka 1 : ");
      scanf("%d", &angka1);
      printf("Masukkan angka 2 : ");
      scanf("%d", &angka2);
      printf("Hasil: %d\n", (angka1 * angka2));
      break;
    case 4:
      printf("Masukkan angka 1 : ");
      scanf("%d", &angka1);
      printf("Masukkan angka 2 : ");
      scanf("%d", &angka2);
      printf("Hasil: %d\n", (angka1 / angka2));
      break;
    case 5:
    default: break;
  }
}
