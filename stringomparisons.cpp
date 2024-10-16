#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char>& chars) {
    int index=0;
    int i=0;      

    while (i < chars.size()) {
        char currentChar = chars[i];
        int count = 0;

        // Count how many times currentChar repeats
        while (i < chars.size() && chars[i] == currentChar) {
            i++;
            count++;
        }
        chars[index++] = currentChar;
        if (count > 1) {
            for (char c : to_string(count)) {
                chars[index++] = c;
            }
        }
    }

    return index;  
}

int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'};

    int newLength = compress(chars);

    // Print the compressed array up to newLength
    for (int i = 0; i < newLength; i++) {
        cout << chars[i];
    }
    cout << endl;

    cout << "Compressed length: " << newLength << endl;

    return 0;
}
