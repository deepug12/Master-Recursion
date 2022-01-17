#include <bits/stdc++.h> 
using namespace std;

int Power(int a, int n){

	if(n == 0) return 1;
	if(n == 1) return a;
	int ans = Power(a, n/2);
	if(n % 2 == 0) return ans * ans;
	else return a * ans * ans;
}
int main() 
{
	int a ,b;
	cin >> a >> b;
	cout<<Power(a, b)<<'\n';


    return 0; 
} 
