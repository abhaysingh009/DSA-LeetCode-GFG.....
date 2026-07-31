class Solution {
public:
    bool isValid(string s) {
        vector<string> parts;
        string temp = "";

        // Split by '.'
        for(char c : s) {
            if(c == '.') {
                parts.push_back(temp);
                temp = "";
            }
            else {
                temp += c;
            }
        }
        parts.push_back(temp);

        // IPv4 must have exactly 4 parts
        if(parts.size() != 4)
            return false;

        for(string part : parts) {

            // Empty part (like 1..2)
            if(part.empty())
                return false;

            // Leading zero check
            if(part.size() > 1 && part[0] == '0')
                return false;

            // All characters must be digits
            for(char c : part) {
                if(!isdigit(c))
                    return false;
            }

            // Range check
            int num = stoi(part);

            if(num < 0 || num > 255)
                return false;
        }

        return true;
    }
};