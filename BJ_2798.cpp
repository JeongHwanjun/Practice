#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int *ary=new int[n];

    for(int i=0;i<n;i++) cin>>ary[i];

    int maxi=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int sum=ary[i]+ary[j]+ary[k];
                if(sum>m) continue;
                else if(sum>maxi) maxi=sum;
            }
        }
    }

    cout<<maxi;

    delete ary;
}
