#include "std_lib_facilities.h"
int main()  //gépi kód hossza
{
	int sz=0;
	int a=1;
	while(a!=0)
	{
		cout<<a <<"\n";
		a<<=1;
		sz++;
	}
	cout<<"\n" <<sz <<" lépés után lesz az a<<=1; kifejezés hamis!\n";
}
