{
  "functions": [
    {
      "name": "CreateKeyValues",
      "docStart": 14267,
      "docEnd": 14598,
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
      "docStart": 14710,
      "docEnd": 14914,
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
      "docStart": 14993,
      "docEnd": 15199,
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
      "docStart": 15266,
      "docEnd": 15509,
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
      "docStart": 15588,
      "docEnd": 15808,
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
      "docStart": 15879,
      "docEnd": 16170,
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
      "docStart": 16258,
      "docEnd": 16460,
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
      "docStart": 16539,
      "docEnd": 16900,
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
      "docStart": 17014,
      "docEnd": 17311,
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
      "docStart": 17382,
      "docEnd": 17692,
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
      "docStart": 17771,
      "docEnd": 18144,
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
      "docStart": 18234,
      "docEnd": 18552,
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
      "docStart": 18648,
      "docEnd": 18961,
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
      "docStart": 19075,
      "docEnd": 19382,
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
      "docStart": 19460,
      "docEnd": 19667,
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
      "docStart": 19722,
      "docEnd": 20062,
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
      "docStart": 20128,
      "docEnd": 20555,
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
      "docStart": 20617,
      "docEnd": 20894,
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
      "docStart": 20938,
      "docEnd": 21161,
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
      "docStart": 21220,
      "docEnd": 21917,
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
      "docStart": 21958,
      "docEnd": 22386,
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
      "docStart": 22424,
      "docEnd": 22686,
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
      "docStart": 22724,
      "docEnd": 23002,
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
      "docStart": 23079,
      "docEnd": 23225,
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
      "docStart": 23293,
      "docEnd": 23476,
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
      "docStart": 23544,
      "docEnd": 23802,
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
      "docStart": 23866,
      "docEnd": 24130,
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
      "docStart": 24194,
      "docEnd": 24585,
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
      "docStart": 24700,
      "docEnd": 25026,
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
      "docStart": 25093,
      "docEnd": 25392,
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
      "docStart": 25435,
      "docEnd": 25745,
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
      "docStart": 25805,
      "docEnd": 26102,
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
      "docStart": 26181,
      "docEnd": 26432,
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
      "docStart": 26504,
      "docEnd": 26712,
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
          "docStart": 2177,
          "docEnd": 2490,
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
          "docStart": 2595,
          "docEnd": 2793,
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
          "docStart": 2852,
          "docEnd": 3109,
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
          "docStart": 3303,
          "docEnd": 3512,
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
          "docStart": 3573,
          "docEnd": 3913,
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
          "docStart": 4025,
          "docEnd": 4289,
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
          "docStart": 4340,
          "docEnd": 4530,
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
          "docStart": 4605,
          "docEnd": 4753,
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
          "docStart": 4816,
          "docEnd": 5001,
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
          "docStart": 5076,
          "docEnd": 5238,
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
          "docStart": 5305,
          "docEnd": 5571,
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
          "docStart": 5655,
          "docEnd": 5831,
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
          "docStart": 5967,
          "docEnd": 6114,
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
          "docStart": 6189,
          "docEnd": 6502,
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
          "docStart": 6612,
          "docEnd": 6861,
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
          "docStart": 6928,
          "docEnd": 7189,
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
          "docStart": 7264,
          "docEnd": 7612,
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
          "docStart": 7698,
          "docEnd": 7882,
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
          "docStart": 8071,
          "docEnd": 8336,
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
          "docStart": 8428,
          "docEnd": 8690,
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
          "docStart": 8800,
          "docEnd": 9091,
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
          "docStart": 9165,
          "docEnd": 9350,
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
          "docStart": 9401,
          "docEnd": 9686,
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
          "docStart": 9748,
          "docEnd": 10120,
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
          "docStart": 10178,
          "docEnd": 10428,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "GoBack",
          "docStart": 10470,
          "docEnd": 10839,
          "returnType": "bool",
          "arguments": []
        },
        {
          "name": "DeleteKey",
          "docStart": 10875,
          "docEnd": 11045,
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
          "docStart": 11100,
          "docEnd": 11852,
          "returnType": "int",
          "arguments": []
        },
        {
          "name": "Rewind",
          "docStart": 11891,
          "docEnd": 12126,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "GetSectionName",
          "docStart": 12162,
          "docEnd": 12388,
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
          "docStart": 12461,
          "docEnd": 12540,
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
          "docStart": 12604,
          "docEnd": 12734,
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
          "docStart": 12798,
          "docEnd": 13058,
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
          "docStart": 13121,
          "docEnd": 13361,
          "returnType": "int",
          "arguments": []
        },
        {
          "name": "FindKeyById",
          "docStart": 13402,
          "docEnd": 13659,
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
          "docStart": 13734,
          "docEnd": 13943,
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
          "docStart": 14011,
          "docEnd": 14211,
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
          "docStart": 3180,
          "docEnd": 3240,
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
      "docStart": 1661,
      "docEnd": 1699,
      "entries": [
        {
          "name": "KvData_None",
          "docStart": 1740,
          "docEnd": 1788
        },
        {
          "name": "KvData_String",
          "docStart": 1807,
          "docEnd": 1827
        },
        {
          "name": "KvData_Int",
          "docStart": 1844,
          "docEnd": 1865
        },
        {
          "name": "KvData_Float",
          "docStart": 1883,
          "docEnd": 1911
        },
        {
          "name": "KvData_Ptr",
          "docStart": 1928,
          "docEnd": 1975
        },
        {
          "name": "KvData_WString",
          "docStart": 1995,
          "docEnd": 2020
        },
        {
          "name": "KvData_Color",
          "docStart": 2038,
          "docEnd": 2057
        },
        {
          "name": "KvData_UInt64",
          "docStart": 2076,
          "docEnd": 2115
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