#include <iostream>

using namespace std;
int ucln(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; 
        }else{
            b -= a;
        }
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    if (a%b==0) cout<<a/b;
    if (a%b!=0) 
    {
        int c,d;
    c=a/ucln(a,b);
    d=b/ucln(a,b);
    cout<<c<<"/"<<d;
    }
    return 0;
}