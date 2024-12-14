object Добавление_нового_сотрудника: TДобавление_нового_сотрудника
  Left = 0
  Top = 0
  Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077'_'#1085#1086#1074#1086#1075#1086'_'#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072
  ClientHeight = 187
  ClientWidth = 442
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 22
    Top = 19
    Width = 93
    Height = 15
    Caption = #1060#1048#1054' '#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072
  end
  object Label2: TLabel
    Left = 22
    Top = 51
    Width = 160
    Height = 15
    Caption = #1053#1086#1084#1077#1088' '#1090#1077#1083#1077#1092#1086#1085#1072' '#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072
  end
  object Edit1: TEdit
    Left = 216
    Top = 16
    Width = 193
    Height = 23
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 216
    Top = 48
    Width = 193
    Height = 23
    TabOrder = 1
  end
  object Отмена2: TButton
    Left = 26
    Top = 104
    Width = 89
    Height = 41
    Caption = #1054#1090#1084#1077#1085#1072
    TabOrder = 2
    OnClick = Отмена2Click
  end
  object ОК2: TButton
    Left = 240
    Top = 104
    Width = 145
    Height = 41
    Caption = #1054#1050
    TabOrder = 3
    OnClick = ОК2Click
  end
end
