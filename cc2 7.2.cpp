#include<iostream>
using namespace std;

void swap(int &x, int & y) {
	 int aux = x;
	 x = y;
	 y = aux;
}

int main(){
	int x=4, y=5;
	swap(x,y);
	cout<<x<<" "<<y;
	return 0;
}


