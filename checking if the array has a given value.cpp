#include <iostream>
using namespace std;

bool szukaj1(int T[],int n, int szukana){
    for(int i = 0;i<n;i++){
        if(T[i]==szukana) return 1;
    }
    return 0;
}


int main()
{
    int T[100];
    int n = 4;
    int szukana = 2;
    int a;

    for(int i=0;i<n;i++){
        cout<<"Podaj element nr "<<"["<<i<<"] = ";
        cin>>T[i];
        
    }

    if(szukaj1(T,n,szukana)) cout <<"jest";
    else cout << "mnie ma";
}


