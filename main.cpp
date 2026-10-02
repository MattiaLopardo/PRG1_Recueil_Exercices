#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <limits>
#include <string>
#include <cmath>

using namespace std;

int main() {
    using type = int;
    cout << "taille : " << sizeof(type) << " bytes = " << (numeric_limits<type>::digits + numeric_limits<type>::is_signed) << " bites" << endl;
    cout << "plage de valeurs : " << numeric_limits<type>::lowest() << " <==> " << numeric_limits<type>::max() << endl;
    cout << "signer : " << boolalpha << numeric_limits<type>::is_signed << endl;
}