#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    int n;
    string op;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>op;
        if(!op.compare("push")){
            int target;
            cin>>target;
            s.push(target);
        }
        else if(!op.compare("pop")){
            if(s.empty()) cout<<-1<<endl;
            else{
                cout<<s.top()<<endl;
                s.pop();
            }
        }
        else if(!op.compare("size")){
            cout<<s.size()<<endl;
        }
        else if(!op.compare("empty")){
            cout<<(s.empty() ? 1:0)<<endl;
        }
        else if(!op.compare("top")){
            if(s.empty()) cout<<-1<<endl;
            else cout<<s.top()<<endl;
        }
    }

    return 0;
}
