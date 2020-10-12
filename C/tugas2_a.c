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
  int bulan[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // bukan kabisat
  int nomor_bulan;

  printf("nomor bulan: ");
  scanf("%d", &nomor_bulan);
  if (nomor_bulan < 1 || nomor_bulan > 12) {
    fputs("Nomor bulan tidak valid.", stderr);
  } else {
    printf("jumlah hari: %d\n", bulan[nomor_bulan-1]);
  }
}
