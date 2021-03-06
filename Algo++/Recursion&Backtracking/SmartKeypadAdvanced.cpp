//Given a long vector of strings, print the strings that contain the strings generated by numeric string str.

//string searchIn [] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
//Example, if the input is 26 and the string is coding, then output should be coding since 26 can produce co which is contained in coding.
#include<iostream>
#include<string>
using namespace std;

char getChar(int n,int i) {
    char ch = char(96 + 3 * (n - 2) + i);
    if(n <= 7 && n >= 2) 
        return ch;
    if(n >= 8 && n <= 9)
        return ch + 1;
    return '\0';
}

void check(char *out) {
  string searchIn [] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
    for(int i = 0;i < 11;i++) {
      if(searchIn[i].find(out) != -1) {
        cout<<searchIn[i]<<endl;
      }
    }
}

void getString(char *in,char *out,int i,int j) {
    if(in[i] == '\0') {
        out[j] = '\0';
        check(out);
        return;
    }
    int x;
    (in[i] == '7' || in[i] == '9')? x = 4 : x = 3;
    for(int k = 1;k <= x;k++) {
        out[j] = getChar(in[i] - 48,k);
        getString(in,out,i + 1,j + 1);
    }
}

int main() {
    char in[100000];
    char out[100000];
    cin>>in;
    getString(in,out,0,0);
    return 0;
}
