#include <bits/stdc++.h>
using namespace std;

// The game board
char game[6][7] = {{',', ',', ',', ',', ',', ',', ','}, {',', ',', ',', ',', ',', ',', ','}, {',', ',', ',', ',', ',', ',', ','}, {',', ',', ',', ',', ',', ',', ','}, {',', ',', ',', ',', ',', ',', ','}, {',', ',', ',', ',', ',', ',', ','}};
// Check the places of the board
int column1 = 6;
int column2 = 6;
int column3 = 6;
int column4 = 6; // Number of slots empty in each column (ALL the Column is Fully Available)
int column5 = 6;
int column6 = 6;
int column7 = 6;
// Function to place X or O
int insertToken(int x) // int x is the input or choice chosen by the players (X OR O)
{

	// Check values
	if (x == 1)
	{
		if (column1 > 0)
		{
			column1--;
			return column1;
		}
		else
			return -1;
	}
	else if (x == 2)
	{
		if (column2 > 0)
		{
			column2--;
			return column2;
		}
		else
			return -1;
	}
	else if (x == 3)
	{
		if (column3 > 0)
		{
			column3--;
			return column3;
		}
		else
			return -1;
	}
	else if (x == 4)
	{
		if (column4 > 0)
		{
			column4--;
			return column4;
		}
		else
			return -1;
	}
	else if (x == 5)
	{
		if (column5 > 0)
		{
			column5--;
			return column5;
		}
		else
			return -1;
	}
	else if (x == 6)
	{
		if (column6 > 0)
		{
			column6--;
			return column6;
		}
		else
			return -1;
	}
	else if (x == 7)
	{
		if (column7 > 0)
		{
			column7--;
			return column7;
		}
		else
			return -1;
	}
	else
		return -1;
}

bool win_p1_row(int a) // 1st case to win p1
{
	int count = 0;
	for (int j = 0; j < 7; j++)
	{
		if (game[a][j] == 'X')
		{
			count++;
			if (count == 4)
				return true;
		}
		else
			count = 0;
	}
	return false;
}

bool win_p1_diag1(int a, int b) // 2nd case to win p1
{
	int count = 0;
	b--;
	if (a >= b)
	{
		a -= b;
		b = 0;
		while (a < 6)
		{
			if (game[a][b] == 'X')
			{
				count++;
				if (count == 4)
					return true;
			}
			else
				count = 0;
			a++;
			b++;
		}
	}
	else
	{
		b -= a;
		a = 0;
		while (b < 7)
		{
			if (game[a][b] == 'X')
			{
				count++;
				if (count == 4)
					return true;
			}
			else
				count = 0;
			a++;
			b++;
		}
	}
	return false;
}

bool win_p1_diag2(int a, int b) // 3rd case to win p1
{
	int count = 0;
	b--;
	int c = a + b;
	if (c < 7 && c > 2)
	{
		b = c;
		a = 0;
		while (a < 6)
		{
			if (game[a][b] == 'X')
			{
				count++;
				if (count == 4)
					return true;
			}
			else
				count = 0;
			a++;
			b--;
		}
	}
	else if (c > 6 && c < 9)
	{
		b = 6;
		a = c - 6;
		while (a < 6)
		{
			if (game[a][b] == 'X')
			{
				count++;
				if (count == 4)
					return true;
			}
			else
				count = 0;
			a++;
			b--;
		}
	}
	return false;
}

bool win_p1_col(int a) // 4th case to win p1
{
	int count = 0;
	a--;
	for (int j = 0; j < 6; j++)
	{
		if (game[j][a] == 'X')
		{
			count++;
			if (count == 4)
				return true;
		}
		else
			count = 0;
	}
	return false;
}

bool win_p2_row(int a) // 1st case to win p2
{
	int count = 0;

	for (int j = 0; j < 7; j++)
	{
		if (game[a][j] == 'O')
		{
			count++;
			if (count == 4)
				return true;
		}
		else
			count = 0;
	}
	return false;
}

bool win_p2_col(int a) // 2nd case to win p2
{
	int count = 0;
	a--;
	for (int j = 0; j < 6; j++)
	{
		if (game[j][a] == 'O')
		{
			count++;
			if (count == 4)
				return true;
		}
		else
			count = 0;
	}
	return false;
}

