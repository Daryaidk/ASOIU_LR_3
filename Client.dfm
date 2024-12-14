object Добавление_нового_клиента: TДобавление_нового_клиента
  Left = 0
  Top = 0
  Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077'_'#1085#1086#1074#1086#1075#1086'_'#1082#1083#1080#1077#1085#1090#1072
  ClientHeight = 195
  ClientWidth = 433
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 16
    Top = 24
    Width = 74
    Height = 15
    Caption = #1060#1048#1054' '#1082#1083#1080#1077#1085#1090#1072
  end
  object Label2: TLabel
    Left = 16
    Top = 64
    Width = 141
    Height = 15
    Caption = #1053#1086#1084#1077#1088' '#1090#1077#1083#1077#1092#1086#1085#1072' '#1082#1083#1080#1077#1085#1090#1072
  end
  object Edit1: TEdit
    Left = 192
    Top = 24
    Width = 217
    Height = 23
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 192
    Top = 61
    Width = 217
    Height = 23
    TabOrder = 1
  end
  object Отмена1: TButton
    Left = 16
    Top = 120
    Width = 89
    Height = 41
    Caption = #1054#1090#1084#1077#1085#1072
    TabOrder = 2
    OnClick = Отмена1Click
  end
  object ОК1: TButton
    Left = 224
    Top = 120
    Width = 145
    Height = 41
    Caption = #1054#1050
    TabOrder = 3
    OnClick = ОК1Click
  end
end
