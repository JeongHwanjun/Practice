#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b>>c;
    while(a!=0){
        if(a>b){
            int tmp=a;
            a=b;
            b=tmp;
        }
        if(b>c){
            int tmp=b;
            b=c;
            c=tmp;
        }

        if(c*c == a*a+b*b) cout<<"right"<<endl;
        else cout<<"wrong"<<endl;

        cin>>a>>b>>c;
    }

    return 0;
}
