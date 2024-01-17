class RandomizedSet
{
    unordered_set<int> memo;

public:
    RandomizedSet()
    {
    }

    bool insert(int val)
    {
        if (memo.find(val) != memo.end())
            return 0;
        else
        {
            memo.insert(val);
            return 1;
        }
    }

    bool remove(int val)
    {
        if (memo.find(val) == memo.end())
            return 0;
        else
        {
            memo.erase(val);
            return 1;
        }
    }

    int getRandom()
    {
        return *next(memo.begin(), rand() % memo.size());
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */