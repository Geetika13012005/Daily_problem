#include <iostream>
#include <vector>
using namespace std;


int oddPart(int x)
{
    while (x % 2 == 0)
    {
        x /= 2;
    }
    return x;
}

int main()
{
    int t;
    cin >> t;

   
    vector<string> answers;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        bool possible = true;

       
        for (int i = 1; i <= n; i++)
        {
            if (oddPart(i) != oddPart(a[i]))
            {
                possible = false;
                break;
            }
        }

      
        if (possible)
            answers.push_back("YES");
        else
            answers.push_back("NO");
    }

    
    for (int i = 0; i < answers.size(); i++)
    {
        cout << answers[i] << endl;
    }

    return 0;
}