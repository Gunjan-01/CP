#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

class MyQueue
{

public:
    stack<int> stack1, stack2;
    void push(int x)
    {
        while (!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
        stack1.push(x);
        while (!stack2.empty())
        {
            stack1.push(stack2.top());
            stack2.pop();
        }
    }

    void pop()
    {
        //    stack1.pop();
        // int size=stack1.size();
        // while(!stack1.empty()){
        //     stack2.push(stack1.top());
        //     stack1.pop();
        // }
        //    stack2.pop();
        stack1.pop();
    }

    int front()
    {
        int x = stack1.top();
        return x;
    }
};

int main()
{
    MyQueue q1;
    int q, type, x;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> type;
        if (type == 1)
        {
            cin >> x;
            q1.push(x);
        }
        else if (type == 2)
        {
            q1.pop();
        }
        else
            cout << q1.front() << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
