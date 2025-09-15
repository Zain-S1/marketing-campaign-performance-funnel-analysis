#include <bits/stdc++.h>
using namespace std;

bool checkCondition(string pass, string condition){
    for(char c : pass){
        if(condition.find(c) != string::npos){
            return false;
        }
    }
    return true;
}

int main()
{
    int len;
    string pass;
    cin>>len>>pass;
    
    int required = 0;
    //Conditions
    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";
    
    required += checkCondition(pass, numbers);
    required += checkCondition(pass, lower_case);
    required += checkCondition(pass, upper_case);
    required += checkCondition(pass, special_characters);
    
    cout<<max(required, 6-len)<<endl;
    return 0;
}