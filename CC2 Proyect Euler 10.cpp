#include <iostream>
#include <math.h>

using namespace std;

bool primo(long long int n)
{
	if (n % 2 == 0)
		return false;
	for (long long int i = 3; i <= (pow(n, 0.5)); i = i + 2)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	unsigned long long int sum = 0;
	int n = 2000000;
	for (int i = 3; i < n; i = i + 2){
		if (primo(i) == true) {
			sum = sum + i;
		}
	}
	cout << sum + 2;
	return 0;
}
