#include<iostream>
using namespace std;

void swap(int **ptr1, int **ptr2) {
	 int *aux = *ptr1;
	 *ptr1 = *ptr2;
	 *ptr2 = aux;
}

int main(){
	int a = 5, b = 6, *x = &a, *y = &b;
	int **ptr1 = &x, **ptr2 = &y;
	swap(ptr1,ptr2);
	cout<<**ptr1<<" "<<**ptr2;
	cout<<*x<<" "<<*y;
	return 0;
}



