#include <bits/stdc++.h>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream user("outputf.in"), expected("expected.in");
    ofstream log("checkerlog.in");

    string uline, eline;
    int line = 1;
    bool all_passed = true;

    while (getline(user, uline) && getline(expected, eline))
    {
        if (uline != eline)
        {
            log << "❌ Test case " << line << " failed\n";
            log << "Your Output   : " << uline << "\n";
            log << "Expected Output: " << eline << "\n\n";
            all_passed = false;
        }
        else
        {
            log << "✅ Test case " << line << " passed\n";
        }
        line++;
    }

    if (all_passed)
    {
        log << "\n🎉 All test cases passed! ^_^\n";
    }
    else
    {
        log << "\n⚠️ Some test cases failed.\n";
    }

    return 0;
}
