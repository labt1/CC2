#include<iostream>

using namespace std;

int sum(const int numbers[], const int numbersLen) {
	int sum = 0;
	for (int i = 0; i < numbersLen; ++i) {
		sum += numbers[i];
		cout<<numbers[i]<<endl;
		
	}
	return sum;
}

int main() {
	int a[5] = { 4,5,6,7,8 };
	cout << sum(a, 5);
	return 0;
}


