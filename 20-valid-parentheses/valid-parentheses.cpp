class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;

        for (const auto& c : s) {
            if (c == '[' || c == '{' || c == '(') {
                stack.push(c);
            } else {
                if (stack.empty()) {
                    return false;
                }

                char top = stack.top();

                if (top == '{' && c == '}' ||
                    top == '[' && c == ']' ||
                    top == '(' && c == ')') {
                        stack.pop();
                } else {
                    return false;
                }
            }
        }

        return stack.empty();
    }
};