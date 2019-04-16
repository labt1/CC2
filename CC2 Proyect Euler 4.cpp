#include<iostream>
using namespace std;

int invertir(int n) {
	int r=0;
	while (n > 0) {
		r = r + n % 10;
		r = r * 10;
		n = n / 10;
	}
	return r/10;
}

int main() {
	int n, m = 0;
	for (int i = 100; i <= 999; i++) {
		for (int j = 100; j <= 999; j++) {
			n = i*j;
			if (n == invertir(n) && n >= m)
				m = n;
		}
	}
	cout << m << endl;
	system("pause");
	return 0;
}
