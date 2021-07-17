#include <iostream>

using namespace std;

int main()
{
    int n,cnt=0;
    cin>>n;

    for(long long int i=666;;i++){

        int tmp=i,j=0;
        bool sss[3]={false};
        while(tmp>0){
            if(tmp%10 == 6) sss[j++]=true;
            else{
                sss[2]=false;
                j=0;
            }
            tmp/=10;

            if(sss[2]) break;
        }
        if(sss[2]){
            cnt++;
            if(cnt==n){
                cout<<i;
                break;
            }
        }
    }

    return 0;
}
