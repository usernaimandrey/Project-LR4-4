#include "stdafx.h"

bool ValidationRande(int start, int end)
{
	try
	{
		if (end - start <= 0) 
		{
			throw "������������ ��������";
		} 
		else
		{
			return true;
		}
	}
	catch(const char* msg)
	{
		MessageBox::Show("�������� ��������!", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	
}