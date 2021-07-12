#include <iostream>
#define SIZE 10001

using namespace std;

int main()
{
    bool num[SIZE]={true,true};

    for(int i=2;i<=SIZE;i++){
        if(!num[i]){
            for(int j=i*2;j<=SIZE;j+=i){
                num[j]=true;
            }
        }
    }

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=n/2;i>=2;i--){
            if(!num[i] && !num[n-i]){
            cout<<i<<' '<<n-i<<endl;
                break;
            }
        }
    }


    return 0;
}
