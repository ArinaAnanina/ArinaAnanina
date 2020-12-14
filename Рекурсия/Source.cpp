#include <iostream>
using namespace std;
long long int step(int n, int m)
{
	return (n == 1) ? m : pow(m, step(n - 1, m));
 }
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout << "¬ведите кол-во элементов посследовательности: ";
	cin >> n;
	cout << "¬ведите натуральное число m: ";
	cin >> m;
	cout << "y= " << step(n, m);
	return 0;
}
