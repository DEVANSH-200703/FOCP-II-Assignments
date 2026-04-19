#include <iostream>
using namespace std;
int main(){
    long long L, R;
    if (!(cin >> L >> R)) return 0;
      long long oddsUpToR = (R + 1) / 2;
long long oddsUpToLMinus1 = L / 2;
        long long totalOdds = oddsUpToR - oddsUpToLMinus1;
    if (totalOdds % 2 == 0) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }
    return 0;
}
