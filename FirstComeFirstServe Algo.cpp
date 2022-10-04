#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int> >v;
    int n;
    cout<<"enter the no of process";
    cin>>n;
    int att,btt;
    for(int i=1;i<=n;i++)
    {
       cout<<"enter the process"<<i<<" arrival time and burst time\n";
       cin>>att>>btt;
      v.push_back({att,btt});

    }
    sort(v.begin(),v.end());
    int ct=0;
    ct=v[0].first;
    vector<pair<int,int> >temp;
    for(int i=0;i<=n;i++)
    {
if(ct<v[i].first)
ct=ct+v[i].first;
temp.push_back({ct,ct+v[i].second});
ct=ct+v[i].second;

    }
    int tt[n]={0};
    int wt=0;
    for(int i=0;i<n;i++){
     tt[i]+=temp[i].second-v[i].first;
     wt+=tt[i]-v[i].second;
      
    }
    cout<<"\naverage waiting time\n"<<wt/n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
sum+=tt[i];

    }
    int st=0;
    for(int i=0;i<n;i++)
    {
        st+=temp[i].first-v[i].first;
    }

    cout<<"\navg tt time\n"<<sum/n;
    cout<<"\n response time  is  \n"<<st/n;
}
