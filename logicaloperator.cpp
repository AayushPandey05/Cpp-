#include <iostream>
using namespace std;
int main()
{
    int x=10, y=20;
    bool res=(x>0 && x<100);
    cout<<res<<endl;
    res=(x>0 or x>y);
    cout<<res<<"\n";
    res=!res;
    cout<<res;
    return 0;
}