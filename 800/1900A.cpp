//Cover in Water

#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int ans = 0 , cnt = 0;
        
        for(int i = 0 ; i < n ; i++){
            if(s.substr(i , 3) == "..."){
                ans = 2;
                break;
            }
        }
        
        if(ans == 0){
            for(int i = 0 ; i < n ; i++){
                if(s[i] == '.') cnt++;
            }
        }
        
        if(ans == 0) cout << cnt << endl;
        else cout << ans << endl;
    }
}