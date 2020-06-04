#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

 int main() 
    { 
    
    std::cout << " --- " << '\n';
    
    proses :
    cout<<"======SELAMAT DATANG DI BYKSW GENERATOR======\n";
    cout<<endl; sleep(1);
    cout<<"STILL UNDER TESTING\n"; sleep(1);
    cout<<"Fb : Dewi V Manstein\n";
    cout<<endl; sleep(1);
    
    char a[250]; 
    cout<<"MASUKKAN KATA (Maks 250 karakter) :"; 
    cin.getline(a, 250);
    cin.ignore();
    for(int i=0;a[i]!='\0';i++)
    { switch (a[i]) 
            { 
          case 'a':a[i]='w';
             break;
          case 'u':a[i]='w'; 
             break; 
          case 'i':a[i]='y'; 
             break; 
          case 'o':a[i]='w'; 
             break; 
          case 'e':a[i]='w'; 
             break; } } 
    goto hasil;
    
    hasil :
    cout<<endl;
    cout<<"HASIL : ";
    cout<<a; 
    cout<<endl; sleep(1);
    goto akhir;
    
    char akhir;
    akhir :
    cout<<"Kembali..?[y/t]   ";
    cin>>akhir; 
    if(akhir == 'y') {
        system("cls|clear");
        goto proses;
        }
    if(akhir == 't') {
            goto out;
        } 
        else sleep(1);{
    cout<<"ERROR : PILIHAN TIDAK ADA";
        }
        cin.ignore();
        out :
    cout<<"EXITING PROGRAM...";
    }

