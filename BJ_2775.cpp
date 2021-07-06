#include <iostream>

using namespace std;

int fact(int n)
{
    int m=1;
    for(int i=1;i<=n;i++){
        m*=i;
    }
    return m;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>k>>n;
        if(k<n) cout<<fact(k)/(fact(n)*fact(abs(n-k)));
        else cout<<fact(n)/(fact(k)*fact(abs(n-k)));

    }

    return 0;
}
