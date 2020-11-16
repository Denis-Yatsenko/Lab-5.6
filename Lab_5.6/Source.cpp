#include<iostream>
using namespace std;
int sum(int a, int b)
{
	return a+b;
}
int main()
{
	int n;
	int m;
	cout << "n = ";cin >> n;
	cout << "m = ";cin >> m;
	int k = sum(n, m);
	cout << k << endl;
	return 0;
}