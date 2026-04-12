#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    int k;
   if(!(cin>>n>>k)){
        return 0;
}
    string bulbs;
    cin >> bulbs;
    for (int l=1;l<=n;l++){
        int count = 0;
        for (int i = 0;i<n; i++) {
            if (bulbs[i] == '1'){
                count = count+1;
                i = i+l-1; 
            }
        }
        if (count <=k){
            cout <<l<<endl;
            return 0;
        }
    }
}
