#include<iostream>
using namespace std;

int main() {
	int n=1000, s = 0;
	for (int i = 3; i < n; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			s = s + i;
		}
	}
	cout << s;	
	return 0;
}
