#include <iostream>
using namespace std;



void tworzenie_tabeli(int tab[100], int a ){
    for(int  i= 0;  i< a; ++i){
		cout<<"Podaj element ["<<i+1<<"]: ";
        cin>>tab[i];
	}
}


bool maleje(int tab[100],int n){
    for(int i=0;i<n-1;i++){
        if(tab[i]<=tab[i+1])return false;
        
    }
    return true;
}
bool rosnie(int tab[100],int n){
    for(int i=0;i<n-1;i++){
        if(tab[i]>=tab[i+1])return false;
        
    }
    return true;
}
bool nierosnacy(int tab[100],int n){
    for(int i=0;i<n-1;i++){
        if(tab[i]>tab[i+1])return false;
        
    }
    return true;
}
bool niemalejacy(int tab[100],int n){
    for(int i=0;i<n-1;i++){
        if(tab[i]<tab[i+1])return false;
        
    }
    return true;
}
bool niemonotoniczny(int tab[100],int n){
    for(int i=0;i<n-1;i++){
        if(maleje(tab,n) || rosnie(tab,n)|| nierosnacy(tab,n) || niemalejacy(tab,n) )return false;
        
    }
    return true;
}


int check_n(int a){
    int n;
    cout<<"Podaj wartosc n: ";
    cin>>n;
    while(n<=a){
        cout<<"Podaj wartosc n: ";
        cin>>n;
    }
    return n;
}



int main()
{
   int tab[100];
   
   
   int n = check_n(0);
   
   tworzenie_tabeli(tab,n);
   
   if(maleje(tab,n)){
       cout<<"Ciag malejacy"<<endl;
   }
   if(rosnie(tab,n)){
       cout<<"Ciag rosnacy"<<endl;
   }
   if(nierosnacy(tab,n)){
       cout<<"Ciag nierosnacy"<<endl;
   }
   if(niemalejacy(tab,n)){
       cout<<"Ciag niemalejacy"<<endl;
   }
   if(niemonotoniczny(tab,n)){
       cout<<"Ciag niemonotoniczny"<<endl;
   }

   
}

