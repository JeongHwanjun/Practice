#include <iostream>

using namespace std;

int space[81][2];
int sudoku[9][9];
int s=0;

bool repeat(int depth)
{
    if(depth>=s){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<sudoku[i][j]<<' ';
            }
            cout<<'\n';
        }

        return true;
    }

    bool able[10]={false};
    for(int i=0;i<9;i++){
        if(space[depth][1]!=i && sudoku[space[depth][0]][i]!=0) able[sudoku[space[depth][0]][i]]=true;
        if(sudoku[i][space[depth][1]]!=0) able[sudoku[i][space[depth][1]]]=true;
    }

    int x=(space[depth][1]/3)*3,y=(space[depth][0]/3)*3;
    for(int i=y;i<y+3;i++){
        for(int j=x;j<x+3;j++){
            if(sudoku[i][j]!=0) able[sudoku[i][j]]=true;
        }
    }

    for(int i=1;i<10;i++){
        if(!able[i]){
            sudoku[space[depth][0]][space[depth][1]]=i;
            if(repeat(depth+1)) return true;
            sudoku[space[depth][0]][space[depth][1]]=0;
        }
    }

    return false;
}

int main()
{
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>sudoku[i][j];
            if(sudoku[i][j]==0){
                space[s][0]=i;
                space[s++][1]=j;
            }
        }
    }

    bool tmp=repeat(0);

    return 0;
}
