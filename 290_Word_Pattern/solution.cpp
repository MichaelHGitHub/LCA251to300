#include "header.h"
#include <unordered_map>
#include <unordered_set>

bool wordPattern(string pattern, string s)
{
    std::unordered_map<char, string> dict;
    std::unordered_set<string> record;
    int p_pos = 0;
    int s_pos = 0;

    while(p_pos < pattern.length() && s_pos < s.length())
    {
        string word;
        int space_pos = s.find_first_of(' ', s_pos);
        if (space_pos == s.npos)
        {
            word = s.substr(s_pos, s.length() - s_pos);
            // Adjust the space_pos value to make it easier for late check.
            space_pos = s.length() - 1;
        }
        else
        {
            word = s.substr(s_pos, space_pos - s_pos);
        }

        if (dict.find(pattern[p_pos]) != dict.end())
        {
            if (dict[pattern[p_pos]] != word)
            {
                break;
            }
        }
        else
        {
            if (record.find(word) == record.end())
            {
                dict[pattern[p_pos]] = word;
                record.insert(word);
            }
            else
            {
                break;
            }
        }

        s_pos = space_pos + 1;
        ++p_pos;
    }

    return (p_pos == pattern.length()) && (s_pos == s.length());
}