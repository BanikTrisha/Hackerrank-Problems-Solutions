#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'makeAnagram' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING a
 *  2. STRING b
 */

int makeAnagram(string a, string b) {
    
    int total_del = 0;
    int alphabet[26] = {0};
    
    for(int i=0; i<a.length(); i++) {
        alphabet[a[i]-'a']--;
    }
    
    for(int i=0; i<b.length(); i++) {
        alphabet[b[i]-'a']++;
    }
    
    for(int i=0; i<26; i++) {
        total_del += abs(alphabet[i]);
    }
    
    return total_del;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
