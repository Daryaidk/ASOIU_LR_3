//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "LR_2.h"
#include "Client.h"
#include "Employee.h"
#include "Services_1.h"
#include "Services_2.h"
#include "Report.h"
#include "Report_1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TЛР2 *ЛР2;
//---------------------------------------------------------------------------
__fastcall TЛР2::TЛР2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TЛР2::Добавить1Click(TObject *Sender)
{
	 TДобавление_нового_клиента *addForm = new TДобавление_нового_клиента(this);
	 if (addForm->ShowModal() == mrOk)
	 {
		 ADOTable1->Append();
		 ADOTable1->FieldByName("ФИО_клиента")->AsString = addForm->Edit1->Text;
		 ADOTable1->FieldByName("Номер_телефона_клиента")->AsString =addForm->Edit2->Text;
		 ADOTable1->Post();
	 }
	 delete addForm;
}
//---------------------------------------------------------------------------
void __fastcall TЛР2::Добавить2Click(TObject *Sender)
{
	 TДобавление_нового_сотрудника *addForm = new TДобавление_нового_сотрудника(this);
	 if (addForm->ShowModal() == mrOk)
	 {
		 ADOTable2->Append();
		 ADOTable2->FieldByName("ФИО_сотрудника")->AsString = addForm->Edit1->Text;
		 ADOTable2->FieldByName("Номер_телефона_сотрудника")->AsString =addForm->Edit2->Text;
		 ADOTable2->Post();
	 }
	 delete addForm;
}
//---------------------------------------------------------------------------
void __fastcall TЛР2::Редактировать1Click(TObject *Sender)
{
	if (DBGrid1->Options.Contains(dgEditing))
	{
		if (!ADOTable1->IsEmpty())
		 {
			ADOTable1->Post();
		 }
		DBGrid1->Options = DBGrid1->Options >> dgEditing;
		Редактировать1->Caption = "Редактировать";
	 }
	 else
	{
		 DBGrid1->Options = DBGrid1->Options << dgEditing;
		 Редактировать1->Caption = "Сохранить";
	}
}
//---------------------------------------------------------------------------
void __fastcall TЛР2::Редактировать2Click(TObject *Sender)
{
	if (DBGrid2->Options.Contains(dgEditing))
	{
		if (!ADOTable2->IsEmpty())
		 {
			ADOTable2->Post();
		 }
		DBGrid2->Options = DBGrid2->Options >> dgEditing;
		Редактировать2->Caption = "Редактировать";
	 }
	 else
	{
		 DBGrid2->Options = DBGrid2->Options << dgEditing;
		 Редактировать2->Caption = "Сохранить";
	}
}
//---------------------------------------------------------------------------
void __fastcall TЛР2::Удалить1Click(TObject *Sender)
{
	if (!ADOTable1->IsEmpty())
	 {
		 if (MessageDlg("Вы уверены, что хотите удалить эту запись?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
		 {
			ADOTable1->Delete();
		 }
	 }
}
//---------------------------------------------------------------------------
void __fastcall TЛР2::Удалить2Click(TObject *Sender)
{
	if (!ADOTable2->IsEmpty())
	 {
		 if (MessageDlg("Вы уверены, что хотите удалить эту запись?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
		 {
			ADOTable2->Delete();
		 }
	 }
}
//---------------------------------------------------------------------------
void __fastcall TЛР2::ВыходClick(TObject *Sender)
{
	if (MessageDlg("Вы действительно хотите выйти?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
	 {
		Close();
	 }
}
//---------------------------------------------------------------------------

void __fastcall TЛР2::Добавить3Click(TObject *Sender)
{
	TДобавление_новой_записи1 *addForm = new TДобавление_новой_записи1(this);
	if (addForm->ShowModal() == mrOk)
	{
		ADOTable3->Append();

		ADOTable3->FieldByName("Услуга")->AsString =addForm->Edit1->Text;
		ADOTable3->FieldByName("Дата")->AsString =addForm->Edit2->Text;
		ADOTable3->FieldByName("Время")->AsString =addForm->Edit3->Text;

		int selectedID1 = addForm->DBLookupComboBox1->KeyValue;
		ADOTable3->FieldByName("ID_клиента")->AsInteger = selectedID1;

		int selectedID2 = addForm->DBLookupComboBox2->KeyValue;
		ADOTable3->FieldByName("ID_сотрудника")->AsInteger = selectedID2;

		ADOTable3->Post();

		ADOQuery3->Close();
		ADOQuery3->Open();

		addForm->Edit1->Text = "";
		addForm->Edit2->Text = "";
		addForm->Edit3->Text = "";
	}
	delete addForm;
}
//---------------------------------------------------------------------------
void __fastcall TЛР2::Удалить3Click(TObject *Sender)
{
	if (!ADOTable3->IsEmpty())
	 {
		 if (MessageDlg("Вы уверены, что хотите удалить эту запись?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
		 {
			ADOTable3->Delete();
		 }
	 }
}
//---------------------------------------------------------------------------

void __fastcall TЛР2::Редактировать3Click(TObject *Sender)
{
    if (!ADOTable3->Active)
		{
			ADOTable3->Open();
		}
	if (!ADOQuery4->IsEmpty()) {
		TИзменение_данных_записи *editForm = new TИзменение_данных_записи(this);

		ADOTable3->Open();
		ADOTable3->Edit();
		ADOTable1->Active = true;
		ADOTable2->Active = true;
		editForm->Edit1->Text = ADOTable3->FieldByName("Услуга")->AsString;
		editForm->Edit2->Text = ADOTable3->FieldByName("Дата")->AsString;
		editForm->Edit3->Text = ADOTable3->FieldByName("Время")->AsString;

		if (editForm->ShowModal() == mrOk) {
			ADOTable3->Edit();

			ADOTable3->FieldByName("Услуга")->AsString = editForm->Edit1->Text;
			ADOTable3->FieldByName("Дата")->AsString = editForm->Edit2->Text;
			ADOTable3->FieldByName("Время")->AsString = editForm->Edit3->Text;

			int selectedID1 = editForm->DBLookupComboBox1->KeyValue;
			ADOTable3->FieldByName("ID_клиента")->AsInteger = selectedID1;
			int selectedID2 = editForm->DBLookupComboBox2->KeyValue;
			ADOTable3->FieldByName("ID_сотрудника")->AsInteger = selectedID2;

			ADOTable3->Post();

            ADOQuery3->Close();
			ADOQuery3->Open();

            ShowMessage("Запись успешно обновлена.");
        }

        delete editForm;
    }
    else {
        ShowMessage("Нет выбранной записи для редактирования.");
	}
}
//---------------------------------------------------------------------------

void __fastcall TЛР2::ОтчетClick(TObject *Sender)
{
	Просмотр_отчета -> Show();
}
//---------------------------------------------------------------------------

