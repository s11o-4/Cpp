// C++ code to demonstrate the working of
// inserter()
#include <iostream>
#include <iterator> // for iterators
#include <vector>   // for vectors
using namespace std;
int main()
{
    vector<int> ar = {1, 2, 3, 4, 5};
    vector<int> ar1 = {10, 20, 30};

    // Declaring iterator to a vector
    vector<int>::iterator ptr = ar.begin();

    // Using advance to set position
    // take care of this -> advance do not return a pointer!
    // just prev && next do it
    advance(ptr, 3);
    cout << "value in poisicion 3: " << *ptr << endl;

    // copying 1 vector elements in other using inserter()
    // this tihng below insert the new array from the index 3 to infinite
    copy(ar1.begin(), ar1.end(), inserter(ar, ptr));

    // Displaying new vector elements
    cout << "The new vector after inserting elements is : ";
    for (int x : ar)
        cout << x << " ";

    cout << endl;
    auto imp = ar.begin();
    cout << *imp << endl;
    return 0;
}
