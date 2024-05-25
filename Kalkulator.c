#include <stdio.h>
#include <math.h>

int main () {

char ulg;

do {
int pilih;
double a, b;

    printf("=== \x1b[33mSELAMAT DATANG DI KALKULATOR \x1b[0m===\n\n");
    printf("====================================\n\n");
    printf("Silahkan Pilih Kalkulator yang Tersedia di Bawah Ini:\n\n");
    printf("1. a + b ...\n");
    printf("2. a - b ...\n");
    printf("3. a × b ...\n");
    printf("4. a ÷ b ...\n");
    printf("5. √a\n");
    printf("6. ³√a\n");
    printf("7. a²\n");
    printf("8. a^n\n\n");
    printf("====================================\n\n");
    printf("Pilih No. 1 s/d 8: ");
    scanf("%d", &pilih);

    if(pilih == 1 || pilih == 2 || pilih == 3 || pilih == 4 || pilih == 5 || pilih == 6 || pilih == 7 || pilih == 8) {
    switch (pilih) {
      case 1:
      printf("\n");
      printf("====================================\n\n");
      printf("Masukkan Angka Pertama:");
      scanf("%lf", &a);
      printf("Masukkan Angka Kedua:");
      scanf("%lf", &b);
      
      double hasilTambah = a + b;
      
      printf("\n\t\x1b[32mHasil: %.2lf\x1b[0m\n", hasilTambah);
      printf("\n====================================\n\n");
      break; 
        
      case 2: 
      printf("\n");
      printf("====================================\n\n");
      printf("Masukkan Angka Pertama:");
      scanf("%lf", &a);
      printf("Masukkan Angka Kedua:");
      scanf("%lf", &b);
      
      double hasilKurang = a - b;
      
      printf("\n\t\x1b[32mHasil: %.2lf\x1b[0m\n", hasilKurang);
      printf("\n====================================\n\n");
      break; 
      
      case 3: 
      printf("\n");
      printf("====================================\n\n");
      printf("Masukkan Angka Pertama:");
      scanf("%lf", &a);
      printf("Masukkan Angka Kedua:");
      scanf("%lf", &b);
      
      double hasilKali = a * b;
      
      printf("\n\t\x1b[32mHasil: %.2lf\x1b[0m\n", hasilKali);
      printf("\n====================================\n\n");
      break;  
       
      case 4: 
      printf("\n");
      printf("====================================\n\n");
      printf("Masukkan Angka Pertama:");
      scanf("%lf", &a);
      printf("Masukkan Angka Kedua:");
      scanf("%lf", &b);
      
      double hasilBagi = a / b;
      
      printf("\n\t\x1b[32mHasil: %.2lf\x1b[0m\n", hasilBagi);
      printf("\n====================================\n\n");
      break;
      
      case 5: 
      printf("\n");
      printf("====================================\n\n");
      printf("Masukkan Angka:");
      scanf("%lf", &a);
      
      if(a >= 0) {
      
      double hasilAkar = sqrt(a);
      
      printf("\n\t\x1b[32mHasil: %.2lf\x1b[0m\n", hasilAkar);
      printf("\n====================================\n\n");
      } else {
      
      double bilReal = 0;
      double bilImajiner = sqrt(fabs(a));
      
      printf("\n\t\x1b[32mHasil: %.2lfi\x1b[0m\n", bilImajiner);
      printf("\n====================================\n\n");
      }
      
      break;   
       
      case 6:
      printf("\n");
      printf("====================================\n\n");
      printf("Masukkan Angka:");
      scanf("%lf", &a);
      
      if(a >= 0) {
      
      double hasilAkar = cbrt(a);
      
      printf("\n\t\x1b[32mHasil: %.2lf\x1b[0m\n", hasilAkar);
      printf("\n====================================\n\n");
      } else {
      
      double bilReal = 0;
      double bilImajiner = cbrt(fabs(a));
      
      printf("\n\t\x1b[32mHasil: %.2lfi\x1b[0m\n", bilImajiner);
      printf("\n====================================\n\n");
      }
      
      break;       
        
      case 7: 
      printf("\n");
      printf("====================================\n\n");
      printf("Masukkan Angka:");
      scanf("%lf", &a);
      
      double hasilKuadrat = a * a;
      
      printf("\n\t\x1b[32mHasil: %.2lf\x1b[0m\n", hasilKuadrat);
      printf("\n====================================\n\n");
      break;    
        
      case 8: 
      printf("\n");
      printf("====================================\n\n");
      printf("Masukkan Angka:");
      scanf("%lf", &a);
      printf("Masukkan Nilai Eksponen:");
      scanf("%lf", &b);
      
      long double hasilPangkat;
      
      if (b < 0) {
      hasilPangkat = 1 / pow(a, -b);
      } else {
      hasilPangkat = pow(a, b);
      }
      
      printf("\n\t\x1b[32mHasil: %.4Lf\x1b[0m\n", hasilPangkat);
      printf("\n====================================\n\n");
      break;      
        
        }
    
    } else {
    printf("\nPilihan Tidak Valid. Silahkan Cek Kembali.\n");
    }
    
    printf("\nKetik 'y' untuk melanjutkan atau ketik apa saja untuk berhenti: ");
    scanf(" %c", &ulg);
    printf("\n\n");
    
    } while(ulg == 'y' || ulg == 'Y');
    
    return 0;
}