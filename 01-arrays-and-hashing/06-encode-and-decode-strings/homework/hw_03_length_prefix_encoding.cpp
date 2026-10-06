#include <iostream>
#include <string>
using namespace std;

int main() {
    string data = "2Hi3You4DSA";
    int i = 0;
    cout << "=== Decode ===\n";
    while (i < data.length()) {
        int l = stoi(data.substr(i));
        int d = to_string(l).length();
        i += d;
        cout << "Tu: " << data.substr(i, l) << "\n";
        i += l;
    }
    cout << endl;

    return 0;
}