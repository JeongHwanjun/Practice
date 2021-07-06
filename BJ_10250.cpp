#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int h,w,n;
        cin>>h>>w>>n;
        int room=(n-1)/h+1;
        int floor=(n+h-1)%h+1;

        cout<<floor;
        if(room<10) cout<<0;
        cout<<room<<endl;
    }

    return 0;
}
