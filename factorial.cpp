#include<iostream>
using namespace std;
class solution{
public:
long long int ans=1; 
    for(int i=2;i<=N;i++)
    {
        //Calculating the factorial
        ans=ans*(long long)(i); 
    }
    return ans;
}