#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string A,B,C;
    bool over=false;
    cin>>A>>B;

    while(!A.empty() && !B.empty()){
        int num1=A.back()-'0';
        A.pop_back();
        int num2=B.back()-'0';
        B.pop_back();
        int num3=num1+num2+(over ? 1:0);

        if(num3>=10) over=true;
        else over=false;

        C.push_back((num3%10)+'0');
    }

    if(B.empty()){
        for(auto i=A.end();i!=A.begin();i--){
            int num=A.back()-'0'+(over ? 1:0);
            A.pop_back();

            if(num>=10) over=true;
            else over=false;

            C.push_back((num%10)+'0');
        }
    }
    else{
        for(auto i=B.end();i!=B.begin();i--){
            int num=B.back()-'0'+(over ? 1:0);
            B.pop_back();
            if(num>=10) over=true;
            else over=false;

            C.push_back((num%10)+'0');
        }
    }
    if(over) C.push_back(1+'0');

    reverse(C.begin(),C.end());
    cout<<C;

    return 0;
}
