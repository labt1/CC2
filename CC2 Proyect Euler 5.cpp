#include<iostream>
using namespace std;

int main() {
	long int n = 1, cont = 0;
	while (true) {
		for (int i = 1; i <= 20 ; i++){
			if (n%i == 0) {				
				cont++;			
			}}
		if (cont == 20) {
			break;
		}
		cont = 0;
		n++;
	}
	cout << n << endl;
	return 0;
}


