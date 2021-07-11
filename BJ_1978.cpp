#include <iostream>

using namespace std;

int main()
{
    bool num[1001]={true,true};

    for(int i=2;i<=1000;i++){
        if(!num[i]){
            for(int j=i*2;j<=1000;j+=i){
                num[j]=true;
            }
        }
    }

    int n;
    int cnt=0;

    cin>>n;
    while(n--){
        int target;
        cin>>target;
        if(!num[target]) cnt++;
    }

    cout<<cnt;

    return 0;
}
