#include<iostream>

using namespace std;

int sum(const int numbers[], const int numbersLen) {
	return numbersLen == 0 ? 0 : numbers[0] + sum(numbers + 1,numbersLen - 1);
	
}

int main() {
	int a[5] = { 4,5,6,7,8 };
	cout << sum(a, 5);
	return 0;
}
