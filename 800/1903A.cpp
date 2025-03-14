//Halloumi Boxes

#include<bits/stdc++.h>

using namespace std;

string solve(vector<int>&arr , int k){
    if(k <= 1){
        if(is_sorted(arr.begin() , arr.end())){
            return "YES";
        }
        
        return "NO";
    }
    
    return "YES";
}
 
int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n , k;
        cin >> n >> k;
        
        vector<int>arr(n);
        
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        
        cout << solve(arr , k) << endl;
    }
    
    
    
    return 0;
}