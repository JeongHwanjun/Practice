#include <iostream>
#include <algorithm>

using namespace std;

struct {
    int s;
    int e;
}typedef meet;

bool cmp2(meet a, meet b)
{
    return a.e<b.e;
}
bool cmp1(meet a, meet b)
{
    return a.s<b.s;
}

int main()
{
    meet M[100001];
    int n;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>M[i].s>>M[i].e;
    }

    sort(M,M+n,cmp1);
    sort(M,M+n,cmp2);

    int E=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(M[i].s>=E){
            cnt++;
            E=M[i].e;
        }
    }

    cout<<cnt;

    return 0;
}
