#include <cstdio>
#define SIZE 246913

using namespace std;

int main()
{
    bool num[SIZE]={true,true};

    for(int i=2;i<=SIZE;i++){
        if(!num[i]){
            for(int j=i*2;j<=SIZE;j+=i){
                num[j]=true;
            }
        }
    }

    int n;
    scanf("%d",&n);
    while(n!=0){
        int cnt=0;
        for(int i=n+1;i<=2*n;i++){
            if(!num[i]) cnt++;
        }
        printf("%d\n",cnt);

        scanf("%d",&n);
    }

    return 0;
}
