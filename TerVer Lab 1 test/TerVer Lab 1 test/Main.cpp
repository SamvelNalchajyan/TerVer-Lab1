#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <clocale>
#include <iomanip>
#include <vector>

using namespace std;

double FRand(double min, double max)
{
	double tmp = static_cast<double>(rand()) / RAND_MAX;
	return min + tmp * (max - min);
}

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int N = 10, M = 0;
	double p = 0.0;
	cout << "¬ведите N:" << endl;
	cin >> N;
	cout << "¬ведите M и p:" << endl;
	cin >> M >> p;
	vector<int> n;
	for (int i = 0; i <= M; i++)
	{
		n.push_back(0);
	}
	
	for (int i = 0; i < N; i++)
	{
		int count = 0;
		for (int k = 0; k < M; k++)
		{
			double tmp = FRand(0.0, 1.0);
			if (tmp <= p)
			{
				count++;
			}
		}
		n[count]++;
	}
	//ѕечать
	cout << endl;
	for (int i = 0; i <= M; i++)
	{
		cout << left << setw(5) << i << " ";
	}
	cout << endl;
	for (int i = 0; i <= M; i++)
	{
		cout << left << setw(5) << n[i] << " ";
	}
	cout << endl;
	for (int i = 0; i <= M; i++)
	{
		cout << left << setw(5) << n[i] / static_cast<double>(N) << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}