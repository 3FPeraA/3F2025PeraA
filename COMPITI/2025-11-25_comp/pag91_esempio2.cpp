// Pag. 91 secondo esempio
#include <iostream>
using namespace std;

int main() {
    float A;
    cout<<"Inserisci un numero: ";
    cin>>A;
    if (A<=0) {
        A = -A;
    }
    cout<<A;
    return 0;
}