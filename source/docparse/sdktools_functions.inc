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
      "docStart": 4024,
      "docEnd": 4201,
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
      "docStart": 4250,
      "docEnd": 4536,
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
      "docStart": 4608,
      "docEnd": 4975,
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
      "docStart": 5052,
      "docEnd": 5366,
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
      "docStart": 5429,
      "docEnd": 5983,
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
      "docStart": 6067,
      "docEnd": 6301,
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
      "docStart": 6345,
      "docEnd": 6680,
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
      "docStart": 6769,
      "docEnd": 7120,
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
      "docStart": 7207,
      "docEnd": 7542,
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
      "docStart": 7637,
      "docEnd": 8062,
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
      "docStart": 8134,
      "docEnd": 8305,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetTeamName",
      "docStart": 8337,
      "docEnd": 8654,
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
      "docStart": 8723,
      "docEnd": 8966,
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
      "docStart": 9007,
      "docEnd": 9257,
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
      "docStart": 9310,
      "docEnd": 9577,
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
      "docStart": 9624,
      "docEnd": 9805,
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
      "docStart": 9851,
      "docEnd": 10043,
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
      "docStart": 10108,
      "docEnd": 10467,
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
      "docStart": 10543,
      "docEnd": 10905,
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
      "docStart": 10982,
      "docEnd": 11194,
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
      "docStart": 11264,
      "docEnd": 11523,
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
      "docStart": 11583,
      "docEnd": 11749,
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
      "docStart": 11794,
      "docEnd": 12146,
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
      "docStart": 12228,
      "docEnd": 12417,
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
      "docStart": 12480,
      "docEnd": 12926,
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