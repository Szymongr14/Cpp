#include <iostream>
using namespace std;

double min_wstaw(){
    double max, liczba, ile = 0;
    cout<<"Podaj liczbe: ";
    cin>>liczba;
    max = liczba;
    if(liczba==0){
        cout<<"Tablica nie ma najwiekszej wartosci"<<endl;
        return max;
    }
    
    while(liczba!=0){
        cout<<"Podaj liczbe: ";
        cin>>liczba;
        ile++; 
        if(liczba==0){
            cout<<ile<<endl;
            return max;    
        }
        if(liczba>max)max = liczba; 
    }  
}

int main()
{
    cout<<min_wstaw()<<endl; 
}
