//Minimize the maximum difference between adjacent elements in an array

#include <bits/stdc++.h>
#include <deque>

using namespace std;

int findKMin(int arr[], int n, int k)
{
	
	deque<int> dq(k);

	for (int i = 0; i < k; ++i) {
		while ((!dq.empty()) && arr[i] >= arr[dq.back()])
			dq.pop_back(); 

		dq.push_back(i);
	}
	
	int minDiff = INT_MAX;
	
	for (; i < n; ++i) {
		minDiff = min(minDiff, arr[dq.front()]);

		while ((!dq.empty()) && dq.front() <= i - k)
			dq.pop_front();

		while ((!dq.empty()) && arr[i] >= arr[dq.back()])
			dq.pop_back();

		dq.push_back(i);
	}

	minDiff = min(minDiff, arr[dq.front()]);
	return minDiff;
}

// Function to find the minimum of the maximum difference of the
// adjacent elements after removing K elements from the array

int minimumAdjacentDifference(int a[], int n, int k)
{

	int diff[n - 1];
	for (int i = 0; i < n - 1; i++) {
		diff[i] = a[i + 1] - a[i];
	}

	int answer = findKMin(diff, n - 1, n - k - 1);
	return answer;
}

// Main Code
int main()
{
	int n = 5;
	int k = 2;

	int a[n] = { 3, 7, 8, 10, 14 };

	cout << minimumAdjacentDifference(a, n, k);
	return 0;
}
