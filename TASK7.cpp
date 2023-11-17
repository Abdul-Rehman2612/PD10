#include<iostream>
using namespace std;

bool arrangement(int arr[],int arrayLength);

main()
{
    int arrayLength;
    cout << "Enter the length of the array: ";
    cin >> arrayLength;
    cout << "Enter the elements of the array: " << endl;
    int i=0;
    int array[arrayLength];
    while(i<arrayLength)
    {
        cin >> array[i];
        i++;
    }
    cout << "Can be arranged: " << arrangement(array,arrayLength);
}
bool arrangement(int arr[],int arrayLength)
{
    int j=0;
    int greaterNum=0;
    int array2[arrayLength-1];
    while(j<arrayLength)
    {
        if(arr[j]>greaterNum)
        {
            greaterNum=arr[j];
        }
        j++;
    }
    int count=0;
    while(count<arrayLength)
    {
        greaterNum=greaterNum-1;
        int y=count;
        for(int k=0;k<arrayLength;k++)
        {
            if(greaterNum==arr[k])
            {
                arr[k]=greaterNum;
                count++;
                break;
            }
        }
        if(count!=y+1)
        {
            break;
        }
    }
    if(count==arrayLength-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}