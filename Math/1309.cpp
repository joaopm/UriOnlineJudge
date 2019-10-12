#include <bits/stdc++.h>

using namespace std;

int main () {
    //freopen("entrada.in","r",stdin);
    string valor, cents;
    string saida;
    while (cin >> valor >> cents) {
        saida=""; ///saida.clear()
        int cont=0;
        for (int i=valor.size()-1; i>=0; i--) {
            saida=saida+valor[i];
            cont++;
            if(cont==3) {
                if (i!=0) saida=saida+",";
                cont=0;
            }
        }

        cout << "$";
        for (int i=saida.size()-1; i>=0; i--) {
            cout << saida[i];
        }
        if(cents.size()==1) {
            cout << ".0" << cents << endl;
        } else {
            cout << "." << cents << endl;
        }
    }
    return 0;
}
