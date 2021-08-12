#include <bits/stdc++.h>
#define nline '\n'
#define ll long long
#define pb push_back
#define eb emplace_back
#define mod 1000000007
#define loop(i,a,b) for(int (i)=(a);i<=(b);i++)
#define looprev(i,a,b) for(int (i)=(a);i>=(b);i--)
#define gcd(a,b) __gcd(a,b)
using namespace std;

void file_io(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}

int main(){
    file_io();
    int m=0,n=0;
    int t=0;
    vector<int> arr1 = {1,3,5,6,9,11,13};
    vector<int> arr2 = {2,4,7,8,11};
    int mergeArray[arr1.size()+arr2.size()];
    while(m<arr1.size() || n<arr2.size()){
        if(arr1[m]<arr2[n]){
            mergeArray[t++] = arr1[m++];
        }
        else{
            mergeArray[t++] = arr2[n++];
        }
    }
    while(m<arr1.size()){
        mergeArray[t++] = arr1[m++];
    }
    while(n<arr2.size()){
        mergeArray[t++] = arr2[n++];
    }
    for(auto x:mergeArray){
        cout<<x<<" ";
    }
}
