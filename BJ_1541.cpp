#include <iostream>
using namespace std;

int main()
{
    string inp;
    cin>>inp;

    int a=0,b=0,buf=0;
    bool st=true;

    for(auto i=inp.begin();i!=inp.end();i++){
        if(*i>='0' && *i<='9'){
            b*=10;
            b+=*i-'0';
        }
        else if(*i=='+'){
            buf+=b;
            b=0;
        }
        else if(*i=='-'){
            buf+=b;
            if(st){
                a+=buf;
                st=false;
            }
            else a-=buf;
            b=0;
            buf=0;
        }

    }

    a+=(st ? (buf+b):-(buf+b));

    cout<<a;

    return 0;
}
