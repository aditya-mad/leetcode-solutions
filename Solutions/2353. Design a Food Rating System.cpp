class FoodRatings
{
public:
    unordered_map<string, set<pair<int, string>>> allFoods;
    unordered_map<string, string> cuisinesType;
    unordered_map<string, int> allRatings;

    FoodRatings(vector<string> &foods, vector<string> &cuisines, vector<int> &ratings)
    {
        int size = foods.size();
        for (int i = 0; i < size; i++)
        {
            allFoods[cuisines[i]].insert(make_pair(-ratings[i], foods[i]));
            cuisinesType[foods[i]] = cuisines[i];
            allRatings[foods[i]] = -ratings[i];
        }
    }

    void changeRating(string food, int newRating)
    {
        allFoods[cuisinesType[food]].erase(make_pair(allRatings[food], food));
        allFoods[cuisinesType[food]].insert(make_pair(-newRating, food));
        allRatings[food] = -newRating;
    }

    string highestRated(string cuisine)
    {
        return allFoods[cuisine].begin()->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */