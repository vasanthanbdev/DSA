from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        min_price = prices[0]
        for price in prices:
            if(price < min_price):
                min_price = price 
            else:
                profit = max(profit, price - min_price)
        return profit 

if __name__ == "__main__":
    sol = Solution() #instance of the class
    prices = [1,2,4,2,5,7,2,4,9,0,9]
    print(sol.maxProfit(prices))