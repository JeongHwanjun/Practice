#include <iostream>
#include <climits>
#define min(a,b) ((a)<(b) ? (a):(b))

using namespace std;

int counter[1000001]={0};

int main()
{
    int n;

    cin>>n;

    counter[1]=0;

    for(int i=2;i<=n;i++){
        int m=INT_MAX;
        if(i%2==0){
            if(m>counter[i/2]) m=counter[i/2];
        }
        if(i%3==0){
            if(m>counter[i/3]) m=counter[i/3];
        }
        if(m>counter[i-1]) m=counter[i-1];

        counter[i]=m+1;
    }

    cout<<counter[n];

    return 0;
}
