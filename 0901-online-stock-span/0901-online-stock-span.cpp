
class StockSpanner {
private:
    vector<int> prices;

public:
    StockSpanner() {
   
    }
    
    int next(int price) {

        prices.push_back(price);
        
        int span = 1; 

        int i = prices.size() - 2; 

        while (i >= 0 && prices[i] <= price) {
            span++;
            i--;    
        }
        
        return span;
    }
};