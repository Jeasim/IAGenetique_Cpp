#ifndef POPULATIONS_H
#define POPULATIONS_H

#include "Shape2D.h"
#include "Console\ConsoleColor.h"
#include "Solution.h"
#include <vector>

class Population
{
public:
	Population(ConsoleColor::Text color);
	~Population();

	Solution & getSolution(size_t i);

	Solution * getListe();
	Solution randomSolution(size_t size);
	bool isTheSolution();
	void setSolution(size_t i, Solution & sol);
	void setSolutions(Solution *& listes, size_t size);
	void deletePopulation(size_t size);
	void populate(std::string type, size_t nbPop, size_t width, size_t height, std::list<Point2d>& points);
	void parentDeath(Solution *& childSolution, size_t size);
	ConsoleColor::Text & color();
	int totalFitness(size_t nbPop);
	Solution rouletteWheel(size_t nbPop);

private :
	ConsoleColor::Text mColor;
	Solution * mSolutions;

};

#endif