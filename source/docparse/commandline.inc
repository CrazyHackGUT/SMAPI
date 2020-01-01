{
  "functions": [
    {
      "name": "GetCommandLine",
      "docStart": 1613,
      "docEnd": 1958,
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
      "docStart": 2020,
      "docEnd": 2459,
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
      "docStart": 2566,
      "docEnd": 2960,
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
      "docStart": 3033,
      "docEnd": 3434,
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
      "docStart": 3515,
      "docEnd": 3809,
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