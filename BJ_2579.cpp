#include <iostream>
#include <cstdio>
#include <climits>

using namespace std;

int n;
int stairs[301]={0};
int tot[305][3]={0};

void repeat(int depth)
{
    if(depth<0) return;

    tot[depth][0]=max(tot[depth+1][1],tot[depth+1][2]);
    tot[depth][1]=tot[depth+1][0]+stairs[depth];
    tot[depth][2]=tot[depth+1][1]+stairs[depth];

    repeat(depth-1);
}

int main()
{
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>stairs[i];
    }
    tot[n][0]=INT_MIN;
    tot[n][1]=tot[n][2]=stairs[n];

    repeat(n-1);

    cout<<max(tot[1][0],max(tot[1][1],tot[1][2]));

    return 0;
}
