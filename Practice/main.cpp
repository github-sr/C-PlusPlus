// https://www.spoj.com/problems/PRIME1/
// https://www.codechef.com/problems/CHEFPRMS

#include <iostream>
#include<vector>
using namespace std;

const int n = 1000000001;
vector<int> arr;

void buildSieve() {
    for(int i = 0;i < n;i++) {
        arr.push_back(0);
    }
    for(int i = 2;i * i < n;i++) {
        if(arr[i] == 0) {
            for(int j = i * i;j < n;j += i) {
                arr[j]++;
            }
        }
    }
}

int main() {
    int t;
    buildSieve();
    cin>>t;
    while(t--) {
        int a, b;
        cin>>a>>b;
        for(int i = a;i <= b;i++) {
            if(arr[i] == 0 && i != 0 && i != 1) {
                cout<<i<<endl;
            }
        }
        cout<<endl;
    }
	return 0;
}
