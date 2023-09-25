#include <stdio.h>
#include <conio.h>
int makanan (int n)
{
if (n==1)
printf("Mie Ayam\t\t\tRp. 7000,-");
else if (n==2)
printf("Bakso Rudal\t\t\tRp. 9000,-"); 
else
printf("Nasi Goreng\t\t\tRp. 8000,-"); 
return 0;
}
int minuman (int n)
{
if (n==1)
printf("Es Teh\t\t\tRp. 2000,-");
else if (n==2)
printf("Es Jeruk\t\t\tRp. 3000,-"); 
else
printf("Es Susu\t\t\tRp. 2500,-"); 
return 0;
}
int total (int a, int b)
{
int j;
if (a==1&&b==1)
j = 9000;
else if (a==1&&b==2)
j = 10000; 
else if (a==1&&b==3)
j = 9500;
else if(a==2&&b==1)
j = 11000;
else if (a==2&&b==2)
j = 12000;
else if (a==2&&b==3)
j = 11500;
else if (a==3&&b==1)
j = 10000;
else if (a==3&&b==2)
j = 11000;
else j = 10500;
return (j);
}
int kembali (int a, int b)
{
int c; c = (a - b);
return c;
}
main()
{
int x, y, bayar, total_semua;
printf("\n");
printf("\t\t\tWARUNG MAKAN AWAN\n");
printf("---------------------------------------------------------------------\n");
printf("Pilihan Makanan\n\n");
printf("1. Mie Ayam\t\t\t\t Rp. 7.000,-\n"); printf("2. Bakso Rudal\t\t\t\t Rp. 9.000,-\n");
printf("3. Nasi Goreng\t\t\t\t Rp. 8.000,-\n\n"); printf("Pilihan Minuman\n\n"); 
printf("1. Es Teh\t\t\t\t Rp. 2.000,-\n"); printf("2. Es Jeruk\t\t\t\t Rp. 3.000,-\n");
printf("3. Es Susu\t\t\t\t Rp. 2.500,-\n\n");
printf("--------------------------------------------------------------------\n");
printf("Makanan yang anda pilih : "); scanf("%d", &x);
printf("Makanan yang anda pilih : ");
makanan(x);
printf("\n");
printf("Minuman yang anda pilih : ");
scanf("%d", &y);
printf("Minuman yang anda pilih : ");
minuman(y);
printf("\n");
printf("---------------------------------------------------------------------\n");
total_semua = total (x, y);
printf("Total semua\t\t\t\t\t\tRp. %d", total_semua, ",-");
printf("\nPembayaran\t\t\t\t\t\tRp. "); scanf("%d", &bayar); printf("\t\t\t\t\t\t\t           \n");
printf("Kembalian\t\t\t\t\t\tRp.   %d",   kembali   (bayar, total_semua), ",-");
printf("\n");
printf("---------------------------------------------------------------------\n");
getche();
}
