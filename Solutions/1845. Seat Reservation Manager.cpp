class SeatManager
{
public:
    priority_queue<int, vector<int>, greater<int>> memo;
    SeatManager(int n)
    {
        for (int i = 1; i <= n; i++)
            memo.push(i);
    }

    int reserve()
    {
        int seat = memo.top();
        memo.pop();
        return seat;
    }

    void unreserve(int seatNumber)
    {
        memo.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */