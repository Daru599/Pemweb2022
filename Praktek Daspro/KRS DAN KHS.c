#include<iostream>
#include<string.h>
//judul: Krs dan KHS Mahasiswa
//Kamus
using namespace std;
string nama;
string NIM1;
string NIM2;
string NIM3;
//---------------------------------------------
int kunci1;
int kunci2;
int kunci3;
int kunci4;
int kunci5;
int kunci6;
int kunci7;

//---------------------------------
string matkul;
string matkul1;
string matkul2;
string matkul3;
string matkul4;
string matkul5;
string matkul6;
//-------------------------
string TP;
int sks;
int sks1;
int sks2;
int sks3;
int sks4;
int sks5;
int sks6;
int sumsks;
//---------------------------------
float N;
float N1;
float N2;
float N3;
float N4;
float N5;
float N6;
float sumN;
//----------------
float akm;
float ip;
//-----------------------------------
string huruf;
string hIP;
//------------------------------
int a;
int b;
int c;
int d;
int e;
int f;
//------------------------
// Algoritma
int main(){


cout<<"----------KRS UDINUS------------"<<endl;
cout<<"--------Fakultas Ilmu Komputer---------"<<endl;
cout<<"masukkan nama: ";getline(cin, nama);
cout<<"nama: "<<nama<<endl;
cout<<"masukkan NIM 1: ";cin>>NIM1;
cout<<"masukkan NIM 2: ";cin>>NIM2;
cout<<"masukkan NIM 3: ";cin>>NIM3;
cout<<"NIM: "<<NIM1<<"."<<NIM2<<"."<<NIM3<<endl;
if(NIM1 == "A11"){cout<<"Prodi: TI"<<endl;}
else if(NIM1 == "A12"){cout<<"Prodi: SI"<<endl;}
else if(NIM1 == "A14"){cout<<"Prodi: DKV"<<endl;}

cout<<"Matkul 1: ";
cin>>matkul;

 if((matkul=="Kalkulus")||(matkul=="kalkulus")||(matkul=="KALKULUS")){TP = "T";sks=4;
kunci1=1;
 }

    else if((matkul=="Pengantar Teknologi Informasi")||(matkul=="pengantar teknologi informasi")||(matkul=="PENGANTAR TEKNOLOGI INFORMASI")||(matkul=="PTI")||(matkul=="Pti")||(matkul=="pti")){
            TP = "T";sks=2;kunci1=2;
            }
    else if((matkul=="MatematikaDiskrit")||(matkul=="matematikadiskrit")||(matkul=="MATEMATIKADISKRIT")||(matkul=="MtkDiskrit")||(matkul=="mtkdiskrit")||(matkul=="Diskrit")||(matkul=="diskrit")||(matkul=="DISKRIT")){
         TP = "T";sks=3;kunci1=3;
    }
    else if((matkul=="Pemweb")||(matkul=="PemWeb")||(matkul=="pemweb")||(matkul=="PEMWEB")||(matkul=="Pemograman Web")){
        TP="P";sks=2;kunci1=4;
    }
    else if((matkul=="DasPro")||(matkul=="DASPRO")||(matkul=="Daspro")||(matkul=="daspro")||(matkul=="DasarPemograman")||(matkul=="dasarpemograman"))
        {
        TP="TP";sks=4;kunci1=5;
    }
    else if((matkul=="DDK")||(matkul=="ddk")||(matkul=="Dasar Dasar Komputasi")||(matkul=="Dasar-Dasar Komputasi")||(matkul=="dasar dasar kmputasi")||(matkul=="dasar-dasar komputasi")){
     TP="P";sks=2;kunci1=6;
    }
    else if((matkul=="Orarkom")||(matkul=="OrArKom")||(matkul=="ORARKOM")||(matkul=="orarkom")||(matkul=="Organisasi dan Arsitektur Komputer")||(matkul=="organisasi dan arsitektur komputer")||(matkul=="ORGANISASI DAN ARSITEKTUR KOMPUTER")){
        TP="T";sks=3;kunci1=7;
    }

    if((TP=="T")||(TP=="P")){
            cout<<"Masukkan NIlai Tugas: "<<endl;cin>>a;
            cout<<"Masukkan Nilai Ujian Tengah Semester: "<<endl;cin>>b;
            cout<<"Masukkan Nilai Ujian Akhir Semester: "<<endl;cin>>c;
        N=(0.3*a)+(0.3*b)+(0.4*c);
        if((a<=100)&&(b<=100)&&(c<=100)){

            if((N>=90)&&(N<=100)){huruf = "A";}
             else if((N>=85)&&(N<90)){huruf = "AB";}
            else if((N>=70)&&(N<85)){huruf = "B";}
            else if((N>=55)&&(N<70)){huruf = "C";}
             else if((N>=40)&&(N<55)){huruf = "D";}
              else if(N<40){huruf = "E";}
        }
        else{cout<<"nilai anda kelebihan bobot";return 0;}

    }

        else if(TP=="TP"){
            cout<<"Masukkan Nilai Tugas: "<<endl;cin>>a;
            cout<<"Masukkan Nilai Praktek: "<<endl;cin>>b;
            cout<<"Masukkan Nilai Ujian Pratek UTS: "<<endl;cin>>c;
            cout<<"Masukkan Nilai Ujian Teori UTS: "<<endl;cin>>d;
            cout<<"Masukkan Nilai Ujian Praktek UAS: "<<endl;cin>>e;
            cout<<"Masukkan Nilai Ujian Teori UAS: "<<endl;cin>>f;
            N=(0.15*a)+(0.15*b)+(0.15*c)+(0.15*d)+(0.2*e)+(0.2*f);
            if((a<=100)&&(b<=100)&&(c<=100)&&(d<=100)&&(e<=100)&&(f<=100)){
                    if((N>=90)&&(N<=100)){huruf = "A";}
                    else if((N>=85)&&(N<90)){huruf = "AB";}
                    else if((N>=70)&&(N<85)){huruf = "B";}
                    else if((N>=55)&&(N<70)){huruf = "C";}
                    else if((N>=40)&&(N<55)){huruf = "D";}
                    else if(N<40){huruf = "E";}
            }
                else{cout<<"nilai anda kelebihan bobot";return 0;}
        }
        cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Matkul 1: "<<matkul<<" "<<sks<<" sks "<<N<<" "<<huruf<<endl;

    //matkul 2 --------------

cout<<"matkul 2: ";cin>>matkul1;
if(matkul == matkul1){cout<<"inputan tidak boleh sama"<<endl;return 0;}
else{
    if((matkul1=="Kalkulus")||(matkul1=="kalkulus")||(matkul1=="KALKULUS")){TP = "T";sks1=4;kunci2=1;}

    else if((matkul1=="Pengantar Teknologi Informasi")||(matkul1=="pengantar teknologi informasi")||(matkul1=="PENGANTAR TEKNOLOGI INFORMASI")||(matkul1=="PTI")||(matkul1=="Pti")||(matkul1=="pti")){
            TP = "T";sks1=2;kunci2=2;
            }
    else if((matkul1=="MatematikaDiskrit")||(matkul1=="matematikadiskrit")||(matkul1=="MATEMATIKADISKRIT")||(matkul1=="MtkDiskrit")||(matkul1=="mtkdiskrit")||(matkul1=="Diskrit")||(matkul1=="diskrit")||(matkul1=="DISKRIT")){
         TP = "T";sks1=3;kunci2=3;
    }
    else if((matkul1=="Pemweb")||(matkul1=="PemWeb")||(matkul1=="pemweb")||(matkul1=="PEMWEB")||(matkul1=="Pemograman Web")){
        TP="P";sks1=2;kunci2=4;
    }
    else if((matkul1=="DasPro")||(matkul1=="DASPRO")||(matkul1=="Daspro")||(matkul1=="daspro")||(matkul1=="Dasar Pemograman")||(matkul1=="dasar pemograman"))
        {
        TP="TP";sks1=4;kunci2=5;
    }
    else if((matkul1=="DDK")||(matkul1=="ddk")||(matkul1=="DasarDasarKomputasi")||(matkul1=="Dasar-DasarKomputasi")||(matkul1=="dasardasarkmputasi")||(matkul1=="dasar-dasarkomputasi")){
     TP="P";sks1=2;kunci2=6;
    }
    else if((matkul1=="Orarkom")||(matkul1=="OrArKom")||(matkul1=="ORARKOM")||(matkul1=="orarkom")||(matkul1=="OrganisasidanArsitekturKomputer")||(matkul1=="organisasidanarsitekturkomputer")||(matkul1=="ORGANISASIDANARSITEKTURKOMPUTER")){
        TP="T";sks1=3;kunci2=7;
    }

    if(kunci1==kunci2){return 0;}
else{if((TP=="T")||(TP=="P")){
            cout<<"Masukkan Nilai Tugas: "<<endl;cin>>a;
            cout<<"Masukkan Nilai Ujian Tengah Semester: "<<endl;cin>>b;
            cout<<"Masukkan Nilai Ujian Akhir Semester: "<<endl;cin>>c;
        N1=(0.3*a)+(0.3*b)+(0.4*c);
        if((a<=100)&&(b<=100)&&(c<=100)){

            if((N1>=90)&&(N1<=100)){huruf = "A";}
             else if((N1>=85)&&(N1<90)){huruf = "AB";}
            else if((N1>=70)&&(N1<85)){huruf = "B";}
            else if((N1>=55)&&(N1<70)){huruf = "C";}
             else if((N1>=40)&&(N1<55)){huruf = "D";}
              else if(N1<40){huruf = "E";}
        }
        else{cout<<"nilai anda kelebihan bobot";return 0;}

    }

        else if(TP=="TP"){
            cout<<"Masukkan Nilai Tugas: "<<endl;cin>>a;
            cout<<"Masukkan Nilai Praktek: "<<endl;cin>>b;
            cout<<"Masukkan Nilai Ujian Praktek UTS: "<<endl;cin>>c;
            cout<<"Masukkan Nilai Ujian Teori UTS: "<<endl;cin>>d;
            cout<<"Masukkan Nilai Ujian Praktek UAS: "<<endl;cin>>e;
            cout<<"Masukkan Nilai Ujian Teori UAS: "<<endl;cin>>f;
            N1=(0.15*a)+(0.15*b)+(0.15*c)+(0.15*d)+(0.2*e)+(0.2*f);
            if((a<=100)&&(b<=100)&&(c<=100)&&(d<=100)&&(e<=100)&&(f<=100)){
                    if((N1>=90)&&(N1<=100)){huruf = "A";}
                    else if((N1>=85)&&(N1<90)){huruf = "AB";}
                    else if((N1>=70)&&(N1<85)){huruf = "B";}
                    else if((N1>=55)&&(N1<70)){huruf = "C";}
                    else if((N1>=40)&&(N1<55)){huruf = "D";}
                    else if(N1<40){huruf = "E";}
            }
                else{cout<<"nilai anda kelebihan bobot";return 0;}
        }
        cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Matkul 2:"<<matkul1<<" "<<sks1<<" sks "<<N1<<" "<<huruf<<endl;}



    }

//matkul 3 -----------------------------------------------------------

cout<<"matkul 3: ";cin>>matkul2;

    if(matkul1 == matkul2){cout<<"inputan tidak boleh sama"<<endl;return 0;}
else{
    if((matkul2=="Kalkulus")||(matkul2=="kalkulus")||(matkul2=="KALKULUS")){TP = "T";sks2=4;kunci3=1;}

    else if((matkul2=="PengantarTeknologiInformasi")||(matkul2=="pengantarteknologiinformasi")||(matkul2=="PENGANTARTEKNOLOGIINFORMASI")||(matkul2=="PTI")||(matkul2=="Pti")||(matkul2=="pti")){
            TP = "T";sks2=2;kunci3=2;
            }
    else if((matkul2=="MatematikaDiskrit")||(matkul2=="matematikadiskrit")||(matkul2=="MATEMATIKADISKRIT")||(matkul2=="MtkDiskrit")||(matkul2=="mtkdiskrit")||(matkul2=="Diskrit")||(matkul2=="diskrit")||(matkul2=="DISKRIT")){
         TP = "T";sks2=3;kunci3=3;
    }
    else if((matkul2=="Pemweb")||(matkul2=="PemWeb")||(matkul2=="pemweb")||(matkul2=="PEMWEB")||(matkul2=="Pemograman Web")){
        TP="P";sks2=2;kunci3=4;
    }
    else if((matkul2=="DasPro")||(matkul2=="DASPRO")||(matkul2=="Daspro")||(matkul2=="daspro")||(matkul2=="Dasar Pemograman")||(matkul2=="dasarpemograman"))
        {
        TP="TP";sks2=4;kunci3=5;
    }
    else if((matkul2=="DDK")||(matkul2=="ddk")||(matkul2=="DasarDasarKomputasi")||(matkul2=="Dasar-DasarKomputasi")||(matkul2=="dasardasarkmputasi")||(matkul2=="dasar-dasarkomputasi")){
     TP="P";sks2=2;kunci3=6;
    }
    else if((matkul2=="Orarkom")||(matkul2=="OrArKom")||(matkul2=="ORARKOM")||(matkul2=="orarkom")||(matkul2=="OrganisasidanArsitekturKomputer")||(matkul2=="organisasidanarsitekturkomputer")||(matkul2=="ORGANISASIDANARSITEKTURKOMPUTER")){
        TP="T";sks2=3;kunci3=7;
    }

    if((kunci1==kunci3)||(kunci2==kunci3)){return 0;}
else{ if((TP=="T")||(TP=="P")){
           cout<<"Masukkan Nilai Tugas: "<<endl;cin>>a;
           cout<<"Masukkan Nilai UTS: "<<endl;cin>>b;
           cout<<"Masukkan Nilai UAS: "<<endl;cin>>c;
        N2=(0.3*a)+(0.3*b)+(0.4*c);
        if((a<=100)&&(b<=100)&&(c<=100)){

            if((N2>=90)&&(N2<=100)){huruf = "A";}
             else if((N2>=85)&&(N2<90)){huruf = "AB";}
            else if((N2>=70)&&(N2<85)){huruf = "B";}
            else if((N2>=55)&&(N2<70)){huruf = "C";}
             else if((N2>=40)&&(N2<55)){huruf = "D";}
              else if(N2<40){huruf = "E";}
        }
        else{cout<<"nilai anda kelebihan bobot";return 0;}

    }

        else if(TP=="TP"){

            cout<<"Masukkan Nilai Tugas: "<<endl;cin>>a;
            cout<<"Masukkan Nilai Praktek: "<<endl;cin>>b;
            cout<<"Masukkan Nilai Ujian Praktek UTS: "<<endl;cin>>c;
            cout<<"Masukkan Nilai Ujian Teori UTS: "<<endl;cin>>d;
            cout<<"Masukkan Nilai Ujian Praktek UAS: "<<endl;cin>>e;
            cout<<"Masukkan Nilai Ujian Teori UAS: "<<endl;cin>>f;
            N2=(0.15*a)+(0.15*b)+(0.15*c)+(0.15*d)+(0.2*e)+(0.2*f);
            if((a<=100)&&(b<=100)&&(c<=100)&&(d<=100)&&(e<=100)&&(f<=100)){
                    if((N2>=90)&&(N2<=100)){huruf = "A";}
                    else if((N2>=85)&&(N2<90)){huruf = "AB";}
                    else if((N2>=70)&&(N2<85)){huruf = "B";}
                    else if((N2>=55)&&(N2<70)){huruf = "C";}
                    else if((N2>=40)&&(N2<55)){huruf = "D";}
                    else if(N2<40){huruf = "E";}
            }
                else{cout<<"nilai anda kelebihan bobot";return 0;}
        }
        cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Matkul 3:"<<matkul2<<" "<<sks2<<" sks "<<N2<<" "<<huruf<<endl;
}

}

//matkul ke-4 --------------------------------------------------
cout<<"matkul ke-4: ";cin>>matkul3;

    if(matkul2 == matkul3){cout<<"inputan tidak boleh sama"<<endl;return 0;}
else{
    if((matkul3=="Kalkulus")||(matkul3=="kalkulus")||(matkul3=="KALKULUS")){TP = "T";sks3=4;kunci4=1;}

    else if((matkul3=="PengantarTeknologiInformasi")||(matkul3=="pengantarteknologiinformasi")||(matkul3=="PENGANTARTEKNOLOGIINFORMASI")||(matkul3=="PTI")||(matkul3=="Pti")||(matkul3=="pti")){
            TP = "T";sks3=2;kunci4=2;
            }
    else if((matkul3=="MatematikaDiskrit")||(matkul3=="matematikadiskrit")||(matkul3=="MATEMATIKADISKRIT")||(matkul3=="MtkDiskrit")||(matkul3=="mtkdiskrit")||(matkul3=="Diskrit")||(matkul3=="diskrit")||(matkul3=="DISKRIT")){
         TP = "T";sks3=3;kunci4=3;
    }
    else if((matkul3=="Pemweb")||(matkul3=="PemWeb")||(matkul3=="pemweb")||(matkul3=="PEMWEB")||(matkul3=="PemogramanWeb")){
        TP="P";sks3=2;kunci4=4;
    }
    else if((matkul3=="DasPro")||(matkul3=="DASPRO")||(matkul3=="Daspro")||(matkul3=="daspro")||(matkul3=="Dasar Pemograman")||(matkul3=="dasarpemograman"))
        {
        TP="TP";sks3=4;kunci4=5;
    }

    else if((matkul3=="DDK")||(matkul3=="ddk")||(matkul3=="DasarDasarKomputasi")||(matkul3=="Dasar-DasarKomputasi")||(matkul3=="dasardasarkmputasi")||(matkul3=="dasar-dasarkomputasi")){
     TP="P";sks3=2;kunci4=6;
    }

    else if((matkul3=="Orarkom")||(matkul3=="OrArKom")||(matkul3=="ORARKOM")||(matkul3=="orarkom")||(matkul3=="OrganisasidanArsitekturKomputer")||(matkul3=="organisasidanarsitekturkomputer")||(matkul3=="ORGANISASIDANARSITEKTURKOMPUTER")){
        TP="T";sks3=3;kunci4=7;
    }
    if((kunci1==kunci3)||(kunci1==kunci4)||(kunci2==kunci4)||(kunci3==kunci4)){return 0;}
else{if((TP=="T")||(TP=="P")){
            cout<<"Masukkan Nilai Tugas: "<<endl;cin>>a;
            cout<<"Masukkan Nilai UTS: "<<endl;cin>>b;
            cout<<"Masukkan Nilai UAS: "<<endl;cin>>c;
        N3=(0.3*a)+(0.3*b)+(0.4*c);
        if((a<=100)&&(b<=100)&&(c<=100)){

            if((N3>=90)&&(N3<=100)){huruf = "A";}
             else if((N3>=85)&&(N3<90)){huruf = "AB";}
            else if((N3>=70)&&(N3<85)){huruf = "B";}
            else if((N3>=55)&&(N3<70)){huruf = "C";}
             else if((N3>=40)&&(N3<55)){huruf = "D";}
              else if(N3<40){huruf = "E";}
        }
        else{cout<<"nilai anda kelebihan bobot";return 0;}

    }

        else if(TP=="TP"){
            cout<<"Masukkan Nilai Tugas: "<<endl;cin>>a;
            cout<<"Masukkan Nilai Praktek: "<<endl;cin>>b;
            cout<<"Masukkan Nilai Ujian Praktek UTS: "<<endl;cin>>c;
            cout<<"Masukkan Nilai Ujian Teori UTS: "<<endl;cin>>d;
            cout<<"Masukkan Nilai Ujian Praktek UAS: "<<endl;cin>>e;
            cout<<"Masukkan Nilai Ujian Teori UAS: "<<endl;cin>>f;
            N3=(0.15*a)+(0.15*b)+(0.15*c)+(0.15*d)+(0.2*e)+(0.2*f);
            if((a<=100)&&(b<=100)&&(c<=100)&&(d<=100)&&(e<=100)&&(f<=100)){
                    if((N3>=90)&&(N3<=100)){huruf = "A";}
                    else if((N3>=85)&&(N3<90)){huruf = "AB";}
                    else if((N3>=70)&&(N3<85)){huruf = "B";}
                    else if((N3>=55)&&(N3<70)){huruf = "C";}
                    else if((N3>=40)&&(N3<55)){huruf = "D";}
                    else if(N3<40){huruf = "E";}
            }
                else{cout<<"nilai anda kelebihan bobot";return 0;}
        }
        cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Matkul 4:"<<matkul3<<" "<<sks3<<" sks "<<N3<<" "<<huruf<<endl;
}

}

//-------- matkul ke-5 -------------

cout<<"matkul ke-5: ";cin>>matkul4;

if(matkul3 == matkul4){cout<<"inputan tidak boleh sama"<<endl;return 0;}
else{
    if((matkul4=="Kalkulus")||(matkul4=="kalkulus")||(matkul4=="KALKULUS")){TP = "T";sks4=4;kunci5=1;}

    else if((matkul4=="PengantarTeknologiInformasi")||(matkul4=="pengantarteknologiinformasi")||(matkul4=="PENGANTARTEKNOLOGIINFORMASI")||(matkul4=="PTI")||(matkul4=="Pti")||(matkul4=="pti")){
            TP = "T";sks4=2;kunci5=2;
            }
    else if((matkul4=="MatematikaDiskrit")||(matkul4=="matematikadiskrit")||(matkul4=="MATEMATIKADISKRIT")||(matkul4=="MtkDiskrit")||(matkul4=="mtkdiskrit")||(matkul4=="Diskrit")||(matkul4=="diskrit")||(matkul4=="DISKRIT")){
         TP = "T";sks4=3;kunci5=3;
    }
    else if((matkul4=="Pemweb")||(matkul4=="PemWeb")||(matkul4=="pemweb")||(matkul4=="PEMWEB")||(matkul4=="PemogramanWeb")){
        TP="P";sks4=2;kunci5=4;
    }
    else if((matkul4=="DasPro")||(matkul4=="DASPRO")||(matkul4=="Daspro")||(matkul4=="daspro")||(matkul4=="Dasar Pemograman")||(matkul4=="dasarpemograman"))
        {
        TP="TP";sks4=4;kunci5=5;
    }

    else if((matkul4=="DDK")||(matkul4=="ddk")||(matkul4=="DasarDasarKomputasi")||(matkul4=="Dasar-DasarKomputasi")||(matkul4=="dasardasarkmputasi")||(matkul4=="dasar-dasarkomputasi")){
     TP="P";sks4=2;kunci5=6;
    }

    else if((matkul4=="Orarkom")||(matkul4=="OrArKom")||(matkul4=="ORARKOM")||(matkul4=="orarkom")||(matkul4=="OrganisasidanArsitekturKomputer")||(matkul4=="organisasidanarsitekturkomputer")||(matkul4=="ORGANISASIDANARSITEKTURKOMPUTER")){
        TP="T";sks4=3;kunci5=7;
    }

    if((kunci1==kunci5)||(kunci2==kunci5)||(kunci3==kunci5)||(kunci4==kunci5)){return 0;}
else{if((TP=="T")||(TP=="P")){
            cout<<"Masukkan Nilai Tugas: "<<endl;cin>>a;
            cout<<"Masukkan Nilai UTS: "<<endl;cin>>b;
            cout<<"Masukkan Nilai UAS: "<<endl;cin>>c;
        N4=(0.3*a)+(0.3*b)+(0.4*c);
        if((a<=100)&&(b<=100)&&(c<=100)){

            if((N4>=90)&&(N4<=100)){huruf = "A";}
             else if((N4>=85)&&(N4<90)){huruf = "AB";}
            else if((N4>=70)&&(N4<85)){huruf = "B";}
            else if((N4>=55)&&(N4<70)){huruf = "C";}
             else if((N4>=40)&&(N4<55)){huruf = "D";}
              else if(N4<40){huruf = "E";}
        }
        else{cout<<"nilai anda kelebihan bobot";return 0;}

    }

        else if(TP=="TP"){
            cout<<"Masukkan Nilai Tugas: "<<endl;cin>>a;
            cout<<"Masukkan Nilai Praktek: "<<endl;cin>>b;
            cout<<"Masukkan Nilai Ujian Praktek UTS: "<<endl;cin>>c;
            cout<<"Masukkan Nilai Ujian Teori UTS: "<<endl;cin>>d;
            cout<<"Masukkan Nilai Ujian Praktek UAS: "<<endl;cin>>e;
            cout<<"Masukkan Nilai Ujian Teori UAS: "<<endl;cin>>f;
            N4=(0.15*a)+(0.15*b)+(0.15*c)+(0.15*d)+(0.2*e)+(0.2*f);
            if((a<=100)&&(b<=100)&&(c<=100)&&(d<=100)&&(e<=100)&&(f<=100)){
                    if((N4>=90)&&(N4<=100)){huruf = "A";}
                    else if((N4>=85)&&(N4<90)){huruf = "AB";}
                    else if((N4>=70)&&(N4<85)){huruf = "B";}
                    else if((N4>=55)&&(N4<70)){huruf = "C";}
                    else if((N4>=40)&&(N4<55)){huruf = "D";}
                    else if(N4<40){huruf = "E";}
            }
                else{cout<<"nilai anda kelebihan bobot";return 0;}
        }
        cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Matkul ke-5:"<<matkul4<<" "<<sks4<<" sks "<<N4<<" "<<huruf<<endl;
}

}

//--------- matkul ke-6 -----------
cout<<"matkul ke-6: ";cin>>matkul5;

        if(matkul4 == matkul5){cout<<"inputan tidak boleh sama"<<endl;return 0;}
else{
    if((matkul5=="Kalkulus")||(matkul5=="kalkulus")||(matkul5=="KALKULUS")){TP = "T";sks5=4;kunci6=1;}

    else if((matkul5=="PengantarTeknologiInformasi")||(matkul5=="pengantarteknologiinformasi")||(matkul5=="PENGANTARTEKNOLOGIINFORMASI")||(matkul5=="PTI")||(matkul5=="Pti")||(matkul5=="pti")){
            TP = "T";sks5=2;kunci6=2;
            }
    else if((matkul5=="MatematikaDiskrit")||(matkul5=="matematikadiskrit")||(matkul5=="MATEMATIKADISKRIT")||(matkul5=="MtkDiskrit")||(matkul5=="mtkdiskrit")||(matkul5=="Diskrit")||(matkul5=="diskrit")||(matkul5=="DISKRIT")){
         TP = "T";sks5=3;kunci6=3;
    }
    else if((matkul5=="Pemweb")||(matkul5=="PemWeb")||(matkul5=="pemweb")||(matkul5=="PEMWEB")||(matkul5=="PemogramanWeb")){
        TP="P";sks5=2;kunci6=4;
    }
    else if((matkul5=="DasPro")||(matkul5=="DASPRO")||(matkul5=="Daspro")||(matkul5=="daspro")||(matkul5=="Dasar Pemograman")||(matkul5=="dasarpemograman"))
        {
        TP="TP";sks5=4;kunci6=5;
    }

    else if((matkul5=="DDK")||(matkul5=="ddk")||(matkul5=="DasarDasarKomputasi")||(matkul5=="Dasar-DasarKomputasi")||(matkul5=="dasardasarkmputasi")||(matkul5=="dasar-dasarkomputasi")){
     TP="P";sks5=2;kunci6=6;
    }

    else if((matkul5=="Orarkom")||(matkul5=="OrArKom")||(matkul5=="ORARKOM")||(matkul5=="orarkom")||(matkul5=="OrganisasidanArsitekturKomputer")||(matkul5=="organisasidanarsitekturkomputer")||(matkul5=="ORGANISASIDANARSITEKTURKOMPUTER")){
        TP="T";sks5=3;kunci6=7;
    }

    if((kunci1==kunci6)||(kunci2==kunci6)||(kunci3==kunci6)||(kunci4==kunci6)||(kunci5==kunci6)){return 0;}
else{if((TP=="T")||(TP=="P")){
            cout<<"Masukkan Nilai Tugas: "<<endl;cin>>a;
            cout<<"Masukkan Nilai UTS: "<<endl;cin>>b;
            cout<<"Masukkan Nilai UAS: "<<endl;cin>>c;
        N5=(0.3*a)+(0.3*b)+(0.4*c);
        if((a<=100)&&(b<=100)&&(c<=100)){

            if((N5>=90)&&(N5<=100)){huruf = "A";}
             else if((N5>=85)&&(N5<90)){huruf = "AB";}
            else if((N5>=70)&&(N5<85)){huruf = "B";}
            else if((N5>=55)&&(N5<70)){huruf = "C";}
             else if((N5>=40)&&(N5<55)){huruf = "D";}
              else if(N5<40){huruf = "E";}
        }
        else{cout<<"nilai anda kelebihan bobot";return 0;}

    }

        else if(TP=="TP"){
            cout<<"Masukkan Nilai Tugas: "<<endl;cin>>a;
            cout<<"Masukkan Nilai Praktek: "<<endl;cin>>b;
            cout<<"Masukkan Nilai Ujian Praktek UTS: "<<endl;cin>>c;
            cout<<"Masukkan Nilai Ujian Teori UTS: "<<endl;cin>>d;
            cout<<"Masukkan Nilai Ujian Praktek UAS: "<<endl;cin>>e;
            cout<<"Masukkan Nilai Ujian Teori UAS: "<<endl;cin>>f;
            N5=(0.15*a)+(0.15*b)+(0.15*c)+(0.15*d)+(0.2*e)+(0.2*f);
            if((a<=100)&&(b<=100)&&(c<=100)&&(d<=100)&&(e<=100)&&(f<=100)){
                    if((N5>=90)&&(N5<=100)){huruf = "A";}
                    else if((N5>=85)&&(N5<90)){huruf = "AB";}
                    else if((N5>=70)&&(N5<85)){huruf = "B";}
                    else if((N5>=55)&&(N5<70)){huruf = "C";}
                    else if((N5>=40)&&(N5<55)){huruf = "D";}
                    else if(N5<40){huruf = "E";}
            }
                else{cout<<"nilai anda kelebihan bobot";return 0;}
        }
        cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Matkul ke-6:"<<matkul5<<" "<<sks5<<" sks "<<N5<<" "<<huruf<<endl;
}


}

//----------- matkul ke- 7 -----------------

cout<<"matkul ke-7: ";cin>>matkul6;

            if(matkul5 == matkul6){cout<<"inputan tidak boleh sama"<<endl;return 0;}
else{
    if((matkul6=="Kalkulus")||(matkul6=="kalkulus")||(matkul6=="KALKULUS")){TP = "T";sks6=4;kunci7=1;}

    else if((matkul6=="PengantarTeknologiInformasi")||(matkul6=="pengantarteknologiinformasi")||(matkul6=="PENGANTARTEKNOLOGIINFORMASI")||(matkul6=="PTI")||(matkul6=="Pti")||(matkul6=="pti")){
            TP = "T";sks6=2;kunci7=2;
            }
    else if((matkul6=="MatematikaDiskrit")||(matkul6=="matematikadiskrit")||(matkul6=="MATEMATIKADISKRIT")||(matkul6=="MtkDiskrit")||(matkul6=="mtkdiskrit")||(matkul6=="Diskrit")||(matkul6=="diskrit")||(matkul6=="DISKRIT")){
         TP = "T";sks6=3;kunci7=3;
    }
    else if((matkul6=="Pemweb")||(matkul6=="PemWeb")||(matkul6=="pemweb")||(matkul6=="PEMWEB")||(matkul6=="PemogramanWeb")){
        TP="P";sks6=2;kunci7=4;
    }
    else if((matkul6=="DasPro")||(matkul6=="DASPRO")||(matkul6=="Daspro")||(matkul6=="daspro")||(matkul6=="Dasar Pemograman")||(matkul6=="dasarpemograman"))
        {
        TP="TP";sks6=4;kunci7=5;
    }

    else if((matkul6=="DDK")||(matkul6=="ddk")||(matkul6=="DasarDasarKomputasi")||(matkul6=="Dasar-DasarKomputasi")||(matkul6=="dasardasarkmputasi")||(matkul6=="dasar-dasarkomputasi")){
     TP="P";sks6=2;kunci7=6;
    }

    else if((matkul6=="Orarkom")||(matkul6=="OrArKom")||(matkul6=="ORARKOM")||(matkul6=="orarkom")||(matkul6=="OrganisasidanArsitekturKomputer")||(matkul6=="organisasidanarsitekturkomputer")||(matkul6=="ORGANISASIDANARSITEKTURKOMPUTER")){
        TP="T";sks6=3;kunci7=7;
    }


    if((kunci1==kunci7)||(kunci2==kunci7)||(kunci3==kunci7)||(kunci4==kunci7)||(kunci5==kunci7)||(kunci6==kunci7)){return 0;}
else{if((TP=="T")||(TP=="P")){
            cout<<"Masukkan Nilai Tugas: "<<endl;cin>>a;
            cout<<"Masukkan Nilai UTS: "<<endl;cin>>b;
            cout<<"Masukkan Nilai UAS: "<<endl;cin>>c;
        N6=(0.3*a)+(0.3*b)+(0.4*c);
        if((a<=100)&&(b<=100)&&(c<=100)){

            if((N6>=90)&&(N6<=100)){huruf = "A";}
             else if((N6>=85)&&(N6<90)){huruf = "AB";}
            else if((N6>=70)&&(N6<85)){huruf = "B";}
            else if((N6>=55)&&(N6<70)){huruf = "C";}
             else if((N6>=40)&&(N6<55)){huruf = "D";}
              else if(N6<40){huruf = 'E';}
        }
        else{cout<<"nilai anda kelebihan bobot";return 0;}

    }

        else if(TP=="TP"){
            cout<<"Masukkan Nilai Tugas: "<<endl;cin>>a;
            cout<<"Masukkan Nilai Praktek: "<<endl;cin>>b;
            cout<<"Masukkan Nilai Ujian Praktek UTS: "<<endl;cin>>c;
            cout<<"Masukkan Nilai Ujian Teori UTS: "<<endl;cin>>d;
            cout<<"Masukkan Nilai Ujian Praktek UAS: "<<endl;cin>>e;
            cout<<"Masukkan Nilai Ujian Teori UAS: "<<endl;cin>>f;
            N6=(0.15*a)+(0.15*b)+(0.15*c)+(0.15*d)+(0.2*e)+(0.2*f);
            if((a<=100)&&(b<=100)&&(c<=100)&&(d<=100)&&(e<=100)&&(f<=100)){
                    if((N6>=90)&&(N6<=100)){huruf = "A";}
                    else if((N6>=85)&&(N6<90)){huruf = "AB";}
                    else if((N6>=70)&&(N6<85)){huruf = "B";}
                    else if((N6>=55)&&(N6<70)){huruf = "C";}
                    else if((N6>=40)&&(N6<55)){huruf = "D";}
                    else if(N6<40){huruf = "E";}
            }
                else{cout<<"nilai anda kelebihan bobot";return 0;}
        }
        cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Matkul ke-7:"<<" "<<matkul6<<" "<<sks6<<" sks "<<N6<<" "<<huruf<<endl;
}

}
sumsks = sks + sks1 + sks2 + sks3 + sks4 + sks5 + sks6;
sumN = (N*sks)+(N1*sks1)+(N2*sks2)+(N3*sks3)+(N4*sks4)+(N5*sks5)+(N6*sks6);
akm = sumN/sumsks;
ip = (akm/20)-1;
//------------ output IP semester --------

                     if((ip>=3.8)&&(ip<4)){hIP = "A+";}
                    else if((ip>=3.65)&&(ip<3.8)){hIP = "A";}
                    else if((ip>=3.5)&&(ip<3.65)){hIP = "AB";}
                    else if((ip>=3)&&(ip<3.5)){hIP = "B+";}
                    else if((ip>=2.8)&&(ip<3)){hIP = "B";}
                    else if((ip>=2.5)&&(ip<2.8)){hIP="C";}
                    else{hIP="D";}
        cout<<"____________________________________________________________________________________________"<<endl;
         cout<<"Nilai IP Semester anda: "<<ip<<" "<<hIP<<" Jumlah sks: "<<sumsks<<endl;

         cout<<"---- program ini dibuat atas lisensi BagasRS.Corporation -------"<<endl;
         cout<<"_______________________   all right reserved 15th of October 2022   _______________________"<<endl;
            }
