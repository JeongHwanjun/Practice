#include <iostream>

using namespace std;

int counter[41][2]={{1,0},{0,1}};

void fibonacci(int n,int& zero, int& one)
{
    if(!counter[n][0] && !counter[n][1]){
        fibonacci(n-1,counter[n][0],counter[n][1]);
        fibonacci(n-2,counter[n][0],counter[n][1]);
    }

    zero+=counter[n][0];
    one+=counter[n][1];

    return;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        int z=0,o=0;

        cin>>n;
        fibonacci(n,z,o);

        cout<<z<<' '<<o<<endl;
    }


    return 0;
}
