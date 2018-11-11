{
  "functions": [
    {
      "name": "SetNextMap",
      "docStart": 1643,
      "docEnd": 1869,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "map",
          "decl": "const char[] map"
        }
      ]
    },
    {
      "name": "GetNextMap",
      "docStart": 1916,
      "docEnd": 2174,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "char[]",
          "name": "map",
          "decl": "char[] map"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        }
      ]
    },
    {
      "name": "ForceChangeLevel",
      "docStart": 2227,
      "docEnd": 2392,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "map",
          "decl": "const char[] map"
        },
        {
          "type": "const char[]",
          "name": "reason",
          "decl": "const char[] reason"
        }
      ]
    },
    {
      "name": "GetMapHistorySize",
      "docStart": 2466,
      "docEnd": 2563,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetMapHistory",
      "docStart": 2600,
      "docEnd": 3020,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "item",
          "decl": "int item"
        },
        {
          "type": "char[]",
          "name": "map",
          "decl": "char[] map"
        },
        {
          "type": "int",
          "name": "mapLen",
          "decl": "int mapLen"
        },
        {
          "type": "char[]",
          "name": "reason",
          "decl": "char[] reason"
        },
        {
          "type": "int",
          "name": "reasonLen",
          "decl": "int reasonLen"
        },
        {
          "type": "int&",
          "name": "startTime",
          "decl": "int& startTime"
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