#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int ary[26]={0},M=0;
    bool overlap=false;
    string s1,s2;
    string O;

    cin>>s1;
    s2.resize(s1.length());

    transform(s1.begin(),s1.end(),s2.begin(),::toupper);


    for(auto i=s2.begin();i!=s2.end();i++){
        int n=*i-'A';
        ary[n]++;
        if(ary[n]>M){
            overlap=false;
            M=ary[n];
            O=*i;
        }
        else if(ary[n]==M) overlap=true;
    }

    if(overlap) cout<<'?';
    else cout<<O;
    return 0;
}
