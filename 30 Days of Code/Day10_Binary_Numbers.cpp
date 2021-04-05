#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    int cnt1=0, cnt0=0;
    while(n>0){
        int y=n%2;
        if(y==1){
            cnt1++;
        }
        else{
            cnt0++;
        }
        n=n/2;
    }
    
    cout<<max(cnt1, cnt0)<<endl;

    return 0;
}
