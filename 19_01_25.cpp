int space_count(string s){
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            count++;
        }
    }
    return count;
}
int word_count(string s){
    string copy=s;
    int count = 0;
    copy.push_back(' ');
    for(int i=0;i<copy.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            if(s[i+1]==' '){
                count++;
            }
        }
    }
    return count;
}

class Solution {
public:
    string reorderSpaces(string text) {
        int space=space_count(text);
        int word=word_count(text);
        if(word==1){
            string ans = "";
            for(int i=0;i<text.size();i++){
                if(text[i]!=' '){
                    ans += text[i];
                }
            }
            for(int i=0;i<space;i++){
                ans += ' ';
            }
            return ans;
        }
        else{
            string ans = "";
            int remainder = space % (word - 1);
            int spaces=space/(word-1);

            int left = 0, right = text.length() - 1;
            for (left; left < text.length(); left++) {
                if (text[left] != ' ') break;
            }
            for (right; right >= 0; right--) {
                if (text[right] != ' ') break;
            }
            bool flag = false;
            for (int j = left; j < right + 1; j++) {
                if (text[j] != ' ' && flag == false) {
                    while (text[j] != ' ' && j < left - right) ans += text[j++];
                    flag = true;
                }
                else if (text[j] == ' ' && flag == true) {
                    for (int s = 0; s < spaces; s++) ans += ' ';
                    flag = false;
                }
            }
            for (int k = 0; k < remainder; k++) ans += ' ';
            return ans;
        }
    }

};