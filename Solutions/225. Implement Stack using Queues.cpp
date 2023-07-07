class MyStack
{
public:
    queue<int> main;

    void push(int x)
    {
        main.push(x);
    }

    int pop()
    {
        int temp_size = main.size();
        int temp;
        for (int i = 0; i < temp_size; i++)
        {
            if (i == temp_size - 1)
            {
                temp = main.front();
                main.pop();
            }
            else
            {
                main.push(main.front());
                main.pop();
            }
        }
        return temp;
    }

    int top()
    {
        return main.back();
    }

    bool empty()
    {
        return main.empty();
    }
};
