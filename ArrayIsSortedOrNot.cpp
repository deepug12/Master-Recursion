#include <bits/stdc++.h> 
using namespace std;

bool isSorted(int *arr, int n){

	if(n == 0 or n == 1) return true;
	if(arr[0] > arr[1]) return false;
	else{
		bool restArray = isSorted(arr+1, n-1);
		return restArray;
	}
}
int main() 
{
	int n = 5;
	int arr[5] = {1, 2, 8, 4, 5};
	bool ans = isSorted(arr, n);

	if(ans) cout<<"Array is Sorted\n";
	else cout<<"Array is not Sorted\n";


    return 0; 
} 
