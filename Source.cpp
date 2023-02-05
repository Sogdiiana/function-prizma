#include <iostream>
using namespace std;

int volume(int a)
{
	 int v = a * a * a;
	return v;
}
int square(int a)
{
	int s = 2 * a * a + 4 * a * a;
	return s;
}
int main()
{
	int a;
	cout << "Enter a=";
	cin >> a;
	cout << "volume=" << volume( a) << endl;
	
	cout << "square =" << square( a);

	return 0;
}
