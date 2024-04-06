#include <iostream>
using namespace std;


//Templates are similiar to generics of C# or any other PL

//function template
template<typename T>
T myMax(T x, T y)
{
    return x>y?x:y;
}

//function template
template <typename T>
void bubbleSort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}

/**
Class Templates like function templates, class templates are useful when a
class defines something that is independent of the data type. Can be useful
for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc.
**/


template <class T, class U>
class SampleClass {
    T x;
    U y;

public:
    SampleClass() { cout << "Constructor Called" << endl; }
};

int main()
{
    cout<<myMax<int>(50, 20)<<endl;
    cout<<myMax<char>('a', 'c')<<endl;

    int a[5] = { 10, 50, 30, 40, 20 };
    int n = sizeof(a) / sizeof(a[0]);

    bubbleSort<int>(a, n);

    cout << " Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    SampleClass<char, char> sampleClass;

    return 0;
}
