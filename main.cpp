#include <iostream>
using namespace std;

float avg (float x[10]){
float sum = 0, avg;
for (int i =0; i<10; i++)
sum = sum +  x[i];
avg = sum / 10;
return avg;
}

int main() {
	
	float x[10], y;
	cout<< "enter an array x:";
	{
	for (int i = 0; i<10; i++)
{	
	cin>> x[i]; }
	y = avg(x);
	cout<< y;
}
	return 0;
}
