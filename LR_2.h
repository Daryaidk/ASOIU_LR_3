//---------------------------------------------------------------------------

#ifndef LR_2H
#define LR_2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TЛР2 : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TDBGrid *DBGrid2;
	TDBGrid *DBGrid3;
	TButton *Добавить1;
	TButton *Редактировать1;
	TButton *Удалить1;
	TButton *Добавить2;
	TButton *Редактировать2;
	TButton *Удалить2;
	TButton *Добавить3;
	TButton *Редактировать3;
	TButton *Удалить3;
	TButton *Выход;
	TADOTable *ADOTable1;
	TADOConnection *ADOConnection1;
	TDataSource *DataSource1;
	TADOTable *ADOTable2;
	TADOConnection *ADOConnection2;
	TDataSource *DataSource2;
	TADOTable *ADOTable3;
	TADOConnection *ADOConnection3;
	TDataSource *DataSource3;
	TADOQuery *ADOQuery1;
	TADOQuery *ADOQuery2;
	TADOQuery *ADOQuery3;
	TADOQuery *ADOQuery4;
	TButton *Отчет;
	void __fastcall Добавить1Click(TObject *Sender);
	void __fastcall Добавить2Click(TObject *Sender);
	void __fastcall Редактировать1Click(TObject *Sender);
	void __fastcall Редактировать2Click(TObject *Sender);
	void __fastcall Удалить1Click(TObject *Sender);
	void __fastcall Удалить2Click(TObject *Sender);
	void __fastcall ВыходClick(TObject *Sender);
	void __fastcall Добавить3Click(TObject *Sender);
	void __fastcall Удалить3Click(TObject *Sender);
	void __fastcall Редактировать3Click(TObject *Sender);
	void __fastcall ОтчетClick(TObject *Sender);
	//void __fastcall DBGrid3CellClick(TColumn *Column);
private:	// User declarations
public:		// User declarations
	__fastcall TЛР2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TЛР2 *ЛР2;
//---------------------------------------------------------------------------
#endif
