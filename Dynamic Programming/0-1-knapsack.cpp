#include <iostream>
using namespace std;

int cache[1000][1000];

int knapsack(int weights[], int values[], int index, int remainingCapacity) {
	if(index < 0 || remainingCapacity < 0) return 0;
	if(cache[index][remainingCapacity] != -1) return cache[index][remainingCapacity];
	if(remainingCapacity - weights[index] < 0) 
		return  cache[index][remainingCapacity] = knapsack(weights, values, index - 1, remainingCapacity);
	else 
		return cache[index][remainingCapacity] = max(values[index] + knapsack(weights, values, index - 1, remainingCapacity - weights[index]),
		 knapsack(weights, values, index - 1, remainingCapacity));
}

int main() {
	int t; // number of test cases
	cin >> t;
	while(t--) {
		int n; // number of items
		cin >> n;
		int w; // maximum capacity
		cin >> w;
		for(int i = 0; i < 1000; ++i) {
			for(int j = 0; j < 1000; ++j) {
				cache[i][j] = -1;
			}
		}
		int values[n], weights[n];
		for(int i = 0; i < n; ++i)
			cin >> values[i];
		for(int i = 0; i < n; ++i)
			cin >> weights[i];
		int ans = knapsack(weights, values, n-1, w);
		cout << ans << endl;
	}
}