#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int i, j;
    double M[12][12], soma=0;
    char opcao;
    cout << fixed << setprecision(1);
    
    cin >> opcao;
    
    for (i=0; i<12; i++) {
        for (j=0; j<12; j++){
            cin >> M[i][j];
        }
    }
    for (i=0; i<12; i++) {
        for (j=i+1; j<12; j++) {
            soma=soma+M[i][j];
        }
    }
    if (opcao=='S'){
        cout << soma << endl;
    }
    else {
        cout << soma/66.0 << endl;
    }
    return 0;
}
