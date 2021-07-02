#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b>>c;
    int income=c-b;
    if(income<=0){
        cout<<-1;
        return 0;
    }

    cout<<a/income+1;

    return 0;
}
