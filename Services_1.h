//---------------------------------------------------------------------------

#ifndef Services_1H
#define Services_1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class TДобавление_новой_записи1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TEdit *Edit1;
	TEdit *Edit2;
	TButton *Отмена3;
	TButton *ОК3;
	TEdit *Edit3;
	TDBLookupComboBox *DBLookupComboBox1;
	TDBLookupComboBox *DBLookupComboBox2;
	void __fastcall ОК3Click(TObject *Sender);
	void __fastcall Отмена3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TДобавление_новой_записи1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TДобавление_новой_записи1 *Добавление_новой_записи1;
//---------------------------------------------------------------------------
#endif
