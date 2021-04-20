#include <iostream>
using namespace std;

void zmien(int tab[], int n, int m){   
    int P[100]={0};
    for (int i=0;i<n;i++) P[tab[i]]++;
    int k = 0;
    for (int i=0;i<m;i++){
        for (int j=P[i];j>=1;j--){
            tab[k]=i;
            k++;
        }
    }
}

void pokaz(int tab[5], int n)
{
    for(int i =0;i<n;i++){
        cout<<tab[i]<<", ";
    }
}

int main()
{
   int liczba_elementow = 8;
   int tab[liczba_elementow] =  {5,7,3,9,3,1,5,0};
   pokaz(tab,liczba_elementow);
   cout<<endl;
   zmien(tab,liczba_elementow,10);
   pokaz(tab,liczba_elementow);
}

