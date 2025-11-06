#include <iostream>
using namespace std;

int main() {
    int size;
    //int size = 5;
    cout<<"Quanti numeri vuoi inserire: ";
    cin>>size;
    int numeri[size];
    for (int i=0; i<size; i++) {
        cout<<"Inserisci valore: ";
        cin>>numeri[i];
    }
    //int numeri[size] = {8,6,12,1,5};
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (numeri[j] > numeri[j + 1]) {
                int swap=numeri[j];
                numeri[j]=numeri[j + 1];
                numeri[j + 1]=swap;
            }
        }
    }
    cout<<"\n| Vettore ordinato: ";
    for (int i = 0; i < size; i++) {
        cout << numeri[i] << " | ";
    }
}