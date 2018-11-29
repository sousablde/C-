/*
 * multimaps let me store values with duplicate keys
 */
#include <iostream>
#include <map>

using namespace std;


int main() {

    multimap<int, string> checkUp;

    checkUp.insert(make_pair(30, "bea"));
    checkUp.insert(make_pair(2, "aloe"));
    checkUp.insert(make_pair(20, "tica"));
    checkUp.insert(make_pair(2, "ma"));

    //this will allow for duplicate keys without overwriting
    for (multimap<int, string>::iterator it = checkUp.begin(); it != checkUp.end(); it++) {
        cout << it->first << ": " << it->second << endl;

    }
    //finding a key
    for (multimap<int, string>::iterator it = checkUp.find(20); it != checkUp.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }

    cout << endl;

    //now the pairs will be saved in its
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = checkUp.equal_range(30);

    for (multimap<int, string>::iterator it = its.first; it != its.second; it++) {
        cout << it->first << ": " << it->second << endl;
    }


    return 0;
}
/*
 * output
 *C:\Users\sousa\Desktop\github\C++\Multimaps\cmake-build-debug\Multimaps.exe
2: aloe
2: ma
20: tica
30: bea
20: tica
30: bea

30: bea

Process finished with exit code 0
 */