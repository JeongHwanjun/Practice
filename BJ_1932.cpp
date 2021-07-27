#include <iostream>
#include <cstdlib>

using namespace std;

int n;
int tri[501][501];
int tot[501][501]={0};

int main()
{
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        cin>>tri[i][j];
        }
    }

    int M=-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            tot[i][j]=max(tot[i-1][j-1],tot[i-1][j])+tri[i][j];
            if(tot[i][j]>M) M=tot[i][j];
        }
    }

    cout<<M<<endl;

    return 0;
}
