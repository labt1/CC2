#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

int main(){
	int dartsInCircle = 0;
	int n=7;
 	for (int i = 0; i < n; ++i) {

	 double x = rand() / (double)RAND_MAX, y = rand() / (double)RAND_MAX;
	 if (sqrt(x * x + y * y) < 1) {
		 ++dartsInCircle;	
	     cout<<dartsInCircle;}	 
   }
 }	
 
