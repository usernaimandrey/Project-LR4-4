#pragma once
using namespace System;
using namespace System::Windows::Forms;

#include <regex>
#include <string>

using std::regex;
using std::regex_match;
using std::string;

double function(int, int);
void CreateTable(int, int, int, int, int, int, double&, int&, ListBox^);
bool GetValue(int&, TextBox^, String^);
void OutPut(double, int, TextBox^, TextBox^);
bool ValidationRande(int, int);