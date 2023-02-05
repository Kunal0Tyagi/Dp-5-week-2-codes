#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }

int knapSack(int W, int weight[], int value[], int n)
{
	if (n == 0 || W == 0)
		return 0;

	if (weight[n - 1] > W)
		return knapSack(W, weight, value, n - 1);

	else
		return max(value[n - 1]+knapSack(W - weight[n - 1], weight, value, n - 1),knapSack(W, weight, value, n - 1));
}
int main()
{
	int value[] = { 60, 100, 120 };
	int weight[] = { 10, 20, 30 };
	int W = 50;
	int n = sizeof(value) / sizeof(value[0]);
	cout << knapSack(W, weight, value, n);
	return 0;
}