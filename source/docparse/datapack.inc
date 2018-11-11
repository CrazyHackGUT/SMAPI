{
  "functions": [
    {
      "name": "CreateDataPack",
      "docStart": 3990,
      "docEnd": 4108,
      "kind": "native",
      "returnType": "DataPack",
      "arguments": []
    },
    {
      "name": "WritePackCell",
      "docStart": 4147,
      "docEnd": 4302,
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
      "docStart": 4357,
      "docEnd": 4506,
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
      "docStart": 4563,
      "docEnd": 4714,
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
      "docStart": 4779,
      "docEnd": 4952,
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
      "docStart": 5018,
      "docEnd": 5179,
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
      "docStart": 5222,
      "docEnd": 5385,
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
      "docStart": 5431,
      "docEnd": 5671,
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
      "docStart": 5744,
      "docEnd": 5923,
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
      "docStart": 5975,
      "docEnd": 6152,
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
      "docStart": 6211,
      "docEnd": 6433,
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
      "docStart": 6487,
      "docEnd": 6767,
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
      "docStart": 6836,
      "docEnd": 7138,
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
      "docStart": 1738,
      "docEnd": 1811,
      "methods": [
        {
          "name": "DataPack",
          "docStart": 1846,
          "docEnd": 1873,
          "returnType": "DataPack",
          "arguments": []
        },
        {
          "name": "WriteCell",
          "docStart": 1906,
          "docEnd": 2070,
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
          "docStart": 2138,
          "docEnd": 2296,
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
          "docStart": 2366,
          "docEnd": 2526,
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
          "docStart": 2604,
          "docEnd": 2786,
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
          "docStart": 2865,
          "docEnd": 2946,
          "returnType": "any",
          "arguments": []
        },
        {
          "name": "ReadFloat",
          "docStart": 2983,
          "docEnd": 3065,
          "returnType": "float",
          "arguments": []
        },
        {
          "name": "ReadString",
          "docStart": 3105,
          "docEnd": 3250,
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
          "docStart": 3315,
          "docEnd": 3398,
          "returnType": "function",
          "arguments": []
        },
        {
          "name": "Reset",
          "docStart": 3444,
          "docEnd": 3542,
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
          "docStart": 3593,
          "docEnd": 3781,
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
          "docStart": 3836,
          "docEnd": 3881,
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