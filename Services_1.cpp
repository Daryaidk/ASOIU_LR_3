//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Services_1.h"
#include "LR_2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TДобавление_новой_записи1 *Добавление_новой_записи1;
//---------------------------------------------------------------------------
__fastcall TДобавление_новой_записи1::TДобавление_новой_записи1(TComponent* Owner)
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
void __fastcall TДобавление_новой_записи1::ОК3Click(TObject *Sender)
{
    ModalResult = mrOk;
}
//---------------------------------------------------------------------------
void __fastcall TДобавление_новой_записи1::Отмена3Click(TObject *Sender)
{
	ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
