//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Unit_2_1.cpp", Добавление_нового_клиента);
USEFORM("Unit_2_2.cpp", Добавление_нового_сотрудника);
USEFORM("Unit_2_3_1.cpp", Добавление_новой_записи1);
USEFORM("Unit_2_3_2.cpp", Изменение_данных_записи);
USEFORM("LR_2.cpp", ЛР2);
USEFORM("Report.cpp", Просмотр_отчета);
USEFORM("Report_1.cpp", Form1);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TЛР2), &ЛР2);
		Application->CreateForm(__classid(TДобавление_нового_клиента), &Добавление_нового_клиента);
		Application->CreateForm(__classid(TДобавление_нового_сотрудника), &Добавление_нового_сотрудника);
		Application->CreateForm(__classid(TДобавление_новой_записи1), &Добавление_новой_записи1);
		Application->CreateForm(__classid(TИзменение_данных_записи), &Изменение_данных_записи);
		Application->CreateForm(__classid(TПросмотр_отчета), &Просмотр_отчета);
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
