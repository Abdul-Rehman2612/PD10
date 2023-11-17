#include<iostream>

using namespace std;

main()
{
    cout << "Enter the weights of the 10 packages: " << endl;
    int weight[10];
    int i=0;
    while(i<10)
    {
        cin >> weight[i];
        i++;
    }
    cout << "Sorted array in ascending order: [";
    int count=0;
    int k[10];
    while(count!=10)
    {
        int smallerWeight=10000000;
        for(int j=0;j<10;j++)
        {
            for(int y=0;y<count;y++)
            {
                if(k[y]==j)
                {
                    weight[j]=-1;
                    break;
                }
            }
            if(weight[j]>-1)
            {
                if(smallerWeight>weight[j])
                {
                    smallerWeight=weight[j];
                    k[count]=j;
                }
            }
        }
        count++;
        cout << smallerWeight;
        if(count<10)
        {
            cout << ", ";
        }
    }

    cout << "]";
}