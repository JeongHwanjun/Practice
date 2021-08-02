#include <iostream>
using namespace std;

char paper[130][130];
int n;

void cut(int xs,int xe, int ys, int ye)
{
    if(!(xe-xs) || !(ye-ys)) return;

    bool b=false,w=false;
    for(int i=ys;i<ye;i++){
        for(int j=xs;j<xe;j++){
            if(paper[i][j]=='1') b=true;
            else w=true;
        }
    }

    if(b && w){
        cout<<'(';
        cut(xs,(xs+xe+1)/2,ys,(ys+ye+1)/2);
        cut((xs+xe+1)/2,xe,ys,(ys+ye+1)/2);
        cut(xs,(xs+xe+1)/2,(ys+ye+1)/2,ye);
        cut((xs+xe+1)/2,xe,(ys+ye+1)/2,ye);
        cout<<')';
    }
    else if(b) cout<<1;
    else cout<<0;

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

    return 0;
}
