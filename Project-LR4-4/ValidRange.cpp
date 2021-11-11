#include "stdafx.h"

bool ValidationRande(int start, int end)
{
	try
	{
		if (end - start <= 0) 
		{
			throw "Недопустимый диапазон";
		} 
		else
		{
			return true;
		}
	}
	catch(const char* msg)
	{
		MessageBox::Show("Неверный диапазон!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	
}