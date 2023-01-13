#include <iostream>

//mengenali sintax strUpr()
#include<string.h>
#include<conio.h>
using namespace std;

string kata;
int i, n, m, poly;

int main(){

cout<<" masukkan kata: "; cin>>kata;


i = 0;
n = kata.length();
m = n;
// kapitalisasi kata
while(i<n){

    if (kata[i]=='a'){kata[i]='A';}
    else if (kata[i]=='b'){kata[i]='B';}
    else if (kata[i]=='c'){kata[i]='C';}
    else if (kata[i]=='d'){kata[i]='D';}
    else if (kata[i]=='e'){kata[i]='E';}
    else if (kata[i]=='f'){kata[i]='F';}
    else if (kata[i]=='g'){kata[i]='G';}
    else if (kata[i]=='h'){kata[i]='H';}
    else if (kata[i]=='i'){kata[i]='I';}
    else if (kata[i]=='j'){kata[i]='J';}
    else if (kata[i]=='k'){kata[i]='K';}
    else if (kata[i]=='l'){kata[i]='L';}
    else if (kata[i]=='m'){kata[i]='M';}
    else if (kata[i]=='n'){kata[i]='N';}
    else if (kata[i]=='o'){kata[i]='O';}
    else if (kata[i]=='p'){kata[i]='P';}
    else if (kata[i]=='q'){kata[i]='Q';}
    else if (kata[i]=='r'){kata[i]='R';}
    else if (kata[i]=='s'){kata[i]='S';}
    else if (kata[i]=='t'){kata[i]='T';}
    else if (kata[i]=='u'){kata[i]='U';}
    else if (kata[i]=='v'){kata[i]='V';}
    else if (kata[i]=='w'){kata[i]='W';}
    else if (kata[i]=='x'){kata[i]='X';}
    else if (kata[i]=='y'){kata[i]='Y';}
    else if (kata[i]=='z'){kata[i]='Z';}

    i++;
}

// menentukan polindrom atau bukan
i = 0;
while(i<n){
    if(kata[i]==kata[m-1]){poly += 1;}
    i++;
    m -= 1;
}
cout<<"============"<<endl;
if(n == poly){cout<<kata<<" adalah kata polindrom";}
else{cout<<kata<<" bukan kata polindrom";}
}
