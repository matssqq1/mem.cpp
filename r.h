#include <iostream>
using namespace std;

unsigned long seed = 1; 
int g = 65536, a,f=10000;;


int r() {
    cin >> a;
    a*f;
    g+a;
    seed = seed * 1103515245 + 12345; 
    return (seed / g) % 10;     
}