#include<iostream>
using namespace std;

void reverseString(string line);

main()
{
    string line;
    cout << "Enter a string: ";
    getline(cin,line);

    reverseString(line);
}

void reverseString(string line)
{
    int count=0;
    int i=0;
    int spaceCount=0;
    while(i<line.length())
    {
        if(line[i]==' ')
        {
            spaceCount++;
        }
        i++;
    }
    cout << "Reversed string: ";
    string arr="";
    string arr2[spaceCount+1];
    int j=0;
    int k=0;
    while(j<=spaceCount)
    {
        string arr="";
        while(line[k]!=' ' && line[k]!='\0')
        {
            arr=arr+line[k];
            k++;
        }
        k=k+1;
        arr2[j]=arr;
        j++;
    }
    for(int x=spaceCount;x>=0;x--)
    {
        cout << arr2[x];
        if(x>0)
        {
            cout << " ";
        }
    }
}