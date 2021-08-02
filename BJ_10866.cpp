#include <iostream>
#include <cstdio>
#include <deque>

using namespace std;

int main()
{
    deque<int> dq;
    int n;
    scanf("%d",&n);

    while(n--){
        char order[100];
        scanf("%s",order);
        string op(order);

        if(!op.compare("push_back")){
            int target;
            scanf("%d",&target);
            dq.push_back(target);
        }
        else if(!op.compare("push_front")){
            int target;
            scanf("%d",&target);
            dq.push_front(target);
        }
        else if(!op.compare("pop_front")){
            if(dq.empty()) printf("-1\n");
            else{
                printf("%d\n",dq.front());
                dq.pop_front();
            }
        }
        else if(!op.compare("pop_back")){
            if(dq.empty()) printf("-1\n");
            else{
                printf("%d\n",dq.back());
                dq.pop_back();
            }
        }
        else if(!op.compare("size")){
            printf("%d\n",dq.size());
        }
        else if(!op.compare("empty")){
            printf("%d\n",dq.empty());
        }
        else if(!op.compare("front")){
            if(dq.empty()) printf("-1\n");
            else printf("%d\n",dq.front());
        }
        else if(!op.compare("back")){
            if(dq.empty()) printf("-1\n");
            else printf("%d\n",dq.back());
        }
    }

    return 0;
}
