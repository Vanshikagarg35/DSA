class StockSpanner {
private:
    vector<int> history;
public:
    StockSpanner() {
    }
    
    int next(int price) {
        history.push_back(price);
        
        int span = 0;
        for (int i = history.size() - 1; i >= 0; i--) {
            if (history[i] <= price) {
                span++; 
            } 
            else {
                break; 
            }
        }
        return span;
    }
};