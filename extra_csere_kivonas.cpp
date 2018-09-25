#include "std_lib_facilities.h"
int main() //csere kivonással
{
	int a=7;
	int b=1;
	cout <<"Csere előtt: \n a= " <<a <<"\n b= " <<b <<'\n';
	a=a+b;
	b=a-b;
	a=a-b;
	cout <<"Csere után: \n a= " <<a <<"\n b= " <<b <<'\n';
}