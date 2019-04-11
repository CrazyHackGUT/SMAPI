{
  "functions": [
    {
      "name": "FormatUserLogText",
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
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
        }
      ]
    },
    {
      "name": "FindPluginByFile",
      "docStart": 2070,
      "docEnd": 2257,
      "kind": "stock",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "const char[]",
          "name": "filename",
          "decl": "const char[] filename"
        }
      ]
    },
    {
      "name": "SearchForClients",
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "pattern",
          "decl": "const char[] pattern"
        },
        {
          "type": "int[]",
          "name": "clients",
          "decl": "int[] clients"
        },
        {
          "type": "int",
          "name": "maxClients",
          "decl": "int maxClients"
        }
      ]
    },
    {
      "name": "FindTarget",
      "docStart": 3707,
      "docEnd": 4092,
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "target",
          "decl": "const char[] target"
        },
        {
          "type": "bool",
          "name": "nobots",
          "decl": "bool nobots"
        },
        {
          "type": "bool",
          "name": "immunity",
          "decl": "bool immunity"
        }
      ]
    },
    {
      "name": "LoadMaps",
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "int&",
          "name": "fileTime",
          "decl": "int& fileTime"
        },
        {
          "type": "Handle",
          "name": "fileCvar",
          "decl": "Handle fileCvar"
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