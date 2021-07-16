#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum=0;
    bool check=false;

    for(int i=1;i<=n;i++){
        sum=i;
        int num=i;
        while(num>0){
            sum+=num%10;
            num/=10;
        }

        if(sum==n){
            cout<<i;
            check=true;
            break;
        }
    }

    if(!check) cout<<0;

    return 0;
}
