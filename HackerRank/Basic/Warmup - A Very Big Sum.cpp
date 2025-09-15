#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    long long arr[n];
    long long int total = 0;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
        total += arr[i];
    }
    cout<<total<<endl;
    
    return 0;
}