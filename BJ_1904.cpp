#include <iostream>

using namespace std;

int counter[1000001]={1,1,2,3};

int repeat(int n)
{
    if(!counter[n]){
        counter[n]=(repeat(n/2)*repeat((n-(n/2)))+(repeat(n/2-1)*repeat(n-(n/2)-1)))%15746;
    }

    return counter[n];
}

int main()
{
    int n;
    cin>>n;

    cout<<repeat(n);

    return 0;
}
