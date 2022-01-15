// First  non_repeating_character 

#include <iostream>
#include <map> //we are going to use here map
using namespace std;

char first_non_Repeating_char(string S)
{
    map<char, int> c_occurance; // character occurances
    for (int i = 0; i < S.length(); i++)
    {
        c_occurance[S[i]]++;
    }
    // Now looking for the each character of the string
    for (int i = 0; i < S.length(); i++)
    {
        if (c_occurance[S[i]] == 1)
        {
            return S[i];
        }
    }
    return -1; // If all character repeating
}
int main()
{
    string str;
    cin >> str;
    char ans = first_non_Repeating_char(str);
    cout << ans << endl;
    return 0;
}