#include<iostream>
using namespace std;

int nCr(int n,int r) {
    if(r > n) {
        cout<<"LOL";
        return 0;
    }
    if(n == r || r == 0) {
        return 1;
    }
    return (nCr(n - 1,r) + nCr(n - 1,r - 1));
}

int main() {
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r);
    return 0;
}