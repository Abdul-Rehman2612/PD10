#include<iostream>

using namespace std;

bool isRepeatingCycle(int array[],int cycleLength,int arrayLength);

main()
{
    int arrayLength;
    cout << "Enter the length of the array: ";
    cin >> arrayLength;

    int i=0;
    int array[arrayLength];
    cout << "Enter the elements of the array: " << endl; 
    while(i<arrayLength)
    {
        cin >> array[i];
        i++;
    }

    int cycleLength;
    cout << "Enter the length of the cycle: ";
    cin >> cycleLength;

    bool result=isRepeatingCycle(array,cycleLength,arrayLength);
    cout << "Output: " << result;
}
bool isRepeatingCycle(int array[],int cycleLength,int arrayLength)
{
    int count=0;
    int array2[cycleLength];
    int cycle=0;
    if(cycleLength>=arrayLength)
    {
        return true;
    }
    else if(cycleLength>arrayLength/2)
    {
        for(int i=0;i<cycleLength-1;i++)
        {
            array2[i]=array[i];
        }
        for(int n=0;n<cycleLength-1;n++)
        {
            int y=n+cycleLength;
            if(array[y]==array2[n])
            {
                count++;
            }
        }
        cycle=count/(arrayLength-cycleLength);
        if(cycle>0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
    else
    {
        for(int j=0;j<cycleLength;j++)
        {
            array2[j]=array[j];
        }
        for(int k=0;k<cycleLength;k++)
        {
            int m;
            m=k+cycleLength;
            if(array[m]==array2[k])
            {
                count++;
            }
        }
        cycle=count/(cycleLength);
        if(cycle>0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
