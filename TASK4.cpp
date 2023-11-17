#include<iostream>

using namespace std;

main()
{
    int boxes;
    cout << "Enter the number of boxes: ";
    cin >> boxes;

    int totalVolume=0;
    int length[boxes];
    int width[boxes];
    int height[boxes];
    int i=0;
    cout << "Enter the dimensions of the boxes (length, width, height): " << endl;
    while(i<boxes)
    {
        cin >> length[i];
        cin >> width[i];
        cin >> height[i];

        totalVolume=totalVolume+length[i]*width[i]*height[i];
        i++;
    }
    cout << "Total volume of all boxes: " << totalVolume;
}