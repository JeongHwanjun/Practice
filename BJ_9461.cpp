#include <iostream>

using namespace std;

long long int len[101]={1,1,1,1};

long long int spiral(int n)
{
    if(!len[n]) len[n]=spiral(n-2)+spiral(n-3);

    return len[n];
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        cout<<spiral(n)<<endl;
    }
    return 0;
}
