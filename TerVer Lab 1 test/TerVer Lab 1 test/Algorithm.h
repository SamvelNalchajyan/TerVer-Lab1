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

double factorial(int n)
{
	double res = 1;
	for (int i = 1; i <= n; i++)
	{
		res *= i;
	}
	return res;
}

double Sochet(int n, int k)
{
	double n_f = factorial(n);
	double k_f = factorial(k);
	double n_k_f = factorial(n - k);
	return n_f / (k_f * n_k_f);
}

double Teor_F(double y, int n, double p)
{
	//int cel_y = (int)y;
	double res = 0;
	if (y >= 0 && y < n)
	{
		for (int i = 0; i < y; i++)
		{
			res += Sochet(n, i) * pow(p, i) * pow(1.0 - p, n - i);
		}
	}
	if (y >= n)
	{
		res = 1;
	}
	return res;
}

double f_xi(double x, int r)
{
	if (x <= 0)
	{
		return 0;
	}
	else
	{
		return pow(2, -r / 2.0) * (1.0 / tgammal(r / 2.0)) * pow(x, r / 2.0 - 1) * exp(-x / 2.0);
	}
}