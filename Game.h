#pragma once
#include "Player.h"
#include <queue>
#include <map>
#include "Dice.h"

class Game
{
private:
	int boardLength;
	queue<Player> Players;
	map<int, int> Snakes, Ladders;
public:
	Game();
	int getDimension();
	queue<Player> getPlayers();
	map<int, int> getSnakes();
	map<int, int> getLadders();
	void setPlayers(queue<Player> &players);
	void setDimension(int rows, int columns);
	void insertPlayer(Player player);
	void insertSnake(pair<int, int> snakeTailHead);
	void insertLadder(pair<int, int> ladderDownUp);
	void showSnakesPos(map<int, int> Snakes);
	void showLaddersPos(map<int, int> Ladders);
	bool isSnakeExist(int tail, int head);
	bool isLadderExist(int down, int up);
	bool checkForSnakes(Game game, int currentPos, Player &player);
	bool checkForLadders(Game game, int currentPos, Player &player);
	Player playerTurn(queue<Player>& players);
	void setNextPlayer(queue<Player> &players , Player &player);

	void startTheGame(Game game);
};

