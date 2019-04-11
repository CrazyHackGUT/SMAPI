{
  "functions": [
    {
      "name": "LogToGame",
      "docStart": 5696,
      "docEnd": 5821,
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
      "docStart": 5879,
      "docEnd": 5987,
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
      "docStart": 6029,
      "docEnd": 6266,
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
      "docStart": 6332,
      "docEnd": 6554,
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
      "docStart": 6604,
      "docEnd": 6761,
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
      "docStart": 6808,
      "docEnd": 7300,
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
      "docStart": 7382,
      "docEnd": 8174,
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
      "docStart": 8260,
      "docEnd": 8368,
      "kind": "native",
      "returnType": "bool",
      "arguments": []
    },
    {
      "name": "GetEngineTime",
      "docStart": 8406,
      "docEnd": 8528,
      "kind": "native",
      "returnType": "float",
      "arguments": []
    },
    {
      "name": "GetGameTime",
      "docStart": 8563,
      "docEnd": 8657,
      "kind": "native",
      "returnType": "float",
      "arguments": []
    },
    {
      "name": "GetGameTickCount",
      "docStart": 8690,
      "docEnd": 8779,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetGameFrameTime",
      "docStart": 8815,
      "docEnd": 8922,
      "kind": "native",
      "returnType": "float",
      "arguments": []
    },
    {
      "name": "GetGameDescription",
      "docStart": 8960,
      "docEnd": 9311,
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
      "docStart": 9398,
      "docEnd": 9628,
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
      "docStart": 9693,
      "docEnd": 9885,
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
      "docStart": 9946,
      "docEnd": 10178,
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
      "docStart": 10249,
      "docEnd": 10489,
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
      "docStart": 10566,
      "docEnd": 10783,
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
      "docStart": 10854,
      "docEnd": 11093,
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
      "docStart": 11168,
      "docEnd": 11321,
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
      "docStart": 11376,
      "docEnd": 11529,
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
      "docStart": 11584,
      "docEnd": 11752,
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
      "docStart": 11811,
      "docEnd": 12054,
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
      "docStart": 12126,
      "docEnd": 12279,
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
      "docStart": 12334,
      "docEnd": 12658,
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
      "docStart": 13129,
      "docEnd": 13397,
      "kind": "native",
      "returnType": "EngineVersion",
      "arguments": []
    },
    {
      "name": "PrintToChat",
      "docStart": 13443,
      "docEnd": 13710,
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
      "docStart": 13782,
      "docEnd": 13940,
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
      "docStart": 14225,
      "docEnd": 14503,
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
      "docStart": 14579,
      "docEnd": 14748,
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
      "docStart": 15040,
      "docEnd": 15306,
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
      "docStart": 15380,
      "docEnd": 15537,
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
      "docStart": 15828,
      "docEnd": 16314,
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
      "docStart": 16419,
      "docEnd": 18094,
      "kind": "native",
      "returnType": "Handle",
      "arguments": []
    },
    {
      "name": "SetHudTextParams",
      "docStart": 18138,
      "docEnd": 19242,
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
      "docStart": 19423,
      "docEnd": 20378,
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
      "docStart": 20586,
      "docEnd": 21105,
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
      "docStart": 21194,
      "docEnd": 21815,
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
      "docStart": 21871,
      "docEnd": 22611,
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
      "docStart": 22696,
      "docEnd": 23192,
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
      "docStart": 23544,
      "docEnd": 23860,
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
      "docStart": 24239,
      "docEnd": 24386,
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
      "docStart": 24432,
      "docEnd": 24557,
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
      "docStart": 24600,
      "docEnd": 24743,
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
      "docStart": 24870,
      "docEnd": 25252,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "float[3]",
          "name": "origin",
          "decl": "float origin[3]"
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
      "docStart": 25356,
      "docEnd": 25830,
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
      "docStart": 25910,
      "docEnd": 26020,
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
          "docStart": 3314,
          "docEnd": 3347
        },
        {
          "name": "DialogType_Menu",
          "docStart": 3369,
          "docEnd": 3392
        },
        {
          "name": "DialogType_Text",
          "docStart": 3414,
          "docEnd": 3439
        },
        {
          "name": "DialogType_Entry",
          "docStart": 3462,
          "docEnd": 3482
        },
        {
          "name": "DialogType_AskConnect",
          "docStart": 3507,
          "docEnd": 3558
        }
      ]
    },
    {
      "name": "EngineVersion",
      "entries": [
        {
          "name": "Engine_Unknown",
          "docStart": 3609,
          "docEnd": 3655
        },
        {
          "name": "Engine_Original",
          "docStart": 3678,
          "docEnd": 3727
        },
        {
          "name": "Engine_SourceSDK2006",
          "docStart": 3753,
          "docEnd": 3803
        },
        {
          "name": "Engine_SourceSDK2007",
          "docStart": 3829,
          "docEnd": 3879
        },
        {
          "name": "Engine_Left4Dead",
          "docStart": 3902,
          "docEnd": 3921
        },
        {
          "name": "Engine_DarkMessiah",
          "docStart": 3946,
          "docEnd": 4005
        },
        {
          "name": "Engine_Left4Dead2",
          "docStart": 4032,
          "docEnd": 4053
        },
        {
          "name": "Engine_AlienSwarm",
          "docStart": 4077,
          "docEnd": 4118
        },
        {
          "name": "Engine_BloodyGoodTime",
          "docStart": 4145,
          "docEnd": 4169
        },
        {
          "name": "Engine_EYE",
          "docStart": 4188,
          "docEnd": 4219
        },
        {
          "name": "Engine_Portal2",
          "docStart": 4241,
          "docEnd": 4257
        },
        {
          "name": "Engine_CSGO",
          "docStart": 4276,
          "docEnd": 4316
        },
        {
          "name": "Engine_CSS",
          "docStart": 4335,
          "docEnd": 4365
        },
        {
          "name": "Engine_DOTA",
          "docStart": 4384,
          "docEnd": 4398
        },
        {
          "name": "Engine_HL2DM",
          "docStart": 4418,
          "docEnd": 4448
        },
        {
          "name": "Engine_DODS",
          "docStart": 4467,
          "docEnd": 4496
        },
        {
          "name": "Engine_TF2",
          "docStart": 4515,
          "docEnd": 4538
        },
        {
          "name": "Engine_NuclearDawn",
          "docStart": 4563,
          "docEnd": 4583
        },
        {
          "name": "Engine_SDK2013",
          "docStart": 4605,
          "docEnd": 4628
        },
        {
          "name": "Engine_Blade",
          "docStart": 4648,
          "docEnd": 4670
        },
        {
          "name": "Engine_Insurgency",
          "docStart": 4694,
          "docEnd": 4733
        },
        {
          "name": "Engine_Contagion",
          "docStart": 4756,
          "docEnd": 4773
        },
        {
          "name": "Engine_BlackMesa",
          "docStart": 4796,
          "docEnd": 4826
        },
        {
          "name": "Engine_DOI",
          "docStart": 4845,
          "docEnd": 4866
        }
      ]
    },
    {
      "name": "FindMapResult",
      "entries": [
        {
          "name": "FindMap_Found",
          "docStart": 4898,
          "docEnd": 4939
        },
        {
          "name": "FindMap_NotFound",
          "docStart": 4959,
          "docEnd": 5004
        },
        {
          "name": "FindMap_FuzzyMatch",
          "docStart": 5027,
          "docEnd": 5226
        },
        {
          "name": "FindMap_NonCanonical",
          "docStart": 5251,
          "docEnd": 5429
        },
        {
          "name": "FindMap_PossiblyAvailable",
          "docStart": 5456,
          "docEnd": 5616
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