#include <iostream>
#include "r.h"
using namespace std;

string w() {
    string s;
    if(r()<5){
        s = "1";
        return s;
    }
    if(r()>5){
        s = "2";
        return s;
    }
    else{
        s = "пиздец";
        return s;
    }
    
    
}