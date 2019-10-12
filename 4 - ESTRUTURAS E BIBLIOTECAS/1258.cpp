#include <bits/stdc++.h>

using namespace std;

struct camisetas {
    string nome;
    string cor;
    char tamanho;
};
int compara (camisetas a, camisetas b) {
    if (a.cor==b.cor) {
        if(a.tamanho==b.tamanho) {
            return a.nome<b.nome;
        }
        return a.tamanho>b.tamanho;
    }
    return a.cor<b.cor;
}

int main() {
    int i, n;
    camisetas camiseta[61];
    cin >> n; bool entrou=false;

    while (n) {
        for (i=0; i<n; i++) {
            cin.get();
            getline (cin, camiseta[i].nome);
            cin >> camiseta[i].cor;
            cin >> camiseta[i].tamanho;
        }
        if(entrou) cout << endl;
        entrou=true;
        sort (camiseta, camiseta+n, compara);
        for (i=0; i<n; i++){
            cout << camiseta[i].cor << " ";
            cout << camiseta[i].tamanho << " ";
            cout << camiseta[i].nome << endl;
        }
        cin >> n;
    }
    return 0;
}
