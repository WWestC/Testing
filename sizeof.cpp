#include<iostream>
#include<limits>
#include<string>
using namespace std;
int main()
{
typedef unsigned char a;
typedef wchar_t b;
typedef short c;
typedef int d;
typedef unsigned e;
typedef long f;
typedef unsigned long g;
typedef double h;
typedef long double i;
typedef float j;
typedef size_t k;
typedef string l;
cout<<"type:\t\t"<<"*******************size*********************"<<endl;
cout<<"bool:\t\t"<<"sizeof:"<<sizeof(bool);
cout<<"\t Max:"<<(numeric_limits<bool>::max)();
cout<<"\t\t Min:"<<(numeric_limits<bool>::min)()<<endl;

cout<<"char:\t\t"<<"sizeof:"<<sizeof(char);
cout<<"\t Max:"<<(numeric_limits<char>::max)();
cout<<"\t\t Min:"<<(numeric_limits<bool>::min)()<<endl;

cout<<"signed char:\t\t"<<"sizeof:"<<sizeof(signed char);
cout<<"\t Max:"<<(numeric_limits<signed char>::max)();
cout<<"\t\t Min:"<<(numeric_limits<signed char>::min)()<<endl;

cout<<"float:\t\t"<<"sizeof:"<<sizeof(float);
cout<<"\t Max:"<<(numeric_limits<j>::max)();
cout<<"\t\t Min:"<<(numeric_limits<j>::min)()<<endl;

cout<<"size_t:\t\t"<<"sizeof:"<<sizeof(k);
cout<<"\t Max:"<<(numeric_limits<k>::max)();
cout<<"\t\t Min:"<<(numeric_limits<k>::min)()<<endl;

cout<<"long:\t\t"<<"sizeof:"<<sizeof(f);
cout<<"\t Max:"<<(numeric_limits<f>::max)();
cout<<"\t\t Min:"<<(numeric_limits<f>::min)()<<endl;

cout<<"unsigned long:\t\t"<<"sizeof:"<<sizeof(g);
cout<<"\t Max:"<<(numeric_limits<g>::max)();
cout<<"\t\t Min:"<<(numeric_limits<g>::min)()<<endl;

cout<<"double:\t\t"<<"sizeof:"<<sizeof(h);
cout<<"\t Max:"<<(numeric_limits<h>::max)();
cout<<"\t\t Min:"<<(numeric_limits<h>::min)()<<endl;

cout<<"long double:\t\t"<<"sizeof:"<<sizeof(i);
cout<<"\t Max:"<<(numeric_limits<i>::max)();
cout<<"\t\t Min:"<<(numeric_limits<i>::min)()<<endl;

cout<<"unsigned:\t\t"<<"sizeof:"<<sizeof(e);
cout<<"\t Max:"<<(numeric_limits<e>::max)();
cout<<"\t\t Min:"<<(numeric_limits<e>::min)()<<endl;

cout<<"string:\t\t"<<"sizeof:"<<sizeof(l);
cout<<"\t Max:"<<(numeric_limits<l>::max)();
cout<<"\t\t Min:"<<(numeric_limits<l>::min)()<<endl;
cout<<"type:\t\t"<<"*****************size************************"<<endl;
return 0;
}