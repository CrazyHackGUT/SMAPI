{
  "functions": [
    {
      "name": "OnPluginStart",
      "docStart": 4128,
      "docEnd": 4433,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "AskPluginLoad",
      "kind": "forward",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "myself",
          "decl": "Handle myself"
        },
        {
          "type": "bool",
          "name": "late",
          "decl": "bool late"
        },
        {
          "type": "char[]",
          "name": "error",
          "decl": "char[] error"
        },
        {
          "type": "int",
          "name": "err_max",
          "decl": "int err_max"
        }
      ]
    },
    {
      "name": "AskPluginLoad2",
      "docStart": 4813,
      "docEnd": 5953,
      "kind": "forward",
      "returnType": "APLRes",
      "arguments": [
        {
          "type": "Handle",
          "name": "myself",
          "decl": "Handle myself"
        },
        {
          "type": "bool",
          "name": "late",
          "decl": "bool late"
        },
        {
          "type": "char[]",
          "name": "error",
          "decl": "char[] error"
        },
        {
          "type": "int",
          "name": "err_max",
          "decl": "int err_max"
        }
      ]
    },
    {
      "name": "OnPluginEnd",
      "docStart": 6042,
      "docEnd": 6287,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "OnPluginPauseChange",
      "docStart": 6320,
      "docEnd": 6465,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "bool",
          "name": "pause",
          "decl": "bool pause"
        }
      ]
    },
    {
      "name": "OnGameFrame",
      "docStart": 6516,
      "docEnd": 6656,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "OnMapStart",
      "docStart": 6689,
      "docEnd": 6860,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "OnMapEnd",
      "docStart": 6892,
      "docEnd": 6936,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "OnConfigsExecuted",
      "docStart": 6966,
      "docEnd": 7310,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "OnAutoConfigsBuffered",
      "docStart": 7349,
      "docEnd": 7914,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "OnServerCfg",
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "OnAllPluginsLoaded",
      "docStart": 8108,
      "docEnd": 8288,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "GetMyHandle",
      "docStart": 8328,
      "docEnd": 8436,
      "kind": "native",
      "returnType": "Handle",
      "arguments": []
    },
    {
      "name": "GetPluginIterator",
      "docStart": 8470,
      "docEnd": 8700,
      "kind": "native",
      "returnType": "Handle",
      "arguments": []
    },
    {
      "name": "MorePlugins",
      "docStart": 8740,
      "docEnd": 8983,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "iter",
          "decl": "Handle iter"
        }
      ]
    },
    {
      "name": "ReadPlugin",
      "docStart": 9026,
      "docEnd": 9327,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "Handle",
          "name": "iter",
          "decl": "Handle iter"
        }
      ]
    },
    {
      "name": "GetPluginStatus",
      "docStart": 9371,
      "docEnd": 9589,
      "kind": "native",
      "returnType": "PluginStatus",
      "arguments": [
        {
          "type": "Handle",
          "name": "plugin",
          "decl": "Handle plugin"
        }
      ]
    },
    {
      "name": "GetPluginFilename",
      "docStart": 9646,
      "docEnd": 9967,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "plugin",
          "decl": "Handle plugin"
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
        }
      ]
    },
    {
      "name": "IsPluginDebugging",
      "docStart": 10048,
      "docEnd": 10305,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "plugin",
          "decl": "Handle plugin"
        }
      ]
    },
    {
      "name": "GetPluginInfo",
      "docStart": 10356,
      "docEnd": 10766,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "plugin",
          "decl": "Handle plugin"
        },
        {
          "type": "PluginInfo",
          "name": "info",
          "decl": "PluginInfo info"
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
        }
      ]
    },
    {
      "name": "FindPluginByNumber",
      "docStart": 10860,
      "docEnd": 11368,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "int",
          "name": "order_num",
          "decl": "int order_num"
        }
      ]
    },
    {
      "name": "SetFailState",
      "docStart": 11422,
      "docEnd": 12145,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "string",
          "decl": "const char[] string"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "ThrowError",
      "docStart": 12206,
      "docEnd": 12464,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "fmt",
          "decl": "const char[] fmt"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "LogStackTrace",
      "docStart": 12520,
      "docEnd": 12795,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "fmt",
          "decl": "const char[] fmt"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "GetTime",
      "docStart": 12854,
      "docEnd": 13064,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int[2]",
          "name": "bigStamp",
          "decl": "int bigStamp[2]"
        }
      ]
    },
    {
      "name": "FormatTime",
      "docStart": 13112,
      "docEnd": 13868,
      "kind": "native",
      "returnType": "void",
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
        },
        {
          "type": "const char[]",
          "name": "format",
          "decl": "const char[] format"
        },
        {
          "type": "int",
          "name": "stamp",
          "decl": "int stamp"
        }
      ]
    },
    {
      "name": "LoadGameConfigFile",
      "docStart": 13962,
      "docEnd": 14269,
      "kind": "native",
      "returnType": "GameData",
      "arguments": [
        {
          "type": "const char[]",
          "name": "file",
          "decl": "const char[] file"
        }
      ]
    },
    {
      "name": "GameConfGetOffset",
      "docStart": 14329,
      "docEnd": 14535,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "gc",
          "decl": "Handle gc"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        }
      ]
    },
    {
      "name": "GameConfGetKeyValue",
      "docStart": 14599,
      "docEnd": 14953,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "gc",
          "decl": "Handle gc"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
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
      "name": "GameConfGetAddress",
      "docStart": 15047,
      "docEnd": 15373,
      "kind": "native",
      "returnType": "Address",
      "arguments": [
        {
          "type": "Handle",
          "name": "gameconf",
          "decl": "Handle gameconf"
        },
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "GetSysTickCount",
      "docStart": 15449,
      "docEnd": 15680,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "AutoExecConfig",
      "docStart": 15715,
      "docEnd": 16404,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "bool",
          "name": "autoCreate",
          "decl": "bool autoCreate"
        },
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "const char[]",
          "name": "folder",
          "decl": "const char[] folder"
        }
      ]
    },
    {
      "name": "RegPluginLibrary",
      "docStart": 16514,
      "docEnd": 16648,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "LibraryExists",
      "docStart": 16702,
      "docEnd": 17090,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "GetExtensionFileStatus",
      "docStart": 17141,
      "docEnd": 17670,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "char[]",
          "name": "error",
          "decl": "char[] error"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "OnLibraryAdded",
      "docStart": 17763,
      "docEnd": 17991,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "OnLibraryRemoved",
      "docStart": 18044,
      "docEnd": 18282,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "ReadMapList",
      "docStart": 18654,
      "docEnd": 21817,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "int&",
          "name": "serial",
          "decl": "int& serial"
        },
        {
          "type": "const char[]",
          "name": "str",
          "decl": "const char[] str"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "SetMapListCompatBind",
      "docStart": 22038,
      "docEnd": 22421,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "const char[]",
          "name": "file",
          "decl": "const char[] file"
        }
      ]
    },
    {
      "name": "OnClientFloodCheck",
      "docStart": 22498,
      "docEnd": 22907,
      "kind": "forward",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "OnClientFloodResult",
      "docStart": 22957,
      "docEnd": 23442,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "bool",
          "name": "blocked",
          "decl": "bool blocked"
        }
      ]
    },
    {
      "name": "CanTestFeatures",
      "docStart": 24285,
      "docEnd": 24600,
      "kind": "stock",
      "returnType": "bool",
      "arguments": []
    },
    {
      "name": "GetFeatureStatus",
      "docStart": 24687,
      "docEnd": 24889,
      "kind": "native",
      "returnType": "FeatureStatus",
      "arguments": [
        {
          "type": "FeatureType",
          "name": "type",
          "decl": "FeatureType type"
        },
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "RequireFeature",
      "docStart": 24970,
      "docEnd": 25308,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "FeatureType",
          "name": "type",
          "decl": "FeatureType type"
        },
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "const char[]",
          "name": "fmt",
          "decl": "const char[] fmt"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "LoadFromAddress",
      "docStart": 25727,
      "docEnd": 25963,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Address",
          "name": "addr",
          "decl": "Address addr"
        },
        {
          "type": "NumberType",
          "name": "size",
          "decl": "NumberType size"
        }
      ]
    },
    {
      "name": "StoreToAddress",
      "docStart": 26027,
      "docEnd": 26254,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Address",
          "name": "addr",
          "decl": "Address addr"
        },
        {
          "type": "int",
          "name": "data",
          "decl": "int data"
        },
        {
          "type": "NumberType",
          "name": "size",
          "decl": "NumberType size"
        }
      ]
    }
  ],
  "methodmaps": [
    {
      "name": "GameData",
      "methods": [
        {
          "name": "GameData",
          "docStart": 2853,
          "docEnd": 3144,
          "returnType": "GameData",
          "arguments": [
            {
              "type": "const char[]",
              "name": "file",
              "decl": "const char[] file"
            }
          ]
        },
        {
          "name": "GetOffset",
          "docStart": 3194,
          "docEnd": 3348,
          "returnType": "int",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            }
          ]
        },
        {
          "name": "GetKeyValue",
          "docStart": 3402,
          "docEnd": 3706,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
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
          "name": "GetAddress",
          "docStart": 3790,
          "docEnd": 4065,
          "returnType": "Address",
          "arguments": [
            {
              "type": "const char[]",
              "name": "name",
              "decl": "const char[] name"
            }
          ]
        }
      ],
      "properties": []
    },
    {
      "name": "FrameIterator",
      "methods": [
        {
          "name": "FrameIterator",
          "docStart": 26365,
          "docEnd": 26487,
          "returnType": "FrameIterator",
          "arguments": []
        },
        {
          "name": "Next",
          "docStart": 26525,
          "docEnd": 26722,
          "returnType": "bool",
          "arguments": []
        },
        {
          "name": "Reset",
          "docStart": 26756,
          "docEnd": 26810,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "GetFunctionName",
          "docStart": 26962,
          "docEnd": 27107,
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
          "name": "GetFilePath",
          "docStart": 27177,
          "docEnd": 27323,
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
        }
      ],
      "properties": [
        {
          "name": "LineNumber",
          "docStart": 26845,
          "docEnd": 26901,
          "type": "int",
          "getter": true,
          "setter": false
        }
      ]
    }
  ],
  "enums": [
    {
      "name": "APLRes",
      "entries": [
        {
          "name": "APLRes_Success",
          "docStart": 2627,
          "docEnd": 2653
        },
        {
          "name": "APLRes_Failure",
          "docStart": 2680,
          "docEnd": 2737
        },
        {
          "name": "APLRes_SilentFailure",
          "docStart": 2764,
          "docEnd": 2812
        }
      ]
    },
    {
      "name": "FeatureType",
      "docStart": 23507,
      "docEnd": 23534,
      "entries": [
        {
          "name": "FeatureType_Native",
          "docStart": 23558,
          "docEnd": 23596
        },
        {
          "name": "FeatureType_Capability",
          "docStart": 23623,
          "docEnd": 23971
        }
      ]
    },
    {
      "name": "FeatureStatus",
      "docStart": 24004,
      "docEnd": 24034,
      "entries": [
        {
          "name": "FeatureStatus_Available",
          "docStart": 24060,
          "docEnd": 24104
        },
        {
          "name": "FeatureStatus_Unavailable",
          "docStart": 24136,
          "docEnd": 24176
        },
        {
          "name": "FeatureStatus_Unknown",
          "docStart": 24210,
          "docEnd": 24253
        }
      ]
    },
    {
      "name": "NumberType",
      "docStart": 25436,
      "docEnd": 25516,
      "entries": [
        {
          "name": "NumberType_Int8"
        },
        {
          "name": "NumberType_Int16"
        },
        {
          "name": "NumberType_Int32"
        }
      ]
    },
    {
      "name": "Address",
      "entries": [
        {
          "name": "Address_Null",
          "docStart": 25663,
          "docEnd": 25719
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}