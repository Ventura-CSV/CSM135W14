#include "main.hpp"

int main()
{
    string filename;
    map<string, vector<string>> hashMap;

    filename = "Markov.txt";
    // filename = "test0.txt";
    makeHashMap(filename, hashMap);
    printMap(hashMap);
}
