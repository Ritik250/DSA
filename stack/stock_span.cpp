#include <bits/stdc++.h>
using namespace std;

vector<int> stockSpan(vector<int>& prices){
    vector<int> ans;
    stack<pair<int,int>> st;
    for(auto price:prices){
        int span=1;
        while(!st.empty() && price>=st.top().first){
            span+=st.top().second;
            st.pop();
        }
        st.push({price,span});
        ans.push_back(span);
    }
    return ans;
}

int main() {
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};

    vector<int> ans = stockSpan(prices);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}