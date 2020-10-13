#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

string total(int a) {
    if (a==61) {
            return "Brasilia";
    }
    if (a==71) {
            return "Salvador";
    }
    if (a==11) {
            return "Sao Paulo";
    }
    if (a==21) {
            return "Rio de Janeiro";
    }
    if (a==32) {
            return "Juiz de Fora";
    }
    if (a==19) {
            return "Campinas";
    }
    if (a==27) {
            return "Vitoria";
    }
    if (a==31) {
            return "Belo Horizonte";
    }
    if (a!=61 and a!=71 and a!=11 and a!=21 and a!=32 and a!=19 and a!=27 and a!=31) {
            return "DDD nao cadastrado";
}
}
int main() {
    int a;
    cin >> a;
    cout << total(a) << endl;

}
