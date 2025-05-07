#include <iostream>
#include <cstring>
using namespace std;

int main() {

	int countStack = 0, numCount = 0;
	char lyric[10000];

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;

	cin.getline(lyric, 10000, ';');

	for (int i = 0; i <= strlen(lyric); i++)
	{
		if (isalpha(lyric[i]))
		{
			lyric[i] = tolower(lyric[i]);
			numCount++;
		}
	}

	cout << "\n총 알파벳 수 " << numCount << endl;

	for (char i = 'a'; i <= 'z'; i++)
	{
		for (int j = 0; j <= strlen(lyric); j++)
			if (lyric[j] == i)
				countStack++;
		cout << i << "(" << countStack << ")" << " : ";
		for (int k = 0; k < countStack; k++)
			cout << "*";
		cout << endl;
		countStack = 0;
	}
}	
/*Wise men say, only fools rush in
But I can't help, falling in love with you

Shall I stay? Would it be a sin?
If I can't help, falling in love with you

Like a river flows, surely to the sea
Darling so it goes, some thing aren't meant to be ;*/