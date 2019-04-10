#include<iostream>
using namespace std;

void transpose(const int input, int output) {
	 for (int i = 0; i < 2; ++i) {
		 for (int j = 0; j < 2; ++j) {
			output[j][i] = input[i][j];}		
	}
}


int main() {
	int a[2][2]={1,2},{3,4}};
	int b[2][2]={0,0},{0,0}};
	transpose(a, b);
	return 0;
}


