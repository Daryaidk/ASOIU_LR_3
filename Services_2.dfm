object Изменение_данных_записи: TИзменение_данных_записи
  Left = 0
  Top = 0
  Caption = #1048#1079#1084#1077#1085#1077#1085#1080#1077'_'#1076#1072#1085#1085#1099#1093'_'#1079#1072#1087#1080#1089#1080
  ClientHeight = 315
  ClientWidth = 352
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 18
    Top = 16
    Width = 37
    Height = 15
    Caption = #1059#1089#1083#1091#1075#1072
  end
  object Label2: TLabel
    Left = 18
    Top = 51
    Width = 25
    Height = 15
    Caption = #1044#1072#1090#1072
  end
  object Label3: TLabel
    Left = 18
    Top = 88
    Width = 35
    Height = 15
    Caption = #1042#1088#1077#1084#1103
  end
  object Label4: TLabel
    Left = 18
    Top = 128
    Width = 39
    Height = 15
    Caption = #1050#1083#1080#1077#1085#1090
  end
  object Label5: TLabel
    Left = 18
    Top = 168
    Width = 59
    Height = 15
    Caption = #1057#1086#1090#1088#1091#1076#1085#1080#1082
  end
  object Edit1: TEdit
    Left = 112
    Top = 8
    Width = 201
    Height = 23
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 112
    Top = 48
    Width = 201
    Height = 23
    TabOrder = 1
  end
  object Отмена: TButton
    Left = 18
    Top = 208
    Width = 81
    Height = 41
    Caption = #1054#1090#1084#1077#1085#1072
    TabOrder = 2
    OnClick = ОтменаClick
  end
  object Изменить: TButton
    Left = 152
    Top = 208
    Width = 129
    Height = 41
    Caption = #1054#1050
    TabOrder = 3
    OnClick = ИзменитьClick
  end
  object Edit3: TEdit
    Left = 112
    Top = 85
    Width = 201
    Height = 23
    TabOrder = 4
  end
  object DBLookupComboBox1: TDBLookupComboBox
    Left = 112
    Top = 125
    Width = 201
    Height = 23
    TabOrder = 5
  end
  object DBLookupComboBox2: TDBLookupComboBox
    Left = 112
    Top = 165
    Width = 201
    Height = 23
    TabOrder = 6
  end
end
