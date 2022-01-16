#include <bits/stdc++.h>
using namespace std;

void sayDigits(int n, string *arr){
	if(n == 0) return;

	int digit = n % 10;
	n = n / 10;
	sayDigits(n,arr);
	cout<<arr[digit]<<" ";
}
int main()
{
	int n;
	cin >> n;
	string arr[10] = {"zero", "one", "Two", "Three","Four", "Five","Six", "Seven","Eight", "Nine"};
	sayDigits(n, arr);
	cout<<'\n';
}