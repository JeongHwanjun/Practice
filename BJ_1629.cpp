#include <iostream>

using namespace std;

long long mlt(long long a,long long b,long long c)
{
    if(b<=0) return 1;
    else if(b==1) return a;
    else if(b%2) return (a*mlt(a,b-1,c))%c;
    else{
        long long m=(mlt(a,b/2,c)%c);
        return (m*m)%c;
    }
}

int main()
{
    long long a,b,c;

    cin>>a>>b>>c;

    cout<<mlt(a,b,c)%c;

    return 0;
}
