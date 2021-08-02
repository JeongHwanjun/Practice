#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int n,m;
    cin>>n;
    deque<int> dq;

    for(int i=0;i<n;i++){
        dq.push_back(i+1);
    }

    cin>>m;
    int *target=new int[m];
    for(int i=0;i<m;i++){
        cin>>target[i];
    }

    int cnt=0;
    for(int i=0;i<m;i++){
        int dest=target[i],pos;
        for(int j=0;j<dq.size();j++){
            if(dest==dq.at(j)){
                pos=j;
                break;
            }
        }

        bool L;
        if(pos>dq.size()-pos){
            L=false;
        }
        else{
            L=true;
        }

        if(L){
            while(dq.front()!=dest){
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
        }
        else{
            while(dq.front()!=dest){
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }
        dq.pop_front();
    }

    cout<<cnt;

    return 0;
}
