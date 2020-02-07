{
  "functions": [
    {
      "name": "LogToGame",
      "docStart": 6121,
      "docEnd": 6260,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "format",
          "decl": "const char[] format"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "SetRandomSeed",
      "docStart": 6318,
      "docEnd": 6432,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "seed",
          "decl": "int seed"
        }
      ]
    },
    {
      "name": "GetRandomFloat",
      "docStart": 6474,
      "docEnd": 6735,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "float",
          "name": "fMin",
          "decl": "float fMin"
        },
        {
          "type": "float",
          "name": "fMax",
          "decl": "float fMax"
        }
      ]
    },
    {
      "name": "GetRandomInt",
      "docStart": 6801,
      "docEnd": 7047,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "nmin",
          "decl": "int nmin"
        },
        {
          "type": "int",
          "name": "nmax",
          "decl": "int nmax"
        }
      ]
    },
    {
      "name": "IsMapValid",
      "docStart": 7097,
      "docEnd": 7270,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "map",
          "decl": "const char[] map"
        }
      ]
    },
    {
      "name": "FindMap",
      "docStart": 7317,
      "docEnd": 7867,
      "kind": "native",
      "returnType": "FindMapResult",
      "arguments": [
        {
          "type": "const char[]",
          "name": "map",
          "decl": "const char[] map"
        },
        {
          "type": "char[]",
          "name": "foundmap",
          "decl": "char[] foundmap"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        }
      ]
    },
    {
      "name": "GetMapDisplayName",
      "docStart": 7949,
      "docEnd": 8858,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "map",
          "decl": "const char[] map"
        },
        {
          "type": "char[]",
          "name": "displayName",
          "decl": "char[] displayName"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        }
      ]
    },
    {
      "name": "IsDedicatedServer",
      "docStart": 8944,
      "docEnd": 9062,
      "kind": "native",
      "returnType": "bool",
      "arguments": []
    },
    {
      "name": "GetEngineTime",
      "docStart": 9100,
      "docEnd": 9232,
      "kind": "native",
      "returnType": "float",
      "arguments": []
    },
    {
      "name": "GetGameTime",
      "docStart": 9267,
      "docEnd": 9370,
      "kind": "native",
      "returnType": "float",
      "arguments": []
    },
    {
      "name": "GetGameTickCount",
      "docStart": 9403,
      "docEnd": 9501,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetGameFrameTime",
      "docStart": 9537,
      "docEnd": 9653,
      "kind": "native",
      "returnType": "float",
      "arguments": []
    },
    {
      "name": "GetGameDescription",
      "docStart": 9691,
      "docEnd": 10081,
      "kind": "native",
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
        },
        {
          "type": "bool",
          "name": "original",
          "decl": "bool original"
        }
      ]
    },
    {
      "name": "GetGameFolderName",
      "docStart": 10168,
      "docEnd": 10417,
      "kind": "native",
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
      "name": "GetCurrentMap",
      "docStart": 10482,
      "docEnd": 10693,
      "kind": "native",
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
      "name": "PrecacheModel",
      "docStart": 10754,
      "docEnd": 11007,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "model",
          "decl": "const char[] model"
        },
        {
          "type": "bool",
          "name": "preload",
          "decl": "bool preload"
        }
      ]
    },
    {
      "name": "PrecacheSentenceFile",
      "docStart": 11078,
      "docEnd": 11340,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "file",
          "decl": "const char[] file"
        },
        {
          "type": "bool",
          "name": "preload",
          "decl": "bool preload"
        }
      ]
    },
    {
      "name": "PrecacheDecal",
      "docStart": 11417,
      "docEnd": 11655,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "decal",
          "decl": "const char[] decal"
        },
        {
          "type": "bool",
          "name": "preload",
          "decl": "bool preload"
        }
      ]
    },
    {
      "name": "PrecacheGeneric",
      "docStart": 11726,
      "docEnd": 11985,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "generic",
          "decl": "const char[] generic"
        },
        {
          "type": "bool",
          "name": "preload",
          "decl": "bool preload"
        }
      ]
    },
    {
      "name": "IsModelPrecached",
      "docStart": 12060,
      "docEnd": 12229,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "model",
          "decl": "const char[] model"
        }
      ]
    },
    {
      "name": "IsDecalPrecached",
      "docStart": 12284,
      "docEnd": 12453,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "decal",
          "decl": "const char[] decal"
        }
      ]
    },
    {
      "name": "IsGenericPrecached",
      "docStart": 12508,
      "docEnd": 12691,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "generic",
          "decl": "const char[] generic"
        }
      ]
    },
    {
      "name": "PrecacheSound",
      "docStart": 12750,
      "docEnd": 13014,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "sound",
          "decl": "const char[] sound"
        },
        {
          "type": "bool",
          "name": "preload",
          "decl": "bool preload"
        }
      ]
    },
    {
      "name": "IsSoundPrecached",
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "sound",
          "decl": "const char[] sound"
        }
      ]
    },
    {
      "name": "CreateDialog",
      "docStart": 13445,
      "docEnd": 13802,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "Handle",
          "name": "kv",
          "decl": "Handle kv"
        },
        {
          "type": "DialogType",
          "name": "type",
          "decl": "DialogType type"
        }
      ]
    },
    {
      "name": "GuessSDKVersion",
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetEngineVersion",
      "docStart": 14329,
      "docEnd": 14607,
      "kind": "native",
      "returnType": "EngineVersion",
      "arguments": []
    },
    {
      "name": "PrintToChat",
      "docStart": 14653,
      "docEnd": 14951,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "format",
          "decl": "const char[] format"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "PrintToChatAll",
      "docStart": 15023,
      "docEnd": 15195,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "format",
          "decl": "const char[] format"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "PrintCenterText",
      "docStart": 15479,
      "docEnd": 15788,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "format",
          "decl": "const char[] format"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "PrintCenterTextAll",
      "docStart": 15864,
      "docEnd": 16047,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "format",
          "decl": "const char[] format"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "PrintHintText",
      "docStart": 16339,
      "docEnd": 16636,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "format",
          "decl": "const char[] format"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "PrintHintTextToAll",
      "docStart": 16710,
      "docEnd": 16881,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "format",
          "decl": "const char[] format"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "ShowVGUIPanel",
      "docStart": 17171,
      "docEnd": 17727,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "Handle",
          "name": "Kv",
          "decl": "Handle Kv"
        },
        {
          "type": "bool",
          "name": "show",
          "decl": "bool show"
        }
      ]
    },
    {
      "name": "CreateHudSynchronizer",
      "docStart": 17832,
      "docEnd": 19549,
      "kind": "native",
      "returnType": "Handle",
      "arguments": []
    },
    {
      "name": "SetHudTextParams",
      "docStart": 19593,
      "docEnd": 20788,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "float",
          "name": "x",
          "decl": "float x"
        },
        {
          "type": "float",
          "name": "y",
          "decl": "float y"
        },
        {
          "type": "float",
          "name": "holdTime",
          "decl": "float holdTime"
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
        },
        {
          "type": "int",
          "name": "effect",
          "decl": "int effect"
        },
        {
          "type": "float",
          "name": "fxTime",
          "decl": "float fxTime"
        },
        {
          "type": "float",
          "name": "fadeIn",
          "decl": "float fadeIn"
        },
        {
          "type": "float",
          "name": "fadeOut",
          "decl": "float fadeOut"
        }
      ]
    },
    {
      "name": "SetHudTextParamsEx",
      "docStart": 20963,
      "docEnd": 21986,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "float",
          "name": "x",
          "decl": "float x"
        },
        {
          "type": "float",
          "name": "y",
          "decl": "float y"
        },
        {
          "type": "float",
          "name": "holdTime",
          "decl": "float holdTime"
        },
        {
          "type": "int[4]",
          "name": "color1",
          "decl": "int color1[4]"
        },
        {
          "type": "int[4]",
          "name": "color2",
          "decl": "int color2[4]"
        },
        {
          "type": "int",
          "name": "effect",
          "decl": "int effect"
        },
        {
          "type": "float",
          "name": "fxTime",
          "decl": "float fxTime"
        },
        {
          "type": "float",
          "name": "fadeIn",
          "decl": "float fadeIn"
        },
        {
          "type": "float",
          "name": "fadeOut",
          "decl": "float fadeOut"
        }
      ]
    },
    {
      "name": "ShowSyncHudText",
      "docStart": 22192,
      "docEnd": 22772,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "Handle",
          "name": "sync",
          "decl": "Handle sync"
        },
        {
          "type": "const char[]",
          "name": "message",
          "decl": "const char[] message"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "ClearSyncHud",
      "docStart": 22861,
      "docEnd": 23502,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "Handle",
          "name": "sync",
          "decl": "Handle sync"
        }
      ]
    },
    {
      "name": "ShowHudText",
      "docStart": 23558,
      "docEnd": 24423,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "channel",
          "decl": "int channel"
        },
        {
          "type": "const char[]",
          "name": "message",
          "decl": "const char[] message"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "ShowMOTDPanel",
      "docStart": 24508,
      "docEnd": 25057,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "title",
          "decl": "const char[] title"
        },
        {
          "type": "const char[]",
          "name": "msg",
          "decl": "const char[] msg"
        },
        {
          "type": "int",
          "name": "type",
          "decl": "int type"
        }
      ]
    },
    {
      "name": "DisplayAskConnectBox",
      "docStart": 25409,
      "docEnd": 25751,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "float",
          "name": "time",
          "decl": "float time"
        },
        {
          "type": "const char[]",
          "name": "ip",
          "decl": "const char[] ip"
        },
        {
          "type": "const char[]",
          "name": "password",
          "decl": "const char[] password"
        }
      ]
    },
    {
      "name": "EntIndexToEntRef",
      "docStart": 26130,
      "docEnd": 26293,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "EntRefToEntIndex",
      "docStart": 26339,
      "docEnd": 26482,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "ref",
          "decl": "int ref"
        }
      ]
    },
    {
      "name": "MakeCompatEntRef",
      "docStart": 26525,
      "docEnd": 26686,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "ref",
          "decl": "int ref"
        }
      ]
    },
    {
      "name": "GetClientsInRange",
      "docStart": 26810,
      "docEnd": 27223,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "origin",
          "decl": "const float origin[3]"
        },
        {
          "type": "ClientRangeType",
          "name": "rangeType",
          "decl": "ClientRangeType rangeType"
        },
        {
          "type": "int[]",
          "name": "clients",
          "decl": "int[] clients"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        }
      ]
    },
    {
      "name": "GetServerAuthId",
      "docStart": 27333,
      "docEnd": 27850,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "AuthIdType",
          "name": "authType",
          "decl": "AuthIdType authType"
        },
        {
          "type": "char[]",
          "name": "auth",
          "decl": "char[] auth"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        }
      ]
    },
    {
      "name": "GetServerSteamAccountId",
      "docStart": 27930,
      "docEnd": 28050,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "DialogType",
      "entries": [
        {
          "name": "DialogType_Msg",
          "docStart": 3514,
          "docEnd": 3547
        },
        {
          "name": "DialogType_Menu",
          "docStart": 3574,
          "docEnd": 3597
        },
        {
          "name": "DialogType_Text",
          "docStart": 3624,
          "docEnd": 3649
        },
        {
          "name": "DialogType_Entry",
          "docStart": 3676,
          "docEnd": 3696
        },
        {
          "name": "DialogType_AskConnect",
          "docStart": 3723,
          "docEnd": 3774
        }
      ]
    },
    {
      "name": "EngineVersion",
      "entries": [
        {
          "name": "Engine_Unknown",
          "docStart": 3834,
          "docEnd": 3880
        },
        {
          "name": "Engine_Original",
          "docStart": 3911,
          "docEnd": 3960
        },
        {
          "name": "Engine_SourceSDK2006",
          "docStart": 3991,
          "docEnd": 4041
        },
        {
          "name": "Engine_SourceSDK2007",
          "docStart": 4072,
          "docEnd": 4122
        },
        {
          "name": "Engine_Left4Dead",
          "docStart": 4153,
          "docEnd": 4172
        },
        {
          "name": "Engine_DarkMessiah",
          "docStart": 4203,
          "docEnd": 4262
        },
        {
          "name": "Engine_Left4Dead2",
          "docStart": 4293,
          "docEnd": 4314
        },
        {
          "name": "Engine_AlienSwarm",
          "docStart": 4345,
          "docEnd": 4386
        },
        {
          "name": "Engine_BloodyGoodTime",
          "docStart": 4417,
          "docEnd": 4441
        },
        {
          "name": "Engine_EYE",
          "docStart": 4472,
          "docEnd": 4503
        },
        {
          "name": "Engine_Portal2",
          "docStart": 4534,
          "docEnd": 4550
        },
        {
          "name": "Engine_CSGO",
          "docStart": 4581,
          "docEnd": 4621
        },
        {
          "name": "Engine_CSS",
          "docStart": 4652,
          "docEnd": 4682
        },
        {
          "name": "Engine_DOTA",
          "docStart": 4713,
          "docEnd": 4727
        },
        {
          "name": "Engine_HL2DM",
          "docStart": 4758,
          "docEnd": 4788
        },
        {
          "name": "Engine_DODS",
          "docStart": 4819,
          "docEnd": 4848
        },
        {
          "name": "Engine_TF2",
          "docStart": 4879,
          "docEnd": 4902
        },
        {
          "name": "Engine_NuclearDawn",
          "docStart": 4933,
          "docEnd": 4953
        },
        {
          "name": "Engine_SDK2013",
          "docStart": 4984,
          "docEnd": 5007
        },
        {
          "name": "Engine_Blade",
          "docStart": 5038,
          "docEnd": 5060
        },
        {
          "name": "Engine_Insurgency",
          "docStart": 5091,
          "docEnd": 5130
        },
        {
          "name": "Engine_Contagion",
          "docStart": 5161,
          "docEnd": 5178
        },
        {
          "name": "Engine_BlackMesa",
          "docStart": 5209,
          "docEnd": 5239
        },
        {
          "name": "Engine_DOI",
          "docStart": 5270,
          "docEnd": 5291
        }
      ]
    },
    {
      "name": "FindMapResult",
      "entries": [
        {
          "name": "FindMap_Found",
          "docStart": 5323,
          "docEnd": 5364
        },
        {
          "name": "FindMap_NotFound",
          "docStart": 5384,
          "docEnd": 5429
        },
        {
          "name": "FindMap_FuzzyMatch",
          "docStart": 5452,
          "docEnd": 5651
        },
        {
          "name": "FindMap_NonCanonical",
          "docStart": 5676,
          "docEnd": 5854
        },
        {
          "name": "FindMap_PossiblyAvailable",
          "docStart": 5881,
          "docEnd": 6041
        }
      ]
    },
    {
      "name": "ClientRangeType",
      "entries": [
        {
          "name": "RangeType_Visibility"
        },
        {
          "name": "RangeType_Audibility"
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}