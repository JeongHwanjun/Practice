#include <iostream>

using namespace std;

int main()
{
    int x,y,w,h;

    cin>>x>>y>>w>>h;
    int wx=w-x;
    int yh=h-y;

    wx=(wx<x ? wx:x);
    yh=(yh<y ? yh:y);

    cout<<(wx>yh ? yh:wx);

    return 0;
}
