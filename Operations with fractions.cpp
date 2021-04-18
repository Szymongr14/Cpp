#include <iostream>
using namespace std;

int nwd2(int a, int b){
    if (b==0)return a;
    int r = a%b;
    return abs(nwd2(b,r));
}

int nww(int a, int b){
    return (a*b)/nwd2(a,b);
}

int main()
{   
    int a1,b1;
    cout << "Podaj pierwszy ulamek"<<endl;
    cout << "Podaj licznik: ";
    cin >> a1;
    cout << "Podaj mianownik: ";
    cin >> b1;
    while(b1==0){
        cout << "Mianownik nie moze byc zerem. Podaj mianownik: ";
        cin >> b1;
    }
    int a2,b2;
    cout << "Podaj drugi ulamek"<<endl;
    cout << "Podaj licznik: ";
    cin >> a2;
    cout << "Podaj mianownik: ";
    cin >> b2;
    while(b2==0){
        cout << "Mianownik nie moze byc zerem. Podaj mianownik: ";
        cin >> b2;
    }
    string x;
    cout<<"Wstaw operacje, ktora chcesz wykonac (+ , -, *, :)  ";
    cin>>x;
    while(x!="+" and x!="-" and x!="*" and x!="*"){
        cout<<"Nieznany znak, Popraw! Wstaw operacje, ktora chcesz wykonac (+ , -, *, :)  ";
        cin>>x;
    }
    if(x=="+"){
        int wynik_l = (a1*nww(b1,b2))+(a2*nww(b1,b2));
        int wynik_m = b1*nww(b1,b2);
        if(wynik_l%wynik_m==0){
            cout<<"Ulamek "<<a1<<"/"<<b1<<" "<<x<<" "<<a2<<"/"<<b2<<" = "<< wynik_l/wynik_m;
        }
        else{
        cout<<"Ulamek "<<a1<<"/"<<b1<<" "<<x<<" "<<a2<<"/"<<b2<<" = "<<wynik_l/wynik_m<<" "<<(wynik_l%wynik_m)/nwd2(wynik_l,wynik_m)<<"/"<<wynik_m/nwd2(wynik_l,wynik_m);
        }    
    }
    if(x=="-"){
        int wynik_l = (a1*b2)-(a2*b1);
        int wynik_m = nww(b1,b2);
        if(wynik_l%wynik_m==0){
            cout<<"Ulamek "<<a1<<"/"<<b1<<" "<<x<<" "<<a2<<"/"<<b2<<" = "<< wynik_l/wynik_m;
        }
        else{
        cout<<"Ulamek "<<a1<<"/"<<b1<<" "<<x<<" "<<a2<<"/"<<b2<<" = "<<wynik_l/wynik_m<<" "<<(wynik_l%wynik_m)/nwd2(wynik_l,wynik_m)<<"/"<<wynik_m/nwd2(wynik_l,wynik_m);
        }    
    }
    if(x=="*"){
        int wynik_l = a1*a2;
        int wynik_m = b1*b2;
        if(wynik_l%wynik_m==0){
            cout<<"Ulamek "<<a1<<"/"<<b1<<" "<<x<<" "<<a2<<"/"<<b2<<" = "<< wynik_l/wynik_m;
        }
        else{
        cout<<"Ulamek "<<a1<<"/"<<b1<<" "<<x<<" "<<a2<<"/"<<b2<<" = "<<wynik_l/wynik_m<<" "<<(wynik_l%wynik_m)/nwd2(wynik_l,wynik_m)<<"/"<<wynik_m/nwd2(wynik_l,wynik_m);
        }    
    }
    if(x==":"){
        int wynik_l = a1*b2;
        int wynik_m = b1*a2;
        if(wynik_l%wynik_m==0){
            cout<<"Ulamek "<<a1<<"/"<<b1<<" "<<x<<" "<<a2<<"/"<<b2<<" = "<< wynik_l/wynik_m;
        }
        else{
        cout<<"Ulamek "<<a1<<"/"<<b1<<" "<<x<<" "<<a2<<"/"<<b2<<" = "<<wynik_l/wynik_m<<" "<<(wynik_l%wynik_m)/nwd2(wynik_l,wynik_m)<<"/"<<wynik_m/nwd2(wynik_l,wynik_m);
        }    
    }       
}
