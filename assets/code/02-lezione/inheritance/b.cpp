#include "b.h"

B::B(){
    s = "";
    cout << "B::B()" << this << endl;
}

B::B(int _i,string _s):A(_i){
    s = _s;
    cout << "B::B(int,string)" << this << endl;
}

B::~B(){
    cout << "B::~B()" << this << endl;
}

string B::get_s(){ return s; }

void test_B() {
    B b;
    cout << b.get_s() << b.get_i();
    
    B b2(3,"Moli");
    cout << b2.get_s() << b2.get_i();
    
    // b è anche un A, quindi posso chiamare la funzione
    cout << quadrato(b2);
    cout << raddoppia(b2);
}