{
  "functions": [
    {
      "name": "CreateDataPack",
      "docStart": 4078,
      "docEnd": 4207,
      "kind": "native",
      "returnType": "DataPack",
      "arguments": []
    },
    {
      "name": "WritePackCell",
      "docStart": 4246,
      "docEnd": 4429,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pack",
          "decl": "Handle pack"
        },
        {
          "type": "any",
          "name": "cell",
          "decl": "any cell"
        }
      ]
    },
    {
      "name": "WritePackFloat",
      "docStart": 4484,
      "docEnd": 4662,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pack",
          "decl": "Handle pack"
        },
        {
          "type": "float",
          "name": "val",
          "decl": "float val"
        }
      ]
    },
    {
      "name": "WritePackString",
      "docStart": 4719,
      "docEnd": 4899,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pack",
          "decl": "Handle pack"
        },
        {
          "type": "const char[]",
          "name": "str",
          "decl": "const char[] str"
        }
      ]
    },
    {
      "name": "WritePackFunction",
      "docStart": 4964,
      "docEnd": 5164,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pack",
          "decl": "Handle pack"
        },
        {
          "type": "function",
          "name": "fktptr",
          "decl": "function fktptr"
        }
      ]
    },
    {
      "name": "ReadPackCell",
      "docStart": 5230,
      "docEnd": 5422,
      "kind": "native",
      "returnType": "any",
      "arguments": [
        {
          "type": "Handle",
          "name": "pack",
          "decl": "Handle pack"
        }
      ]
    },
    {
      "name": "ReadPackFloat",
      "docStart": 5465,
      "docEnd": 5659,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "Handle",
          "name": "pack",
          "decl": "Handle pack"
        }
      ]
    },
    {
      "name": "ReadPackString",
      "docStart": 5705,
      "docEnd": 5979,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pack",
          "decl": "Handle pack"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        }
      ]
    },
    {
      "name": "ReadPackFunction",
      "docStart": 6052,
      "docEnd": 6262,
      "kind": "native",
      "returnType": "function",
      "arguments": [
        {
          "type": "Handle",
          "name": "pack",
          "decl": "Handle pack"
        }
      ]
    },
    {
      "name": "ResetPack",
      "docStart": 6314,
      "docEnd": 6518,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pack",
          "decl": "Handle pack"
        },
        {
          "type": "bool",
          "name": "clear",
          "decl": "bool clear"
        }
      ]
    },
    {
      "name": "GetPackPosition",
      "docStart": 6577,
      "docEnd": 6830,
      "kind": "native",
      "returnType": "DataPackPos",
      "arguments": [
        {
          "type": "Handle",
          "name": "pack",
          "decl": "Handle pack"
        }
      ]
    },
    {
      "name": "SetPackPosition",
      "docStart": 6884,
      "docEnd": 7189,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pack",
          "decl": "Handle pack"
        },
        {
          "type": "DataPackPos",
          "name": "position",
          "decl": "DataPackPos position"
        }
      ]
    },
    {
      "name": "IsPackReadable",
      "docStart": 7258,
      "docEnd": 7597,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "pack",
          "decl": "Handle pack"
        },
        {
          "type": "int",
          "name": "bytes",
          "decl": "int bytes"
        }
      ]
    }
  ],
  "methodmaps": [
    {
      "name": "DataPack",
      "docStart": 1737,
      "docEnd": 1810,
      "methods": [
        {
          "name": "DataPack",
          "docStart": 1845,
          "docEnd": 1872,
          "returnType": "DataPack",
          "arguments": []
        },
        {
          "name": "WriteCell",
          "docStart": 1905,
          "docEnd": 2084,
          "returnType": "void",
          "arguments": [
            {
              "type": "any",
              "name": "cell",
              "decl": "any cell"
            },
            {
              "type": "bool",
              "name": "insert",
              "decl": "bool insert"
            }
          ]
        },
        {
          "name": "WriteFloat",
          "docStart": 2152,
          "docEnd": 2326,
          "returnType": "void",
          "arguments": [
            {
              "type": "float",
              "name": "val",
              "decl": "float val"
            },
            {
              "type": "bool",
              "name": "insert",
              "decl": "bool insert"
            }
          ]
        },
        {
          "name": "WriteString",
          "docStart": 2396,
          "docEnd": 2572,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "str",
              "decl": "const char[] str"
            },
            {
              "type": "bool",
              "name": "insert",
              "decl": "bool insert"
            }
          ]
        },
        {
          "name": "WriteFunction",
          "docStart": 2650,
          "docEnd": 2846,
          "returnType": "void",
          "arguments": [
            {
              "type": "function",
              "name": "fktptr",
              "decl": "function fktptr"
            },
            {
              "type": "bool",
              "name": "insert",
              "decl": "bool insert"
            }
          ]
        },
        {
          "name": "ReadCell",
          "docStart": 2925,
          "docEnd": 3001,
          "returnType": "any",
          "arguments": []
        },
        {
          "name": "ReadFloat",
          "docStart": 3038,
          "docEnd": 3114,
          "returnType": "float",
          "arguments": []
        },
        {
          "name": "ReadString",
          "docStart": 3154,
          "docEnd": 3313,
          "returnType": "void",
          "arguments": [
            {
              "type": "char[]",
              "name": "buffer",
              "decl": "char[] buffer"
            },
            {
              "type": "int",
              "name": "maxlen",
              "decl": "int maxlen"
            }
          ]
        },
        {
          "name": "ReadFunction",
          "docStart": 3378,
          "docEnd": 3472,
          "returnType": "function",
          "arguments": []
        },
        {
          "name": "Reset",
          "docStart": 3518,
          "docEnd": 3623,
          "returnType": "void",
          "arguments": [
            {
              "type": "bool",
              "name": "clear",
              "decl": "bool clear"
            }
          ]
        },
        {
          "name": "IsReadable",
          "docStart": 3674,
          "docEnd": 3869,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "unused",
              "decl": "int unused"
            }
          ]
        }
      ],
      "properties": [
        {
          "name": "Position",
          "docStart": 3924,
          "docEnd": 3969,
          "type": "DataPackPos",
          "getter": true,
          "setter": true
        }
      ]
    }
  ],
  "enums": [
    {
      "name": "DataPackPos",
      "docStart": 1660,
      "docEnd": 1710,
      "entries": []
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}