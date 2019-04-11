{
  "functions": [
    {
      "name": "PbReadInt",
      "docStart": 13041,
      "docEnd": 13380,
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
      "docStart": 13473,
      "docEnd": 13780,
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
      "docStart": 13877,
      "docEnd": 14164,
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
      "docStart": 14259,
      "docEnd": 14621,
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
      "docStart": 14748,
      "docEnd": 15058,
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
      "docStart": 15169,
      "docEnd": 15478,
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
      "docStart": 15591,
      "docEnd": 15902,
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
      "docStart": 16016,
      "docEnd": 16326,
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
      "docStart": 16442,
      "docEnd": 16729,
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
      "docStart": 16801,
      "docEnd": 17143,
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
      "docStart": 17247,
      "docEnd": 17546,
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
      "docStart": 17654,
      "docEnd": 17944,
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
      "docStart": 18050,
      "docEnd": 18341,
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
      "docStart": 18457,
      "docEnd": 18752,
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
      "docStart": 18867,
      "docEnd": 19161,
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
      "docStart": 19278,
      "docEnd": 19572,
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
      "docStart": 19688,
      "docEnd": 19981,
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
      "docStart": 20099,
      "docEnd": 20409,
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
      "docStart": 20478,
      "docEnd": 20745,
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
      "docStart": 20818,
      "docEnd": 21076,
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
      "docStart": 21147,
      "docEnd": 21406,
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
      "docStart": 21487,
      "docEnd": 21750,
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
      "docStart": 21830,
      "docEnd": 22092,
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
      "docStart": 22174,
      "docEnd": 22436,
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
      "docStart": 22517,
      "docEnd": 22778,
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
      "docStart": 22861,
      "docEnd": 23140,
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
      "docStart": 23228,
      "docEnd": 23521,
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
      "docStart": 23587,
      "docEnd": 23943,
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
      "docStart": 24028,
      "docEnd": 24327,
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
          "name": "ReadInt64",
          "docStart": 2106,
          "docEnd": 2429,
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
          "docStart": 2535,
          "docEnd": 2796,
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
          "docStart": 2889,
          "docEnd": 3131,
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
          "docStart": 3222,
          "docEnd": 3536,
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
          "docStart": 3659,
          "docEnd": 3920,
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
          "docStart": 4027,
          "docEnd": 4286,
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
          "docStart": 4395,
          "docEnd": 4697,
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
          "docStart": 4807,
          "docEnd": 5067,
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
          "docStart": 5179,
          "docEnd": 5414,
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
          "docStart": 5483,
          "docEnd": 5720,
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
          "docStart": 5776,
          "docEnd": 6068,
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
          "docStart": 6169,
          "docEnd": 6479,
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
          "docStart": 6584,
          "docEnd": 6833,
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
          "docStart": 6937,
          "docEnd": 7178,
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
          "docStart": 7280,
          "docEnd": 7521,
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
          "docStart": 7633,
          "docEnd": 7879,
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
          "docStart": 7990,
          "docEnd": 8235,
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
          "docStart": 8348,
          "docEnd": 8595,
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
          "docStart": 8707,
          "docEnd": 8952,
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
          "docStart": 9066,
          "docEnd": 9322,
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
          "docStart": 9388,
          "docEnd": 9662,
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
          "docStart": 9732,
          "docEnd": 9946,
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
          "docStart": 10015,
          "docEnd": 10219,
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
          "docStart": 10286,
          "docEnd": 10491,
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
          "docStart": 10568,
          "docEnd": 10778,
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
          "docStart": 10854,
          "docEnd": 11063,
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
          "docStart": 11141,
          "docEnd": 11351,
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
          "docStart": 11428,
          "docEnd": 11637,
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
          "docStart": 11716,
          "docEnd": 11941,
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
          "docStart": 12024,
          "docEnd": 12267,
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
          "docStart": 12330,
          "docEnd": 12645,
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
          "docStart": 12727,
          "docEnd": 12976,
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