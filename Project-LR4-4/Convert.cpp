#include "stdafx.h"

// фаил Convert.cpp
void MarshalString(String^ s, string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer(); // преобразование Sistem::string в std::string
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

bool GetValue(int& x, TextBox^ Tx, String^ message) {
	if (Tx->Text->Length == 0)
	{
		Tx->BackColor = System::Drawing::Color::Red;
		MessageBox::Show(message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Tx->Focus();
		return false;
	}
	regex regular(R"((\d+$))"); // регулярное выражение
	String^ text = Tx->Text;
	string NewText;
	MarshalString(text, NewText);

	try
	{
		if (!regex_match(NewText, regular))
		{
			throw "Недопустимыe символы"; // если данные не валидны выбрасываем исключение
		}
		x = Convert::ToInt16(Tx->Text);
		return true;
	}
	catch (const char* msg) // обробатываем исключение
	{
		Tx->BackColor = System::Drawing::Color::Red;
		MessageBox::Show("Поле содержит недопустимый символ. Пример корректного ввода: 12", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
}

void OutPut(double multi, int count,  TextBox^ Tx1, TextBox^ Tx2)
{
	Tx1->Text = multi.ToString();
	Tx2->Text = count.ToString();
}