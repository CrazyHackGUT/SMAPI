{
  "functions": [
    {
      "name": "SQL_Connect",
      "docStart": 18439,
      "docEnd": 18826,
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
      "docStart": 18929,
      "docEnd": 19323,
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
      "docStart": 19478,
      "docEnd": 20521,
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
      "docStart": 20664,
      "docEnd": 21412,
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
      "docStart": 22179,
      "docEnd": 22346,
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
      "docStart": 22399,
      "docEnd": 22740,
      "kind": "native",
      "returnType": "Handle",
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
      "docStart": 22796,
      "docEnd": 23043,
      "kind": "native",
      "returnType": "Handle",
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
      "docStart": 23132,
      "docEnd": 23460,
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
      "docStart": 23541,
      "docEnd": 23856,
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
      "docStart": 23941,
      "docEnd": 24296,
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
      "docStart": 24368,
      "docEnd": 24601,
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
      "docStart": 24651,
      "docEnd": 24866,
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
      "docStart": 24912,
      "docEnd": 25237,
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
      "docStart": 25310,
      "docEnd": 26405,
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
      "docStart": 26564,
      "docEnd": 27028,
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
      "docStart": 27501,
      "docEnd": 27953,
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
      "docStart": 28034,
      "docEnd": 28546,
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
      "docStart": 28630,
      "docEnd": 29329,
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
      "docStart": 29437,
      "docEnd": 29889,
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
      "docStart": 29942,
      "docEnd": 30268,
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
      "docStart": 30317,
      "docEnd": 30530,
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
      "docStart": 30577,
      "docEnd": 30794,
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
      "docStart": 30843,
      "docEnd": 31181,
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
      "docStart": 31271,
      "docEnd": 31589,
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
      "docStart": 31671,
      "docEnd": 32074,
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
      "docStart": 32119,
      "docEnd": 32315,
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
      "docStart": 32360,
      "docEnd": 32584,
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
      "docStart": 32627,
      "docEnd": 33314,
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
      "docStart": 33432,
      "docEnd": 34016,
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
      "docStart": 34105,
      "docEnd": 34693,
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
      "docStart": 34778,
      "docEnd": 35170,
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
      "docStart": 35229,
      "docEnd": 35722,
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
      "docStart": 35778,
      "docEnd": 36195,
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
      "docStart": 36289,
      "docEnd": 36616,
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
      "docStart": 36695,
      "docEnd": 37241,
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
      "docStart": 37339,
      "docEnd": 37577,
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
      "docStart": 37625,
      "docEnd": 38288,
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
      "docStart": 38340,
      "docEnd": 38492,
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
      "docStart": 39115,
      "docEnd": 39422,
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
      "docStart": 39489,
      "docEnd": 40045,
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
      "docStart": 40140,
      "docEnd": 40911,
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
      "docStart": 41043,
      "docEnd": 41264,
      "kind": "native",
      "returnType": "Transaction",
      "arguments": []
    },
    {
      "name": "SQL_AddQuery",
      "docStart": 41313,
      "docEnd": 41653,
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
      "docStart": 41732,
      "docEnd": 42320,
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
      "docStart": 2360,
      "docEnd": 2470,
      "methods": [
        {
          "name": "Find",
          "docStart": 2505,
          "docEnd": 2810,
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
          "docStart": 2877,
          "docEnd": 3077,
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
          "docStart": 3147,
          "docEnd": 3333,
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
      "docStart": 3405,
      "docEnd": 3468,
      "methods": [
        {
          "name": "FetchMoreResults",
          "docStart": 3506,
          "docEnd": 3893,
          "returnType": "bool",
          "arguments": []
        },
        {
          "name": "FieldNumToName",
          "docStart": 4810,
          "docEnd": 5085,
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
          "docStart": 5166,
          "docEnd": 5435,
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
          "docStart": 5508,
          "docEnd": 5825,
          "returnType": "bool",
          "arguments": []
        },
        {
          "name": "Rewind",
          "docStart": 6034,
          "docEnd": 6196,
          "returnType": "bool",
          "arguments": []
        },
        {
          "name": "FetchString",
          "docStart": 6232,
          "docEnd": 6895,
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
          "docStart": 7033,
          "docEnd": 7584,
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
          "docStart": 7664,
          "docEnd": 8219,
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
          "docStart": 8295,
          "docEnd": 8631,
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
          "docStart": 8681,
          "docEnd": 9120,
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
          "docStart": 3939,
          "docEnd": 4104,
          "type": "bool",
          "getter": true,
          "setter": false
        },
        {
          "name": "RowCount",
          "docStart": 4166,
          "docEnd": 4350,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "FieldCount",
          "docStart": 4409,
          "docEnd": 4466,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "AffectedRows",
          "docStart": 4527,
          "docEnd": 4617,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "InsertId",
          "docStart": 4680,
          "docEnd": 4751,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "MoreRows",
          "docStart": 5863,
          "docEnd": 5974,
          "type": "bool",
          "getter": true,
          "setter": false
        }
      ]
    },
    {
      "name": "Transaction",
      "docStart": 10834,
      "docEnd": 10938,
      "methods": [
        {
          "name": "Transaction",
          "docStart": 10976,
          "docEnd": 11004,
          "returnType": "Transaction",
          "arguments": []
        },
        {
          "name": "AddQuery",
          "docStart": 11040,
          "docEnd": 11273,
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
      "docStart": 11343,
      "docEnd": 11524,
      "methods": [
        {
          "name": "BindInt",
          "docStart": 11562,
          "docEnd": 11932,
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
          "docStart": 12008,
          "docEnd": 12264,
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
          "docStart": 12325,
          "docEnd": 12859,
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
      "docStart": 14001,
      "docEnd": 14136,
      "methods": [
        {
          "name": "Connect",
          "docStart": 14171,
          "docEnd": 14460,
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
          "docStart": 14685,
          "docEnd": 14986,
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
          "docStart": 15046,
          "docEnd": 16108,
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
          "docStart": 16209,
          "docEnd": 16630,
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
          "docStart": 16729,
          "docEnd": 16802,
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
          "docStart": 16862,
          "docEnd": 17452,
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
          "docStart": 17633,
          "docEnd": 18131,
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
          "docStart": 14572,
          "docEnd": 14623,
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
          "docStart": 1741,
          "docEnd": 1780
        },
        {
          "name": "DBVal_TypeMismatch",
          "docStart": 1807,
          "docEnd": 1860
        },
        {
          "name": "DBVal_Null",
          "docStart": 1881,
          "docEnd": 1913
        },
        {
          "name": "DBVal_Data",
          "docStart": 1934,
          "docEnd": 1956
        }
      ]
    },
    {
      "name": "DBBindType",
      "docStart": 1964,
      "docEnd": 2001,
      "entries": [
        {
          "name": "DBBind_Int",
          "docStart": 2042,
          "docEnd": 2066
        },
        {
          "name": "DBBind_Float",
          "docStart": 2088,
          "docEnd": 2109
        },
        {
          "name": "DBBind_String",
          "docStart": 2132,
          "docEnd": 2154
        }
      ]
    },
    {
      "name": "DBPriority",
      "docStart": 2162,
      "docEnd": 2200,
      "entries": [
        {
          "name": "DBPrio_High",
          "docStart": 2241,
          "docEnd": 2263
        },
        {
          "name": "DBPrio_Normal",
          "docStart": 2286,
          "docEnd": 2310
        },
        {
          "name": "DBPrio_Low",
          "docStart": 2331,
          "docEnd": 2352
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
          "docStart": 9197,
          "docEnd": 9632
        },
        {
          "type": "function void(Database db, any data, int numQueries, DBResultSet[] results, any[] queryData)",
          "docStart": 9730,
          "docEnd": 10164
        }
      ]
    }
  ],
  "typedefs": [
    {
      "name": "SQLTxnFailure",
      "docStart": 10269,
      "docEnd": 10698,
      "type": "function void(Database db, any data, int numQueries, const char[] error, int failIndex, any[] queryData)"
    },
    {
      "name": "SQLConnectCallback",
      "docStart": 12942,
      "docEnd": 13334,
      "type": "function void(Database db, const char[] error, any data)"
    },
    {
      "name": "SQLQueryCallback",
      "docStart": 13427,
      "docEnd": 13889,
      "type": "function void(Database db, DBResultSet results, const char[] error, any data)"
    },
    {
      "name": "SQLTCallback",
      "docStart": 38546,
      "docEnd": 39014,
      "type": "function void(Handle owner, Handle hndl, const char[] error, any data)"
    }
  ]
}