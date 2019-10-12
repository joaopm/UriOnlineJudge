#include <iostream>

using namespace std;

int main() {
    int x, total;
    string leds;
    int valor[10]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    cin >> x;
    for (int i=1; i<=x; i++) {
        total=0;
        cin >> leds;
    for(int i=0; i<leds.size(); i++) {
        total+=valor[leds[i]-'0'];
    }
        cout << total << " leds" << endl;
    }

    return 0;
}
