//prices = [7,1,5,3,6,4] return max profite.
#include <iostream>
#include <vector>
using namespace std;


int maxProfit(vector<int>& prices)
{
    int maxprofit = 0, bestBuy = prices[0];

    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] - bestBuy > maxprofit)
        {
            maxprofit = max(maxprofit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxprofit;
}
int main ()
{
    vector<int> prices = {7,1,5,3,6,4};
    cout << maxProfit(prices) << endl;
}