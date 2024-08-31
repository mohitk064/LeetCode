class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.insert(heights.begin(),-1);
        heights.push_back(-1);
        int n = heights.size();
        vector<int> nse(n);
        vector<int> pse(n);

        stack<int> st;
        st.push(0);
        for(int i=1; i<n-1; i++){ // previous smaller element
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            pse[i] = st.top();
            st.push(i);
        }

        st = stack<int>();
        st.push(n-1);
        for(int i=n-2; i>=1; i--){ // next smaller element
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            nse[i] = st.top();
            st.push(i);
        }

        int maxArea = 0;
        for(int i=1; i<n-1; i++){
            int area = (nse[i]-(pse[i]+1))*heights[i];
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};