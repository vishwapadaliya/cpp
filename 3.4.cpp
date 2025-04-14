#include <iostream>
#include <vector>
using namespace std;


template <typename T>
T findMax(const vector<T>& collection)
 {
    T maxVal = collection[0];
    for (const T& val : collection)
    {
        if (val > maxVal)
            maxVal = val;
    }
    return maxVal;
}


template <typename T>
void reverseCollection(vector<T>& collection)
{
    int start = 0;
    int end = collection.size() - 1;
    while (start < end)
    {
        swap(collection[start], collection[end]);
        start++;
        end--;
    }
}


template <typename T>
void displayCollection(const vector<T>& collection)
{
    for (const T& val : collection)
    {
        cout << val << " ";
    }
    cout << endl;
}


int main()
{

    vector<int> intCollection = {10, 20, 5, 30, 15};
    cout << "Integer Collection: ";
    displayCollection(intCollection);
    cout << "Max: " << findMax(intCollection) << endl;
    reverseCollection(intCollection);
    cout << "Reversed: ";
    displayCollection(intCollection);
    cout << endl;


    vector<float> floatCollection = {3.14, 1.1, 9.81, 2.7};
    cout << "Float Collection: ";
    displayCollection(floatCollection);
    cout << "Max: " << findMax(floatCollection) << endl;
    reverseCollection(floatCollection);
    cout << "Reversed: ";
    displayCollection(floatCollection);
    cout << endl;


    vector<char> charCollection = {'a', 'x', 'm', 'b'};
    cout << "Char Collection: ";
    displayCollection(charCollection);
    cout << "Max: " << findMax(charCollection) << endl;
    reverseCollection(charCollection);
    cout << "Reversed: ";
    displayCollection(charCollection);
    cout << endl;
cout << endl << "Vishwa padaliya" << " " << "ID No: 24CE068" << endl;
    return 0;
}
