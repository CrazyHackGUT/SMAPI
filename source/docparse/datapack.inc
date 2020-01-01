{
  "functions": [
    {
      "name": "CreateDataPack",
      "docStart": 4105,
      "docEnd": 4234,
      "kind": "native",
      "returnType": "DataPack",
      "arguments": []
    },
    {
      "name": "WritePackCell",
      "docStart": 4273,
      "docEnd": 4456,
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
      "docStart": 4511,
      "docEnd": 4689,
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
      "docStart": 4746,
      "docEnd": 4926,
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
      "docStart": 4991,
      "docEnd": 5191,
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
      "docStart": 5257,
      "docEnd": 5449,
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
      "docStart": 5492,
      "docEnd": 5686,
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
      "docStart": 5732,
      "docEnd": 6006,
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
      "docStart": 6079,
      "docEnd": 6289,
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
      "docStart": 6341,
      "docEnd": 6545,
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
      "docStart": 6604,
      "docEnd": 6857,
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
      "docStart": 6911,
      "docEnd": 7216,
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
      "docStart": 7285,
      "docEnd": 7624,
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
          "docEnd": 3014,
          "returnType": "any",
          "arguments": []
        },
        {
          "name": "ReadFloat",
          "docStart": 3051,
          "docEnd": 3141,
          "returnType": "float",
          "arguments": []
        },
        {
          "name": "ReadString",
          "docStart": 3181,
          "docEnd": 3340,
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
          "docStart": 3405,
          "docEnd": 3499,
          "returnType": "function",
          "arguments": []
        },
        {
          "name": "Reset",
          "docStart": 3545,
          "docEnd": 3650,
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
          "docStart": 3701,
          "docEnd": 3896,
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
          "docStart": 3951,
          "docEnd": 3996,
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