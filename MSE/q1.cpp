#include<bits/stdc++.h>
using namespace std;

void max_value(int i, int  &maxi, int arr[]){
    maxi= max(arr[i],arr[i+1]);
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
  
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans =0;
    for (int i = 0; i < n-1; i++)
    {
         int maxi=0;
         max_value(i,maxi, arr);
         ans=max(ans,maxi);
    }

    cout<<"ans = "<<ans<<endl;

return 0;
}