//TODO:...DIVISOR...
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(n%i==0)
          cout<<i<<" ";
    }

}