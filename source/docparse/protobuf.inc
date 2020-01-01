{
  "functions": [
    {
      "name": "PbReadInt",
      "docStart": 13021,
      "docEnd": 13402,
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
      "docStart": 13495,
      "docEnd": 13844,
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
      "docStart": 13941,
      "docEnd": 14270,
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
      "docStart": 14365,
      "docEnd": 14768,
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
      "docStart": 14895,
      "docEnd": 15243,
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
      "docStart": 15354,
      "docEnd": 15701,
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
      "docStart": 15814,
      "docEnd": 16163,
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
      "docStart": 16277,
      "docEnd": 16625,
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
      "docStart": 16741,
      "docEnd": 17064,
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
      "docStart": 17136,
      "docEnd": 17516,
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
      "docStart": 17620,
      "docEnd": 17957,
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
      "docStart": 18065,
      "docEnd": 18393,
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
      "docStart": 18499,
      "docEnd": 18828,
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
      "docStart": 18944,
      "docEnd": 19277,
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
      "docStart": 19392,
      "docEnd": 19724,
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
      "docStart": 19841,
      "docEnd": 20175,
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
      "docStart": 20291,
      "docEnd": 20624,
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
      "docStart": 20742,
      "docEnd": 21084,
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
      "docStart": 21153,
      "docEnd": 21452,
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
      "docStart": 21525,
      "docEnd": 21815,
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
      "docStart": 21886,
      "docEnd": 22177,
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
      "docStart": 22258,
      "docEnd": 22553,
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
      "docStart": 22633,
      "docEnd": 22927,
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
      "docStart": 23009,
      "docEnd": 23305,
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
      "docStart": 23386,
      "docEnd": 23681,
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
      "docStart": 23764,
      "docEnd": 24075,
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
      "docStart": 24162,
      "docEnd": 24491,
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
      "docStart": 24556,
      "docEnd": 24954,
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
      "docStart": 25038,
      "docEnd": 25373,
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
          "docStart": 1721,
          "docEnd": 2014,
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
          "name": "ReadInt64",
          "docStart": 2103,
          "docEnd": 2425,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "int[2]",
              "name": "value",
              "decl": "int value[2]"
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
          "docStart": 2531,
          "docEnd": 2792,
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
          "docStart": 2885,
          "docEnd": 3126,
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
          "docStart": 3217,
          "docEnd": 3530,
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
          "docStart": 3653,
          "docEnd": 3913,
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
          "docStart": 4020,
          "docEnd": 4279,
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
          "docStart": 4388,
          "docEnd": 4689,
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
          "docStart": 4799,
          "docEnd": 5059,
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
          "docStart": 5171,
          "docEnd": 5406,
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
          "docStart": 5474,
          "docEnd": 5711,
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
          "docStart": 5767,
          "docEnd": 6059,
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
            },
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "SetInt64",
          "docStart": 6159,
          "docEnd": 6468,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "int[2]",
              "name": "value",
              "decl": "int value[2]"
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
          "docStart": 6573,
          "docEnd": 6822,
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
          "docStart": 6926,
          "docEnd": 7166,
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
          "docStart": 7268,
          "docEnd": 7509,
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
          "docStart": 7621,
          "docEnd": 7866,
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
          "docStart": 7977,
          "docEnd": 8221,
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
          "docStart": 8334,
          "docEnd": 8580,
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
          "docStart": 8692,
          "docEnd": 8937,
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
          "docStart": 9051,
          "docEnd": 9307,
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
          "name": "AddInt64",
          "docStart": 9372,
          "docEnd": 9645,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "field",
              "decl": "const char[] field"
            },
            {
              "type": "int[2]",
              "name": "value",
              "decl": "int value[2]"
            }
          ]
        },
        {
          "name": "AddFloat",
          "docStart": 9715,
          "docEnd": 9928,
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
          "docStart": 9997,
          "docEnd": 10201,
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
          "docStart": 10268,
          "docEnd": 10473,
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
          "docStart": 10550,
          "docEnd": 10759,
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
          "docStart": 10835,
          "docEnd": 11043,
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
          "docStart": 11121,
          "docEnd": 11331,
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
          "docStart": 11408,
          "docEnd": 11617,
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
          "docStart": 11696,
          "docEnd": 11921,
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
          "docStart": 12004,
          "docEnd": 12247,
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
          "docStart": 12310,
          "docEnd": 12625,
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
          "docStart": 12707,
          "docEnd": 12956,
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