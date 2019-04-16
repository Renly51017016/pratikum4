#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

  main() {
    int a,b,mod;
    float bagi;
    cout<<"\n\tcontoh pengunaan / dan %\n\n";
    cout<<"\tmasukan angka pertama (a) = ";cin>>a;
    cout<<"\tmasukan angka kedua   (b) = ";cin>>b;
    bagi=float(a)/b;
    mod=a%b;
    cout<<"\n\thasil pembagian         = "<<bagi;
    cout<<"\ntsisa hasil bagi          = "<<mod;
    getch();}
