#include <iostream>
#ifndef COADA_PRIORITATI_H
#define COADA_PRIORITATI_H
#include "Nod_prioritate.h"
using namespace std;
class Coada_prioritati
{
protected:
    Nod_prioritate*prim;
    Nod_prioritate*ultim;
public:
    Coada_prioritati();
    Coada_prioritati(const Coada_prioritati&);
    virtual ~Coada_prioritati();
    void adauga(Nod_prioritate node);
    int goala();
    Nod_prioritate* getPrim();
    Nod_prioritate* getUltim();
    Coada_prioritati operator=(const Coada_prioritati&);
    friend ostream & operator<<(ostream & out, Coada_prioritati&);
    friend ostream & operator>>(istream & in, Coada_prioritati&);
    void inserare(Nod_prioritate node,int poz);
    void top();
    void pop();
    void empty();
};

#endif // COADA_PRIORITATI_H
