#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> b;
    string s;

    getline(cin,s);
    while(s.compare(".")){
        bool flag=true;
        for(auto i=s.begin();i!=s.end();i++){
            if(*i=='('){
                b.push(0);
            }
            else if(*i=='['){
                b.push(1);
            }
            else if(*i==')'){
                if(b.empty() || b.top()!=0){
                    cout<<"no"<<endl;
                    flag=false;
                    break;
                }
                else b.pop();
            }
            else if(*i==']'){
                if(b.empty() || b.top()!=1){
                    cout<<"no"<<endl;
                    flag=false;
                    break;
                }
                else b.pop();
            }
            else continue;
        }
        if(flag){
            if(!b.empty()) cout<<"no"<<endl;
            else cout<<"yes"<<endl;
        }


        while(!b.empty()) b.pop();
        getline(cin,s);
    }

    return 0;
}
