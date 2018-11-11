{
  "functions": [
    {
      "name": "FindStringTable",
      "docStart": 1820,
      "docEnd": 1998,
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
      "docStart": 2050,
      "docEnd": 2185,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetStringTableNumStrings",
      "docStart": 2223,
      "docEnd": 2455,
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
      "docStart": 2511,
      "docEnd": 2742,
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
      "docStart": 2798,
      "docEnd": 3123,
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
      "docStart": 3201,
      "docEnd": 3464,
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
      "docStart": 3529,
      "docEnd": 3914,
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
      "docStart": 4003,
      "docEnd": 4309,
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
      "docStart": 4380,
      "docEnd": 4820,
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
      "docStart": 4917,
      "docEnd": 5340,
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
      "docStart": 5440,
      "docEnd": 5838,
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
      "docStart": 5946,
      "docEnd": 6202,
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
      "docStart": 6248,
      "docEnd": 6466,
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