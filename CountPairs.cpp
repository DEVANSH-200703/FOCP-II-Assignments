#include <iostream>
using namespace std;
int prime_counts[10000001];
int main(){
    for (int i = 2; i <= 10000000; i++){
        if (prime_counts[i] == 0){
        for (int j = i; j <= 10000000; j = j + i){
            prime_counts[j] = prime_counts[j] + 1;
        }
    }
    }
    int t;
	cin>>t;
    if (cin.fail()){
		return 0;
	  }
    for (int q = 0; q < t; q++){
        int n;
        cin>>n;
        if (n == 1){
            cout <<1<<endl;
        } else {
            int k = prime_counts[n];
            long long result = 1;
            for (int i = 0; i < k; i++) {
                result = result*2;
            }
            cout <<result<<endl;
    }
    }
    return 0;
}