bool win_p2_diag1(int a, int b) // 3rd case to win p2
{
	int count = 0;
	b--;
	if (a >= b)
	{
		a -= b;
		b = 0;
		while (a < 6)
		{
			if (game[a][b] == 'O')
			{
				count++;
				if (count == 4)
					return true;
			}
			else
				count = 0;
			a++;
			b++;
		}
	}
	else
	{
		b -= a;
		a = 0;
		while (b < 7)
		{
			if (game[a][b] == 'O')
			{
				count++;
				if (count == 4)
					return true;
			}
			else
				count = 0;
			a++;
			b++;
		}
	}
	return false;
}

bool win_p2_diag2(int a, int b) // 4th case to win p2
{
	int count = 0;
	b--;
	int c = a + b;
	if (c < 7 && c > 2)
	{
		b = c;
		a = 0;
		while (a < 6)
		{
			if (game[a][b] == 'O')
			{
				count++;
				if (count == 4)
					return true;
			}
			else
				count = 0;
			a++;
			b--;
		}
	}
	else if (c > 6 && c < 9)
	{
		b = 6;
		a = c - 6;
		while (a < 6)
		{
			if (game[a][b] == 'O')
			{
				count++;
				if (count == 4)
					return true;
			}
			else
				count = 0;
			a++;
			b--;
		}
	}
	return false;
}

void display(int a, int b, char x) // show the board
{

	// the move
	game[a][b - 1] = x;
	// head of board
	for (int f = 1; f < 8; f++)
	{
		cout << f << '|';
	}
	cout << endl;
	// the board
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cout << game[i][j] << '|';
		}
		cout << endl;
	}
}

// the main
int main()
{
	cout << "Welcome To Connect4 !!" << endl; // welcome message
	// head of board
	for (int f = 1; f < 8; f++)
	{
		cout << f << '|';
	}
	cout << endl;
	// the board
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cout << game[i][j] << '|';
		}
		cout << endl;
	}
	int counter = 0;	 // counter
	while (counter < 21) // loop to take the moves
	{
		int player1 = 0, player2 = 0;
		int col = 0;
		int k = 0; // row
		while (player1 < 1)
		{
			cout << "Player1" << endl
				 << "Enter column: "; // take move of player1
			col = 0;
			cin >> col;
			k = insertToken(col); // calculate the row
			while (k == -1)		  // if player1 writes an invalid place
			{
				cout << "Invalid place, Play Again: ";
				cin >> col;
				k = insertToken(col);
			}
			display(k, col, 'X'); // show the board

			player1++;
		}
		// check if player1 is a winner or not
		if (win_p1_row(k) == true)
		{
			cout << "Player 1 is Winner" << endl
				 << "Congratulations!!";
			break;
		}

		if (win_p1_col(col) == true)
		{
			cout << "Player 1 is Winner" << endl
				 << "Congratulations!!";
			break;
		}

		if (win_p1_diag1(k, col) == true)
		{
			cout << "Player 1 is Winner" << endl
				 << "Congratulations!!";
			break;
		}
		if (win_p1_diag2(k, col) == true)
		{
			cout << "Player 1 is Winner" << endl
				 << "Congratulations!!";
			break;
		}

		while (player2 < 1)
		{
			cout << "Player2" << endl
				 << "Enter column: "; // take move of player2
			col = 0;
			cin >> col;
			k = insertToken(col); // calculate the row
			while (k == -1)		  // if player2 writes an invalid place
			{
				cout << "Invalid place, Play Again: ";
				cin >> col;
				k = insertToken(col);
			}
			display(k, col, 'O'); // show the board
			player2++;
		}
		// check if player2 is a winner or not
		if (win_p2_row(k) == true)
		{
			cout << "Player 2 is Winner" << endl
				 << "Congratulations!!";
			break;
		}
		if (win_p2_col(col) == true)
		{
			cout << "Player 2 is Winner" << endl
				 << "Congratulations!!";
			break;
		}
		if (win_p2_diag1(k, col) == true)
		{
			cout << "Player 2 is Winner" << endl
				 << "Congratulations!!";
			break;
		}
		if (win_p2_diag2(k, col) == true)
		{
			cout << "Player 2 is Winner" << endl
				 << "Congratulations!!";
			break;
		}
		counter++;
		// if No Winner
		if (counter == 21)
		{
			cout << "Sorry! No Winner";
		}
	}
}
