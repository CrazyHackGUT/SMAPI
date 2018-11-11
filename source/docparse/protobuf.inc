{
  "functions": [
    {
      "name": "PbReadInt",
      "docStart": 11849,
      "docEnd": 12188,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbReadFloat",
      "docStart": 12281,
      "docEnd": 12588,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbReadBool",
      "docStart": 12685,
      "docEnd": 12972,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbReadString",
      "docStart": 13067,
      "docEnd": 13429,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
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
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbReadColor",
      "docStart": 13556,
      "docEnd": 13866,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "int[4]",
          "name": "buffer",
          "decl": "int buffer[4]"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbReadAngle",
      "docStart": 13977,
      "docEnd": 14286,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "float[3]",
          "name": "buffer",
          "decl": "float buffer[3]"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbReadVector",
      "docStart": 14399,
      "docEnd": 14710,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "float[3]",
          "name": "buffer",
          "decl": "float buffer[3]"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbReadVector2D",
      "docStart": 14824,
      "docEnd": 15134,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "float[2]",
          "name": "buffer",
          "decl": "float buffer[2]"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbGetRepeatedFieldCount",
      "docStart": 15250,
      "docEnd": 15537,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        }
      ]
    },
    {
      "name": "PbSetInt",
      "docStart": 15609,
      "docEnd": 15951,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "int",
          "name": "value",
          "decl": "int value"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbSetFloat",
      "docStart": 16055,
      "docEnd": 16354,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "float",
          "name": "value",
          "decl": "float value"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbSetBool",
      "docStart": 16462,
      "docEnd": 16752,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "bool",
          "name": "value",
          "decl": "bool value"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbSetString",
      "docStart": 16858,
      "docEnd": 17149,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "const char[]",
          "name": "value",
          "decl": "const char[] value"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbSetColor",
      "docStart": 17265,
      "docEnd": 17560,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "const int[4]",
          "name": "color",
          "decl": "const int color[4]"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbSetAngle",
      "docStart": 17675,
      "docEnd": 17969,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "const float[3]",
          "name": "angle",
          "decl": "const float angle[3]"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbSetVector",
      "docStart": 18086,
      "docEnd": 18380,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbSetVector2D",
      "docStart": 18496,
      "docEnd": 18789,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "const float[2]",
          "name": "vec",
          "decl": "const float vec[2]"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbAddInt",
      "docStart": 18907,
      "docEnd": 19217,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "int",
          "name": "value",
          "decl": "int value"
        }
      ]
    },
    {
      "name": "PbAddFloat",
      "docStart": 19286,
      "docEnd": 19553,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "float",
          "name": "value",
          "decl": "float value"
        }
      ]
    },
    {
      "name": "PbAddBool",
      "docStart": 19626,
      "docEnd": 19884,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "bool",
          "name": "value",
          "decl": "bool value"
        }
      ]
    },
    {
      "name": "PbAddString",
      "docStart": 19955,
      "docEnd": 20214,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "const char[]",
          "name": "value",
          "decl": "const char[] value"
        }
      ]
    },
    {
      "name": "PbAddColor",
      "docStart": 20295,
      "docEnd": 20558,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "const int[4]",
          "name": "color",
          "decl": "const int color[4]"
        }
      ]
    },
    {
      "name": "PbAddAngle",
      "docStart": 20638,
      "docEnd": 20900,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "const float[3]",
          "name": "angle",
          "decl": "const float angle[3]"
        }
      ]
    },
    {
      "name": "PbAddVector",
      "docStart": 20982,
      "docEnd": 21244,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        }
      ]
    },
    {
      "name": "PbAddVector2D",
      "docStart": 21325,
      "docEnd": 21586,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "const float[2]",
          "name": "vec",
          "decl": "const float vec[2]"
        }
      ]
    },
    {
      "name": "PbRemoveRepeatedFieldValue",
      "docStart": 21669,
      "docEnd": 21948,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbReadMessage",
      "docStart": 22036,
      "docEnd": 22329,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        }
      ]
    },
    {
      "name": "PbReadRepeatedMessage",
      "docStart": 22395,
      "docEnd": 22751,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "PbAddMessage",
      "docStart": 22836,
      "docEnd": 23135,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "Handle",
          "name": "pb",
          "decl": "Handle pb"
        },
        {
          "type": "const char[]",
          "name": "field",
          "decl": "const char[] field"
        }
      ]
    }
  ],
  "methodmaps": [
    {
      "name": "Protobuf",
      "methods": [
        {
          "name": "ReadInt",
          "docStart": 1722,
          "docEnd": 2016,
          "returnType": "int",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "ReadFloat",
          "docStart": 2105,
          "docEnd": 2366,
          "returnType": "float",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "ReadBool",
          "docStart": 2459,
          "docEnd": 2701,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "ReadString",
          "docStart": 2792,
          "docEnd": 3106,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
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
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "ReadColor",
          "docStart": 3229,
          "docEnd": 3490,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "int[4]",
              "name": "buffer",
              "decl": "int buffer[4]"
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "ReadAngle",
          "docStart": 3597,
          "docEnd": 3856,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "float[3]",
              "name": "buffer",
              "decl": "float buffer[3]"
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "ReadVector",
          "docStart": 3965,
          "docEnd": 4267,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "float[3]",
              "name": "buffer",
              "decl": "float buffer[3]"
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "ReadVector2D",
          "docStart": 4377,
          "docEnd": 4637,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "float[2]",
              "name": "buffer",
              "decl": "float buffer[2]"
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "GetRepeatedFieldCount",
          "docStart": 4749,
          "docEnd": 4984,
          "returnType": "int",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            }
          ]
        },
        {
          "name": "HasField",
          "docStart": 5053,
          "docEnd": 5290,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            }
          ]
        },
        {
          "name": "SetInt",
          "docStart": 5346,
          "docEnd": 5638,
          "returnType": "int",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "int",
              "name": "value",
              "decl": "int value"
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "SetFloat",
          "docStart": 5737,
          "docEnd": 5986,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "float",
              "name": "value",
              "decl": "float value"
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "SetBool",
          "docStart": 6090,
          "docEnd": 6331,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "bool",
              "name": "value",
              "decl": "bool value"
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "SetString",
          "docStart": 6433,
          "docEnd": 6674,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "const char[]",
              "name": "value",
              "decl": "const char[] value"
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "SetColor",
          "docStart": 6786,
          "docEnd": 7032,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "const int[4]",
              "name": "color",
              "decl": "const int color[4]"
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "SetAngle",
          "docStart": 7143,
          "docEnd": 7388,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "const float[3]",
              "name": "angle",
              "decl": "const float angle[3]"
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "SetVector",
          "docStart": 7501,
          "docEnd": 7748,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "const float[3]",
              "name": "vec",
              "decl": "const float vec[3]"
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "SetVector2D",
          "docStart": 7860,
          "docEnd": 8105,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "const float[2]",
              "name": "vec",
              "decl": "const float vec[2]"
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "AddInt",
          "docStart": 8219,
          "docEnd": 8475,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "int",
              "name": "value",
              "decl": "int value"
            }
          ]
        },
        {
          "name": "AddFloat",
          "docStart": 8540,
          "docEnd": 8754,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "float",
              "name": "value",
              "decl": "float value"
            }
          ]
        },
        {
          "name": "AddBool",
          "docStart": 8823,
          "docEnd": 9027,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "bool",
              "name": "value",
              "decl": "bool value"
            }
          ]
        },
        {
          "name": "AddString",
          "docStart": 9094,
          "docEnd": 9299,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "const char[]",
              "name": "value",
              "decl": "const char[] value"
            }
          ]
        },
        {
          "name": "AddColor",
          "docStart": 9376,
          "docEnd": 9586,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "const int[4]",
              "name": "color",
              "decl": "const int color[4]"
            }
          ]
        },
        {
          "name": "AddAngle",
          "docStart": 9662,
          "docEnd": 9871,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "const float[3]",
              "name": "angle",
              "decl": "const float angle[3]"
            }
          ]
        },
        {
          "name": "AddVector",
          "docStart": 9949,
          "docEnd": 10159,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "const float[3]",
              "name": "vec",
              "decl": "const float vec[3]"
            }
          ]
        },
        {
          "name": "AddVector2D",
          "docStart": 10236,
          "docEnd": 10445,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "const float[2]",
              "name": "vec",
              "decl": "const float vec[2]"
            }
          ]
        },
        {
          "name": "RemoveRepeatedFieldValue",
          "docStart": 10524,
          "docEnd": 10749,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "ReadMessage",
          "docStart": 10832,
          "docEnd": 11075,
          "returnType": "Protobuf",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            }
          ]
        },
        {
          "name": "ReadRepeatedMessage",
          "docStart": 11138,
          "docEnd": 11453,
          "returnType": "Protobuf",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "AddMessage",
          "docStart": 11535,
          "docEnd": 11784,
          "returnType": "Protobuf",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            }
          ]
        }
      ],
      "properties": []
    }
  ],
  "enums": [],
  "constants": [],
  "typesets": [],
  "typedefs": []
}