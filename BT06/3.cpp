#include<iostream>

using namespace std;


int res[100], val[100], n, k;

void print() {
	for (int i = 1; i <= k; i++) cout << char(res[i] + 'a' - 1);
	cout << endl;
}

void ToHop(int i) {
	for (int j = res[i-1]+1; j <= n-k+i; j++)
		if (val[j] == 0) {
            res[i] = j;
			val[j] = 1;
			(i == k) ? print() : ToHop(i+1);
            val[j] = 0;
		}
}

int main() {

	cin >> n >> k;
    ToHop (1);
	return 0;
}
