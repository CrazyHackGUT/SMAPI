{
  "functions": [
    {
      "name": "RemovePlayerItem",
      "docStart": 1663,
      "docEnd": 1930,
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
      "docStart": 1987,
      "docEnd": 2288,
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
      "docStart": 2367,
      "docEnd": 2643,
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
      "docStart": 2702,
      "docEnd": 3004,
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
      "docStart": 3109,
      "docEnd": 3274,
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
      "docStart": 3321,
      "docEnd": 3654,
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
      "docStart": 3770,
      "docEnd": 3930,
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
      "docStart": 3979,
      "docEnd": 4236,
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
      "docStart": 4308,
      "docEnd": 4631,
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
      "docStart": 4708,
      "docEnd": 4987,
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
      "docStart": 5050,
      "docEnd": 5570,
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
      "docStart": 5654,
      "docEnd": 5861,
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
      "docStart": 5905,
      "docEnd": 6202,
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
      "docStart": 6291,
      "docEnd": 6604,
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
      "docStart": 6691,
      "docEnd": 6986,
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
      "docStart": 7081,
      "docEnd": 7447,
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
      "docStart": 7519,
      "docEnd": 7680,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetTeamName",
      "docStart": 7712,
      "docEnd": 8005,
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
      "docStart": 8074,
      "docEnd": 8291,
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
      "docStart": 8332,
      "docEnd": 8561,
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
      "docStart": 8614,
      "docEnd": 8855,
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
      "docStart": 8902,
      "docEnd": 9059,
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
      "docStart": 9105,
      "docEnd": 9276,
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
      "docStart": 9341,
      "docEnd": 9665,
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
      "docStart": 9741,
      "docEnd": 10068,
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
      "docStart": 10145,
      "docEnd": 10342,
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
      "docStart": 10412,
      "docEnd": 10634,
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
      "docStart": 10694,
      "docEnd": 10843,
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
      "docStart": 10888,
      "docEnd": 11209,
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
      "docStart": 11291,
      "docEnd": 11467,
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
      "docStart": 11530,
      "docEnd": 11967,
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