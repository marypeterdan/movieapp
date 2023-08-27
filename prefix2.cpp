//write a program to convert the prefix expression (A+B)-(C*D) to postfix expression
//input (A+B)-(C*D)

#include <iostream>
#include <stack>
#include <string>
using namespace std;

// include string,bool,int etc. in std namespa

bool isOperator(char x)
{
    switch (x)
    {
    case '+':
    case '-':
    case '*':
    case '/':
        return true;
    }
    return false;
}

string prefixToPostfix(string prefix)
{
    stack<string> s;
    for (int i = prefix.length() - 1; i >= 0; i--)
    {
        if (isOperator(prefix[i]))
        {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            string temp = op1 + op2 + prefix[i];
            s.push(temp);
        }
        else
        {
            s.push(string(1, prefix[i]));
        }
    }
    return s.top();
}

int main()
{
    string prefix = "(A-B/C)*(A/K-L)";

    cout << "Postfix : " << prefixToPostfix(prefix) << endl;
    return 0;
}   



