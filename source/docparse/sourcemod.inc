{
  "functions": [
    {
      "name": "OnPluginStart",
      "docStart": 3990,
      "docEnd": 4298,
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
      "docStart": 4678,
      "docEnd": 5788,
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
      "docStart": 5877,
      "docEnd": 6125,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "OnPluginPauseChange",
      "docStart": 6158,
      "docEnd": 6297,
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
      "docStart": 6348,
      "docEnd": 6488,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "OnMapStart",
      "docStart": 6521,
      "docEnd": 6686,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "OnMapEnd",
      "docStart": 6718,
      "docEnd": 6762,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "OnConfigsExecuted",
      "docStart": 6792,
      "docEnd": 7134,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "OnAutoConfigsBuffered",
      "docStart": 7173,
      "docEnd": 7744,
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
      "docStart": 7929,
      "docEnd": 8111,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "GetMyHandle",
      "docStart": 8151,
      "docEnd": 8249,
      "kind": "native",
      "returnType": "Handle",
      "arguments": []
    },
    {
      "name": "GetPluginIterator",
      "docStart": 8283,
      "docEnd": 8478,
      "kind": "native",
      "returnType": "Handle",
      "arguments": []
    },
    {
      "name": "MorePlugins",
      "docStart": 8518,
      "docEnd": 8733,
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
      "docStart": 8776,
      "docEnd": 9033,
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
      "docStart": 9077,
      "docEnd": 9268,
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
      "docStart": 9325,
      "docEnd": 9620,
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
      "docStart": 9701,
      "docEnd": 9931,
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
      "docStart": 9982,
      "docEnd": 10349,
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
      "docStart": 10443,
      "docEnd": 10926,
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
      "docStart": 10980,
      "docEnd": 11683,
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
      "docStart": 11744,
      "docEnd": 11974,
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
      "docStart": 12030,
      "docEnd": 12276,
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
      "docStart": 12335,
      "docEnd": 12531,
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
      "docStart": 12579,
      "docEnd": 13304,
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
      "docStart": 13398,
      "docEnd": 13671,
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
      "docStart": 13731,
      "docEnd": 13909,
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
      "docStart": 13973,
      "docEnd": 14288,
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
      "docStart": 14382,
      "docEnd": 14708,
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
      "docStart": 14784,
      "docEnd": 15006,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "AutoExecConfig",
      "docStart": 15041,
      "docEnd": 15667,
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
      "docStart": 15777,
      "docEnd": 15905,
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
      "docStart": 15959,
      "docEnd": 16333,
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
      "docStart": 16384,
      "docEnd": 16843,
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
      "docStart": 16936,
      "docEnd": 17159,
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
      "docStart": 17212,
      "docEnd": 17445,
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
      "docStart": 17805,
      "docEnd": 20618,
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
      "docStart": 20793,
      "docEnd": 21164,
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
      "docStart": 21241,
      "docEnd": 21636,
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
      "docStart": 21686,
      "docEnd": 22163,
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
      "docStart": 23009,
      "docEnd": 23324,
      "kind": "stock",
      "returnType": "bool",
      "arguments": []
    },
    {
      "name": "GetFeatureStatus",
      "docStart": 23411,
      "docEnd": 23613,
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
      "docStart": 23694,
      "docEnd": 24032,
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
      "docStart": 24451,
      "docEnd": 24687,
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
      "docStart": 24751,
      "docEnd": 24978,
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
          "docStart": 2823,
          "docEnd": 3079,
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
          "docStart": 3129,
          "docEnd": 3263,
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
          "docStart": 3317,
          "docEnd": 3587,
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
          "docStart": 3671,
          "docEnd": 3927,
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
          "docStart": 25090,
          "docEnd": 25199,
          "returnType": "FrameIterator",
          "arguments": []
        },
        {
          "name": "Next",
          "docStart": 25239,
          "docEnd": 25409,
          "returnType": "bool",
          "arguments": []
        },
        {
          "name": "Reset",
          "docStart": 25444,
          "docEnd": 25498,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "GetFunctionName",
          "docStart": 25653,
          "docEnd": 25798,
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
          "docStart": 25869,
          "docEnd": 26015,
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
          "docStart": 25534,
          "docEnd": 25590,
          "type": "bool",
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
          "docStart": 2606,
          "docEnd": 2632
        },
        {
          "name": "APLRes_Failure",
          "docStart": 2653,
          "docEnd": 2710
        },
        {
          "name": "APLRes_SilentFailure",
          "docStart": 2734,
          "docEnd": 2782
        }
      ]
    },
    {
      "name": "FeatureType",
      "docStart": 22228,
      "docEnd": 22255,
      "entries": [
        {
          "name": "FeatureType_Native",
          "docStart": 22279,
          "docEnd": 22317
        },
        {
          "name": "FeatureType_Capability",
          "docStart": 22345,
          "docEnd": 22693
        }
      ]
    },
    {
      "name": "FeatureStatus",
      "docStart": 22726,
      "docEnd": 22756,
      "entries": [
        {
          "name": "FeatureStatus_Available",
          "docStart": 22782,
          "docEnd": 22826
        },
        {
          "name": "FeatureStatus_Unavailable",
          "docStart": 22859,
          "docEnd": 22899
        },
        {
          "name": "FeatureStatus_Unknown",
          "docStart": 22934,
          "docEnd": 22977
        }
      ]
    },
    {
      "name": "NumberType",
      "docStart": 24160,
      "docEnd": 24240,
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
          "docStart": 24387,
          "docEnd": 24443
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}