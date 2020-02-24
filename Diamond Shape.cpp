#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{ int i, j;
	for (i=-2; i<=2; i++)
	{ for (j= -2; j<=2; j++){
	
	  if (abs(i)+abs(j)<=2)
	  cout <<"*";
	  else 
	  cout<< " ";
	}
	
	cout<< "\n";
}
	return 0;
}
