#include <iostream>
using namespace std;

void reverseString(string str)
{
    int left = 0;
    int right = str.length() - 1;
    
    while(left < right)
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
    

    cout<<"Reversed string is " <<str<<endl;
}

void largestNumber(int arr[], int size)
{
    int largest = arr[0];
    int i = 0;

    for(i=1; i<size; i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    
    cout<<"Largest number is "<< largest << endl;
}

bool findDuplicate(int arr[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                cout << "Duplicate found : "<<arr[i]<< " at indexes " << i << " and " << j << endl;
                return false;
            }
        }
    }
    return true;
}

int main()
{
    reverseString("Hello");
    int arr[5] = {1,2,333,44,5};
    largestNumber(arr, sizeof(arr)/sizeof(arr[0]));
    int arr2[5] = {1,2,1,4,5};
    findDuplicate(arr2, sizeof(arr2)/sizeof(arr2[0]));
}
