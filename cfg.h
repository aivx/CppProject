#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <map>

using namespace std;

class CFG{
    ifstream f;
public:
    map <string, string> p;
    CFG(const string path)
    {
        f.open(path); 
        if (!f.is_open()) {
            cerr << endl << "Конфиг-файл не найден, инициализация не выполнена" << endl;
            while (cin.get() != '\n');
            exit(0);
        }
        while (!f.eof()) {
            string s;
            getline(f, s);
            stringstream str(s);
            if (isalpha(s[0])) {
                getline(str, s, '=');
                string s1 = s;
                getline(str, s);
                p[s1] = s;
            }
        }
        f.close();
    }
};
