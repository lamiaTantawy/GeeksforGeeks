//
//  main.cpp
//  Parenthesis Checker
//
//  Created by Lamia Tantawy on 7/12/18.
//  Copyright © 2018 Lamia Tantawy. All rights reserved.
//

#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;
bool IsBalancedd(string str)
{
    stack<char> s;
    if(str.length()>0)
        s.push(str[0]);
    for(int i=1;i<str.length();i++)
    {
        if(!s.empty())
        {
            char top = s.top();
            if((top=='{' && str[i]=='}') || (top=='[' && str[i]==']') || (top=='(' && str[i]==')'))
                s.pop();
            else if(str[i]=='}' || str[i]==')' || str[i]==']')
                return false;
        }
        if(str[i]=='{' || str[i]=='(' || str[i]=='[')
            s.push(str[i]);
    }
    if(s.empty())
        return true;
    else
        return false;
}
int main() {
    int T;
    
    string str;
    cin>>T;
    vector<string> v(T);
    for(int t=0;t<T;t++)
    {
        
        cin>>str;
        bool res = IsBalancedd(str);
        if(res==true)
            v[t] = "balanced";
        else
            v[t] = "not balanced";
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    
    return 0;
}
