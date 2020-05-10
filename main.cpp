#include <iostream>
#include"Nod.h"
#include"Nod_dublu.h"
#include"Nod_prioritate.h"
#include "Coada_prioritati.h"
using namespace std;
int main()
{
    Nod a("abcd",0);
    cout<<a;
    Nod aa("dasc",0);
    cout<<aa;
    Nod_dublu b("pda",0,0);
    cout<<b;
    Nod_dublu c("",0,0);
    cout<<c;
    Nod_prioritate d("mere",0,0,13);
    cout<<d;
    int x=d.getPrio();
    cout<<x<<endl;
    Nod_dublu w=b;
    cout<<w;
    Nod_prioritate t=d;
    cout<<t;
    x=t.getPrio();
    cout<<x<<endl;
}
