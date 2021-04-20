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
