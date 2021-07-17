#include <iostream>

using namespace std;

int main()
{
    int n;
    int big[50][2];
    int r[50]={0};

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>big[i][0]>>big[i][1];
    }

    for(int i=0;i<n;i++){
        r[i]=1;
        for(int j=0;j<n;j++){
            if(big[i][0]<big[j][0] && big[i][1]<big[j][1]){
                r[i]++;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<r[i]<<' ';
    }

    return 0;
}
