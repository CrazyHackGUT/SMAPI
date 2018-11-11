{
  "functions": [
    {
      "name": "GetCommandLine",
      "docStart": 1614,
      "docEnd": 1934,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "char[]",
          "name": "commandLine",
          "decl": "char[] commandLine"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        }
      ]
    },
    {
      "name": "GetCommandLineParam",
      "docStart": 1996,
      "docEnd": 2397,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "param",
          "decl": "const char[] param"
        },
        {
          "type": "char[]",
          "name": "value",
          "decl": "char[] value"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        },
        {
          "type": "const char[]",
          "name": "defValue",
          "decl": "const char[] defValue"
        }
      ]
    },
    {
      "name": "GetCommandLineParamInt",
      "docStart": 2504,
      "docEnd": 2863,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "param",
          "decl": "const char[] param"
        },
        {
          "type": "int",
          "name": "defValue",
          "decl": "int defValue"
        }
      ]
    },
    {
      "name": "GetCommandLineParamFloat",
      "docStart": 2936,
      "docEnd": 3302,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "const char[]",
          "name": "param",
          "decl": "const char[] param"
        },
        {
          "type": "float",
          "name": "defValue",
          "decl": "float defValue"
        }
      ]
    },
    {
      "name": "FindCommandLineParam",
      "docStart": 3383,
      "docEnd": 3647,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "param",
          "decl": "const char[] param"
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