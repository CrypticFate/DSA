#include <iostream>
#include <stack>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int size_n, size_q, value, query_val, count = 0;
    cin >> size_n >> size_q;
    stack<int> stack1, stack2;
    
    for (int i = 0; i < size_n; i++)
    {
        cin >> value;
        stack1.push(value);
    }
    
    while (!stack1.empty())
    {
        stack2.push(stack1.top());
        stack1.pop();
    }
    
   
    
    for (int i = 0; i < size_q; i++)
    {
        query_val = -1;
        count = 0;
        cin >> value;
        
        while (!stack2.empty())
        {
            
            
            if (stack2.top() == value && query_val == -1)
                query_val = value;
            else
            {
                stack1.push(stack2.top());
                if (query_val != -1)
                    count++;
            }
            
            stack2.pop();
        }
        
        cout<<size_n-count<<' ';

        while (!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
        
        stack2.push(query_val);
    }
}
