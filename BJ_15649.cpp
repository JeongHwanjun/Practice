#include <cstdio>

int n,m;
int num[10]={0};

void track(int mini,int time)
{
    if(time>=m){
        for(int i=0;i<m;i++) printf("%d ",num[i]);
        printf("\n");
        return;
    }

    for(int i=mini;i<=n;i++){
        num[time]=i;
        track(i,time+1);
    }
}

int main()
{
    scanf("%d %d",&n,&m);

    track(1,0);

    return 0;
}
