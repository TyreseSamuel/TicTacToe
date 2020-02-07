// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


using namespace std;

bool gameCheck(bool gameOver, char board[][3], bool player)
{
	if (!gameOver)
	{
		for (int x = 1; x < 2; x++)
		{
			for (int y = 0; y < 3; y++)
			{
				if (board[y][x - 1] == board[y][x] && board[y][x] == board[y][x + 1])
				{
					gameOver = true;
					if (player && gameOver)
					{
						cout << "Player" << " 2 " << "wins!";
						cin.get();
						break;
					}
					else if (!player && gameOver)
					{
						cout << "Player" << " 1 " << "wins!";
						cin.get();
						break;
					}
				}
				else
				{
					gameOver = false;
				}
			}
		}
	}

	if (!gameOver)
	{
		for (int y = 1; y < 2; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				if (board[y - 1][x] == board[y][x] && board[y][x] == board[y + 1][x])
				{
					gameOver = true;
					if (player && gameOver)
					{
						cout << "Player" << " 2 " << "wins!";
						cin.get();
						break;
					}
					else if (!player && gameOver)
					{
						cout << "Player" << " 1 " << "wins!";
						cin.get();
						break;
					}
				}
				else
				{
					gameOver = false;
				}
			}
		}
	}

	if (!gameOver)
	{
		for (int x = 1; x < 2; x++)
		{
			for (int y = 1; y < 2; y++)
			{
				if (board[y - 1][x - 1] == board[y][x] && board[y][x] == board[y + 1][x + 1])
				{
					gameOver = true;
					if (player && gameOver)
					{
						cout << "Player" << " 2 " << "wins!";
						cin.get();
						break;
					}
					else if (!player && gameOver)
					{
						cout << "Player" << " 1 " << "wins!";
						cin.get();
						break;
					}
				}
				else if (board[y - 1][x + 1] == board[y][x] && board[y][x] == board[y + 1][x - 1])
				{
					gameOver = true;
					if (player && gameOver)
					{
						cout << "Player " << " 2 " << " wins!";
						cin.get();
						break;
					}
					else if (!player && gameOver)
					{
						cout << "Player " << " 1 " << " wins!";
						cin.get();
						break;
					}
				}
				else
				{
					gameOver = false;
				}
			}
		}
	}

	return gameOver;
}

int main()
{
	bool gameOver = false;

	int boardWidth = 3;
	int boardHeight = 3;

	int playerTurns = 0;
	char board[][3] = { {'1','2','3',},{'4','5','6'},{'7','8','9'} };

	bool player = true;

	int input;

	cout << "Welcome to Tic Tac Toe But Better" << endl;
	cout << "Press 'Enter' to continue.";
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
	cin.get();

	while (!gameOver && playerTurns < 9)
	{
		system("cls");

		for (int y = 0; y < boardHeight; y++)
		{
			cout << endl;
			for (int x = 0; x < boardWidth; x++)
			{
				if (board[y][x] == 'X')
				{
					cout << "[ " << board[y][x] << " ]";
				}
				else if (board[y][x] == 'O')
				{
					cout << "[ " << board[y][x] << " ]";
				}
				else
				{
					cout << "[ " << board[y][x] << " ]";
				}
			}
		}

		gameOver = gameCheck(gameOver, board, player);

		if (player && !gameOver)
		{
			cout << endl;
			cout << "Player " << "1" << ", select a point in the grid: ";

			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());

			cin >> input;

			switch (input)
			{
			case 1:
				if (board[0][0] == '1')
				{
					board[0][0] = 'X';

					player = false;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}

				break;
			case 2:
				if (board[0][1] == '2')
				{
					board[0][1] = 'X';
					player = false;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}
				break;
			case 3:
				if (board[0][2] == '3')
				{
					board[0][2] = 'X';
					player = false;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}
				break;
			case 4:
				if (board[1][0] == '4')
				{
					board[1][0] = 'X';
					player = false;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}
				break;
			case 5:
				if (board[1][1] == '5')
				{
					board[1][1] = 'X';
					player = false;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}
				break;
			case 6:
				if (board[1][2] == '6')
				{
					board[1][2] = 'X';
					player = false;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}
				break;
			case 7:
				if (board[2][0] == '7')
				{
					board[2][0] = 'X';
					player = false;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}
				break;
			case 8:
				if (board[2][1] == '8')
				{
					board[2][1] = 'X';
					player = false;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}
				break;
			case 9:
				if (board[2][2] == '9')
				{
					board[2][2] = 'X';
					player = false;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}
				break;
			}

		}
		else if (!gameOver)
		{
			cout << endl;
			cout << "Player " << "2" << ", select a point in the grid: ";

			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());

			cin >> input;

			switch (input)
			{
			case 1:
				if (board[0][0] == '1')
				{
					board[0][0] = 'O';
					player = true;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}

				break;
			case 2:
				if (board[0][1] == '2')
				{
					board[0][1] = 'O';
					player = true;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}
				break;
			case 3:
				if (board[0][2] == '3')
				{
					board[0][2] = 'O';
					player = true;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}
				break;
			case 4:
				if (board[1][0] == '4')
				{
					board[1][0] = 'O';
					player = true;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}
				break;
			case 5:
				if (board[1][1] == '5')
				{
					board[1][1] = 'O';
					player = true;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}
				break;
			case 6:
				if (board[1][2] == '6')
				{
					board[1][2] = 'O';
					player = true;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}
				break;
			case 7:
				if (board[2][0] == '7')
				{
					board[2][0] = 'O';
					player = true;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}
				break;
			case 8:
				if (board[2][1] == '8')
				{
					board[2][1] = 'O';
					player = true;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}
				break;
			case 9:
				if (board[2][2] == '9')
				{
					board[2][2] = 'O';
					player = true;
					playerTurns++;
				}
				else
				{
					cout << "Not An Option";
					cin.get();
				}
				break;
			}
		}

	}
	if (!gameOver)
	{
		cout << endl;
		cout << "Tie! ";
	}
	system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
