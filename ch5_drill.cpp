#include "std_lib_facilities.h"
int main()
try {
   //cout << "Success!\n"; 
   //cout << "Success!\n";
   //cout << "Success" << "!\n";
   //cout <<"success "<< '\n';
   //string res = "seven"; vector<string> v(10); v[5] = res; cout << "Success!\n";
   //vector<int> v(10); v[5] = 7; if (v[5]=7) cout << "Success!\n";
   //if (true) cout << "Success!\n"; else cout << "Fail!\n";
   //bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";
   //string s = "apple"; bool c = "ape"<s; if (c) cout << "Success!\n";
   //string s = "ape"; if (s=="ape") cout << "Success!\n";
   //string s = "fool"; if (s=="fool") cout << "Success!\n";
   //string s = "ape"; if (s<"fool") cout << "Success!\n";
   //vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n";
   //vector<char> v(5); for (int i=0; i<=v.size()-1; ++i) ; cout << "Success!\n";
   //string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s;
   //if (true)  cout << "Success!\n"; else cout << "Fail!\n";
   //int x = 2000; int c = x; if (c==2000) cout << "Success!\n";
   //string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s;
   //vector<int> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n";
   //int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n";
   //int x = 3; double d = 5/(x-0.5); if (d==2*x-4) cout << "Success!\n";
   //string s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s ;
   //int j=9; int i=0; while (i<=10) ++i; if (j<i) cout << "Success!\n";
   //int x = 3; double d = 5/(x-2); if (d==2*x-1) cout << "Success!\n";
   cout << "Success!\n";

   keep_window_open();
   return 0;
}
catch (exception& e) {
cerr << "error: " << e.what() << '\n';
keep_window_open();
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n";
keep_window_open();
return 2;
}
