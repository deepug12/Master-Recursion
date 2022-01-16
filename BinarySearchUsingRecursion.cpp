// Always try to declare Size of array at Compile time(Heap(Dynamic Memory)) not at Run time(Stactic Memory(Stack))...
#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int s, int e,int key){
    if(s > e) return false;

    int mid = s + (e-s)/2;

    if(arr[mid] == key) return true;
    if(arr[mid] < key) return binarySearch(arr, mid+1, e, key);


    else{
        return binarySearch(arr, s, mid-1, key);
    }
}
int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int key = 4;
    bool ans = binarySearch(arr, 0, 5, key);

    if(ans) cout<<"Element is present\n";
    else cout<<"Element is not present\n";
    return 0;

}