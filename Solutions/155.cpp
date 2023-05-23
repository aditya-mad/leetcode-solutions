class MinStack
{
public:
    stack<int> main, minimum;

    void push(int val)
    {
        if (!main.empty() && !minimum.empty())
        {
            main.push(val);
            if (main.top() < minimum.top())
            {
                minimum.push(main.top());
            }
            else
            {
                minimum.push(minimum.top());
            }
        }
        else
        {
            minimum.push(val);
            main.push(val);
        }
    }

    void pop()
    {
        minimum.pop();
        main.pop();
    }

    int top()
    {
        return main.top();
    }

    int getMin()
    {
        return minimum.top();
    }
};
