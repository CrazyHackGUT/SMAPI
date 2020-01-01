{
  "functions": [
    {
      "name": "CreateKeyValues",
      "docStart": 14282,
      "docEnd": 14637,
      "kind": "native",
      "returnType": "KeyValues",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "const char[]",
          "name": "firstKey",
          "decl": "const char[] firstKey"
        },
        {
          "type": "const char[]",
          "name": "firstValue",
          "decl": "const char[] firstValue"
        }
      ]
    },
    {
      "name": "KvSetString",
      "docStart": 14749,
      "docEnd": 14986,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "const char[]",
          "name": "value",
          "decl": "const char[] value"
        }
      ]
    },
    {
      "name": "KvSetNum",
      "docStart": 15065,
      "docEnd": 15304,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "int",
          "name": "value",
          "decl": "int value"
        }
      ]
    },
    {
      "name": "KvSetUInt64",
      "docStart": 15371,
      "docEnd": 15647,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "const int[2]",
          "name": "value",
          "decl": "const int value[2]"
        }
      ]
    },
    {
      "name": "KvSetFloat",
      "docStart": 15726,
      "docEnd": 15979,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "float",
          "name": "value",
          "decl": "float value"
        }
      ]
    },
    {
      "name": "KvSetColor",
      "docStart": 16050,
      "docEnd": 16404,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "int",
          "name": "r",
          "decl": "int r"
        },
        {
          "type": "int",
          "name": "g",
          "decl": "int g"
        },
        {
          "type": "int",
          "name": "b",
          "decl": "int b"
        },
        {
          "type": "int",
          "name": "a",
          "decl": "int a"
        }
      ]
    },
    {
      "name": "KvSetVector",
      "docStart": 16492,
      "docEnd": 16729,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        }
      ]
    },
    {
      "name": "KvGetString",
      "docStart": 16808,
      "docEnd": 17209,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "char[]",
          "name": "value",
          "decl": "char[] value"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "const char[]",
          "name": "defvalue",
          "decl": "const char[] defvalue"
        }
      ]
    },
    {
      "name": "KvGetNum",
      "docStart": 17323,
      "docEnd": 17661,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "int",
          "name": "defvalue",
          "decl": "int defvalue"
        }
      ]
    },
    {
      "name": "KvGetFloat",
      "docStart": 17732,
      "docEnd": 18083,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "float",
          "name": "defvalue",
          "decl": "float defvalue"
        }
      ]
    },
    {
      "name": "KvGetColor",
      "docStart": 18162,
      "docEnd": 18595,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "int&",
          "name": "r",
          "decl": "int& r"
        },
        {
          "type": "int&",
          "name": "g",
          "decl": "int& g"
        },
        {
          "type": "int&",
          "name": "b",
          "decl": "int& b"
        },
        {
          "type": "int&",
          "name": "a",
          "decl": "int& a"
        }
      ]
    },
    {
      "name": "KvGetUInt64",
      "docStart": 18685,
      "docEnd": 19040,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "int[2]",
          "name": "value",
          "decl": "int value[2]"
        },
        {
          "type": "int[2]",
          "name": "defvalue",
          "decl": "int defvalue[2]"
        }
      ]
    },
    {
      "name": "KvGetVector",
      "docStart": 19136,
      "docEnd": 19488,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "float[3]",
          "name": "vec",
          "decl": "float vec[3]"
        },
        {
          "type": "const float[3]",
          "name": "defvalue",
          "decl": "const float defvalue[3]"
        }
      ]
    },
    {
      "name": "KvJumpToKey",
      "docStart": 19602,
      "docEnd": 19942,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "bool",
          "name": "create",
          "decl": "bool create"
        }
      ]
    },
    {
      "name": "KvJumpToKeySymbol",
      "docStart": 20020,
      "docEnd": 20255,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "int",
          "name": "id",
          "decl": "int id"
        }
      ]
    },
    {
      "name": "KvGotoFirstSubKey",
      "docStart": 20310,
      "docEnd": 20685,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "bool",
          "name": "keyOnly",
          "decl": "bool keyOnly"
        }
      ]
    },
    {
      "name": "KvGotoNextKey",
      "docStart": 20751,
      "docEnd": 21213,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "bool",
          "name": "keyOnly",
          "decl": "bool keyOnly"
        }
      ]
    },
    {
      "name": "KvSavePosition",
      "docStart": 21275,
      "docEnd": 21571,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        }
      ]
    },
    {
      "name": "KvDeleteKey",
      "docStart": 21615,
      "docEnd": 21876,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        }
      ]
    },
    {
      "name": "KvDeleteThis",
      "docStart": 21935,
      "docEnd": 22724,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        }
      ]
    },
    {
      "name": "KvGoBack",
      "docStart": 22765,
      "docEnd": 23223,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        }
      ]
    },
    {
      "name": "KvRewind",
      "docStart": 23261,
      "docEnd": 23542,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        }
      ]
    },
    {
      "name": "KvGetSectionName",
      "docStart": 23580,
      "docEnd": 23895,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "char[]",
          "name": "section",
          "decl": "char[] section"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "KvSetSectionName",
      "docStart": 23972,
      "docEnd": 24142,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "section",
          "decl": "const char[] section"
        }
      ]
    },
    {
      "name": "KvGetDataType",
      "docStart": 24210,
      "docEnd": 24431,
      "kind": "native",
      "returnType": "KvDataTypes",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        }
      ]
    },
    {
      "name": "KeyValuesToFile",
      "docStart": 24499,
      "docEnd": 24794,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "file",
          "decl": "const char[] file"
        }
      ]
    },
    {
      "name": "FileToKeyValues",
      "docStart": 24858,
      "docEnd": 25159,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "file",
          "decl": "const char[] file"
        }
      ]
    },
    {
      "name": "StringToKeyValues",
      "docStart": 25223,
      "docEnd": 25651,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "buffer",
          "decl": "const char[] buffer"
        },
        {
          "type": "const char[]",
          "name": "resourceName",
          "decl": "const char[] resourceName"
        }
      ]
    },
    {
      "name": "KvSetEscapeSequences",
      "docStart": 25766,
      "docEnd": 26115,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "bool",
          "name": "useEscapes",
          "decl": "bool useEscapes"
        }
      ]
    },
    {
      "name": "KvNodesInStack",
      "docStart": 26182,
      "docEnd": 26511,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        }
      ]
    },
    {
      "name": "KvCopySubkeys",
      "docStart": 26554,
      "docEnd": 26888,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "origin",
          "decl": "Handle origin"
        },
        {
          "type": "Handle",
          "name": "dest",
          "decl": "Handle dest"
        }
      ]
    },
    {
      "name": "KvFindKeyById",
      "docStart": 26948,
      "docEnd": 27294,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "int",
          "name": "id",
          "decl": "int id"
        },
        {
          "type": "char[]",
          "name": "name",
          "decl": "char[] name"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "KvGetNameSymbol",
      "docStart": 27373,
      "docEnd": 27671,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "int&",
          "name": "id",
          "decl": "int& id"
        }
      ]
    },
    {
      "name": "KvGetSectionSymbol",
      "docStart": 27743,
      "docEnd": 27989,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "int&",
          "name": "id",
          "decl": "int& id"
        }
      ]
    }
  ],
  "methodmaps": [
    {
      "name": "KeyValues",
      "methods": [
        {
          "name": "KeyValues",
          "docStart": 2209,
          "docEnd": 2521,
          "returnType": "KeyValues",
          "arguments": [
            {
              "type": "const char[]",
              "name": "name",
              "decl": "const char[] name"
            },
            {
              "type": "const char[]",
              "name": "firstKey",
              "decl": "const char[] firstKey"
            },
            {
              "type": "const char[]",
              "name": "firstValue",
              "decl": "const char[] firstValue"
            }
          ]
        },
        {
          "name": "ExportToFile",
          "docStart": 2626,
          "docEnd": 2824,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "file",
              "decl": "const char[] file"
            }
          ]
        },
        {
          "name": "ExportToString",
          "docStart": 2883,
          "docEnd": 3143,
          "returnType": "int",
          "arguments": [
            {
              "type": "char[]",
              "name": "buffer",
              "decl": "char[] buffer"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            }
          ]
        },
        {
          "name": "ImportFromFile",
          "docStart": 3337,
          "docEnd": 3546,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "file",
              "decl": "const char[] file"
            }
          ]
        },
        {
          "name": "ImportFromString",
          "docStart": 3607,
          "docEnd": 3946,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "buffer",
              "decl": "const char[] buffer"
            },
            {
              "type": "const char[]",
              "name": "resourceName",
              "decl": "const char[] resourceName"
            }
          ]
        },
        {
          "name": "Import",
          "docStart": 4058,
          "docEnd": 4321,
          "returnType": "void",
          "arguments": [
            {
              "type": "KeyValues",
              "name": "other",
              "decl": "KeyValues other"
            }
          ]
        },
        {
          "name": "SetString",
          "docStart": 4372,
          "docEnd": 4562,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "const char[]",
              "name": "value",
              "decl": "const char[] value"
            }
          ]
        },
        {
          "name": "SetNum",
          "docStart": 4637,
          "docEnd": 4785,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "int",
              "name": "value",
              "decl": "int value"
            }
          ]
        },
        {
          "name": "SetUInt64",
          "docStart": 4848,
          "docEnd": 5033,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "const int[2]",
              "name": "value",
              "decl": "const int value[2]"
            }
          ]
        },
        {
          "name": "SetFloat",
          "docStart": 5108,
          "docEnd": 5270,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "float",
              "name": "value",
              "decl": "float value"
            }
          ]
        },
        {
          "name": "SetColor",
          "docStart": 5337,
          "docEnd": 5603,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "int",
              "name": "r",
              "decl": "int r"
            },
            {
              "type": "int",
              "name": "g",
              "decl": "int g"
            },
            {
              "type": "int",
              "name": "b",
              "decl": "int b"
            },
            {
              "type": "int",
              "name": "a",
              "decl": "int a"
            }
          ]
        },
        {
          "name": "SetColor4",
          "docStart": 5687,
          "docEnd": 5863,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "const int[4]",
              "name": "color",
              "decl": "const int color[4]"
            }
          ]
        },
        {
          "name": "SetVector",
          "docStart": 5999,
          "docEnd": 6145,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "const float[3]",
              "name": "vec",
              "decl": "const float vec[3]"
            }
          ]
        },
        {
          "name": "GetString",
          "docStart": 6220,
          "docEnd": 6532,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "char[]",
              "name": "value",
              "decl": "char[] value"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            },
            {
              "type": "const char[]",
              "name": "defvalue",
              "decl": "const char[] defvalue"
            }
          ]
        },
        {
          "name": "GetNum",
          "docStart": 6642,
          "docEnd": 6890,
          "returnType": "int",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "int",
              "name": "defvalue",
              "decl": "int defvalue"
            }
          ]
        },
        {
          "name": "GetFloat",
          "docStart": 6957,
          "docEnd": 7218,
          "returnType": "float",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "float",
              "name": "defvalue",
              "decl": "float defvalue"
            }
          ]
        },
        {
          "name": "GetColor",
          "docStart": 7293,
          "docEnd": 7638,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "int&",
              "name": "r",
              "decl": "int& r"
            },
            {
              "type": "int&",
              "name": "g",
              "decl": "int& g"
            },
            {
              "type": "int&",
              "name": "b",
              "decl": "int& b"
            },
            {
              "type": "int&",
              "name": "a",
              "decl": "int& a"
            }
          ]
        },
        {
          "name": "GetColor4",
          "docStart": 7724,
          "docEnd": 7908,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "int[4]",
              "name": "color",
              "decl": "int color[4]"
            }
          ]
        },
        {
          "name": "GetUInt64",
          "docStart": 8097,
          "docEnd": 8362,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "int[2]",
              "name": "value",
              "decl": "int value[2]"
            },
            {
              "type": "int[2]",
              "name": "defvalue",
              "decl": "int defvalue[2]"
            }
          ]
        },
        {
          "name": "GetVector",
          "docStart": 8454,
          "docEnd": 8716,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "float[3]",
              "name": "vec",
              "decl": "float vec[3]"
            },
            {
              "type": "const float[3]",
              "name": "defvalue",
              "decl": "const float defvalue[3]"
            }
          ]
        },
        {
          "name": "JumpToKey",
          "docStart": 8826,
          "docEnd": 9117,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "bool",
              "name": "create",
              "decl": "bool create"
            }
          ]
        },
        {
          "name": "JumpToKeySymbol",
          "docStart": 9191,
          "docEnd": 9376,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "id",
              "decl": "int id"
            }
          ]
        },
        {
          "name": "GotoFirstSubKey",
          "docStart": 9427,
          "docEnd": 9712,
          "returnType": "bool",
          "arguments": [
            {
              "type": "bool",
              "name": "keyOnly",
              "decl": "bool keyOnly"
            }
          ]
        },
        {
          "name": "GotoNextKey",
          "docStart": 9774,
          "docEnd": 10145,
          "returnType": "bool",
          "arguments": [
            {
              "type": "bool",
              "name": "keyOnly",
              "decl": "bool keyOnly"
            }
          ]
        },
        {
          "name": "SavePosition",
          "docStart": 10203,
          "docEnd": 10452,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "GoBack",
          "docStart": 10494,
          "docEnd": 10863,
          "returnType": "bool",
          "arguments": []
        },
        {
          "name": "DeleteKey",
          "docStart": 10899,
          "docEnd": 11069,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            }
          ]
        },
        {
          "name": "DeleteThis",
          "docStart": 11124,
          "docEnd": 11874,
          "returnType": "int",
          "arguments": []
        },
        {
          "name": "Rewind",
          "docStart": 11913,
          "docEnd": 12147,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "GetSectionName",
          "docStart": 12183,
          "docEnd": 12408,
          "returnType": "bool",
          "arguments": [
            {
              "type": "char[]",
              "name": "section",
              "decl": "char[] section"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            }
          ]
        },
        {
          "name": "SetSectionName",
          "docStart": 12481,
          "docEnd": 12559,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "section",
              "decl": "const char[] section"
            }
          ]
        },
        {
          "name": "GetDataType",
          "docStart": 12623,
          "docEnd": 12753,
          "returnType": "KvDataTypes",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            }
          ]
        },
        {
          "name": "SetEscapeSequences",
          "docStart": 12817,
          "docEnd": 13076,
          "returnType": "void",
          "arguments": [
            {
              "type": "bool",
              "name": "useEscapes",
              "decl": "bool useEscapes"
            }
          ]
        },
        {
          "name": "NodesInStack",
          "docStart": 13139,
          "docEnd": 13378,
          "returnType": "int",
          "arguments": []
        },
        {
          "name": "FindKeyById",
          "docStart": 13419,
          "docEnd": 13676,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "id",
              "decl": "int id"
            },
            {
              "type": "char[]",
              "name": "name",
              "decl": "char[] name"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            }
          ]
        },
        {
          "name": "GetNameSymbol",
          "docStart": 13751,
          "docEnd": 13959,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "int&",
              "name": "id",
              "decl": "int& id"
            }
          ]
        },
        {
          "name": "GetSectionSymbol",
          "docStart": 14027,
          "docEnd": 14226,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int&",
              "name": "id",
              "decl": "int& id"
            }
          ]
        }
      ],
      "properties": [
        {
          "name": "ExportLength",
          "docStart": 3214,
          "docEnd": 3274,
          "type": "int",
          "getter": true,
          "setter": false
        }
      ]
    }
  ],
  "enums": [
    {
      "name": "KvDataTypes",
      "docStart": 1659,
      "docEnd": 1697,
      "entries": [
        {
          "name": "KvData_None",
          "docStart": 1741,
          "docEnd": 1789
        },
        {
          "name": "KvData_String",
          "docStart": 1812,
          "docEnd": 1832
        },
        {
          "name": "KvData_Int",
          "docStart": 1855,
          "docEnd": 1876
        },
        {
          "name": "KvData_Float",
          "docStart": 1899,
          "docEnd": 1927
        },
        {
          "name": "KvData_Ptr",
          "docStart": 1950,
          "docEnd": 1997
        },
        {
          "name": "KvData_WString",
          "docStart": 2020,
          "docEnd": 2045
        },
        {
          "name": "KvData_Color",
          "docStart": 2068,
          "docEnd": 2087
        },
        {
          "name": "KvData_UInt64",
          "docStart": 2110,
          "docEnd": 2149
        },
        {
          "name": "KvData_NUMTYPES"
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}