//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Services_2.h"
#include "LR_2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TИзменение_данных_записи *Изменение_данных_записи;
//---------------------------------------------------------------------------
__fastcall TИзменение_данных_записи::TИзменение_данных_записи(TComponent* Owner)
	: TForm(Owner)
{
    ЛР2->ADOTable1->Active = true;
	ЛР2->DataSource1->DataSet = ЛР2->ADOTable1;
	DBLookupComboBox1->ListSource = ЛР2->DataSource1;
	DBLookupComboBox1->ListField = "ФИО_клиента";
	DBLookupComboBox1->KeyField = "ID_клиента";
	DBLookupComboBox1->DataSource = nullptr;

	ЛР2->ADOTable2->Active = true;
	ЛР2->DataSource2->DataSet = ЛР2->ADOTable2;
	DBLookupComboBox2->ListSource = ЛР2->DataSource2;
	DBLookupComboBox2->ListField = "ФИО_сотрудника";
	DBLookupComboBox2->KeyField = "ID_сотрудника";
	DBLookupComboBox2->DataSource = nullptr;
}
//---------------------------------------------------------------------------

void __fastcall TИзменение_данных_записи::ОтменаClick(TObject *Sender)
{
	ModalResult = mrCancel;
}
//---------------------------------------------------------------------------

void __fastcall TИзменение_данных_записи::ИзменитьClick(TObject *Sender)
{
	ModalResult = mrOk;
}
//---------------------------------------------------------------------------

