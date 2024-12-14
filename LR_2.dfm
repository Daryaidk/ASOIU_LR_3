object ЛР2: TЛР2
  Left = 0
  Top = 0
  Caption = #1051#1056'2'
  ClientHeight = 586
  ClientWidth = 1177
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poDesigned
  TextHeight = 15
  object DBGrid1: TDBGrid
    Left = 8
    Top = 16
    Width = 537
    Height = 105
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -12
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'ID_'#1082#1083#1080#1077#1085#1090#1072
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1060#1048#1054'_'#1082#1083#1080#1077#1085#1090#1072
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1053#1086#1084#1077#1088'_'#1090#1077#1083#1077#1092#1086#1085#1072'_'#1082#1083#1080#1077#1085#1090#1072
        Visible = True
      end>
  end
  object DBGrid2: TDBGrid
    Left = 584
    Top = 16
    Width = 585
    Height = 105
    DataSource = DataSource2
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -12
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
  end
  object DBGrid3: TDBGrid
    Left = 248
    Top = 248
    Width = 649
    Height = 113
    DataSource = DataSource3
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    TabOrder = 2
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -12
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'ID_'#1079#1072#1087#1080#1089#1080
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1059#1089#1083#1091#1075#1072
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1044#1072#1090#1072
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1042#1088#1077#1084#1103
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1060#1048#1054'_'#1082#1083#1080#1077#1085#1090#1072
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1060#1048#1054'_'#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072
        Width = 100
        Visible = True
      end>
  end
  object Добавить1: TButton
    Left = 8
    Top = 127
    Width = 105
    Height = 41
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 3
    OnClick = Добавить1Click
  end
  object Редактировать1: TButton
    Left = 224
    Top = 127
    Width = 105
    Height = 41
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100
    TabOrder = 4
    OnClick = Редактировать1Click
  end
  object Удалить1: TButton
    Left = 440
    Top = 130
    Width = 105
    Height = 43
    Caption = #1059#1076#1072#1083#1080#1090#1100
    TabOrder = 5
    OnClick = Удалить1Click
  end
  object Добавить2: TButton
    Left = 584
    Top = 131
    Width = 105
    Height = 41
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 6
    OnClick = Добавить2Click
  end
  object Редактировать2: TButton
    Left = 832
    Top = 127
    Width = 105
    Height = 43
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100
    TabOrder = 7
    OnClick = Редактировать2Click
  end
  object Удалить2: TButton
    Left = 1064
    Top = 127
    Width = 105
    Height = 44
    Caption = #1059#1076#1072#1083#1080#1090#1100
    TabOrder = 8
    OnClick = Удалить2Click
  end
  object Добавить3: TButton
    Left = 248
    Top = 367
    Width = 105
    Height = 33
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 9
    OnClick = Добавить3Click
  end
  object Редактировать3: TButton
    Left = 528
    Top = 367
    Width = 107
    Height = 34
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100
    TabOrder = 10
    OnClick = Редактировать3Click
  end
  object Удалить3: TButton
    Left = 790
    Top = 367
    Width = 107
    Height = 33
    Caption = #1059#1076#1072#1083#1080#1090#1100
    TabOrder = 11
    OnClick = Удалить3Click
  end
  object Выход: TButton
    Left = 496
    Top = 471
    Width = 163
    Height = 65
    Caption = #1042#1099#1093#1086#1076
    TabOrder = 12
    OnClick = ВыходClick
  end
  object Отчет: TButton
    Left = 928
    Top = 264
    Width = 121
    Height = 73
    Caption = #1054#1090#1095#1077#1090
    TabOrder = 13
    OnClick = ОтчетClick
  end
  object ADOTable1: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = #1050#1083#1080#1077#1085#1090#1099
    Left = 96
    Top = 192
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=LR2;Data Source=DESKTOP-UA1COUK\SQLEXPR' +
      'ESS'
    Provider = 'SQLOLEDB.1'
    Left = 240
    Top = 192
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 384
    Top = 192
  end
  object ADOTable2: TADOTable
    Active = True
    Connection = ADOConnection2
    CursorType = ctStatic
    TableName = #1057#1086#1090#1088#1091#1076#1085#1080#1082#1080
    Left = 664
    Top = 184
  end
  object ADOConnection2: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=LR2;Data Source=DESKTOP-UA1COUK\SQLEXPR' +
      'ESS'
    Provider = 'SQLOLEDB.1'
    Left = 848
    Top = 184
  end
  object DataSource2: TDataSource
    DataSet = ADOTable2
    Left = 1000
    Top = 184
  end
  object ADOTable3: TADOTable
    Active = True
    Connection = ADOConnection3
    CursorType = ctStatic
    TableName = #1047#1072#1087#1080#1089#1080
    Left = 440
    Top = 416
  end
  object ADOConnection3: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=LR2;Data Source=DESKTOP-UA1COUK\SQLEXPR' +
      'ESS'
    Provider = 'SQLOLEDB.1'
    Left = 512
    Top = 416
  end
  object DataSource3: TDataSource
    DataSet = ADOQuery3
    Left = 600
    Top = 416
  end
  object ADOQuery1: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    DataSource = DataSource1
    Parameters = <>
    SQL.Strings = (
      
        'SELECT ID_'#1082#1083#1080#1077#1085#1090#1072', '#1060#1048#1054'_'#1082#1083#1080#1077#1085#1090#1072', '#1053#1086#1084#1077#1088'_'#1090#1077#1083#1077#1092#1086#1085#1072'_'#1082#1083#1080#1077#1085#1090#1072' FROM '#1050#1083#1080#1077 +
        #1085#1090#1099)
    Left = 32
    Top = 352
  end
  object ADOQuery2: TADOQuery
    Active = True
    Connection = ADOConnection2
    CursorType = ctStatic
    DataSource = DataSource2
    Parameters = <>
    SQL.Strings = (
      
        'SELECT ID_'#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072', '#1060#1048#1054'_'#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072', '#1053#1086#1084#1077#1088'_'#1090#1077#1083#1077#1092#1086#1085#1072'_'#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072' ' +
        'FROM '#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080)
    Left = 88
    Top = 352
  end
  object ADOQuery3: TADOQuery
    Active = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=LR2;Data Source=DESKTOP-UA1COUK\SQLEXPR' +
      'ESS'
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT '
      '    '#1047#1072#1087#1080#1089#1080'.ID_'#1079#1072#1087#1080#1089#1080', '
      '    '#1047#1072#1087#1080#1089#1080'.'#1059#1089#1083#1091#1075#1072', '
      '    '#1047#1072#1087#1080#1089#1080'.'#1044#1072#1090#1072', '
      '    '#1047#1072#1087#1080#1089#1080'.'#1042#1088#1077#1084#1103', '
      '    '#1050#1083#1080#1077#1085#1090#1099'.'#1060#1048#1054'_'#1082#1083#1080#1077#1085#1090#1072', '
      '    '#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080'.'#1060#1048#1054'_'#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072
      'FROM '
      '    '#1047#1072#1087#1080#1089#1080
      'INNER JOIN '
      '    '#1050#1083#1080#1077#1085#1090#1099' ON '#1047#1072#1087#1080#1089#1080'.ID_'#1082#1083#1080#1077#1085#1090#1072' = '#1050#1083#1080#1077#1085#1090#1099'.ID_'#1082#1083#1080#1077#1085#1090#1072
      'INNER JOIN '
      
        '    '#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080' ON '#1047#1072#1087#1080#1089#1080'.ID_'#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072' = '#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080'.ID_'#1089#1086#1090#1088#1091#1076#1085#1080#1082 +
        #1072)
    Left = 144
    Top = 352
  end
  object ADOQuery4: TADOQuery
    Active = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=LR2;Data Source=DESKTOP-UA1COUK\SQLEXPR' +
      'ESS'
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT '
      '        '#1047#1072#1087#1080#1089#1080'.ID_'#1079#1072#1087#1080#1089#1080', '
      '        '#1047#1072#1087#1080#1089#1080'.'#1059#1089#1083#1091#1075#1072', '
      '        '#1047#1072#1087#1080#1089#1080'.'#1044#1072#1090#1072','
      '        '#1047#1072#1087#1080#1089#1080'.'#1042#1088#1077#1084#1103', '
      '        '#1050#1083#1080#1077#1085#1090#1099'.'#1060#1048#1054'_'#1082#1083#1080#1077#1085#1090#1072', '
      '        '#1050#1083#1080#1077#1085#1090#1099'.ID_'#1082#1083#1080#1077#1085#1090#1072','
      '        '#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080'.'#1060#1048#1054'_'#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072', '
      '        '#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080'.ID_'#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072
      'FROM '#1047#1072#1087#1080#1089#1080' '
      'INNER JOIN '
      '         '#1050#1083#1080#1077#1085#1090#1099' ON '#1047#1072#1087#1080#1089#1080'.ID_'#1082#1083#1080#1077#1085#1090#1072' = '#1050#1083#1080#1077#1085#1090#1099'.ID_'#1082#1083#1080#1077#1085#1090#1072
      'INNER JOIN '
      
        '         '#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080' ON '#1047#1072#1087#1080#1089#1080'.ID_'#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072' = '#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080'.ID_'#1089#1086#1090#1088 +
        #1091#1076#1085#1080#1082#1072)
    Left = 80
    Top = 416
  end
end
