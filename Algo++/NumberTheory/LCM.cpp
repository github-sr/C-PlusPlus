#include<iostream>
using namespace std;

#define ll long long

ll gcd(ll a,ll b) {
  //Base Case
  if(b == 0) {
    return a;
  }
  //Rec Case
  return gcd(b,a % b);
}

ll lcm(ll a,ll b) {
  return (a *b) / gcd(a,b);
}
int main() {
  ll a,b;
  cin>>a>>b;
  cout<<lcm(a,b);
	return 0;
}
