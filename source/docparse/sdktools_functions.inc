{
  "functions": [
    {
      "name": "RemovePlayerItem",
      "docStart": 1661,
      "docEnd": 1977,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "item",
          "decl": "int item"
        }
      ]
    },
    {
      "name": "GivePlayerItem",
      "docStart": 2034,
      "docEnd": 2373,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "item",
          "decl": "const char[] item"
        },
        {
          "type": "int",
          "name": "iSubType",
          "decl": "int iSubType"
        }
      ]
    },
    {
      "name": "GetPlayerWeaponSlot",
      "docStart": 2452,
      "docEnd": 2760,
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
          "name": "slot",
          "decl": "int slot"
        }
      ]
    },
    {
      "name": "IgniteEntity",
      "docStart": 2819,
      "docEnd": 3166,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "float",
          "name": "time",
          "decl": "float time"
        },
        {
          "type": "bool",
          "name": "npc",
          "decl": "bool npc"
        },
        {
          "type": "float",
          "name": "size",
          "decl": "float size"
        },
        {
          "type": "bool",
          "name": "level",
          "decl": "bool level"
        }
      ]
    },
    {
      "name": "ExtinguishEntity",
      "docStart": 3271,
      "docEnd": 3453,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "TeleportEntity",
      "docStart": 3500,
      "docEnd": 3866,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "const float[3]",
          "name": "origin",
          "decl": "const float origin[3]"
        },
        {
          "type": "const float[3]",
          "name": "angles",
          "decl": "const float angles[3]"
        },
        {
          "type": "const float[3]",
          "name": "velocity",
          "decl": "const float velocity[3]"
        }
      ]
    },
    {
      "name": "ForcePlayerSuicide",
      "docStart": 3982,
      "docEnd": 4159,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "SlapPlayer",
      "docStart": 4208,
      "docEnd": 4494,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "health",
          "decl": "int health"
        },
        {
          "type": "bool",
          "name": "sound",
          "decl": "bool sound"
        }
      ]
    },
    {
      "name": "FindEntityByClassname",
      "docStart": 4566,
      "docEnd": 4933,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "startEnt",
          "decl": "int startEnt"
        },
        {
          "type": "const char[]",
          "name": "classname",
          "decl": "const char[] classname"
        }
      ]
    },
    {
      "name": "GetClientEyeAngles",
      "docStart": 5010,
      "docEnd": 5324,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "float[3]",
          "name": "ang",
          "decl": "float ang[3]"
        }
      ]
    },
    {
      "name": "CreateEntityByName",
      "docStart": 5387,
      "docEnd": 5941,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "classname",
          "decl": "const char[] classname"
        },
        {
          "type": "int",
          "name": "ForceEdictIndex",
          "decl": "int ForceEdictIndex"
        }
      ]
    },
    {
      "name": "DispatchSpawn",
      "docStart": 6025,
      "docEnd": 6259,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "DispatchKeyValue",
      "docStart": 6303,
      "docEnd": 6638,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "const char[]",
          "name": "keyName",
          "decl": "const char[] keyName"
        },
        {
          "type": "const char[]",
          "name": "value",
          "decl": "const char[] value"
        }
      ]
    },
    {
      "name": "DispatchKeyValueFloat",
      "docStart": 6727,
      "docEnd": 7078,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "const char[]",
          "name": "keyName",
          "decl": "const char[] keyName"
        },
        {
          "type": "float",
          "name": "value",
          "decl": "float value"
        }
      ]
    },
    {
      "name": "DispatchKeyValueVector",
      "docStart": 7165,
      "docEnd": 7500,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "const char[]",
          "name": "keyName",
          "decl": "const char[] keyName"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        }
      ]
    },
    {
      "name": "GetClientAimTarget",
      "docStart": 7595,
      "docEnd": 8020,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "bool",
          "name": "only_clients",
          "decl": "bool only_clients"
        }
      ]
    },
    {
      "name": "GetTeamCount",
      "docStart": 8092,
      "docEnd": 8263,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetTeamName",
      "docStart": 8295,
      "docEnd": 8612,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
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
      "name": "GetTeamScore",
      "docStart": 8681,
      "docEnd": 8924,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "SetTeamScore",
      "docStart": 8965,
      "docEnd": 9215,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        },
        {
          "type": "int",
          "name": "value",
          "decl": "int value"
        }
      ]
    },
    {
      "name": "GetTeamClientCount",
      "docStart": 9268,
      "docEnd": 9535,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "GetTeamEntity",
      "docStart": 9582,
      "docEnd": 9763,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "teamIndex",
          "decl": "int teamIndex"
        }
      ]
    },
    {
      "name": "SetEntityModel",
      "docStart": 9809,
      "docEnd": 10001,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "const char[]",
          "name": "model",
          "decl": "const char[] model"
        }
      ]
    },
    {
      "name": "GetPlayerDecalFile",
      "docStart": 10066,
      "docEnd": 10425,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "char[]",
          "name": "hex",
          "decl": "char[] hex"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "GetPlayerJingleFile",
      "docStart": 10501,
      "docEnd": 10863,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "char[]",
          "name": "hex",
          "decl": "char[] hex"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "GetServerNetStats",
      "docStart": 10940,
      "docEnd": 11152,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "float&",
          "name": "inAmount",
          "decl": "float& inAmount"
        },
        {
          "type": "float&",
          "name": "outAmout",
          "decl": "float& outAmout"
        }
      ]
    },
    {
      "name": "EquipPlayerWeapon",
      "docStart": 11222,
      "docEnd": 11481,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "weapon",
          "decl": "int weapon"
        }
      ]
    },
    {
      "name": "ActivateEntity",
      "docStart": 11541,
      "docEnd": 11707,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "SetClientInfo",
      "docStart": 11752,
      "docEnd": 12104,
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
      "name": "SetClientName",
      "docStart": 12186,
      "docEnd": 12375,
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
        }
      ]
    },
    {
      "name": "GivePlayerAmmo",
      "docStart": 12438,
      "docEnd": 12884,
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
          "name": "amount",
          "decl": "int amount"
        },
        {
          "type": "int",
          "name": "ammotype",
          "decl": "int ammotype"
        },
        {
          "type": "bool",
          "name": "suppressSound",
          "decl": "bool suppressSound"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [],
  "constants": [],
  "typesets": [],
  "typedefs": []
}