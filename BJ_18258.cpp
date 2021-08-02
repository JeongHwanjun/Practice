#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;

int main()
{
    queue<int> q;
    int n;

    cin>>n;
    while(n--){
        char order[100];
        scanf("%s",order);
        string op(order);
        if(!op.compare("push")){
            int target;
            scanf("%d",&target);
            q.push(target);
        }
        else if(!op.compare("pop")){
            if(q.empty()) printf("%d\n",-1);
            else{
                printf("%d\n",q.front());
                q.pop();
            }
        }
        else if(!op.compare("size")){
            printf("%d\n",q.size());
        }
        else if(!op.compare("empty")){
            printf("%d\n",(q.empty() ? 1:0));
        }
        else if(!op.compare("front")){
            if(q.empty()) printf("%d\n",-1);
            else printf("%d\n",q.front());
        }
        else if(!op.compare("back")){
            if(q.empty()) printf("%d\n",-1);
            else printf("%d\n",q.back());
        }
    }

    return 0;
}
