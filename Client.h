//---------------------------------------------------------------------------

#ifndef ClientH
#define ClientH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TДобавление_нового_клиента : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit1;
	TEdit *Edit2;
	TButton *Отмена1;
	TButton *ОК1;
	void __fastcall ОК1Click(TObject *Sender);
	void __fastcall Отмена1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TДобавление_нового_клиента(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TДобавление_нового_клиента *Добавление_нового_клиента;
//---------------------------------------------------------------------------
#endif
