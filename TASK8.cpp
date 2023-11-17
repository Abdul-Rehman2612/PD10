#include<iostream>
using namespace std;

int rotationCheck(string arr[],int size);

main()
{
    int arraysize;
    cout << "Enter the length of the array: ";
    cin >> arraysize;
    
    int i=0;
    string arr[arraysize];
    cout << "Enter the elements of the array (\"left\" or \"right\"): " << endl;
    while(i<arraysize)
    {
        cin >> arr[i];
        i++;
    }
    cout << "Number of full rotations: " << rotationCheck(arr,arraysize);
}
int rotationCheck(string arr[],int size)
{
    int j=0;
    int angle=0;
    while(j<size)
    {
        if(arr[j]=="right")
        {
            angle=angle+90;
        }
        if(arr[j]=="left")
        {
            angle=angle-90;
        }
        j++;
    }
    int rotation=abs(angle/360);
    return rotation;
}