//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Report.h"
#include "LR_2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "frCoreClasses"
#pragma link "frxClass"
#pragma link "frxDBSet"
#pragma link "frxPreview"
#pragma resource "*.dfm"
TПросмотр_отчета *Просмотр_отчета;
//---------------------------------------------------------------------------
__fastcall TПросмотр_отчета::TПросмотр_отчета(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

