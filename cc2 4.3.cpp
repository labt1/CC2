#include<iostream>

using namespace std;

int sum(const int x, const int y, const int z) {
	return x + y + z;

}

int sum(const int a, const int b, const int c, const int d) {
	 return a + b + c + d;

}

int main() {
	int a = 5, b = 6, c = 7, d = 8;
	cout << sum(a, b, c) << sum(a, b, c, d);
	return 0;
}

