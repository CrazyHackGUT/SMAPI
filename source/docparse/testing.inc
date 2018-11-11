{
  "functions": [
    {
      "name": "SetTestContext",
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "context",
          "decl": "const char[] context"
        }
      ]
    },
    {
      "name": "AssertEq",
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "text",
          "decl": "const char[] text"
        },
        {
          "type": "int",
          "name": "cell1",
          "decl": "int cell1"
        },
        {
          "type": "int",
          "name": "cell2",
          "decl": "int cell2"
        }
      ]
    },
    {
      "name": "AssertFalse",
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "text",
          "decl": "const char[] text"
        },
        {
          "type": "bool",
          "name": "value",
          "decl": "bool value"
        }
      ]
    },
    {
      "name": "AssertTrue",
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "text",
          "decl": "const char[] text"
        },
        {
          "type": "bool",
          "name": "value",
          "decl": "bool value"
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