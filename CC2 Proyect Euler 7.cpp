#include<iostream>
#include<math.h>
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

int main() {
	int np = 10000, m = 0, i = 3;
	while(np!=0){
		if(primo(i)== true){
		m = i;
		np--;}
		i=i+2;
	}
	cout << m;
	return 0;
	}
