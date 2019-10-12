#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main() {
	int n;

	while( (cin >> n) && n != 0) {

		queue<int> q;

		for (int i = 1; i <= n; i++) {
			q.push(i);
		}

		cout << "Discarded cards: ";

		while(q.size() > 1) {
			cout << q.front();

			if(q.size() != 2) {
                cout << ", ";
			}

			q.pop();
			q.push(q.front());
			q.pop();

		}

		cout << endl;
		cout << "Remaining card: " << q.front() << endl;

	}

	return 0;
}
