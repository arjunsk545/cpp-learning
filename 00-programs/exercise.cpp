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

void reverseInteger(int num)
{
    int newNum = 0;
    int temp = 0;
    while(num != 0)
    {
        temp = num%10;
        num = num/10;
        
        newNum = (newNum * 10) + temp;
    }
    
    cout<<newNum<<endl;
}

bool Palindrome(string name)
{
    int left = 0;
    int right = name.length() - 1;
    
    while(left < right)
    {
        if(name[left] != name[right])
        {
            cout<< "It is not a Palindrome"<<endl;
            return false;
        }
        
        left++;
        right--;
    }
    cout<< "It is a Palindrome" <<endl;
    return true;
}

void integerPalindrome(int num)
{
    int temp = 0;
    int newNum = 0;
    int cachedNum = num;
    
    while(num != 0)
    {
        temp = num%10;
        num = num/10;
        
        newNum = (newNum * 10) + temp;
    }
    
    if(newNum == cachedNum)
    {
        cout<< "It is a Palindrome"<<endl; 
    }
    else
    {
        cout<< "Not a Palindrome"<<endl;
    }
}

int main()
{
    reverseString("Hello");
    int arr[5] = {1,2,333,44,5};
    largestNumber(arr, sizeof(arr)/sizeof(arr[0]));
    int arr2[5] = {1,2,1,4,5};
    findDuplicate(arr2, sizeof(arr2)/sizeof(arr2[0]));
    reverseInteger(1234);
    Palindrome("ARAI");
    integerPalindrome(121);
}
