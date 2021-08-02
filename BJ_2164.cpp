#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;
    cin>>n;
    queue<int> card;

    for(int i=1;i<=n;i++) card.push(i);

    while(true){
        if(card.size()>1){
            card.pop();
        }
        else break;

        if(!card.empty()){
            card.push(card.front());
            card.pop();
        }
    }

    cout<<card.front();

    return 0;
}
