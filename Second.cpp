#include <iostream>
#include <set>
#include <vector>

using namespace std;

void change () {

    vector<int> v;

    set<int> A{1, 5, 9, 10};
    set<int> B{3, 5, 6, 9, 10, 14};

    int countFirst = 0;

    for (int n : A) {
        countFirst++;
        for (int k : B) {
            if (n == k - 1) {
                v.push_back(n);
            }
        }
    }

    for (int n : v) {
        A.erase(n);
    }

}

int main() {

    change();

}
