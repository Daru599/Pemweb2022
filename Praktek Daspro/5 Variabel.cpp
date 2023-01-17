//judul : Program rangking
// Ardiansyah
#include <iostream>
using namespace std;
//kamus
int a,b,c,d,e;

//diskripsi

main(){
    cout << "-------------------------------------------------------------------------\n";
    cout <<"****Program Rangking dari Bilangan terkecil Ke Bilangan Terbesar****\n";
    cout <<"Masukan Bilangan Pertama :";
    cin >> a;
    cout <<"Masukan Bilangan Kedua   :";
    cin >> b;
    cout <<"Masukan Bilangan Ketiga  :";
    cin >> c;
    cout <<"Masukan Bilangan Keempat :";
    cin >> d;
    cout <<"Masukan Bilangan Kelima  :";
    cin >> e;
    cout << "-------------------------------------------------------------------------\n";



    if ((a>b)&&(b>c)&&(c>d)&&(d>e)){
        cout<<e<<d<<c<< b<<a<<endl;
    }
    else if ((a<b)&&(b<c)&&(c<d)&&(d<e)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<b<<"|"<<c<<"|"<<d<<"|"<<e<<"|\n";
        cout <<"--------------------------------------\n";}


    else if ((a<b)&&(b<c)&&(c<d)&&(e<a)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<e<<"|"<<a<<"|"<<b<<"|"<<c<<"|"<<d<<"|\n";
        cout <<"--------------------------------------\n";}

//AB
        else if ((a<b)&&(b<c)&&(c<d)&&(d<e)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<b<<"|"<<c<<"|"<<d<<"|"<<e<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<b)&&(b<c)&&(c<e)&&(e<d)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<b<<"|"<<c<<"|"<<e<<"|"<<d<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<b)&&(b<d)&&(d<e)&&(e<c)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<b<<"|"<<d<<"|"<<e<<"|"<<c<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<b)&&(b<d)&&(d<c)&&(c<e)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<b<<"|"<<d<<"|"<<c<<"|"<<e<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<b)&&(b<e)&&(e<c)&&(c<d)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<b<<"|"<<e<<"|"<<c<<"|"<<d<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<b)&&(b<e)&&(e<d)&&(d<c)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<b<<"|"<<e<<"|"<<d<<"|"<<c<<"|\n";
        cout <<"--------------------------------------\n";}
//..AC
        else if ((a<c)&&(c<b)&&(b<e)&&(e<d)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<c<<"|"<<b<<"|"<<e<<"|"<<d<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<c)&&(c<b)&&(b<d)&&(d<e)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<c<<"|"<<b<<"|"<<d<<"|"<<e<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<c)&&(c<d)&&(d<e)&&(e<b)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<c<<"|"<<d<<"|"<<e<<"|"<<b<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<c)&&(c<d)&&(d<b)&&(b<e)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<c<<"|"<<d<<"|"<<b<<"|"<<e<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<c)&&(c<e)&&(e<d)&&(d<b)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<c<<"|"<<e<<"|"<<d<<"|"<<b<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<c)&&(c<e)&&(e<b)&&(b<d)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<c<<"|"<<e<<"|"<<b<<"|"<<d<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<c)&&(c<e)&&(e<d)&&(d<b)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<c<<"|"<<e<<"|"<<d<<"|"<<b<<"|\n";
        cout <<"--------------------------------------\n";}

//AD
        else if ((a<d)&&(d<b)&&(b<c)&&(c<e)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<d<<"|"<<b<<"|"<<c<<"|"<<d<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<d)&&(d<b)&&(b<e)&&(e<c)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"--------------------------------------\n";;
        cout <<"|"<<a<<"|"<<d<<"|"<<b<<"|"<<e<<"|"<<c<<"|\n";
         cout <<"--------------------------------------\n";}

        else if ((a<d)&&(d<c)&&(c<b)&&(b<e)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<d<<"|"<<c<<"|"<<b<<"|"<<e<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<d)&&(d<c)&&(c<e)&&(e<b)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<d<<"|"<<c<<"|"<<e<<"|"<<b<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<d)&&(d<e)&&(e<b)&&(b<c)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<d<<"|"<<e<<"|"<<b<<"|"<<c<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<d)&&(d<e)&&(e<c)&&(c<b)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<d<<"|"<<e<<"|"<<c<<"|"<<b<<"|\n";
        cout <<"--------------------------------------\n";}

