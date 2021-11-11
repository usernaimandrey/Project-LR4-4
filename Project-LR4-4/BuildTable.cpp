#include "stdafx.h"

double function(int x, int y)
{
	double result = 17.5 + x - y;
	return result;
}

void CreateTable(int start1, int end1, int step1, int start2, int end2, int step2, double& multi, int& negCount, ListBox^ listBox1)
{
	int loopCount1 = ((end1 - start1) / step1) + 1;
	int loopCount2 = ((end2 - start2) / step2) + 1;
	negCount = 0;
	multi = 1;
	int x, y;
	double z;
	String^ row;
	String^ space = String(' ', 4).ToString();
	listBox1->Items->Clear();
	x = start1;
	for (int i = 1; i <= loopCount1; i += 1)
	{
		y = start2;
		for (int j = 1; j <= loopCount2; j += 1)
		{
			z = function(x, y);
			if (z < 0)
			{
				negCount += 1;
				multi = multi * z;
			}
			if (j == 1)
			{
				row = String::Format("x={0, -9:D}y={1,5:D}{2,4}z={3,10:F3}", x, y, space, z);
			}
			else
			{
				String^ multiSpace = String(' ', 12).ToString();
				row = String::Format("{0,-14}y={1,5:D}{2,4}z={3,10:F3}", multiSpace, y, space, z);
			}
			listBox1->Items->Add(row);
			y += step2;
		}
		x += step1;
	}
}