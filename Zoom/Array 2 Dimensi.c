#include<iostream>
using namespace std;

int maT[3][4]={
{1, 4, 2, 3},
{4, 3, 2, 1},
{1, 2, 4, 3}
};

int i, j, k;


int main(){

i = 0;
while(i<3){
j = 0;

    while(j<4){
    k = 1;

        while(k<4){

        if((k>j)&&(maT[i][j]>maT[i][k])){swap(maT[i][j], maT[i][k]);}
        k++;
        }

    j+=1;
    }

i++;
}

i = 0;
while(i<3){
j=0;
    while(j<4)
    {   cout<<maT[i][j]<<" ";
        j+=1;
    }
    cout<<endl;
i+=1;
}
}
