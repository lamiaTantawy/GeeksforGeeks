#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
    long t,num;
    cin>>t;
    vector<string> v;
    for(int i=0;i<t;i++)
    {
        cin>>num;
        double result = log2(num);
        if(num>0 && ceil(result)==(result))
            v.push_back("YES");
        else
            v.push_back("NO");
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    return 0;
}
