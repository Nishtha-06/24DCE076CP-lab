#include<iostream>
#include<vector>
#include<string>
using namespace std;

// O(n × m)
string multiply(string num1, string num2)
{
    if(num1 == "0" || num2 == "0")
        return "0";

    int n = num1.length();
    int m = num2.length();

    vector<int> result(n + m, 0);

    for(int i = n - 1; i >= 0; i--)
    {
        for(int j = m - 1; j >= 0; j--)
        {
            int mul = (num1[i] - '0') * (num2[j] - '0');

            int sum = mul + result[i + j + 1];

            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    string ans = "";

    int i = 0;
    while(i < result.size() && result[i] == 0)
        i++;

    while(i < result.size())
    {
        ans += (result[i] + '0');
        i++;
    }

    return ans;
}

int main()
{
    string num1, num2;

    cin >> num1 >> num2;

    cout << multiply(num1, num2);

    return 0;
}
