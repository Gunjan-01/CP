#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s)
{
    stack<char> stck;
    char A;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            stck.push(s[i]);
        }
        else if ((s[i] == '}' || s[i] == ']' || s[i] == ')') && stck.size() != 0)
        {
            A = stck.top();
            if ((A == '{' && s[i] == '}') || (A == '(' && s[i] == ')') || (A == '[' && s[i] == ']'))
            {
                stck.pop();
            }
            else
                stck.push(s[i]);
        }
    }
    if (stck.size() == 0)
    {
        return "YES";
    }
    else
        return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