//AE

        else if ((a<e)&&(e<b)&&(b<d)&&(d<c)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<e<<"|"<<b<<"|"<<d<<"|"<<c<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<e)&&(e<b)&&(b<c)&&(c<d)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<e<<"|"<<b<<"|"<<c<<"|"<<d<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<e)&&(e<d)&&(d<c)&&(c<b)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<e<<"|"<<d<<"|"<<c<<"|"<<b<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<e)&&(e<d)&&(d<b)&&(b<c)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<e<<"|"<<d<<"|"<<b<<"|"<<c<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<e)&&(e<c)&&(c<b)&&(b<d)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<e<<"|"<<c<<"|"<<b<<"|"<<d<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((a<e)&&(e<c)&&(c<d)&&(d<b)){
        cout << "bilangan terkecilnya adalah : "<<a<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<a<<"|"<<e<<"|"<<c<<"|"<<d<<"|"<<b<<"|\n";
        cout <<"--------------------------------------\n";}

//BA
        else if ((b<a)&&(a<c)&&(c<d)&&(d<e)){
        cout << "bilangan terkecilnya adalah : "<<b;
        cout << "bilangan terbesarnya adalah : "<<e;
        cout <<"--------------------------------------\n";
        cout <<"|"<<b<<"|"<<a<<"|"<<c<<"|"<<d<<"|"<<e<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((b<a)&&(a<c)&&(c<e)&&(e<d)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<b<<"|"<<a<<"|"<<c<<"|"<<e<<"|"<<d<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((b<a)&&(a<d)&&(d<c)&&(c<e)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<b<<"|"<<a<<"|"<<d<<"|"<<c<<"|"<<e<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((b<a)&&(a<d)&&(d<e)&&(e<c)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<b<<"|"<<a<<"|"<<d<<"|"<<e<<"|"<<c<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((b<a)&&(a<e)&&(e<c)&&(c<d)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"--------------------------------------\n";
        cout <<"|"<<b<<"|"<<a<<"|"<<e<<"|"<<c<<"|"<<d<<"|\n";
        cout <<"--------------------------------------\n";}

        else if ((b<a)&&(a<e)&&(e<d)&&(d<c)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"|"<<b<<"|"<<a<<"|"<<e<<"|"<<d<<"|"<<c<<"|\n";
        }
//BC
        else if ((b<c)&&(c<a)&&(a<d)&&(d<e)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"|"<<b<<"|"<<c<<"|"<<a<<"|"<<d<<"|"<<e<<"|\n";
        }
        else if ((b<c)&&(c<a)&&(a<e)&&(e<d)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"|"<<b<<"|"<<c<<"|"<<a<<"|"<<e<<"|"<<d<<"|\n";
        }
        else if ((b<c)&&(c<d)&&(d<a)&&(a<e)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"|"<<b<<"|"<<c<<"|"<<d<<"|"<<a<<"|"<<e<<"|\n";
        }
        else if ((b<c)&&(c<d)&&(d<e)&&(e<a)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<b<<"|"<<c<<"|"<<d<<"|"<<e<<"|"<<a<<"|\n";
        }
        else if ((b<c)&&(c<e)&&(e<d)&&(d<a)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<b<<"|"<<c<<"|"<<e<<"|"<<d<<"|"<<a<<"|\n";
        }
        else if ((b<c)&&(c<e)&&(e<a)&&(a<d)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"|"<<b<<"|"<<c<<"|"<<e<<"|"<<d<<"|"<<a<<"|\n";
        }

//BD
        else if ((b<d)&&(d<a)&&(a<c)&&(c<e)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"|"<<b<<"|"<<d<<"|"<<a<<"|"<<c<<"|"<<e<<"|\n";
        }
        else if ((b<d)&&(d<a)&&(a<e)&&(e<c)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"|"<<b<<"|"<<d<<"|"<<a<<"|"<<e<<"|"<<c<<"|\n";
        }
        else if ((b<d)&&(d<c)&&(c<a)&&(a<e)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"|"<<b<<"|"<<d<<"|"<<c<<"|"<<a<<"|"<<e<<"|\n";
        }
        else if ((b<d)&&(d<c)&&(c<e)&&(e<a)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<b<<"|"<<d<<"|"<<c<<"|"<<e<<"|"<<a<<"|\n";
        }
        else if ((b<d)&&(d<e)&&(e<a)&&(a<c)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"|"<<b<<"|"<<d<<"|"<<e<<"|"<<a<<"|"<<c<<"|\n";
        }
        else if ((b<d)&&(d<e)&&(e<c)&&(c<a)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<b<<"|"<<d<<"|"<<e<<"|"<<c<<"|"<<a<<"|\n";
        }


//BE
        else if ((b<e)&&(e<a)&&(a<c)&&(c<d)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"|"<<b<<"|"<<e<<"|"<<a<<"|"<<c<<"|"<<d<<"|\n";
        }
        else if ((b<e)&&(e<a)&&(a<d)&&(d<c)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"|"<<b<<"|"<<e<<"|"<<a<<"|"<<d<<"|"<<c<<"|\n";
        }
        else if ((b<e)&&(e<c)&&(c<a)&&(a<d)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"|"<<b<<"|"<<e<<"|"<<c<<"|"<<a<<"|"<<d<<"|\n";
        }
        else if ((b<e)&&(e<c)&&(c<d)&&(d<a)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<b<<"|"<<e<<"|"<<c<<"|"<<d<<"|"<<a<<"|\n";
        }
        else if ((b<e)&&(e<c)&&(d<a)&&(a<c)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"|"<<b<<"|"<<e<<"|"<<d<<"|"<<a<<"|"<<c<<"|\n";
        }
        else if ((b<e)&&(e<d)&&(d<c)&&(c<a)){
        cout << "bilangan terkecilnya adalah : "<<b<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<b<<"|"<<e<<"|"<<d<<"|"<<c<<"|"<<a<<"|\n";
        }
//CA
        else if ((c<a)&&(a<b)&&(b<d)&&(d<e)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"|"<<c<<"|"<<a<<"|"<<b<<"|"<<d<<"|"<<e<<"|\n";
        }
        else if ((c<a)&&(a<b)&&(b<e)&&(e<d)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"|"<<c<<"|"<<a<<"|"<<b<<"|"<<e<<"|"<<d<<"|\n";
        }
        else if ((c<a)&&(a<d)&&(d<e)&&(e<b)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<c<<"|"<<a<<"|"<<d<<"|"<<e<<"|"<<b<<"|\n";
        }
        else if ((c<a)&&(a<d)&&(d<b)&&(b<e)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"|"<<c<<"|"<<a<<"|"<<d<<"|"<<b<<"|"<<e<<"|\n";
        }
        else if ((c<a)&&(a<e)&&(e<d)&&(d<b)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<c<<"|"<<a<<"|"<<e<<"|"<<d<<"|"<<b<<"|\n";
        }
        else if ((c<a)&&(a<e)&&(e<b)&&(b<d)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"|"<<c<<"|"<<a<<"|"<<e<<"|"<<b<<"|"<<d<<"|\n";
        }
//CB
        else if ((c<b)&&(b<a)&&(a<d)&&(d<e)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"|"<<c<<"|"<<b<<"|"<<a<<"|"<<d<<"|"<<e<<"|\n";
        }
        else if ((c<b)&&(b<a)&&(a<e)&&(e<d)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"|"<<c<<"|"<<b<<"|"<<a<<"|"<<e<<"|"<<d<<"|\n";
        }
        else if ((c<b)&&(b<d)&&(d<a)&&(a<e)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"|"<<c<<"|"<<b<<"|"<<d<<"|"<<a<<"|"<<e<<"|\n";
        }
        else if ((c<b)&&(b<d)&&(d<e)&&(e<a)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<c<<"|"<<b<<"|"<<d<<"|"<<e<<"|"<<a<<"|\n";
        }
        else if ((c<b)&&(b<e)&&(e<a)&&(a<d)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"|"<<c<<"|"<<b<<"|"<<e<<"|"<<a<<"|"<<d<<"|\n";
        }
        else if ((c<b)&&(b<e)&&(e<d)&&(d<a)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<c<<"|"<<b<<"|"<<e<<"|"<<d<<"|"<<a<<"|\n";
        }
//CD
        else if ((c<d)&&(d<a)&&(a<b)&&(b<e)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"|"<<c<<"|"<<d<<"|"<<a<<"|"<<b<<"|"<<e<<"|\n";
        }
        else if ((c<d)&&(d<a)&&(a<e)&&(e<b)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<c<<"|"<<d<<"|"<<a<<"|"<<e<<"|"<<b<<"|\n";
        }
        else if ((c<d)&&(d<b)&&(b<a)&&(a<e)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"|"<<c<<"|"<<d<<"|"<<b<<"|"<<a<<"|"<<e<<"|\n";
        }
        else if ((c<d)&&(d<b)&&(b<e)&&(e<a)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<c<<"|"<<d<<"|"<<b<<"|"<<e<<"|"<<a<<"|\n";
        }
        else if ((c<d)&&(d<e)&&(e<a)&&(a<b)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<c<<"|"<<d<<"|"<<e<<"|"<<a<<"|"<<b<<"|\n";
        }
        else if ((c<d)&&(d<e)&&(e<b)&&(b<a)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<c<<"|"<<d<<"|"<<e<<"|"<<b<<"|"<<a<<"|\n";
        }
//CE
        else if ((c<e)&&(e<a)&&(a<b)&&(b<d)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"|"<<c<<"|"<<e<<"|"<<a<<"|"<<b<<"|"<<d<<"|\n";
        }
        else if ((c<e)&&(e<a)&&(a<d)&&(d<b)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<c<<"|"<<e<<"|"<<a<<"|"<<d<<"|"<<b<<"|\n";
        }
        else if ((c<e)&&(e<b)&&(b<a)&&(a<d)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"|"<<c<<"|"<<e<<"|"<<b<<"|"<<a<<"|"<<d<<"|\n";
        }
        else if ((c<e)&&(e<b)&&(b<d)&&(d<a)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<c<<"|"<<e<<"|"<<b<<"|"<<d<<"|"<<a<<"|\n";
        }
        else if ((c<e)&&(e<d)&&(d<a)&&(a<b)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<c<<"|"<<e<<"|"<<d<<"|"<<a<<"|"<<b<<"|\n";
        }
        else if ((c<e)&&(e<d)&&(d<b)&&(b<a)){
        cout << "bilangan terkecilnya adalah : "<<c<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<c<<"|"<<e<<"|"<<d<<"|"<<b<<"|"<<a<<"|\n";
        }
//DA
        else if ((d<a)&&(a<b)&&(b<c)&&(c<e)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"|"<<d<<"|"<<a<<"|"<<b<<"|"<<c<<"|"<<e<<"|\n";
        }
        else if ((d<a)&&(a<b)&&(b<e)&&(e<c)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"|"<<d<<"|"<<a<<"|"<<b<<"|"<<e<<"|"<<c<<"|\n";
        }
        else if ((d<a)&&(a<c)&&(c<e)&&(e<b)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<d<<"|"<<a<<"|"<<c<<"|"<<e<<"|"<<b<<"|\n";
        }
        else if ((d<a)&&(a<c)&&(c<b)&&(b<e)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"|"<<d<<"|"<<a<<"|"<<c<<"|"<<b<<"|"<<e<<"|\n";
        }
        else if ((d<a)&&(a<e)&&(e<b)&&(b<c)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"|"<<d<<"|"<<a<<"|"<<e<<"|"<<b<<"|"<<c<<"|\n";
        }
        else if ((d<a)&&(a<e)&&(e<c)&&(c<b)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<d<<"|"<<a<<"|"<<e<<"|"<<c<<"|"<<b<<"|\n";
        }
//DB
        else if ((d<b)&&(b<a)&&(a<c)&&(c<e)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"|"<<d<<"|"<<b<<"|"<<a<<"|"<<c<<"|"<<e<<"|\n";
        }
        else if ((d<b)&&(b<a)&&(a<e)&&(e<c)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"|"<<d<<"|"<<b<<"|"<<a<<"|"<<e<<"|"<<c<<"|\n";
        }
        else if ((d<b)&&(b<c)&&(c<a)&&(a<e)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"|"<<d<<"|"<<b<<"|"<<c<<"|"<<a<<"|"<<e<<"|\n";
        }
        else if ((d<b)&&(b<c)&&(c<e)&&(d<a)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<d<<"|"<<b<<"|"<<c<<"|"<<e<<"|"<<a<<"|\n";
        }
        else if ((d<b)&&(b<e)&&(e<a)&&(a<c)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"|"<<d<<"|"<<b<<"|"<<e<<"|"<<a<<"|"<<c<<"|\n";
        }
        else if ((d<b)&&(b<e)&&(e<c)&&(c<a)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<d<<"|"<<b<<"|"<<e<<"|"<<c<<"|"<<a<<"|\n";
        }

//DC

        else if ((d<c)&&(c<a)&&(a<b)&&(b<e)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"|"<<d<<"|"<<c<<"|"<<a<<"|"<<b<<"|"<<e<<"|\n";
        }
        else if ((d<c)&&(c<a)&&(a<e)&&(e<b)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<d<<"|"<<c<<"|"<<a<<"|"<<e<<"|"<<b<<"|\n";
        }
        else if ((d<c)&&(c<b)&&(b<a)&&(a<e)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<e<<"\n";
        cout <<"|"<<d<<"|"<<c<<"|"<<b<<"|"<<a<<"|"<<e<<"|\n";
        }
        else if ((d<c)&&(c<b)&&(b<e)&&(e<a)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<d<<"|"<<c<<"|"<<b<<"|"<<e<<"|"<<a<<"|\n";
        }
        else if ((d<c)&&(c<e)&&(e<a)&&(a<b)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<d<<"|"<<c<<"|"<<e<<"|"<<a<<"|"<<b<<"|\n";
        }
        else if ((d<c)&&(c<e)&&(e<b)&&(b<a)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<d<<"|"<<c<<"|"<<e<<"|"<<b<<"|"<<a<<"|\n";
        }
//DE
        else if ((d<e)&&(e<a)&&(a<b)&&(b<c)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"|"<<d<<"|"<<e<<"|"<<a<<"|"<<b<<"|"<<c<<"|\n";
        }
        else if ((d<e)&&(e<a)&&(a<c)&&(c<b)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<d<<"|"<<e<<"|"<<a<<"|"<<c<<"|"<<b<<"|\n";
        }
        else if ((d<e)&&(e<b)&&(b<a)&&(a<c)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"|"<<d<<"|"<<e<<"|"<<b<<"|"<<a<<"|"<<c<<"|\n";
        }
        else if ((d<e)&&(e<b)&&(b<c)&&(c<a)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<d<<"|"<<e<<"|"<<b<<"|"<<c<<"|"<<a<<"|\n";
        }
        else if ((d<e)&&(e<c)&&(c<a)&&(a<b)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<d<<"|"<<e<<"|"<<c<<"|"<<a<<"|"<<b<<"|\n";
        }
        else if ((d<e)&&(e<c)&&(c<b)&&(b<a)){
        cout << "bilangan terkecilnya adalah : "<<d<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<d<<"|"<<e<<"|"<<c<<"|"<<b<<"|"<<a<<"|\n";
        }
//EA
        else if ((e<a)&&(a<b)&&(b<c)&&(c<d)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"|"<<e<<"|"<<a<<"|"<<b<<"|"<<c<<"|"<<d<<"|\n";
        }
        else if ((e<a)&&(a<b)&&(b<d)&&(d<c)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"|"<<e<<"|"<<a<<"|"<<b<<"|"<<d<<"|"<<c<<"|\n";
        }
        else if ((e<a)&&(a<c)&&(c<b)&&(b<d)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"|"<<e<<"|"<<a<<"|"<<c<<"|"<<b<<"|"<<d<<"|\n";
        }
        else if ((e<a)&&(a<c)&&(c<d)&&(d<b)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<e<<"|"<<a<<"|"<<c<<"|"<<d<<"|"<<b<<"|\n";
        }
        else if ((e<a)&&(a<d)&&(d<b)&&(b<c)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"|"<<e<<"|"<<a<<"|"<<d<<"|"<<b<<"|"<<c<<"|\n";
        }
        else if ((e<a)&&(a<d)&&(d<c)&&(c<b)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<e<<"|"<<a<<"|"<<d<<"|"<<c<<"|"<<b<<"|\n";
        }
//EB
        else if ((e<b)&&(b<a)&&(a<c)&&(c<d)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"|"<<e<<"|"<<b<<"|"<<a<<"|"<<c<<"|"<<d<<"|\n";
        }
        else if ((e<b)&&(b<a)&&(a<d)&&(d<c)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"|"<<e<<"|"<<b<<"|"<<a<<"|"<<d<<"|"<<c<<"|\n";
        }
        else if ((e<b)&&(b<c)&&(c<a)&&(a<d)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"|"<<e<<"|"<<b<<"|"<<c<<"|"<<a<<"|"<<d<<"|\n";
        }
        else if ((e<b)&&(b<c)&&(c<d)&&(d<a)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<e<<"|"<<b<<"|"<<c<<"|"<<d<<"|"<<a<<"|\n";
        }
        else if ((e<b)&&(b<c)&&(d<a)&&(a<c)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"|"<<e<<"|"<<b<<"|"<<d<<"|"<<a<<"|"<<c<<"|\n";
        }
        else if ((e<b)&&(b<d)&&(d<c)&&(c<a)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<e<<"|"<<b<<"|"<<d<<"|"<<c<<"|"<<a<<"|\n";
        }
//EC
        else if ((e<c)&&(c<a)&&(a<b)&&(b<d)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"|"<<e<<"|"<<c<<"|"<<a<<"|"<<b<<"|"<<d<<"|\n";
        }
        else if ((e<c)&&(c<a)&&(a<d)&&(d<b)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<e<<"|"<<c<<"|"<<a<<"|"<<d<<"|"<<b<<"|\n";
        }
        else if ((e<c)&&(c<b)&&(b<a)&&(a<d)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<d<<"\n";
        cout <<"|"<<e<<"|"<<c<<"|"<<b<<"|"<<a<<"|"<<d<<"|\n";
        }
        else if ((e<c)&&(c<b)&&(b<d)&&(d<a)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<e<<"|"<<c<<"|"<<b<<"|"<<d<<"|"<<a<<"|\n";
        }
        else if ((e<c)&&(c<d)&&(d<a)&&(a<b)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<e<<"|"<<c<<"|"<<d<<"|"<<a<<"|"<<b<<"|\n";
        }
        else if ((e<c)&&(c<d)&&(d<b)&&(b<a)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<e<<"|"<<c<<"|"<<d<<"|"<<b<<"|"<<a<<"|\n";
        }
//ED
        else if ((e<d)&&(d<a)&&(a<b)&&(b<c)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"|"<<e<<"|"<<d<<"|"<<a<<"|"<<b<<"|"<<c<<"|\n";
        }
        else if ((e<d)&&(d<a)&&(a<c)&&(c<b)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<e<<"|"<<d<<"|"<<a<<"|"<<c<<"|"<<b<<"|\n";
        }
        else if ((e<d)&&(d<b)&&(b<a)&&(a<c)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<c<<"\n";
        cout <<"|"<<e<<"|"<<d<<"|"<<b<<"|"<<a<<"|"<<c<<"|\n";
        }
        else if ((e<d)&&(d<b)&&(b<c)&&(c<a)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<e<<"|"<<d<<"|"<<b<<"|"<<c<<"|"<<a<<"|\n";
        }
        else if ((e<d)&&(d<c)&&(c<a)&&(a<b)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<b<<"\n";
        cout <<"|"<<e<<"|"<<d<<"|"<<c<<"|"<<a<<"|"<<b<<"|\n";
        }
        else if ((e<d)&&(d<c)&&(c<b)&&(b<a)){
        cout << "bilangan terkecilnya adalah : "<<e<<"\n";
        cout << "bilangan terbesarnya adalah : "<<a<<"\n";
        cout <<"|"<<e<<"|"<<d<<"|"<<c<<"|"<<b<<"|"<<a<<"|\n";
        }

else{
    cout << "#####Gemblung Mbrundet#####";
}

}



