#include <iostream>
#include <fstream>
#include <limits>
#include <iomanip>

typedef std::numeric_limits< double > dbl;

using namespace std;

int main() {

    ifstream in("loading.in");
    ofstream out("loading.out");

    int n = 0;
    in >> n;

    long double accumulator = 0;
    for (int i = 0; i < n; ++i) {
        long value;
        in >> value;
        accumulator += value;
    }

    if (n > 0) {
        accumulator = accumulator / n;
        out << fixed << setprecision(13) << accumulator << endl;
    } else {
        out << 0 << endl;
    }


    return 0;
}