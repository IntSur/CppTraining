#include <iostream>
using namespace std;

int main() {
    int score[3][3] = {
        {100,90,80},
        {90,90,80},
        {80,90,100}
    };
    string Subjects[3] = {"语文","英语","数学"};
    int totalscore[3];
    int columnNum = sizeof(score[0]) / sizeof(score[0][0]);
    int lineNum = sizeof(score) / sizeof(score[0]);
    cout << columnNum << endl;
    cout << lineNum << endl;

    for (int i = 0; i < columnNum; i++)
    {
        for (int j = 0; j < lineNum; j++)
        {
            totalscore[i] += score[i][j];
        }
        cout << Subjects[i] << "总分为:" << totalscore[i] << endl;
    }

    return 0;
}