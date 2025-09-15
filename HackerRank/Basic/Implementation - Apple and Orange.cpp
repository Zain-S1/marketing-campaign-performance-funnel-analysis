#include <bits/stdc++.h>
using namespace std;

int main(){
    int s, t, a, b, m, n;
    cin>>s>>t>>a>>b>>m>>n;
    
    int appleCount = 0, orangeCount =0;
    
    for(int i=0; i<m; i++){
        int temp;
        cin>>temp;
        if(temp>0 and (a+temp>=s and a+temp<=t))
            appleCount++;
    }
    
    for(int j=0; j<n; j++){
        int temp;
        cin>>temp;
        if(temp<0 and (b+temp>=s and b+temp<=t))
            orangeCount++;
    }
    
    cout<<appleCount<<endl<<orangeCount<<endl;
    
    return 0;
}