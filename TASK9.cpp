#include<iostream>
using namespace std;

int uniqueNum(int numArr[],int size);

main()
{
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;

    int i=0;
    int numArr[size];
    cout << "Enter the elements of the array: " << endl;
    while(i<size)
    {
        cin >> numArr[i];
        i++;
    }
    cout << "Special value: " << uniqueNum(numArr,size);
}

int uniqueNum(int numArr[],int size)
{
    int specialNum=-1;
    for (int i=1;i<=size;i++)
    {
        int count=0;
        for (int j=0;j<size;j++)
        {
            if(numArr[j]>=i)
            {
                count++;
            }
        }
        if(count==i)
        {
            specialNum=i;
            break;
        }
    }
    return specialNum;
}
