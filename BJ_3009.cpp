#include <iostream>

using namespace std;

int main()
{
    int pos[3][2]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>pos[i][j];
        }
    }

    int x=pos[0][0],y=pos[0][1];
    if(x==pos[1][0]) cout<<pos[2][0];
    else if(x==pos[2][0]) cout<<pos[1][0];
    else cout<<x;
    cout<<' ';

    if(y==pos[1][1]) cout<<pos[2][1];
    else if(y==pos[2][1]) cout<<pos[1][1];
    else cout<<y;

    return 0;
}
