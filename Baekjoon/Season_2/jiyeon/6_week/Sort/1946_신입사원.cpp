#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int testCaseNum;
    cin >> testCaseNum;

    while(testCaseNum--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> grades;

        for(int i = 0; i < n; i++)
        {
            int paperwork, interview;
            cin >> paperwork >>  interview;
            grades.push_back({paperwork, interview});
        }
        
        // 서류 심사 기준으로 정렬
        sort(grades.begin(), grades.end());

        int result = 1;
        int interviewScore = grades[0].second;

        for(int i = 1; i < n; i++)
        {
            if(interviewScore > grades[i].second)
            {
                result++;
                interviewScore = grades[i].second;
            }
        }

        // 결과 출력
        cout << result << "\n";
    }

    return 0;
}