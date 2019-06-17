// Author: Jonathan Reed
// Work: Lab 4
// Purpose: Terminal utility to recognize the regular expression a*b*ab

#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <fstream>

//States
#define S0	0
#define S1	1
#define S2	2
#define S3	3
#define S4	4
#define S5	5
#define S6	6
#define S7	7

//possible input
#define a	0
#define b	1

int tableLookup[][8] =
{
/*   0	1  2  3  4  5  6  7  */
	{1, 1, 5, 4, 7, 7, 7, 7}, //input a
	{3, 2, 3, 3, 2, 6, 7, 7}, //input b
};

using namespace std;

int main()
{	
	// turn the machine on - as soon as it's turned on, it outputs 0,
	// unless it recognizes lambda - in which case it outputs a 1.
	// our machine does not recognize lambda.
	int curState = S0;
	cout << 0;
	
	char input;
	cin.get(input);
	
	while (input != '\n')
	{		
		if (curState == S0)
		{
			if (input == 'a')
			{
				curState = tableLookup[a][S0];
				cout << 0;
			}
			
			else if (input =='b')
			{
				curState = tableLookup[b][S0];
				cout << 0;
			}
		}
		
		else if (curState == S1)
		{
			if (input == 'a')
			{
				curState = tableLookup[a][S1];
				cout << 0;
			}
			
			else if (input =='b')
			{
				curState = tableLookup[b][S1];
				cout << 1;
			}
		}
		
		else if (curState == S2)
		{
			if (input == 'a')
			{
				curState = tableLookup[a][S2];
				cout << 0;
			}
			
			else if (input =='b')
			{
				curState = tableLookup[b][S2];
				cout << 0;
			}
		}
		
		else if (curState == S3)
		{
			if (input == 'a')
			{
				curState = tableLookup[a][S3];
				cout << 0;
			}
			
			else if (input =='b')
			{
				curState = tableLookup[b][S3];
				cout << 0;
			}
		}
		
		else if (curState == S4)
		{
			if (input == 'a')
			{
				curState = tableLookup[a][S4];
				cout << 0;
			}
			
			else if (input =='b')
			{
				curState = tableLookup[b][S4];
				cout << 1;
			}
		}
		
		else if (curState == S5)
		{
			if (input == 'a')
			{
				curState = tableLookup[a][S5];
				cout << 0;
			}
			
			else if (input =='b')
			{
				curState = tableLookup[b][S5];
				cout << 1;
			}
		}

		else if (curState == S6)
		{
			if (input == 'a')
			{
				curState = tableLookup[a][S6];
				cout << 0;
			}
			
			else if (input =='b')
			{
				curState = tableLookup[b][S6];
				cout << 0;
			}
		}

		else if (curState == S7)
		{
			if (input == 'a')
			{
				curState = tableLookup[a][S7];
				cout << 0;
			}
			
			else if (input =='b')
			{
				curState = tableLookup[b][S7];
				cout << 0;
			}
		}
		cin.get(input);
	}	
	cout << endl;
	
	return 0;
}
