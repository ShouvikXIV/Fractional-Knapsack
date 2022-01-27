#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>a,pair<int,int>b)
{
    return (a.first/a.second)>(b.first/b.second);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int w,c;
    c = 0;
    cin>>w; //weight of the bag
    int n;
    cin>>n; //objects
    pair<int,int> arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n,comp);
    for(int i = 0;i<n;i++)
    {
        if(arr[i].second<=w)
        {
          c+=arr[i].first;
          w-=arr[i].second;
        }
        else
        {
            c+=(arr[i].first/arr[i].second)*w;
            break;
        }
    }
    cout<<c;
    return 0;
}
