#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
//     unordered_map<char ,int>count;
//     long i=0;
//     int j=0;
//     long A;
//     int size=s.size();
//     for(long i=0;i<n;i+=size){
//         char ch;
//         for(j=0;j<size;j++){
//             count[ch]++;
//         }
//         // i+=j;
//     }
//     unordered_map<string ,int>::iterator it;
//     for( auto it=count.begin();it!=count.end();it++){
//         if(it->first =='a')
//           A= it->second;
//           break;
        
//     }
// return A;
int size=s.size();

long noOfS=n/size;
int p=0;
long count;

for(int i=0;i<size;i++){
    if(s[i]=='a')
    p++;
}

 count+=(noOfS*p);
 
for(int j=0;j<(n%size);j++){
    if(s[j]=='a'){
        count++;
    }
}

return count;
}


int main()
{
    string s;
    getline(cin, s);
    long n;
    cin >> n;
    cout<<repeatedString(s,n);
    return 0;
}
