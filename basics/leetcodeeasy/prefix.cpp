#include <iostream>
#include <vector>
#include <string>
using namespace std;
string  main()
{

    int n;
    cin >> n;
    vector<string> strs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> strs[i];
    }





        if (strs.empty()) {
            return "";
        }

        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {

            string currentPrefix = "";

            for (int j = 0; j < min(prefix.length(), strs[i].length()); j++) {

                if (prefix[j] == strs[i][j]) {
                    currentPrefix.push_back(prefix[j]);
                }
                else {
                    break;
                }
            }

            prefix = currentPrefix;

            if (prefix.empty()) {
                return "";
            }
        }

        return prefix;
    }
