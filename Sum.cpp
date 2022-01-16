#include <bits/stdc++.h> 
using namespace std;

int Sum(int *arr, int n){

	if(n == 0) return 0;
	if(n == 1) return arr[0];
	return arr[0] + Sum(arr+1, n-1);
}
int main() 
{
	int n = 5;
	int arr[5] = {1, 2, 3, 4, 5};
	int ans = Sum(arr, n);
	cout<<ans<<'\n';


    return 0; 
} 
