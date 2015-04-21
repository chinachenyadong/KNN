#include<iostream>

using namespace std;
int main()
{
	int *a = new int[3];
	int *b = new int[3]();
	cout << a[1] << " " << b[1] << endl;
}
