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
  int thr;
  printf("lama bekerja (tahun): ");
  scanf("%d", &thr);

  if  (thr < 5) {
    puts("THR: 1.000.000");
  } else if (thr >= 5 && thr <= 10) {
    puts("THR: 2.000.000");
  } else if (thr > 10) {
    puts("THR: 3.000.000");
  } else {
    puts("Input invalid!");
  }
}
