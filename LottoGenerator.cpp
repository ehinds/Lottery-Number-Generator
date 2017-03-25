//
//
//

#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <time.h> 
using namespace std;

//6,42...6,45....6,49...6,55....6,58

int main()
{
	int lotto1, lotto2, lotto3, lotto4, lotto5, lotto6, valid = 0, lottoType, valid1 = 0;
	char choice = 'y', choice1 = 'y', dummyValue;

	

			cout << "Welcome to the Random Number Generator for the Lottery.\n\nPlease select your lottery type by "
				"entering the appropriate number\nand hitting the enter key.\n\n";
			cout << "1: 6 choices with 42 possible numbers.\n";
			cout << "2: 6 choices with 45 possible numbers.\n";
			cout << "3: 6 choices with 49 possible numbers.\n";
			cout << "4: 6 choices with 55 possible numbers.\n";
			cout << "5: 6 choices with 58 possible numbers.\n";

			cin >> lottoType;

			while (!valid1)
			{
				choice = 'y', choice1 = 'y';

				switch (lottoType)
				{

				case 1:

					while (choice == 'y' || choice == 'Y')
					{
						srand(time(NULL));

						lotto1 = rand() % 42 + 1;
						lotto2 = rand() % 42 + 1;
						lotto3 = rand() % 42 + 1;
						lotto4 = rand() % 42 + 1;
						lotto5 = rand() % 42 + 1;
						lotto6 = rand() % 42 + 1;

						while (lotto2 == lotto1)
						{
							lotto2 = rand() % 42 + 1;
						}
						while (lotto3 == lotto2 || lotto3 == lotto1)
						{
							lotto3 = rand() % 42 + 1;
						}
						while (lotto4 == lotto2 || lotto4 == lotto1 || lotto4 == lotto3)
						{
							lotto4 = rand() % 42 + 1;
						}
						while (lotto5 == lotto2 || lotto5 == lotto1 || lotto5 == lotto3 || lotto5 == lotto4)
						{
							lotto5 = rand() % 42 + 1;
						}
						while (lotto6 == lotto2 || lotto6 == lotto1 || lotto6 == lotto3 || lotto6 == lotto4 || lotto6 == lotto5)
						{
							lotto6 = rand() % 42 + 1;
						}

						cout << "Your lottery numbers are as follows:\n\n" << lotto1 <<
							" " << lotto2 << " " << lotto3 << " " << lotto4 << " " << lotto5 << " " << lotto6 << "\n\n";
						cout << "Your odds of winning this lottery are 5,245,786 to 1.\n\n";

						cout << "Would you like to randomize the numbers again? (Y/N): \n\n";
						cin.clear();
						cin >> choice;

						while (choice != 'n' && choice != 'N' && choice != 'y' && choice != 'Y')
						{
							cout << "Invalid entry. Please type 'y', 'Y', 'n', or 'N'.\n\n";
							cin.clear();
							cin >> choice;
						}


						if (choice == 'n' || choice == 'N')
						{
							cout << "Would you like to choose a different lottery type? (Y/N): \n\n";
							cin.clear();
							cin >> choice1;

							while (choice1 != 'n' && choice1 != 'N' && choice1 != 'y' && choice1 != 'Y')
							{
								cout << "Invalid entry. Please type 'y', 'Y', 'n', or 'N'.\n\n";
								cin.clear();
								cin >> choice1;
							}

							if (choice1 == 'y' || choice1 == 'Y')
							{
								cout << "Welcome to the Random Number Generator for the Lottery.\n\nPlease select your lottery type by "
									"entering the appropriate number\nand hitting the enter key.\n\n";
								cout << "1: 6 choices with 42 possible numbers.\n";
								cout << "2: 6 choices with 45 possible numbers.\n";
								cout << "3: 6 choices with 49 possible numbers.\n";
								cout << "4: 6 choices with 55 possible numbers.\n";
								cout << "5: 6 choices with 58 possible numbers.\n";

								cin.clear();
								lottoType = 0;
								cin >> lottoType;
							}
							else if (choice1 == 'n' || choice1 == 'N')
							{
								valid1 = 1;
								break;
							}
						}

					}
				case 2:

					while (choice == 'y' || choice == 'Y')
					{
						srand(time(NULL));

						lotto1 = rand() % 45 + 1;
						lotto2 = rand() % 45 + 1;
						lotto3 = rand() % 45 + 1;
						lotto4 = rand() % 45 + 1;
						lotto5 = rand() % 45 + 1;
						lotto6 = rand() % 45 + 1;

						while (lotto2 == lotto1)
						{
							lotto2 = rand() % 45 + 1;
						}
						while (lotto3 == lotto2 || lotto3 == lotto1)
						{
							lotto3 = rand() % 45 + 1;
						}
						while (lotto4 == lotto2 || lotto4 == lotto1 || lotto4 == lotto3)
						{
							lotto4 = rand() % 45 + 1;
						}
						while (lotto5 == lotto2 || lotto5 == lotto1 || lotto5 == lotto3 || lotto5 == lotto4)
						{
							lotto5 = rand() % 45 + 1;
						}
						while (lotto6 == lotto2 || lotto6 == lotto1 || lotto6 == lotto3 || lotto6 == lotto4 || lotto6 == lotto5)
						{
							lotto6 = rand() % 45 + 1;
						}

						cout << "Your lottery numbers are as follows:\n\n" << lotto1 <<
							" " << lotto2 << " " << lotto3 << " " << lotto4 << " " << lotto5 << " " << lotto6 << "\n\n";
						cout << "Your odds of winning this lottery are 8,145,060 to 1.\n\n";

						cout << "Would you like to randomize the numbers again? (Y/N): \n\n";
						cin.clear();
						cin >> choice;

						while (choice != 'n' && choice != 'N' && choice != 'y' && choice != 'Y')
						{
							cout << "Invalid entry. Please type 'y', 'Y', 'n', or 'N'.\n\n";
							cin.clear();
							cin >> choice;
						}

						if (choice == 'n' || choice == 'N')
						{
							cout << "Would you like to choose a different lottery type? (Y/N): \n\n";
							cin.clear();
							cin >> choice1;
							while (choice1 != 'n' && choice1 != 'N' && choice1 != 'y' && choice1 != 'Y')
							{
								cout << "Invalid entry. Please type 'y', 'Y', 'n', or 'N'.\n\n";
								cin.clear();
								cin >> choice1;
							}

							if (choice1 == 'y' || choice1 == 'Y')
							{
								cout << "Welcome to the Random Number Generator for the Lottery.\n\nPlease select your lottery type by "
									"entering the appropriate number\nand hitting the enter key.\n\n";
								cout << "1: 6 choices with 42 possible numbers.\n";
								cout << "2: 6 choices with 45 possible numbers.\n";
								cout << "3: 6 choices with 49 possible numbers.\n";
								cout << "4: 6 choices with 55 possible numbers.\n";
								cout << "5: 6 choices with 58 possible numbers.\n";

								cin.clear();
								lottoType = 0;
								cin >> lottoType;
							}
							else if (choice1 == 'n' || choice1 == 'N')
							{
								valid1 = 1;
								break;
							}
						}

					}

				case 3:

					while (choice == 'y' || choice == 'Y')
					{
						srand(time(NULL));

						lotto1 = rand() % 49 + 1;
						lotto2 = rand() % 49 + 1;
						lotto3 = rand() % 49 + 1;
						lotto4 = rand() % 49 + 1;
						lotto5 = rand() % 49 + 1;
						lotto6 = rand() % 49 + 1;

						while (lotto2 == lotto1)
						{
							lotto2 = rand() % 49 + 1;
						}
						while (lotto3 == lotto2 || lotto3 == lotto1)
						{
							lotto3 = rand() % 49 + 1;
						}
						while (lotto4 == lotto2 || lotto4 == lotto1 || lotto4 == lotto3)
						{
							lotto4 = rand() % 49 + 1;
						}
						while (lotto5 == lotto2 || lotto5 == lotto1 || lotto5 == lotto3 || lotto5 == lotto4)
						{
							lotto5 = rand() % 49 + 1;
						}
						while (lotto6 == lotto2 || lotto6 == lotto1 || lotto6 == lotto3 || lotto6 == lotto4 || lotto6 == lotto5)
						{
							lotto6 = rand() % 49 + 1;
						}

						cout << "Your lottery numbers are as follows:\n\n" << lotto1 <<
							" " << lotto2 << " " << lotto3 << " " << lotto4 << " " << lotto5 << " " << lotto6 << "\n\n";
						cout << "Your odds of winning this lottery are 13,983,816 to 1.\n\n";

						cout << "Would you like to randomize the numbers again? (Y/N): \n\n";
						cin.clear();
						cin >> choice;

						while (choice != 'n' && choice != 'N' && choice != 'y' && choice != 'Y')
						{
							cout << "Invalid entry. Please type 'y', 'Y', 'n', or 'N'.\n\n";
							cin.clear();
							cin >> choice;
						}

						if (choice == 'n' || choice == 'N')
						{
							cout << "Would you like to choose a different lottery type? (Y/N): \n\n";
							cin.clear();
							cin >> choice1;
							while (choice1 != 'n' && choice1 != 'N' && choice1 != 'y' && choice1 != 'Y')
							{
								cout << "Invalid entry. Please type 'y', 'Y', 'n', or 'N'.\n\n";
								cin.clear();
								cin >> choice1;
							}

							if (choice1 == 'y' || choice1 == 'Y')
							{
								cout << "Welcome to the Random Number Generator for the Lottery.\n\nPlease select your lottery type by "
									"entering the appropriate number\nand hitting the enter key.\n\n";
								cout << "1: 6 choices with 42 possible numbers.\n";
								cout << "2: 6 choices with 45 possible numbers.\n";
								cout << "3: 6 choices with 49 possible numbers.\n";
								cout << "4: 6 choices with 55 possible numbers.\n";
								cout << "5: 6 choices with 58 possible numbers.\n";

								cin.clear();
								lottoType = 0;
								cin >> lottoType;
							}
							else if (choice1 == 'n' || choice1 == 'N')
							{
								valid1 = 1;
								break;
							}
						}

					}

				case 4:

					while (choice == 'y' || choice == 'Y')
					{
						srand(time(NULL));

						lotto1 = rand() % 55 + 1;
						lotto2 = rand() % 55 + 1;
						lotto3 = rand() % 55 + 1;
						lotto4 = rand() % 55 + 1;
						lotto5 = rand() % 55 + 1;
						lotto6 = rand() % 55 + 1;

						while (lotto2 == lotto1)
						{
							lotto2 = rand() % 55 + 1;
						}
						while (lotto3 == lotto2 || lotto3 == lotto1)
						{
							lotto3 = rand() % 55 + 1;
						}
						while (lotto4 == lotto2 || lotto4 == lotto1 || lotto4 == lotto3)
						{
							lotto4 = rand() % 55 + 1;
						}
						while (lotto5 == lotto2 || lotto5 == lotto1 || lotto5 == lotto3 || lotto5 == lotto4)
						{
							lotto5 = rand() % 55 + 1;
						}
						while (lotto6 == lotto2 || lotto6 == lotto1 || lotto6 == lotto3 || lotto6 == lotto4 || lotto6 == lotto5)
						{
							lotto6 = rand() % 55 + 1;
						}

						cout << "Your lottery numbers are as follows:\n\n" << lotto1 <<
							" " << lotto2 << " " << lotto3 << " " << lotto4 << " " << lotto5 << " " << lotto6 << "\n\n";
						cout << "Your odds of winning this lottery are 28,989,675 to 1.\n\n";

						cout << "Would you like to randomize the numbers again? (Y/N): \n\n";
						cin.clear();
						cin >> choice;

						while (choice != 'n' && choice != 'N' && choice != 'y' && choice != 'Y')
						{
							cout << "Invalid entry. Please type 'y', 'Y', 'n', or 'N'.\n\n";
							cin.clear();
							cin >> choice;
						}

						if (choice == 'n' || choice == 'N')
						{
							cout << "Would you like to choose a different lottery type? (Y/N): \n\n";
							cin.clear();
							cin >> choice1;
							while (choice1 != 'n' && choice1 != 'N' && choice1 != 'y' && choice1 != 'Y')
							{
								cout << "Invalid entry. Please type 'y', 'Y', 'n', or 'N'.\n\n";
								cin.clear();
								cin >> choice1;
							}

							if (choice1 == 'y' || choice1 == 'Y')
							{
								cout << "Welcome to the Random Number Generator for the Lottery.\n\nPlease select your lottery type by "
									"entering the appropriate number\nand hitting the enter key.\n\n";
								cout << "1: 6 choices with 42 possible numbers.\n";
								cout << "2: 6 choices with 45 possible numbers.\n";
								cout << "3: 6 choices with 49 possible numbers.\n";
								cout << "4: 6 choices with 55 possible numbers.\n";
								cout << "5: 6 choices with 58 possible numbers.\n";

								cin.clear();
								lottoType = 0;
								cin >> lottoType;
							}
							else if (choice1 == 'n' || choice1 == 'N')
							{
								valid1 = 1;
								break;
							}
						}

					}

				case 5:

					while (choice == 'y' || choice == 'Y')
					{
						srand(time(NULL));

						lotto1 = rand() % 58 + 1;
						lotto2 = rand() % 58 + 1;
						lotto3 = rand() % 58 + 1;
						lotto4 = rand() % 58 + 1;
						lotto5 = rand() % 58 + 1;
						lotto6 = rand() % 58 + 1;

						while (lotto2 == lotto1)
						{
							lotto2 = rand() % 58 + 1;
						}
						while (lotto3 == lotto2 || lotto3 == lotto1)
						{
							lotto3 = rand() % 58 + 1;
						}
						while (lotto4 == lotto2 || lotto4 == lotto1 || lotto4 == lotto3)
						{
							lotto4 = rand() % 58 + 1;
						}
						while (lotto5 == lotto2 || lotto5 == lotto1 || lotto5 == lotto3 || lotto5 == lotto4)
						{
							lotto5 = rand() % 58 + 1;
						}
						while (lotto6 == lotto2 || lotto6 == lotto1 || lotto6 == lotto3 || lotto6 == lotto4 || lotto6 == lotto5)
						{
							lotto6 = rand() % 58 + 1;
						}

						cout << "Your lottery numbers are as follows:\n\n" << lotto1 <<
							" " << lotto2 << " " << lotto3 << " " << lotto4 << " " << lotto5 << " " << lotto6 << "\n\n";
						cout << "Your odds of winning this lottery are 40,475,358 to 1.\n\n";

						cout << "Would you like to randomize the numbers again? (Y/N): \n\n";
						cin.clear();
						cin >> choice;

						while (choice != 'n' && choice != 'N' && choice != 'y' && choice != 'Y')
						{
							cout << "Invalid entry. Please type 'y', 'Y', 'n', or 'N'.\n\n";
							cin.clear();
							cin >> choice;
						}


						if (choice == 'n' || choice == 'N')
						{
							cout << "Would you like to choose a different lottery type? (Y/N): \n\n";
							cin.clear();
							cin >> choice1;
							while (choice1 != 'n' && choice1 != 'N' && choice1 != 'y' && choice1 != 'Y')
							{
								cout << "Invalid entry. Please type 'y', 'Y', 'n', or 'N'.\n\n";
								cin.clear();
								cin >> choice1;
							}


							if (choice1 == 'y' || choice1 == 'Y')
							{
								cout << "Welcome to the Random Number Generator for the Lottery.\n\nPlease select your lottery type by "
									"entering the appropriate number\nand hitting the enter key.\n\n";
								cout << "1: 6 choices with 42 possible numbers.\n";
								cout << "2: 6 choices with 45 possible numbers.\n";
								cout << "3: 6 choices with 49 possible numbers.\n";
								cout << "4: 6 choices with 55 possible numbers.\n";
								cout << "5: 6 choices with 58 possible numbers.\n";

								cin.clear();
								lottoType = 0;
								cin >> lottoType;
							}
							else if (choice1 == 'n' || choice1 == 'N')
							{
								valid1 = 1;
								break;
							}
						}
					}
						

				default:
					while (lottoType != 1 && lottoType != 2 && lottoType != 3 && lottoType != 4 && lottoType != 5)
					{
						cout << "Invalid entry. Please enter a digit from 1 to 5.\n\n";
						cin.clear();
						cin.ignore();
						cin >> lottoType;
						valid1 = 0;
					}
				}
		}

		cout << "Thank you for using the Lottery Number Generator.\nPlease type anything and press enter to exit.\n\n";
		cin.ignore();
		cin >> dummyValue;

	return 0;

}