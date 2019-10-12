#include <bits/stdc++.h>

using namespace std;

int main () {
    //freopen("entrada.in","r",stdin);
    string palavra;
    int n;
    cin >> n;
    cin.get();
    while(n--){
    getline(cin,palavra);
    int tam=palavra.size();
    for (int i=tam/2-1; i>=0; i--){
        cout << palavra[i];
    }
    for (int i=tam-1; i>=tam/2; i--){
        cout << palavra[i];
    }
    cout << endl;
    }

    return 0;
}
