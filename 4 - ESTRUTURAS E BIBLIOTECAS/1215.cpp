#include <bits/stdc++.h>

using namespace std;

int main() {
    //freopen("entrada.in","r",stdin);
    string linha, saida;
    map<string,int> mapa;
    map<string,int>::iterator it;

    while(getline(cin, linha)) {
        saida = "";
        for(int i=0; i<linha.size(); i++) {
            char letra = tolower(linha[i]);
            if(letra >= 'a' and letra <= 'z') {
                saida+=letra;
            } else {
                if(saida.size() > 0){
                    mapa[saida]++;
                }
                saida.clear();
            }
        }
        if(saida.size() > 0) {
            mapa[saida]++;
        }
    }
    for(it=mapa.begin(); it!=mapa.end(); it++) {
        cout << it->first << endl;
    }

    return 0;
}
