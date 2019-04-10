#include<iostream>

using namespace std;

int sum(const int x, const int y) {
	return x + y;

}

int sum(const double x, const double y) {
	return x + y;

}

int main() {
	int a = 5, b = 6;
	double c = 10, d = 11;
	cout << sum(a, b)<<" "<< sum(c, d);
	return 0;
}

