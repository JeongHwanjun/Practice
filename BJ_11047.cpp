#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int *coin=new int[n];

    for(int i=0;i<n;i++){
        cin>>coin[i];
    }

    int cnt=0;
    for(int i=n-1;i>=0;i--){
        if(coin[i]>k) continue;

        cnt+=k/coin[i];
        k=k%coin[i];
    }

    cout<<cnt;

    delete coin;

    return 0;
}
