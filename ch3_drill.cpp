#include "std_lib_facilities.h"
int main() //chapter 3 drill
{
	string first_name;
	cout<<"--Kérem adja meg, annak a keresztnevét, akinek szeretne levelet írni! ";
	cin>>first_name;
	cout<<" Kedves " <<first_name <<"! \n Hogy vagy? Rég láttalak.\n";
	string friend_name;
	cout<<"\n--Adja meg egy másik barátja nevét! ";
	cin>>friend_name;
	cout<<"Láttad mostanában " <<friend_name <<"-t ?\n";
	cout<<"\n--Adja meg a barátja nemét! (f-férfi/n-nő) "; 
	char friend_sex;
	cin>>friend_sex;
	if (friend_sex=='f' || friend_sex=='F' )
		{
			cout<<" Ha látod " <<friend_name <<"-t, akkor légyszíves mondd meg neki (férfi), hogy hívjon fel.";
		}
	if (friend_sex=='n' || friend_sex=='N' )
		{
			cout<<" Ha látod " <<friend_name <<"-t, akkor légyszíves mondd meg neki (nő), hogy hívjon fel.";
		}
	if (friend_sex!='f' && friend_sex!='F' && friend_sex!='n' && friend_sex!='N' )
		{
			cout<<" Ha látod " <<friend_name <<"-t, akkor légyszíves mondd meg neki (valami más), hogy hívjon fel.";
		}
	int age;
	cout<<"\n\n--Adja meg " <<friend_name <<" korát! ";
	cin>>age;
	if (age<=0 || age>=110)
		{
			simple_error("Csak viccelsz!"); 
		}
	if (!(age<=0) && !(age>=110))
		{
			cout<<(" Hallottam, hogy születésnapod volt és ") <<age <<" éves vagy.\n ";
		}
	if (age>0 && age<12)
		{
			cout<<"A következő évben " <<age+1 <<" éves leszel!\n ";
		}
	if (age==17)
		{
			cout<<"Jövőre már szavazhatsz!\n ";	
		}	
	if (age>70)
		{
			cout<<"Remélem élvezed a nyugdíjt!\n ";
		}
		cout<<" \nÜdvözlettel!\n\nMátravölgyi Adrián\n";
}