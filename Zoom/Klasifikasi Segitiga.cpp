#include <iostream>
using namespace std;
int a, t, m; // alas, tinggi, miring
string segitiga, sisi; // define tringular type and side type
main(){
cout<<"masukkan alas: ";cin>>a;
cout<<"masukkan tinggi: ";cin>>t;
cout<<"masukkan sisi miring: ";cin>>m;
if((m*m)==(a*a)+(t*t)){segitiga = "siku";}
 else if((m*m)>=(a*a)+(t*t)){segitiga = "tumpul";}
 else if((m*m)<=(a*a)+(t*t)){segitiga = "lancip";}

 if((a == t)&&(t == m)){sisi = "sama sisi";}
 else if((a != t)&&(t != m)){sisi = "sembarang";}
 else if((a != t)&&(t == m)){sisi = "sama kaki";}

 cout<<"alas: "<<a<<" tinggi "<<t<<" miring "<<m<<endl;
 cout<<"segitiga: "<<segitiga<<", "<<sisi;
}
