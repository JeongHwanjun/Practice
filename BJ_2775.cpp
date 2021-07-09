#include <iostream>

using namespace std;

int main()
{
    long long int room[15][14]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,};

    for(int i=1;i<15;i++){
        for(int j=0;j<14;j++){
            if(j==0) room[i][j]=1;
            else room[i][j]=room[i-1][j]+room[i][j-1];
        }
    }

    int t;
    cin>>t;
    while(t--){
        int floor,number;
        cin>>floor>>number;
        cout<<room[floor][number-1]<<endl;
    }
    return 0;
}
