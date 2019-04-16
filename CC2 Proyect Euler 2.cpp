#include<iostream>
using namespace std;
int main() {
	int a = 1, b = 2, c=0, s=2;
	while (c < 4000000) {
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0) {
			s = s + c;
		}
	}
	cout << s;
	return 0;
}


