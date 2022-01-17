#include <bits/stdc++.h> 
using namespace std;

void BubbleSort(int *arr, int n){

	if(n == 0 or n == 1) return;
	for (int i = 0; i < n-1; ++i)
	{
		if(arr[i] > arr[i+1]) swap(arr[i], arr[i+1]);
	}
	BubbleSort(arr, n-1);
}
int main() 
{
	int n = 5;
	int arr[5] = {1, 2, 8, 4, 5};
	BubbleSort(arr, n);

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;


    return 0; 
} 
