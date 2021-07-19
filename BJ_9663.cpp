#include <iostream>
#include <cstdlib>

using namespace std;

int pos[15]={0};
int cnt=0;
int n;

void repeat(int col,int row)
{
    bool flag=true;
    for(int i=0;i<row;i++){
        if(pos[i]==col || abs(pos[i]-col)==abs(i-row)) flag=false;
    }

    if(flag){
        if(row>=n-1){
            cnt++;
            return;
        }
        pos[row]=col;
        for(int i=0;i<n;i++){
            repeat(i,row+1);
        }
        pos[row]=0;
    }

    return;
}

int main()
{
    cin>>n;

    for(int i=0;i<n;i++) repeat(i,0);

    cout<<cnt;

    return 0;
}
