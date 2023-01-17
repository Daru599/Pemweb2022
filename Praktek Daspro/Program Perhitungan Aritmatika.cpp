#include<iostream.h>
#include<conio.h>

main()
{
   int tambah, kurang, kali;
   float bagi, bil1, bil2;
   cout<<"Masukkan Bilangan Pertama : ";
   cin>>bil1;
   cout<<"Masukkan Bilangan Kedua : ";
   cin>>bil2;
   tambah = bil1+bil2;
   kurang = bil1-bil2;
   kali = bil1*bil2;
   bagi = bil1/bil2;
   cout<<bil1<<"+"<<bil2<<"="<<tambah<<endl;
   cout<<bil1<<"-"<<bil2<<"="<<kurang<<endl;
   cout<<bil1<<"*"<<bil2<<"="<<kali<<endl;
   cout<<bil1<<"/"<<bil2<<"="<<bagi<<endl;
   getch () ;
}

