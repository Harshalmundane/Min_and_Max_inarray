#include <iostream>
#include <climits> // Add this line for INT_MIN and INT_MAX
using namespace std;

int getMax(int num[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int n)
{
    int min = INT_MAX; // Corrected from INT_Max
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "maximum value is " << getMax(num, size) << endl;
    cout << "minimum value is " << getMin(num, size) << endl; // Corrected from "manimum"
    return 0;
}
