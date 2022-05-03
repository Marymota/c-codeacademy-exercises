#include <iostream>
#include <string.h>

using namespace std;

int random_number_gen()
{
	int number;
	srand (time(NULL));
	number = rand() % 10 + 1;
	return (number);
}

void shelter()
{
	cout << "\n------------------------------------\n";
	cout << "\nAs fast as you can, you cut ice blocks to make an igloo. Inside you are protected against the wind and the cold.\n";
	cout << "\nYou survive to live another day!\n TO BE CONTINUED...\n";
}

void freeze()
{
	cout << "\n------------------------------------\n";
	cout << "\nYour hands and feet are burned from the ice. Will alone can't sustain you any longer.\nTHE END\n";
}

void storm()
{
	cout << "\n------------------------------------\n";
	int answer = 0;
	cout << "\nWith the temperatures getting lower you are now chilled to the bone. You try to walk but your energy is getting scarcer. \n1) Build a shelter\n2) Continue\n";
	while (answer <= 0 || answer > 2)
	{
		cout << "Choose a valid answer!\n";
		cin >> answer;
	}
	if (answer == 1)
	{
		cout << "Build a shelter\n";
		shelter();
	}
	else if (answer == 2)
	{
		cout << "Continue\n";
		freeze();
	}
}

void fissure()
{
	cout << "\n------------------------------------\n";
	int number = random_number_gen();
	int answer = 0;
	cout << "\nThe wind is getting stronger sending snow to your face. You fight the snow by walking with your head down. Suddenly, behind the snow curtain you see a gigantic dark shadow. It's a Mamute!\n";
	if (number > 5)
	{
		cout << "\nThe Mamute does not pay you any attention and you move on! After an arduous walk of half an hour you get to a mountain and start the climbing. A snowstorm is now starting.\n1) Build a shelter\n2) Continue\n";
		while (answer <= 0 || answer > 2)
		{
			cout << "Choose a valid answer!\n";
			cin >> answer;
		}
		if (answer == 1)
		{
			cout << " Build a shelter\n";
			shelter();
		}
		else if (answer == 2)
		{
			cout << "Continue\n";
			storm();
		}
	}
	else
		cout << "\nThe animal attacks. You slip and fall into the void.\nTHE END\n";
	exit(EXIT_SUCCESS);
}

void bridge()
{
	cout << "\n------------------------------------\n";
	int number = random_number_gen();
	cout << "\nThe bridge is really narrow and slippery...\n";
	if (number > 5)
	{
		cout << "\nYou cross the bridge successfully. When arriving at the other end, you continue along the snow, slowly...\n";
		fissure();
	}
	else
		cout << "\nYou are almost at the end when suddenly you slip and fall into the void.\nTHE END\n";
	exit(EXIT_SUCCESS);
}

void start(int answer)
{
	cout << "\nYou are a hero that was tasked with the mission of killing a dangerous monster. While traveling through the snowy mountains you came across a glacier fissure crossed by a bridge made of ice. \n1) Cross the icy bridge \n2) Go around the fissure \n";
	while (answer <= 0 || answer > 2)
	{
		cout << "Choose a valid answer!\n";
		cin >> answer;
	}
	if (answer == 1)
	{
		cout << "Cross the icy bridge\n";
		bridge();
	}
	else if (answer == 2)
	{
		cout << "Go around the fissure\n";
		fissure();
	}
}

int main(void)
{
	int answer;

	answer = 0;
	start(answer);
	return (0);
}