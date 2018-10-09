#include "std_lib_facilities.h"
int main()
{
	double min, max, x, sum=0;
	vector<double> v;
	string unit;
	while(unit != "|")
	{
		//adatok beolvasása
		cout<<"Adjon meg egy számot! ";
		cin>> x;
		while(cin.fail())
		{
			cin.clear();
			cin.ignore();
			cout<<"Ez nem szám. Kérlek adj meg egy számot! ";
			cin>>x;
		}
		cout<<"Adjon meg egy mértékegységet! (cm, m, in, ft) (kilépéshez: |) ";
		cin>>unit;
		while(unit != "cm" && unit != "m" && unit !="in" && unit !="ft" && unit !="|")
		{
			cin.clear();
			cin.ignore();
			cout<<"Nem ismerem ezt a mértékegységet! ";
			cin>>unit;
		}
		//mértékegységek átváltása m-re
		if(unit=="cm")
			x=x/100;
		else if(unit=="in")
			x=x*(2.54/100);
		else if(unit=="ft")
			x=x*(30.48/100);
		//számok vektorba helyezése és minimum, maximum meghatározása
		v.push_back(x);
		if (v.size()==1)
		{
			min=max=x;
			sum+=x;
		}
		else
		{
			sum+=x;
			if(x>max)
				max=x;
			if(x<min)
				min=x;
		}
	}
	cout<<"\n(A számok méterben vannak)\n\nLegkisebb szám: "<<min <<'\n';
	cout<<"Legnagyobb szám: "<<max <<'\n';
	cout<<"A számok összege: "<<sum <<'\n';
	cout<<"Összesen "<<v.size() <<" db számot írt be!\n\n";
	sort(v);
	for(double i:v) 
		cout<<i <<' ';
	cout<<'\n';
	return 0;
}