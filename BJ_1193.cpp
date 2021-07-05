#include <iostream>

using namespace std;

int main()
{
    int n,d=1;
    int m=1;
    int up,down;

    cin>>n;

    for(int i=1;;i++){
        if(n>m){
            d++;
            m+=d;
        }
        else{
            if(i%2){
                down=d-(m-n);
                up=1+m-n;
            }
            else{
                up=d-(m-n);
                down=1+m-n;
            }
            break;
        }
    }

    cout<<up<<'/'<<down;

    return 0;
}
