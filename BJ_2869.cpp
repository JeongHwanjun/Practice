#include <iostream>

using namespace std;

int main()
{
    int a,b,v;

    cin>>a>>b>>v;
    int adv=a-b, Rv=v-a;

    cout<<(Rv/adv)+1+((Rv%adv) ? 1:0);

    return 0;
}
