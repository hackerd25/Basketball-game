#include <iostream>

int main()
{
	int basketballTeamOne = 0;
	int basketballTeamTwo = 0;
	const int closePoints = 1;
	const int mediumPoints = 2;
	const int longPoints = 3;

	std::cout << "The game starts with the ball for team two!\n";
	basketballTeamTwo = basketballTeamTwo + mediumPoints;
	std::cout << "And team two scores and the points of the team are " << basketballTeamTwo << "!\n";
	basketballTeamOne = basketballTeamOne + longPoints;
	std::cout << "Team one leads with " << basketballTeamOne - basketballTeamTwo << "!\n";
	std::cout << "The game stops because from the tests of a player from Team Two has dopings\n";
	std::cout << "The game ends and team one wins because the cheating of team two. ";
	return 0;
}