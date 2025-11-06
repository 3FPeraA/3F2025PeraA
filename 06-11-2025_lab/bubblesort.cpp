#include <iostream>
using namespace std;

int main() {
    int numeri[5] = {8,6,12,1,5};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - 1; j++) {
            if (numeri[j] > numeri[j + 1]) {
                int swap=numeri[j];
                numeri[j]=numeri[j + 1];
                numeri[j + 1]=swap;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << numeri[i] <<endl;
    }
}