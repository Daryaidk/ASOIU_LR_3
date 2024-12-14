//---------------------------------------------------------------------------

#ifndef Services_2H
#define Services_2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class TИзменение_данных_записи : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TEdit *Edit1;
	TEdit *Edit2;
	TButton *Отмена;
	TButton *Изменить;
	TEdit *Edit3;
	TDBLookupComboBox *DBLookupComboBox1;
	TDBLookupComboBox *DBLookupComboBox2;
	void __fastcall ОтменаClick(TObject *Sender);
	void __fastcall ИзменитьClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TИзменение_данных_записи(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TИзменение_данных_записи *Изменение_данных_записи;
//---------------------------------------------------------------------------
#endif
