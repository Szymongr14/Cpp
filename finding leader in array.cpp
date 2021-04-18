#include <iostream>
using namespace std;

void lider(int tab[6], int n){
    int ile = 0;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          if(tab[i]==tab[j]){
              if(++ile> n/2){
                  cout<<"lider to " <<tab[i];
                  exit(0);
                }   
            }          
          }  
        ile = 0;      
    }
    cout<<"brak lidera";
}

int main()
{
    int tab[]= {1,5,3,2,2,2};
    lider(tab,6);
}

