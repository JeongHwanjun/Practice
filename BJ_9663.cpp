#include <iostream>

using namespace std;

int pos[15]={0};
int cnt=0;

int abs(int a)
{
    return (a>0 ? a:-a);
}

void repeat(int n,int queen)
{
    if(queen<=0){
        cnt++;
        return;
    }

    for(int i=1;i<=n;i++){
        bool flag=false;
        for(int j=1;j<=n;j++){
            if(pos[j]!=0 && (pos[j]-i==0 || abs(pos[j]-i)==abs(j-i))) flag=true;
        }
        if(!flag){
            cout<<i<<endl;
            pos[n-queen+1]=i;
            repeat(n,queen-1);
        }
    }
}

int main()
{
    int n;

    cin>>n;

    repeat(n,n);

    cout<<cnt;

    return 0;
}
