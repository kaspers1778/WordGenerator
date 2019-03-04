
#include "pch.h"
#include<cstdlib>
#include <string>
#include<time.h>
#include <iostream>


using namespace std;

static string getWord(int lenght)
{
	string letters[] = { "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","0","1","2","3","4","5","6","7","8","9" };
	string word = "";
	for (int i = 0;i < lenght;i++)
	{
		word += letters[rand() % 26];
	}

	return word;
}

int main()
{
	system("color 02");

	srand(time(NULL));//Обязательно оставить эту строчку в main()
	string wordToFind;
	cout << "Write the word to find : ";
	cin >> wordToFind;
	int lenght = wordToFind.length();
	int i = 0;
	string word;
	do
	{
		word = getWord(lenght);
		cout << word << " ";
		i++;
	} while (word != wordToFind);
	cout << endl << "The word is " << i << " word" << endl;

	system("PAUSE");
	return 0;
}

