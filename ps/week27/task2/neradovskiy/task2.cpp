#include <iostream>
#include "IShape.h"
#include "Ellipse.h"
#include "Circle.h"
#include <fstream>
#include <vector>
#include <memory>

int main()
{
	std::vector<IShape*> pFigures;
	pFigures.push_back(new Square({ 1, 1 }, 155));
	pFigures.push_back(new Rectangle({ 2,2 }, 8, 12));
	pFigures.push_back(new Circle({ 3,3 }, 55));
	pFigures.push_back(new Ellipse({ 4,4 }, 255, 88));

std::string fileName = "Figure.txt";
	std::ofstream fout(fileName);
	std::ifstream fin(fileName);

	for (int i = 0; i < pFigures.size(); ++i)
		pFigures[i]->serialize(fout);

	std::shared_ptr<IShape> pShapes = nullptr;
	std::vector<std::shared_ptr<IShape>> restoredShapes;
	while (!fin.eof())
	{
		IShape::parse(fin, pShapes);
		if (pShapes) {
			pShapes->deserialize(fin);
			restoredShapes.push_back(pShapes);
		}
	}
	for (int i = 0; i < restoredShapes.size(); ++i)
		restoredShapes[i]->serialize(std::cout);
};
