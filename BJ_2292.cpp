#include <iostream>

using namespace std;

int main()
{
    int input;
    int n=1,d=0;

    cin>>input;
    for(int i=1;;i++){
        if(input>n){
            d+=6;
            n+=d;
        }
        else{
            cout<<i;
            break;
        }
    }

    return 0;
}
