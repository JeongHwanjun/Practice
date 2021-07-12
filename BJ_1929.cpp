#include <cstdio>
#define SIZE 1000001

using namespace std;

int main()
{
    bool num[SIZE]={true,true};
    int n,m;
    scanf("%d %d",&n,&m);

    for(int i=2;i<=m;i++){
        if(!num[i]){
            for(int j=i*2;j<=m;j+=i){
                num[j]=true;
            }
        }
    }


    for(int i=n;i<=m;i++){
        if(!num[i]) printf("%d\n",i);
    }

    return 0;
}
