#include <iostream>
using namespace std;

int paper[130][130];
int n;
int color[2]={0};

void cut(int xs,int xe, int ys, int ye)
{
    if(!(xe-xs) || !(ye-ys)) return;

    bool b=false,w=false;
    for(int i=ys;i<ye;i++){
        for(int j=xs;j<xe;j++){
            if(paper[i][j]) b=true;
            else w=true;
        }
    }

    if(b && w){
        cut(xs,(xs+xe+1)/2,ys,(ys+ye+1)/2);
        cut((xs+xe+1)/2,xe,ys,(ys+ye+1)/2);
        cut(xs,(xs+xe+1)/2,(ys+ye+1)/2,ye);
        cut((xs+xe+1)/2,xe,(ys+ye+1)/2,ye);
    }
    else if(b) color[1]++;
    else color[0]++;

}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>paper[i][j];
        }
    }

    cut(0,n,0,n);

    cout<<color[0]<<endl<<color[1];

    return 0;
}
