#include<iostream>
#include<conio.h>

using namespace std;
    
main()
{
    int days;

    cout << "Enter the number of Saturdays: ";
    cin >> days;

    int miles[days];
    int i=0;
    while(i<days)
    {
        cout << "Enter miles run for Saturday " << i+1 << ": ";
        cin >> miles[i];
        i++;
    }
    int progress=0;
    for(int j=0;j<days-1;j++)
    {
        if(miles[j+1]>miles[j])
        {
            progress++;
        }
    }
    cout << "Total progress days: " << progress;
}