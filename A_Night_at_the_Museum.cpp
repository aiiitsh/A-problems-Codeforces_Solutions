#include <bits/stdc++.h>
using namespace std;

int main() {
    
        string x;
        int counter=0;
        char current='a', previous='a';
        cin>>x;
        int len = x.length();
        for(int i=0;i<len;i++){
            current=x[i];
            counter = counter + min ((current - previous +26)%26,(previous-current+26)%26);
            previous = x[i];

        }
    
cout<<counter;
    return 0;
}
