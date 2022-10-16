#include <iostream>
using namespace std;
int main(){	
	int a, b, c, d, e, f, B;
	cin >> B;
	a = B / 100000;
	b = B / 10000 %10 ;
	c = B / 1000 % 10;
	d = B / 100 % 10;
	e = B / 10 % 10;
	f = B % 10;
	if (a+b+c==d+e+f)
	{
		cout << "Yes";
	}
	else
	{
		cout << "NO";
	}
}

