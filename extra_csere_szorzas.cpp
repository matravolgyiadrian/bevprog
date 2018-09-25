#include "std_lib_facilities.h"
int main() // csere szorzással
{
int a=7;
int b=1;
cout <<"Csere előtt: \n " <<"a=" <<a <<"\n b=" <<b;
a=a*b;
b=a/b;
a=a/b;
cout <<"\nCsere után: \n " <<"a=" <<a <<"\n b=" <<b <<'\n';
}