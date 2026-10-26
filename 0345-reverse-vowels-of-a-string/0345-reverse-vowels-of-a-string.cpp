class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while (i < j) {
        while (i < j) {
            char ch = tolower(static_cast<unsigned char>(s[i]));

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                break;
            }
            i++;
        }

        while (i < j) {
            char ch = tolower(s[j]);

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                break;
            }
            j--;
        }

        swap(s[i], s[j]);

        i++;
        j--;
    }

    return s;
}
        
   
};