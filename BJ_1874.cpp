#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    int *inp;
    int n,i,j=1;
    string ans;

    scanf("%d",&n);
    inp=new int[n+1];
    for(i=1;i<=n;i++){
        scanf("%d",&inp[i]);
    }

    for(i=1;j<=n;){
        if(s.empty() || s.top()<inp[j]){
            s.push(i++);
            ans.push_back('+');
        }
        else if(s.top()==inp[j]){
            s.pop();
            j++;
            ans.push_back('-');
        }
        else{
            printf("NO");
            return 0;
        }
    }

    for(auto it=ans.begin();it!=ans.end();it++){
        printf("%c\n",*it);
    }

    delete inp;

    return 0;
}
