#include "pch.h"
//in unele cazuri poate fi inlocuit cu #include "stdafx.h"

using namespace System;

int main(array<System::String^>^ args)
{
	unsigned contor = 0; int div1 = 0;
	try {
		for (contor; contor < 5; contor++)
		{
			Console::WriteLine("Afisam {0} {1}", "variabila contor: ", contor);
		}
		double div = contor / div1;
		Console::WriteLine(div);
	}
	catch (Exception^ ex)
	{
		Console::WriteLine("O exceptie" + ex->Message);
	}
	return 0;
}
