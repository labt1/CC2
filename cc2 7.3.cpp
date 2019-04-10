#include<iostream>
using namespace std;

void swap(int *x, int *y) {
	 int aux = *x;
	 *x = *y;
	 *y = aux;
}

int main(){
	int a=5,b=6,*x=&a, *y=&b;
	swap(x,y);
	cout<<a<<" "<<b;
	return 0;
}
