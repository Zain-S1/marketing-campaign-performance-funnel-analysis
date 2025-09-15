#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int words = 1;
    for(int i=0; i<s.length(); i++){
        if(int(s[i]) >= 65 and int(s[i]) <= 90)
            words++;
    }
    
    cout<<words<<endl;
    return 0;
}