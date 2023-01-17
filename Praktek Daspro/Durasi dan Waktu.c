//judul

#include<iostream>
using namespace std;
//kamus
int JAwal, MAwal, DAwal;
int DetikAwal;
int JAkhir;
int MAkhir;
int DAkhir;
int DetikAkhir;
int durasi;
int JJ,MM,DD;
//deskripsi
int main() {
//menhitung detik akhir-detik awal
//Jam= durasi:3600
//menit=durasi mod 3600
//detik= menit mod 60
cout<<"masukkan jAwal ... 0 s/d 23...";cin>>JAwal;
if(JAwal <= 23){cout<<"ok"<<endl;}else{return 0;}
cout<<"masukkan menit ... 0 s/d 59...";cin>>MAwal;
if(MAwal <= 59){cout<<"ok...."<<endl;}else{return 0;}
cout<<"masukkan detik ... 0 s/d 59...";cin>>DAwal;
if(DAwal <= 59){cout<<"ok"<<endl;}else{return 0;}

cout<<"=================================================================================================="<<endl;
DetikAwal = (JAwal * 3600) + (MAwal * 60) + DAwal;
cout<<DetikAwal;cout<<" detik "<<endl;
cout<<"=================================================================================================="<<endl;
cout<<"masukkan jam ... 0 s/d 23...";cin>>JAkhir;
if(JAkhir <= 23){cout<<JAwal<<endl;}else{return 0;}
cout<<"masukkan menit ... 0 s/d 59...";cin>>MAkhir;
if(MAkhir <= 59){cout<<"ok...."<<endl;}else{return 0;}
cout<<"masukkan detik ... 0 s/d 59...";cin>>DAkhir;
if(DAkhir <= 59){cout<<"ok"<<endl;}else{return 0;}

DetikAkhir = (JAkhir * 3600) + (MAkhir * 60) + DAkhir;

durasi = DetikAkhir - DetikAwal;
if(durasi < 0){cout<<"kamu salah input"<<endl;return 0;}
else if(durasi>= 0){cout<<"__________________________________________________________________________________________________"<<endl;}

JJ= durasi/3600;
MM= (durasi%3600)/60;
DD= MM % 60;

cout<<" waktu awal: "<<JAwal<<" jam "<<MAwal<<" menit: "<<DAwal<<" detik: ";
if((JAwal >= 0)&&(JAwal< 12)){cout<<" AM ";}else if((JAwal >= 12 )&&(JAwal <= 23)){cout<<" PM";}
cout<<endl;
cout<<endl;
cout<<" waktu ahkir: "<<JAkhir<<" jam "<<MAkhir<<" menit: "<<DAkhir<<" detik: ";
if((JAkhir >= 0)&&(JAkhir< 12)){cout<<" AM ";}else if((JAkhir >= 12 )&&(JAkhir <= 23)){cout<<" PM";}
cout<<endl;
cout<<"=================================================================================================="<<endl;
cout<<"=================================================================================================="<<endl;

cout<<"durasi anda adalah:";cout<<JJ;cout<<" Jam ";cout<<MM;cout<<" Menit ";cout<<DD;cout<<" detik ";

}
