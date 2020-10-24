#include <stdio.h>

int main()
{
  int pilihan;
  int flag = 1;
  char menu[] =  "\n1. Insert\n"\
                 "2. Update\n"\
                 "3. Delete\n"\
                 "4. Exit\n";
  // eksekusi setidaknya 1 kali
  do {
    printf("%s", menu);
    printf("Masukkan menu: ");
    scanf("%d", &pilihan);
    switch (pilihan) {
      case 1: 
        printf("\nAnda memilih menu Insert\n");
        break;
      case 2: 
        printf("\nAnda memilih menu Update\n");
        break;
      case 3: 
        printf("\nAnda memilih menu Delete\n");
        break;
      case 4: 
        printf("\nAnda memilih menu Exit"\
            "...Keluar program\n");
        flag = 0;
        break;
      default:
        puts("\nInput tidak valid!");
        break;
    }
  } while (flag);
}
