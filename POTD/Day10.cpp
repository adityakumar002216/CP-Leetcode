class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
          stack<int>s;
        int n = pushed.size();
        for (int i = 0, j = 0; i < n; i++) {
            s.push(pushed[i]);
            while (j < n && s.size() > 0 && s.top() == popped[j]) {
                s.pop();
                j++;
            }
        }
        return s.size() == 0 ? true : false;
    }
};
