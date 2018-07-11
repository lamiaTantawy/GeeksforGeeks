//
//  main.cpp
//  Kadane's Algorithm
//
//  Created by Lamia Tantawy on 7/11/18.
//  Copyright © 2018 Lamia Tantawy. All rights reserved.
//

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int MaxSubseq(int arr[],int size)
{
    int sum = 0;
    int max = INT_MIN;
    for(int i=0;i<size;i++)
    {
        sum = sum+arr[i];
        if(max<sum)
        {
            max = sum;
        }
        if(sum<0)
            sum=0;
    }
    return max;
}
int main() {
    int T;
    cin>>T;
    int arr[1001];
    vector<int> v;
    int n;
    for(int t=0;t<T;t++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        v.push_back(MaxSubseq(arr,n));
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}
