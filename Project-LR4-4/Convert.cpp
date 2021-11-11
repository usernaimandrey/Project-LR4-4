#include "stdafx.h"

// ���� Convert.cpp
void MarshalString(String^ s, string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer(); // �������������� Sistem::string � std::string
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

bool GetValue(int& x, TextBox^ Tx, String^ message) {
	if (Tx->Text->Length == 0)
	{
		Tx->BackColor = System::Drawing::Color::Red;
		MessageBox::Show(message, "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Tx->Focus();
		return false;
	}
	regex regular(R"((\d+$))"); // ���������� ���������
	String^ text = Tx->Text;
	string NewText;
	MarshalString(text, NewText);

	try
	{
		if (!regex_match(NewText, regular))
		{
			throw "�����������e �������"; // ���� ������ �� ������� ����������� ����������
		}
		x = Convert::ToInt16(Tx->Text);
		return true;
	}
	catch (const char* msg) // ������������ ����������
	{
		Tx->BackColor = System::Drawing::Color::Red;
		MessageBox::Show("���� �������� ������������ ������. ������ ����������� �����: 12", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
}

void OutPut(double multi, int count,  TextBox^ Tx1, TextBox^ Tx2)
{
	Tx1->Text = multi.ToString();
	Tx2->Text = count.ToString();
}