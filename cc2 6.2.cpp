#include<iostream>
using namespace std;

void reverso(int numbers[], const int numbersLen) {

	 for (int i = 0; i < numbersLen / 2; ++i) {
			int tmp = numbers[i];
			int indexFromEnd = numbersLen - i - 1;
			numbers[i] = numbers[indexFromEnd];
			numbers[indexFromEnd] = tmp;		
		}
	 for(int i=0;i<numbersLen;i++){
	 	cout<<numbers[i];
	 }	
}

int main() {
	int a[5]={1,2,3,4,5};
	reverso(a, 5);
	return 0;
}

