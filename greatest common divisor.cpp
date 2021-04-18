int nwd2(int a, int b){
    if (b==0)return a;
    int r = a%b;
    return abs(nwd2(b,r));
}

int nww(int a, int b){
    return (a*b)/nwd2(a,b);
}