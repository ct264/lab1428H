#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	//NUMBER OF ROWS AND COLUMNS
	const int ROWS = 10;
	const int COLS = 10;
	char life[ROWS][COLS];

	//RANDOM NUMBER GENERATOR TO CREATE INITIAL GENERATION
	srand (time(NULL));
	int cell;

    for(int r=0; r<ROWS; r++)
	{
		for(int c =0; c<COLS;c++)
		{
			cell = rand() % 7;
			if(cell >= 5)
			{
				life[r][c] = '*';
			}
			else
			{
				life[r][c]=' ';
			}
			for (int r=0; r<ROWS; r++)
            {
                for(int c=0; c<COLS; c++);
            }
			cout << life[r][c] << " ";
        }
        cout << "Enter the number of generations" << endl;
        int gen=1;
        cin >> gen;
        for (int i=0; i<gen; i++)
        {
            cout << "Gen 1" << i << endl;
            for (int r=0; r<ROWS; r++)
            {
                for (int c=0; c<COLS; c++);
                {
                    cout << life [r][c] << " ";
                }
                cout << endl;
            }
        }


	}

	return 0;

}
