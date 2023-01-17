//judul
#include<iostream>
using namespace std;
//kamus
int A, B, Kurang, Tambah, Kali, Bagi;
float z;

//deskripsi
int main(){


cout<<"Masukkan A: ";cin>>A;
cout<<"Masukkan B: ";cin>>B;
Kali= A * B;
Bagi= A / B;
Kurang= A - B;
Tambah= A + B;

if(Tambah % 2 == 0){cout<<"Hasil tambah A dan B: "<<Tambah<<" genap "<<endl;}
else{cout<<"hasil a + b: "<<Tambah<<" ganjil "<<endl;}

cout<<endl;
if(Kurang % 2 == 0){cout<<"Hasil A - B: "<<Kurang<<" genap "<<endl;}
else{cout<<"hasil a - b: "<<Kurang<<" ganjil "<<endl;}


cout<<endl;
if(Kali % 2 == 0){cout<<"Hasil A x B: "<<Kali<<" genap "<<endl;}
else{cout<<"hasil a x b: "<<Kali<<" ganjil "<<endl;}

cout<<endl;
if(Bagi % 2 == 0){cout<<"Hasil A : B = "<<Bagi<<" genap "<<endl;}
else{cout<<"hasil a : b = "<<Bagi<<" ganjil "<<endl;}

return 0;
}
