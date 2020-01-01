{
  "functions": [
    {
      "name": "SQL_Connect",
      "docStart": 18604,
      "docEnd": 19033,
      "kind": "native",
      "returnType": "Database",
      "arguments": [
        {
          "type": "const char[]",
          "name": "confname",
          "decl": "const char[] confname"
        },
        {
          "type": "bool",
          "name": "persistent",
          "decl": "bool persistent"
        },
        {
          "type": "char[]",
          "name": "error",
          "decl": "char[] error"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "SQL_DefConnect",
      "docStart": 19136,
      "docEnd": 19583,
      "kind": "stock",
      "returnType": "Database",
      "arguments": [
        {
          "type": "char[]",
          "name": "error",
          "decl": "char[] error"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "bool",
          "name": "persistent",
          "decl": "bool persistent"
        }
      ]
    },
    {
      "name": "SQL_ConnectCustom",
      "docStart": 19738,
      "docEnd": 20848,
      "kind": "native",
      "returnType": "Database",
      "arguments": [
        {
          "type": "Handle",
          "name": "keyvalues",
          "decl": "Handle keyvalues"
        },
        {
          "type": "char[]",
          "name": "error",
          "decl": "char[] error"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "bool",
          "name": "persistent",
          "decl": "bool persistent"
        }
      ]
    },
    {
      "name": "SQLite_UseDatabase",
      "docStart": 20985,
      "docEnd": 21771,
      "kind": "stock",
      "returnType": "Database",
      "arguments": [
        {
          "type": "const char[]",
          "name": "database",
          "decl": "const char[] database"
        },
        {
          "type": "char[]",
          "name": "error",
          "decl": "char[] error"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "SQL_ConnectEx",
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "Handle",
          "name": "driver",
          "decl": "Handle driver"
        },
        {
          "type": "const char[]",
          "name": "host",
          "decl": "const char[] host"
        },
        {
          "type": "const char[]",
          "name": "user",
          "decl": "const char[] user"
        },
        {
          "type": "const char[]",
          "name": "pass",
          "decl": "const char[] pass"
        },
        {
          "type": "const char[]",
          "name": "database",
          "decl": "const char[] database"
        },
        {
          "type": "char[]",
          "name": "error",
          "decl": "char[] error"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "bool",
          "name": "persistent",
          "decl": "bool persistent"
        },
        {
          "type": "int",
          "name": "port",
          "decl": "int port"
        },
        {
          "type": "int",
          "name": "maxTimeout",
          "decl": "int maxTimeout"
        }
      ]
    },
    {
      "name": "SQL_CheckConfig",
      "docStart": 22527,
      "docEnd": 22711,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "SQL_GetDriver",
      "docStart": 22764,
      "docEnd": 23138,
      "kind": "native",
      "returnType": "DBDriver",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "SQL_ReadDriver",
      "docStart": 23196,
      "docEnd": 23464,
      "kind": "native",
      "returnType": "DBDriver",
      "arguments": [
        {
          "type": "Handle",
          "name": "database",
          "decl": "Handle database"
        },
        {
          "type": "char[]",
          "name": "ident",
          "decl": "char[] ident"
        },
        {
          "type": "int",
          "name": "ident_length",
          "decl": "int ident_length"
        }
      ]
    },
    {
      "name": "SQL_GetDriverIdent",
      "docStart": 23555,
      "docEnd": 23909,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "driver",
          "decl": "Handle driver"
        },
        {
          "type": "char[]",
          "name": "ident",
          "decl": "char[] ident"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "SQL_GetDriverProduct",
      "docStart": 23990,
      "docEnd": 24330,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "driver",
          "decl": "Handle driver"
        },
        {
          "type": "char[]",
          "name": "product",
          "decl": "char[] product"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "SQL_SetCharset",
      "docStart": 24415,
      "docEnd": 24770,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "database",
          "decl": "Handle database"
        },
        {
          "type": "const char[]",
          "name": "charset",
          "decl": "const char[] charset"
        }
      ]
    },
    {
      "name": "SQL_GetAffectedRows",
      "docStart": 24842,
      "docEnd": 25103,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "SQL_GetInsertId",
      "docStart": 25153,
      "docEnd": 25396,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "SQL_GetError",
      "docStart": 25442,
      "docEnd": 25804,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        },
        {
          "type": "char[]",
          "name": "error",
          "decl": "char[] error"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "SQL_EscapeString",
      "docStart": 25877,
      "docEnd": 27032,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "database",
          "decl": "Handle database"
        },
        {
          "type": "const char[]",
          "name": "string",
          "decl": "const char[] string"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "int&",
          "name": "written",
          "decl": "int& written"
        }
      ]
    },
    {
      "name": "SQL_FormatQuery",
      "docStart": 27191,
      "docEnd": 27692,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "database",
          "decl": "Handle database"
        },
        {
          "type": "const char[]",
          "name": "buffer",
          "decl": "const char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "const char[]",
          "name": "format",
          "decl": "const char[] format"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "SQL_QuoteString",
      "kind": "stock",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "database",
          "decl": "Handle database"
        },
        {
          "type": "const char[]",
          "name": "string",
          "decl": "const char[] string"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "int&",
          "name": "written",
          "decl": "int& written"
        }
      ]
    },
    {
      "name": "SQL_FastQuery",
      "docStart": 28181,
      "docEnd": 28719,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "database",
          "decl": "Handle database"
        },
        {
          "type": "const char[]",
          "name": "query",
          "decl": "const char[] query"
        },
        {
          "type": "int",
          "name": "len",
          "decl": "int len"
        }
      ]
    },
    {
      "name": "SQL_Query",
      "docStart": 28800,
      "docEnd": 29398,
      "kind": "native",
      "returnType": "DBResultSet",
      "arguments": [
        {
          "type": "Handle",
          "name": "database",
          "decl": "Handle database"
        },
        {
          "type": "const char[]",
          "name": "query",
          "decl": "const char[] query"
        },
        {
          "type": "int",
          "name": "len",
          "decl": "int len"
        }
      ]
    },
    {
      "name": "SQL_PrepareQuery",
      "docStart": 29482,
      "docEnd": 30237,
      "kind": "native",
      "returnType": "DBStatement",
      "arguments": [
        {
          "type": "Handle",
          "name": "database",
          "decl": "Handle database"
        },
        {
          "type": "const char[]",
          "name": "query",
          "decl": "const char[] query"
        },
        {
          "type": "char[]",
          "name": "error",
          "decl": "char[] error"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "SQL_FetchMoreResults",
      "docStart": 30345,
      "docEnd": 30824,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "query",
          "decl": "Handle query"
        }
      ]
    },
    {
      "name": "SQL_HasResultSet",
      "docStart": 30877,
      "docEnd": 31230,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "query",
          "decl": "Handle query"
        }
      ]
    },
    {
      "name": "SQL_GetRowCount",
      "docStart": 31279,
      "docEnd": 31519,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "query",
          "decl": "Handle query"
        }
      ]
    },
    {
      "name": "SQL_GetFieldCount",
      "docStart": 31566,
      "docEnd": 31810,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "query",
          "decl": "Handle query"
        }
      ]
    },
    {
      "name": "SQL_FieldNumToName",
      "docStart": 31859,
      "docEnd": 32246,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "query",
          "decl": "Handle query"
        },
        {
          "type": "int",
          "name": "field",
          "decl": "int field"
        },
        {
          "type": "char[]",
          "name": "name",
          "decl": "char[] name"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "SQL_FieldNameToNum",
      "docStart": 32336,
      "docEnd": 32694,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "query",
          "decl": "Handle query"
        },
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "int&",
          "name": "field",
          "decl": "int& field"
        }
      ]
    },
    {
      "name": "SQL_FetchRow",
      "docStart": 32776,
      "docEnd": 33206,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "query",
          "decl": "Handle query"
        }
      ]
    },
    {
      "name": "SQL_MoreRows",
      "docStart": 33251,
      "docEnd": 33474,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "query",
          "decl": "Handle query"
        }
      ]
    },
    {
      "name": "SQL_Rewind",
      "docStart": 33519,
      "docEnd": 33770,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "query",
          "decl": "Handle query"
        }
      ]
    },
    {
      "name": "SQL_FetchString",
      "docStart": 33813,
      "docEnd": 34580,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "query",
          "decl": "Handle query"
        },
        {
          "type": "int",
          "name": "field",
          "decl": "int field"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "DBResult&",
          "name": "result",
          "decl": "DBResult& result"
        }
      ]
    },
    {
      "name": "SQL_FetchFloat",
      "docStart": 34698,
      "docEnd": 35353,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "Handle",
          "name": "query",
          "decl": "Handle query"
        },
        {
          "type": "int",
          "name": "field",
          "decl": "int field"
        },
        {
          "type": "DBResult&",
          "name": "result",
          "decl": "DBResult& result"
        }
      ]
    },
    {
      "name": "SQL_FetchInt",
      "docStart": 35442,
      "docEnd": 36101,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "query",
          "decl": "Handle query"
        },
        {
          "type": "int",
          "name": "field",
          "decl": "int field"
        },
        {
          "type": "DBResult&",
          "name": "result",
          "decl": "DBResult& result"
        }
      ]
    },
    {
      "name": "SQL_IsFieldNull",
      "docStart": 36186,
      "docEnd": 36627,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "query",
          "decl": "Handle query"
        },
        {
          "type": "int",
          "name": "field",
          "decl": "int field"
        }
      ]
    },
    {
      "name": "SQL_FetchSize",
      "docStart": 36686,
      "docEnd": 37228,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "query",
          "decl": "Handle query"
        },
        {
          "type": "int",
          "name": "field",
          "decl": "int field"
        }
      ]
    },
    {
      "name": "SQL_BindParamInt",
      "docStart": 37284,
      "docEnd": 37765,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "statement",
          "decl": "Handle statement"
        },
        {
          "type": "int",
          "name": "param",
          "decl": "int param"
        },
        {
          "type": "int",
          "name": "number",
          "decl": "int number"
        },
        {
          "type": "bool",
          "name": "signed",
          "decl": "bool signed"
        }
      ]
    },
    {
      "name": "SQL_BindParamFloat",
      "docStart": 37859,
      "docEnd": 38228,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "statement",
          "decl": "Handle statement"
        },
        {
          "type": "int",
          "name": "param",
          "decl": "int param"
        },
        {
          "type": "float",
          "name": "value",
          "decl": "float value"
        }
      ]
    },
    {
      "name": "SQL_BindParamString",
      "docStart": 38307,
      "docEnd": 38950,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "statement",
          "decl": "Handle statement"
        },
        {
          "type": "int",
          "name": "param",
          "decl": "int param"
        },
        {
          "type": "const char[]",
          "name": "value",
          "decl": "const char[] value"
        },
        {
          "type": "bool",
          "name": "copy",
          "decl": "bool copy"
        }
      ]
    },
    {
      "name": "SQL_Execute",
      "docStart": 39048,
      "docEnd": 39310,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "statement",
          "decl": "Handle statement"
        }
      ]
    },
    {
      "name": "SQL_LockDatabase",
      "docStart": 39358,
      "docEnd": 40036,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "database",
          "decl": "Handle database"
        }
      ]
    },
    {
      "name": "SQL_UnlockDatabase",
      "docStart": 40088,
      "docEnd": 40255,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "database",
          "decl": "Handle database"
        }
      ]
    },
    {
      "name": "SQL_IsSameConnection",
      "docStart": 40944,
      "docEnd": 41300,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl1",
          "decl": "Handle hndl1"
        },
        {
          "type": "Handle",
          "name": "hndl2",
          "decl": "Handle hndl2"
        }
      ]
    },
    {
      "name": "SQL_TConnect",
      "docStart": 41367,
      "docEnd": 41957,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "SQLTCallback",
          "name": "callback",
          "decl": "SQLTCallback callback"
        },
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "any",
          "name": "data",
          "decl": "any data"
        }
      ]
    },
    {
      "name": "SQL_TQuery",
      "docStart": 42052,
      "docEnd": 42878,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "database",
          "decl": "Handle database"
        },
        {
          "type": "SQLTCallback",
          "name": "callback",
          "decl": "SQLTCallback callback"
        },
        {
          "type": "const char[]",
          "name": "query",
          "decl": "const char[] query"
        },
        {
          "type": "any",
          "name": "data",
          "decl": "any data"
        },
        {
          "type": "DBPriority",
          "name": "prio",
          "decl": "DBPriority prio"
        }
      ]
    },
    {
      "name": "SQL_CreateTransaction",
      "docStart": 43010,
      "docEnd": 43231,
      "kind": "native",
      "returnType": "Transaction",
      "arguments": []
    },
    {
      "name": "SQL_AddQuery",
      "docStart": 43280,
      "docEnd": 43627,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Transaction",
          "name": "txn",
          "decl": "Transaction txn"
        },
        {
          "type": "const char[]",
          "name": "query",
          "decl": "const char[] query"
        },
        {
          "type": "any",
          "name": "data",
          "decl": "any data"
        }
      ]
    },
    {
      "name": "SQL_ExecuteTransaction",
      "docStart": 43706,
      "docEnd": 44294,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "db",
          "decl": "Handle db"
        },
        {
          "type": "Transaction",
          "name": "txn",
          "decl": "Transaction txn"
        },
        {
          "type": "SQLTxnSuccess",
          "name": "onSuccess",
          "decl": "SQLTxnSuccess onSuccess"
        },
        {
          "type": "SQLTxnFailure",
          "name": "onError",
          "decl": "SQLTxnFailure onError"
        },
        {
          "type": "any",
          "name": "data",
          "decl": "any data"
        },
        {
          "type": "DBPriority",
          "name": "priority",
          "decl": "DBPriority priority"
        }
      ]
    }
  ],
  "methodmaps": [
    {
      "name": "DBDriver",
      "docStart": 2409,
      "docEnd": 2519,
      "methods": [
        {
          "name": "Find",
          "docStart": 2554,
          "docEnd": 2859,
          "returnType": "DBDriver",
          "arguments": [
            {
              "type": "const char[]",
              "name": "name",
              "decl": "const char[] name"
            }
          ]
        },
        {
          "name": "GetIdentifier",
          "docStart": 2926,
          "docEnd": 3126,
          "returnType": "void",
          "arguments": [
            {
              "type": "char[]",
              "name": "ident",
              "decl": "char[] ident"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            }
          ]
        },
        {
          "name": "GetProduct",
          "docStart": 3196,
          "docEnd": 3382,
          "returnType": "void",
          "arguments": [
            {
              "type": "char[]",
              "name": "product",
              "decl": "char[] product"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            }
          ]
        }
      ],
      "properties": []
    },
    {
      "name": "DBResultSet",
      "docStart": 3454,
      "docEnd": 3517,
      "methods": [
        {
          "name": "FetchMoreResults",
          "docStart": 3555,
          "docEnd": 3942,
          "returnType": "bool",
          "arguments": []
        },
        {
          "name": "FieldNumToName",
          "docStart": 4859,
          "docEnd": 5134,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "field",
              "decl": "int field"
            },
            {
              "type": "char[]",
              "name": "name",
              "decl": "char[] name"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            }
          ]
        },
        {
          "name": "FieldNameToNum",
          "docStart": 5215,
          "docEnd": 5484,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "name",
              "decl": "const char[] name"
            },
            {
              "type": "int&",
              "name": "field",
              "decl": "int& field"
            }
          ]
        },
        {
          "name": "FetchRow",
          "docStart": 5557,
          "docEnd": 5874,
          "returnType": "bool",
          "arguments": []
        },
        {
          "name": "Rewind",
          "docStart": 6083,
          "docEnd": 6245,
          "returnType": "bool",
          "arguments": []
        },
        {
          "name": "FetchString",
          "docStart": 6281,
          "docEnd": 6944,
          "returnType": "int",
          "arguments": [
            {
              "type": "int",
              "name": "field",
              "decl": "int field"
            },
            {
              "type": "char[]",
              "name": "buffer",
              "decl": "char[] buffer"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            },
            {
              "type": "DBResult&",
              "name": "result",
              "decl": "DBResult& result"
            }
          ]
        },
        {
          "name": "FetchFloat",
          "docStart": 7053,
          "docEnd": 7604,
          "returnType": "float",
          "arguments": [
            {
              "type": "int",
              "name": "field",
              "decl": "int field"
            },
            {
              "type": "DBResult&",
              "name": "result",
              "decl": "DBResult& result"
            }
          ]
        },
        {
          "name": "FetchInt",
          "docStart": 7684,
          "docEnd": 8239,
          "returnType": "int",
          "arguments": [
            {
              "type": "int",
              "name": "field",
              "decl": "int field"
            },
            {
              "type": "DBResult&",
              "name": "result",
              "decl": "DBResult& result"
            }
          ]
        },
        {
          "name": "IsFieldNull",
          "docStart": 8315,
          "docEnd": 8651,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "field",
              "decl": "int field"
            }
          ]
        },
        {
          "name": "FetchSize",
          "docStart": 8701,
          "docEnd": 9140,
          "returnType": "int",
          "arguments": [
            {
              "type": "int",
              "name": "field",
              "decl": "int field"
            }
          ]
        }
      ],
      "properties": [
        {
          "name": "HasResults",
          "docStart": 3988,
          "docEnd": 4153,
          "type": "bool",
          "getter": true,
          "setter": false
        },
        {
          "name": "RowCount",
          "docStart": 4215,
          "docEnd": 4399,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "FieldCount",
          "docStart": 4458,
          "docEnd": 4515,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "AffectedRows",
          "docStart": 4576,
          "docEnd": 4666,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "InsertId",
          "docStart": 4729,
          "docEnd": 4800,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "MoreRows",
          "docStart": 5912,
          "docEnd": 6023,
          "type": "bool",
          "getter": true,
          "setter": false
        }
      ]
    },
    {
      "name": "Transaction",
      "docStart": 10863,
      "docEnd": 10967,
      "methods": [
        {
          "name": "Transaction",
          "docStart": 11005,
          "docEnd": 11033,
          "returnType": "Transaction",
          "arguments": []
        },
        {
          "name": "AddQuery",
          "docStart": 11069,
          "docEnd": 11302,
          "returnType": "int",
          "arguments": [
            {
              "type": "const char[]",
              "name": "query",
              "decl": "const char[] query"
            },
            {
              "type": "any",
              "name": "data",
              "decl": "any data"
            }
          ]
        }
      ],
      "properties": []
    },
    {
      "name": "DBStatement",
      "docStart": 11372,
      "docEnd": 11553,
      "methods": [
        {
          "name": "BindInt",
          "docStart": 11591,
          "docEnd": 11961,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "param",
              "decl": "int param"
            },
            {
              "type": "int",
              "name": "number",
              "decl": "int number"
            },
            {
              "type": "bool",
              "name": "signed",
              "decl": "bool signed"
            }
          ]
        },
        {
          "name": "BindFloat",
          "docStart": 12037,
          "docEnd": 12293,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "param",
              "decl": "int param"
            },
            {
              "type": "float",
              "name": "value",
              "decl": "float value"
            }
          ]
        },
        {
          "name": "BindString",
          "docStart": 12354,
          "docEnd": 12888,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "param",
              "decl": "int param"
            },
            {
              "type": "const char[]",
              "name": "value",
              "decl": "const char[] value"
            },
            {
              "type": "bool",
              "name": "copy",
              "decl": "bool copy"
            }
          ]
        }
      ],
      "properties": []
    },
    {
      "name": "Database",
      "docStart": 14140,
      "docEnd": 14275,
      "methods": [
        {
          "name": "Connect",
          "docStart": 14310,
          "docEnd": 14593,
          "returnType": "void",
          "arguments": [
            {
              "type": "SQLConnectCallback",
              "name": "callback",
              "decl": "SQLConnectCallback callback"
            },
            {
              "type": "const char[]",
              "name": "name",
              "decl": "const char[] name"
            },
            {
              "type": "any",
              "name": "data",
              "decl": "any data"
            }
          ]
        },
        {
          "name": "SetCharset",
          "docStart": 14818,
          "docEnd": 15119,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "charset",
              "decl": "const char[] charset"
            }
          ]
        },
        {
          "name": "Escape",
          "docStart": 15179,
          "docEnd": 16235,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "string",
              "decl": "const char[] string"
            },
            {
              "type": "char[]",
              "name": "buffer",
              "decl": "char[] buffer"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            },
            {
              "type": "int&",
              "name": "written",
              "decl": "int& written"
            }
          ]
        },
        {
          "name": "Format",
          "docStart": 16336,
          "docEnd": 16790,
          "returnType": "int",
          "arguments": [
            {
              "type": "const char[]",
              "name": "buffer",
              "decl": "const char[] buffer"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            },
            {
              "type": "const char[]",
              "name": "format",
              "decl": "const char[] format"
            },
            {
              "type": "any...",
              "name": "...",
              "decl": "any... ..."
            }
          ]
        },
        {
          "name": "IsSameConnection",
          "docStart": 16889,
          "docEnd": 16962,
          "returnType": "bool",
          "arguments": [
            {
              "type": "Database",
              "name": "other",
              "decl": "Database other"
            }
          ]
        },
        {
          "name": "Query",
          "docStart": 17022,
          "docEnd": 17612,
          "returnType": "void",
          "arguments": [
            {
              "type": "SQLQueryCallback",
              "name": "callback",
              "decl": "SQLQueryCallback callback"
            },
            {
              "type": "const char[]",
              "name": "query",
              "decl": "const char[] query"
            },
            {
              "type": "any",
              "name": "data",
              "decl": "any data"
            },
            {
              "type": "DBPriority",
              "name": "prio",
              "decl": "DBPriority prio"
            }
          ]
        },
        {
          "name": "Execute",
          "docStart": 17793,
          "docEnd": 18296,
          "returnType": "void",
          "arguments": [
            {
              "type": "Transaction",
              "name": "txn",
              "decl": "Transaction txn"
            },
            {
              "type": "SQLTxnSuccess",
              "name": "onSuccess",
              "decl": "SQLTxnSuccess onSuccess"
            },
            {
              "type": "SQLTxnFailure",
              "name": "onError",
              "decl": "SQLTxnFailure onError"
            },
            {
              "type": "any",
              "name": "data",
              "decl": "any data"
            },
            {
              "type": "DBPriority",
              "name": "priority",
              "decl": "DBPriority priority"
            }
          ]
        }
      ],
      "properties": [
        {
          "name": "Driver",
          "docStart": 14705,
          "docEnd": 14756,
          "type": "DBDriver",
          "getter": true,
          "setter": false
        }
      ]
    }
  ],
  "enums": [
    {
      "name": "DBResult",
      "docStart": 1649,
      "docEnd": 1702,
      "entries": [
        {
          "name": "DBVal_Error",
          "docStart": 1747,
          "docEnd": 1786
        },
        {
          "name": "DBVal_TypeMismatch",
          "docStart": 1813,
          "docEnd": 1866
        },
        {
          "name": "DBVal_Null",
          "docStart": 1893,
          "docEnd": 1925
        },
        {
          "name": "DBVal_Data",
          "docStart": 1952,
          "docEnd": 1974
        }
      ]
    },
    {
      "name": "DBBindType",
      "docStart": 1982,
      "docEnd": 2019,
      "entries": [
        {
          "name": "DBBind_Int",
          "docStart": 2066,
          "docEnd": 2090
        },
        {
          "name": "DBBind_Float",
          "docStart": 2117,
          "docEnd": 2138
        },
        {
          "name": "DBBind_String",
          "docStart": 2165,
          "docEnd": 2187
        }
      ]
    },
    {
      "name": "DBPriority",
      "docStart": 2195,
      "docEnd": 2233,
      "entries": [
        {
          "name": "DBPrio_High",
          "docStart": 2280,
          "docEnd": 2302
        },
        {
          "name": "DBPrio_Normal",
          "docStart": 2329,
          "docEnd": 2353
        },
        {
          "name": "DBPrio_Low",
          "docStart": 2380,
          "docEnd": 2401
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [
    {
      "name": "SQLTxnSuccess",
      "types": [
        {
          "type": "function void(Database db, any data, int numQueries, Handle[] results, any[] queryData)",
          "docStart": 9217,
          "docEnd": 9652
        },
        {
          "type": "function void(Database db, any data, int numQueries, DBResultSet[] results, any[] queryData)",
          "docStart": 9750,
          "docEnd": 10184
        }
      ]
    }
  ],
  "typedefs": [
    {
      "name": "SQLTxnFailure",
      "docStart": 10289,
      "docEnd": 10727,
      "type": "function void(Database db, any data, int numQueries, const char[] error, int failIndex, any[] queryData)"
    },
    {
      "name": "SQLConnectCallback",
      "docStart": 12971,
      "docEnd": 13418,
      "type": "function void(Database db, const char[] error, any data)"
    },
    {
      "name": "SQLQueryCallback",
      "docStart": 13511,
      "docEnd": 14028,
      "type": "function void(Database db, DBResultSet results, const char[] error, any data)"
    },
    {
      "name": "SQLTCallback",
      "docStart": 40309,
      "docEnd": 40843,
      "type": "function void(Handle owner, Handle hndl, const char[] error, any data)"
    }
  ]
}