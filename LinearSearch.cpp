#include <bits/stdc++.h> 
using namespace std;

bool LinearSearch(int *arr, int n, int key){

	if(n == 0) return false;
	if(arr[0] == key) return true;
	else{
		bool restArray = LinearSearch(arr+1, n-1, key);
		return restArray;
	}
}
int main() 
{
	int n = 5;
	int arr[5] = {1, 2, 8, 4, 5};
	int key = 3;
	bool ans = LinearSearch(arr, n, key);

	if(ans) cout<<"Element is Present\n";
	else cout<<"Element is not Present\n";


    return 0; 
} 
