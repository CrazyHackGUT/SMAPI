{
  "functions": [
    {
      "name": "SetNextMap",
      "docStart": 1641,
      "docEnd": 1886,
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
      "docStart": 1933,
      "docEnd": 2218,
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
      "docStart": 2271,
      "docEnd": 2452,
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
      "docStart": 2526,
      "docEnd": 2634,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetMapHistory",
      "docStart": 2671,
      "docEnd": 3133,
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