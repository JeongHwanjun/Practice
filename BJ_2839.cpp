#include <iostream>

using namespace std;

int main()
{
    int n;

    cin>>n;

    if(n==4 ||n==7){
        cout<<-1;
        return 0;
    }

    int l=n%5;
    for(int i=n/5;i>=0;i--){
        if(l%3==0){
            cout<<i+(l/3);
            break;
        }
        else{
            l+=5;
        }
    }

    return 0;
}
