#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

void makeHashMap(string, map<string, vector<string>> &);
void printMap(string, map<string, vector<string>>);

void makeHashMap(string filename, map<string, vector<string>> &hashMap)
{
    /*******************************
     * Code your program here
     *******************************/
}

void printMap(map<string, vector<string>> hashMap)
{
    map<string, vector<string>>::iterator it;
    for (it = hashMap.begin(); it != hashMap.end(); it++)
    {
        cout << it->first << "\t";
        for (int i = 0; i < it->second.size(); i++)
            cout << it->second[i] << "\t";
        cout << endl;
    }
}