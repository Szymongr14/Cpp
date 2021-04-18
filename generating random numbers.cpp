#include <iostream>
#include <time.h>

using namespace std;


int los(int wartosc_poczatkowa, int ile_liczb){
    return( rand() % ile_liczb ) + wartosc_poczatkowa ;
}
void pokaz(int t[], int n )
	{
		for (int i=0;i<n;i++){
		cout<<"Element "<<i+1<<" to "<<t[i]<<endl;
	}
	}

int main()
{
    int tab[100];
    
    
    srand( time( NULL ) );
    
    for (int i=0;i<14;i++)
        tab[i]=los(0,11);
        
    pokaz(tab,14);
        
}