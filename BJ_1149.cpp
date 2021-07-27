#include <iostream>
#include <cstdio>

using namespace std;

int cost[1001][3];
int totalCost[1001][3]={0};
int n;

void repeat(int depth)
{
    if(depth<n){
        totalCost[depth][0]=min(totalCost[depth-1][1],totalCost[depth-1][2])+cost[depth][0];
        totalCost[depth][1]=min(totalCost[depth-1][0],totalCost[depth-1][2])+cost[depth][1];
        totalCost[depth][2]=min(totalCost[depth-1][0],totalCost[depth-1][1])+cost[depth][2];
        repeat(depth+1);
    }

    return;
}

int main()
{
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>cost[i][j];
        }
    }
    totalCost[0][0]=cost[0][0];
    totalCost[0][1]=cost[0][1];
    totalCost[0][2]=cost[0][2];

    repeat(1);

    cout<<min(totalCost[n-1][0],min(totalCost[n-1][1],totalCost[n-1][2]));

    return 0;
}
