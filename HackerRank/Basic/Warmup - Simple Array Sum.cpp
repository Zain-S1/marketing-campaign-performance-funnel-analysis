// : Zain-S1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, total=0;
    cin>>n;
    
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        total += temp;
    }
    
    cout<<total<<endl;
    return 0;
}
