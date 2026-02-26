#include <bits/stdc++.h>
#include <deque>
using namespace std;

//Main Function Block
void printKMax(int arr[], int n, int k)
{
	deque<int> dq(k);
	for (int i = 0; i < k; ++i)
	{
		while ((!dq.empty()) && arr[i] >= arr[dq.back()])
			dq.pop_back();

		dq.push_back(i);
	}

	for (; i < n; ++i)
	{
		cout << arr[dq.front()] << " ";

		while ((!dq.empty()) && dq.front() <= i - k)
		
			dq.pop_front();

		while ((!dq.empty()) && arr[i] >= arr[dq.back()])
			dq.pop_back();

		dq.push_back(i);
	}
  
	cout << arr[dq.front()];
}

//Testing code
int main()
{
	int arr[] = { 12, 156, 73, 93, 59, 83, 51, 73, 101, 456};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	printKMax(arr, n, k);
	return 0;
}
