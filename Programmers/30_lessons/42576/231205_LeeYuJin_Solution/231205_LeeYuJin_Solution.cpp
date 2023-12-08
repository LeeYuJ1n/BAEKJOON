#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    string answer = "";

    map<string, int> list;

    for (int i = 0; i < participant.size(); ++i)
    {
        if (list.find(participant[i]) != list.end())
        {
            list[participant[i]]++;
        }
        else
        {
            list[participant[i]] = 1;
        }
    }

    for (int i = 0; i < completion.size(); ++i)
    {
        if (list.find(completion[i]) != list.end())
        {
            list[completion[i]]--;
        }
    }

    for (map<string, int>::iterator it = list.begin();
        it != list.end();
        ++it)
    {
        if (it->second != 0)
        {
            answer = it->first;
        }
    }


    return answer;
};