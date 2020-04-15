{
  "functions": [
    {
      "name": "FindStringTable",
      "docStart": 1824,
      "docEnd": 2019,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "GetNumStringTables",
      "docStart": 2071,
      "docEnd": 2216,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetStringTableNumStrings",
      "docStart": 2254,
      "docEnd": 2511,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "tableidx",
          "decl": "int tableidx"
        }
      ]
    },
    {
      "name": "GetStringTableMaxStrings",
      "docStart": 2567,
      "docEnd": 2823,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "tableidx",
          "decl": "int tableidx"
        }
      ]
    },
    {
      "name": "GetStringTableName",
      "docStart": 2879,
      "docEnd": 3239,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "tableidx",
          "decl": "int tableidx"
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
      "name": "FindStringIndex",
      "docStart": 3317,
      "docEnd": 3614,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "tableidx",
          "decl": "int tableidx"
        },
        {
          "type": "const char[]",
          "name": "str",
          "decl": "const char[] str"
        }
      ]
    },
    {
      "name": "ReadStringTable",
      "docStart": 3679,
      "docEnd": 4103,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "tableidx",
          "decl": "int tableidx"
        },
        {
          "type": "int",
          "name": "stringidx",
          "decl": "int stringidx"
        },
        {
          "type": "char[]",
          "name": "str",
          "decl": "char[] str"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "GetStringTableDataLength",
      "docStart": 4192,
      "docEnd": 4526,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "tableidx",
          "decl": "int tableidx"
        },
        {
          "type": "int",
          "name": "stringidx",
          "decl": "int stringidx"
        }
      ]
    },
    {
      "name": "GetStringTableData",
      "docStart": 4597,
      "docEnd": 5102,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "tableidx",
          "decl": "int tableidx"
        },
        {
          "type": "int",
          "name": "stringidx",
          "decl": "int stringidx"
        },
        {
          "type": "char[]",
          "name": "userdata",
          "decl": "char[] userdata"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "SetStringTableData",
      "docStart": 5199,
      "docEnd": 5583,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "tableidx",
          "decl": "int tableidx"
        },
        {
          "type": "int",
          "name": "stringidx",
          "decl": "int stringidx"
        },
        {
          "type": "const char[]",
          "name": "userdata",
          "decl": "const char[] userdata"
        },
        {
          "type": "int",
          "name": "length",
          "decl": "int length"
        }
      ]
    },
    {
      "name": "AddToStringTable",
      "docStart": 5684,
      "docEnd": 6137,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "tableidx",
          "decl": "int tableidx"
        },
        {
          "type": "const char[]",
          "name": "str",
          "decl": "const char[] str"
        },
        {
          "type": "const char[]",
          "name": "userdata",
          "decl": "const char[] userdata"
        },
        {
          "type": "int",
          "name": "length",
          "decl": "int length"
        }
      ]
    },
    {
      "name": "LockStringTables",
      "docStart": 6245,
      "docEnd": 6534,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "bool",
          "name": "lock",
          "decl": "bool lock"
        }
      ]
    },
    {
      "name": "AddFileToDownloadsTable",
      "docStart": 6580,
      "docEnd": 6802,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "filename",
          "decl": "const char[] filename"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [],
  "constants": [],
  "typesets": [],
  "typedefs": []
}