{
  "functions": [
    {
      "name": "CreateDataPack",
      "docStart": 5165,
      "docEnd": 5294,
      "kind": "native",
      "returnType": "DataPack",
      "arguments": []
    },
    {
      "name": "WritePackCell",
      "docStart": 5333,
      "docEnd": 5516,
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
      "docStart": 5571,
      "docEnd": 5749,
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
      "docStart": 5806,
      "docEnd": 5986,
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
      "docStart": 6051,
      "docEnd": 6251,
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
      "docStart": 6317,
      "docEnd": 6509,
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
      "docStart": 6552,
      "docEnd": 6746,
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
      "docStart": 6792,
      "docEnd": 7066,
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
      "docStart": 7139,
      "docEnd": 7349,
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
      "docStart": 7401,
      "docEnd": 7605,
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
      "docStart": 7664,
      "docEnd": 7917,
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
      "docStart": 7971,
      "docEnd": 8276,
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
      "docStart": 8345,
      "docEnd": 8684,
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
          "name": "WriteCellArray",
          "docStart": 2925,
          "docEnd": 3154,
          "returnType": "void",
          "arguments": [
            {
              "type": "const any[]",
              "name": "array",
              "decl": "const any[] array"
            },
            {
              "type": "int",
              "name": "count",
              "decl": "int count"
            },
            {
              "type": "bool",
              "name": "insert",
              "decl": "bool insert"
            }
          ]
        },
        {
          "name": "WriteFloatArray",
          "docStart": 3247,
          "docEnd": 3477,
          "returnType": "void",
          "arguments": [
            {
              "type": "const float[]",
              "name": "array",
              "decl": "const float[] array"
            },
            {
              "type": "int",
              "name": "count",
              "decl": "int count"
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
          "docStart": 3573,
          "docEnd": 3649,
          "returnType": "any",
          "arguments": []
        },
        {
          "name": "ReadFloat",
          "docStart": 3686,
          "docEnd": 3762,
          "returnType": "float",
          "arguments": []
        },
        {
          "name": "ReadString",
          "docStart": 3802,
          "docEnd": 3961,
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
          "docStart": 4026,
          "docEnd": 4120,
          "returnType": "function",
          "arguments": []
        },
        {
          "name": "ReadCellArray",
          "docStart": 4166,
          "docEnd": 4315,
          "returnType": "void",
          "arguments": [
            {
              "type": "any[]",
              "name": "buffer",
              "decl": "any[] buffer"
            },
            {
              "type": "int",
              "name": "count",
              "decl": "int count"
            }
          ]
        },
        {
          "name": "ReadFloatArray",
          "docStart": 4381,
          "docEnd": 4536,
          "returnType": "void",
          "arguments": [
            {
              "type": "float[]",
              "name": "buffer",
              "decl": "float[] buffer"
            },
            {
              "type": "int",
              "name": "count",
              "decl": "int count"
            }
          ]
        },
        {
          "name": "Reset",
          "docStart": 4605,
          "docEnd": 4710,
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
          "docStart": 4761,
          "docEnd": 4956,
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
          "docStart": 5011,
          "docEnd": 5056,
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