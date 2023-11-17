#include<iostream>

using namespace std;

main()
{
    int numOfWords;
    cout << "Enter how many words you want to enter: ";
    cin >> numOfWords;

    string words[numOfWords];
    int i=0;
    while(i<numOfWords)
    {
        cout << "Enter word " << i+1 << ": ";
        cin >> words[i];
        i++;
    }
    int charCount=0;
    char letter;
    cout << "Enter the letter you want to count: ";
    cin >> letter;
    for(int j=0;j<numOfWords;j++)
    {
        string word=words[j];
        int k=0;
        while(word[k]!='\0')
        {
            if(letter==word[k])
            {
                charCount++;
            }
            k++;
        }
    }
    cout << letter << " shows up " << charCount << " times in the data.";
}