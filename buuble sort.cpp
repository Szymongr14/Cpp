#include <iostream>
using namespace std;

void zmien(int tab[5], int a, int b){
    int x = tab[a];
    tab[a] = tab[b];
    tab[b] = x;
}  

void pokaz(int tab[5], int n)
{
    for(int i =0;i<n;i++){
        cout<<tab[i]<<", ";
    }
}

void sortuj_b(int tab[5], int n){
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(tab[j]>tab[j+1]) zmien(tab,j,j+1);
        }
    }
}

int main()
{
   int tab[] =  {3,5,4,8,1};
   int n; 
   pokaz(tab,5);
   cout<<endl;
   sortuj_b(tab,5);
   pokaz(tab,5);
}

