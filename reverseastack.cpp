#include <iostream>
using namespace std;

stack<int> main()
{
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    // int n;
    // int ele;
    // for(int i=0;i<n;i++){
    // cin>>ele;
    // s.push(ele);
    // }
    cout << reverse(s);
    return 0
}