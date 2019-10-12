#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main() {
    char linha[20];

    while (linha[0]!='-'){
        cin >> linha;

    if (linha[0]=='-'){
        break;
    }
    if (linha[1]=='x') {
        cout << dec << strtol(linha, NULL, 16) << endl;

    }
    if (linha[1]!='x') {
        cout << "0x" << uppercase << hex << atoi(linha) << endl;
    }
    }

    return 0;
}
