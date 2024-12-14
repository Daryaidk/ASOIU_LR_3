//---------------------------------------------------------------------------

#ifndef EmployeeH
#define EmployeeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TДобавление_нового_сотрудника : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit1;
	TEdit *Edit2;
	TButton *Отмена2;
	TButton *ОК2;
	void __fastcall ОК2Click(TObject *Sender);
	void __fastcall Отмена2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TДобавление_нового_сотрудника(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TДобавление_нового_сотрудника *Добавление_нового_сотрудника;
//---------------------------------------------------------------------------
#endif
