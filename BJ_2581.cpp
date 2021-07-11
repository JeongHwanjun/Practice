#include <iostream>
#define SIZE 10001

using namespace std;

int main()
{
    bool num[SIZE]={true,true};

    for(int i=2;i<SIZE;i++){
        if(!num[i]){
            for(int j=i*2;j<SIZE;j+=i){
                num[j]=true;
            }
        }
    }

    int n;
    cin>>n;

    for(int i=2;i<SIZE;){
        if(n%i==0&&!num[i]){
            n/=i;
            cout<<i<<endl;
        }
        else i++;
    }
    if(n!=1)cout<<n;


    return 0;
}
