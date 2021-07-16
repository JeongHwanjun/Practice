#include <cstdio>

using namespace std;

void h(int n,int start, int via, int dest)
{
    if(n>1){
        h(n-1,start,dest,via);
        printf("%d %d\n",start,dest);
        h(n-1,via,start,dest);
    }
    else{
        printf("%d %d\n",start,dest);
    }

    return;
}

int main()
{
    int cnt=1,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) cnt*=2;
    printf("%d\n",cnt-1);
    h(n,1,2,3);

    return 0;
}
