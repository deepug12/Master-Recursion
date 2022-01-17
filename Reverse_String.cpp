#include <bits/stdc++.h>
using namespace std;

void reverse(string &str, int i){
    if(i > (str.length()-i-1)) return;

    swap(str[i], str[str.length()-i-1]);
    i++;
    reverse(str, i);

}
int main(){

    string s = "Hello";
    reverse(s, 0);
    cout<<s<<'\n';
    return 0;

}