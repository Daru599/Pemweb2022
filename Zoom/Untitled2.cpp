#include<iostream>
using namespace std;
int main()
{
   int a, b, kali,bagi,tambah,kurang,mdls;
   cout<<"Program Perhitungan Aritmatika - Blues Pedia"<<endl;
   cout<<"Masukkan Nilai A = ";
   cin>>a;

   cout<<"Masukan Nilai B = ";
   cin>>b;
   cout<<endl;
   cout<<endl;

   tambah = a + b;
   kurang = a - b;
   kali = a * b;
   bagi = a / b;
   mdls = a % b;

   cout<<"Hasil a + b adalah "<<tambah<<endl;
   cout<<"Hasil a - b adalah "<<kurang<<endl;
   cout<<"Hasil a * b adalah "<<kali<<endl;
   cout<<"Hasil a / b adalah "<<bagi<<endl;
   cout<<"Hasil a % b adalah "<<mdls<<endl;
}
