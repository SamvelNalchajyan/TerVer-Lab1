#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>
#include <list>


double FRand(double min, double max)
{
	double tmp = static_cast<double>(rand()) / RAND_MAX;
	return min + tmp * (max - min);
}

std::vector<int> Vector_n_Generator(int N, int M, double p)
{
	std::vector<int> n;
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
	return n;
}

double Get_Eksi(int N, int M, double p)
{
	return M * p;
}

double Get_Dksi(int N, int M, double p)
{
	return M * p * (1.0 - p);
}
