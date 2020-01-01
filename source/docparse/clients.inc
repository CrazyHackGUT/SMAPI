{
  "functions": [
    {
      "name": "OnClientConnect",
      "docStart": 3029,
      "docEnd": 3841,
      "kind": "forward",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "char[]",
          "name": "rejectmsg",
          "decl": "char[] rejectmsg"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        }
      ]
    },
    {
      "name": "OnClientConnected",
      "docStart": 3918,
      "docEnd": 4067,
      "kind": "forward",
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
      "name": "OnClientPutInServer",
      "docStart": 4116,
      "docEnd": 4615,
      "kind": "forward",
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
      "name": "OnClientDisconnect",
      "docStart": 4666,
      "docEnd": 4776,
      "kind": "forward",
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
      "name": "OnClientDisconnect_Post",
      "docStart": 4826,
      "docEnd": 4935,
      "kind": "forward",
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
      "name": "OnClientCommand",
      "docStart": 4990,
      "docEnd": 5419,
      "kind": "forward",
      "returnType": "Action",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "args",
          "decl": "int args"
        }
      ]
    },
    {
      "name": "OnClientCommandKeyValues",
      "docStart": 5478,
      "docEnd": 5947,
      "kind": "forward",
      "returnType": "Action",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "KeyValues",
          "name": "kv",
          "decl": "KeyValues kv"
        }
      ]
    },
    {
      "name": "OnClientCommandKeyValues_Post",
      "docStart": 6019,
      "docEnd": 6321,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "KeyValues",
          "name": "kv",
          "decl": "KeyValues kv"
        }
      ]
    },
    {
      "name": "OnClientSettingsChanged",
      "docStart": 6396,
      "docEnd": 6502,
      "kind": "forward",
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
      "name": "OnClientAuthorized",
      "docStart": 6557,
      "docEnd": 6942,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "auth",
          "decl": "const char[] auth"
        }
      ]
    },
    {
      "name": "OnClientPreAdminCheck",
      "docStart": 7011,
      "docEnd": 7636,
      "kind": "forward",
      "returnType": "Action",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "OnClientPostAdminFilter",
      "docStart": 7691,
      "docEnd": 8201,
      "kind": "forward",
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
      "name": "OnClientPostAdminCheck",
      "docStart": 8256,
      "docEnd": 8554,
      "kind": "forward",
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
      "name": "GetMaxClients",
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetMaxHumanPlayers",
      "docStart": 9284,
      "docEnd": 9934,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetClientCount",
      "docStart": 9972,
      "docEnd": 10156,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "bool",
          "name": "inGameOnly",
          "decl": "bool inGameOnly"
        }
      ]
    },
    {
      "name": "GetClientName",
      "docStart": 10210,
      "docEnd": 10577,
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
          "name": "name",
          "decl": "char[] name"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        }
      ]
    },
    {
      "name": "GetClientIP",
      "docStart": 10646,
      "docEnd": 11109,
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
          "name": "ip",
          "decl": "char[] ip"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        },
        {
          "type": "bool",
          "name": "remport",
          "decl": "bool remport"
        }
      ]
    },
    {
      "name": "GetClientAuthString",
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
          "name": "auth",
          "decl": "char[] auth"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        },
        {
          "type": "bool",
          "name": "validate",
          "decl": "bool validate"
        }
      ]
    },
    {
      "name": "GetClientAuthId",
      "docStart": 11994,
      "docEnd": 12668,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
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
        },
        {
          "type": "bool",
          "name": "validate",
          "decl": "bool validate"
        }
      ]
    },
    {
      "name": "GetSteamAccountID",
      "docStart": 12780,
      "docEnd": 13399,
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
          "name": "validate",
          "decl": "bool validate"
        }
      ]
    },
    {
      "name": "GetClientUserId",
      "docStart": 13466,
      "docEnd": 13754,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "IsClientConnected",
      "docStart": 13799,
      "docEnd": 13981,
      "kind": "native",
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
      "name": "IsClientInGame",
      "docStart": 14029,
      "docEnd": 14298,
      "kind": "native",
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
      "name": "IsClientInKickQueue",
      "docStart": 14343,
      "docEnd": 14665,
      "kind": "native",
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
      "name": "IsPlayerInGame",
      "kind": "stock",
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
      "name": "IsClientAuthorized",
      "docStart": 14960,
      "docEnd": 15148,
      "kind": "native",
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
      "name": "IsFakeClient",
      "docStart": 15197,
      "docEnd": 15373,
      "kind": "native",
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
      "name": "IsClientSourceTV",
      "docStart": 15416,
      "docEnd": 15598,
      "kind": "native",
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
      "name": "IsClientReplay",
      "docStart": 15645,
      "docEnd": 15823,
      "kind": "native",
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
      "name": "IsClientObserver",
      "docStart": 15868,
      "docEnd": 16050,
      "kind": "native",
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
      "name": "IsPlayerAlive",
      "docStart": 16097,
      "docEnd": 16429,
      "kind": "native",
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
      "name": "GetClientInfo",
      "docStart": 16473,
      "docEnd": 16855,
      "kind": "native",
      "returnType": "bool",
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
          "type": "char[]",
          "name": "value",
          "decl": "char[] value"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        }
      ]
    },
    {
      "name": "GetClientTeam",
      "docStart": 16943,
      "docEnd": 17188,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "SetUserAdmin",
      "docStart": 17232,
      "docEnd": 17560,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "AdminId",
          "name": "id",
          "decl": "AdminId id"
        },
        {
          "type": "bool",
          "name": "temp",
          "decl": "bool temp"
        }
      ]
    },
    {
      "name": "GetUserAdmin",
      "docStart": 17632,
      "docEnd": 17868,
      "kind": "native",
      "returnType": "AdminId",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "AddUserFlags",
      "docStart": 17914,
      "docEnd": 18204,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "AdminFlag ...",
          "name": "...",
          "decl": "AdminFlag ... ..."
        }
      ]
    },
    {
      "name": "RemoveUserFlags",
      "docStart": 18262,
      "docEnd": 18534,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "AdminFlag ...",
          "name": "...",
          "decl": "AdminFlag ... ..."
        }
      ]
    },
    {
      "name": "SetUserFlagBits",
      "docStart": 18595,
      "docEnd": 18868,
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
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "GetUserFlagBits",
      "docStart": 18925,
      "docEnd": 19175,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "CanUserTarget",
      "docStart": 19220,
      "docEnd": 19575,
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
          "name": "target",
          "decl": "int target"
        }
      ]
    },
    {
      "name": "RunAdminCacheChecks",
      "docStart": 19631,
      "docEnd": 20032,
      "kind": "native",
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
      "name": "NotifyPostAdminCheck",
      "docStart": 20082,
      "docEnd": 20423,
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
      "name": "CreateFakeClient",
      "docStart": 20474,
      "docEnd": 20615,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "SetFakeClientConVar",
      "docStart": 20668,
      "docEnd": 20961,
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
          "name": "cvar",
          "decl": "const char[] cvar"
        },
        {
          "type": "const char[]",
          "name": "value",
          "decl": "const char[] value"
        }
      ]
    },
    {
      "name": "GetClientHealth",
      "docStart": 21050,
      "docEnd": 21261,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "GetClientModel",
      "docStart": 21306,
      "docEnd": 21633,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "char[]",
          "name": "model",
          "decl": "char[] model"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        }
      ]
    },
    {
      "name": "GetClientWeapon",
      "docStart": 21704,
      "docEnd": 22033,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "char[]",
          "name": "weapon",
          "decl": "char[] weapon"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        }
      ]
    },
    {
      "name": "GetClientMaxs",
      "docStart": 22106,
      "docEnd": 22363,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "float[3]",
          "name": "vec",
          "decl": "float vec[3]"
        }
      ]
    },
    {
      "name": "GetClientMins",
      "docStart": 22421,
      "docEnd": 22678,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "float[3]",
          "name": "vec",
          "decl": "float vec[3]"
        }
      ]
    },
    {
      "name": "GetClientAbsAngles",
      "docStart": 22736,
      "docEnd": 22998,
      "kind": "native",
      "returnType": "void",
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
      "name": "GetClientAbsOrigin",
      "docStart": 23061,
      "docEnd": 23321,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "float[3]",
          "name": "vec",
          "decl": "float vec[3]"
        }
      ]
    },
    {
      "name": "GetClientArmor",
      "docStart": 23384,
      "docEnd": 23593,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "GetClientDeaths",
      "docStart": 23637,
      "docEnd": 23852,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "GetClientFrags",
      "docStart": 23897,
      "docEnd": 24110,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "GetClientDataRate",
      "docStart": 24154,
      "docEnd": 24382,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "IsClientTimingOut",
      "docStart": 24429,
      "docEnd": 24677,
      "kind": "native",
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
      "name": "GetClientTime",
      "docStart": 24725,
      "docEnd": 24958,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "GetClientLatency",
      "docStart": 25003,
      "docEnd": 25363,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "NetFlow",
          "name": "flow",
          "decl": "NetFlow flow"
        }
      ]
    },
    {
      "name": "GetClientAvgLatency",
      "docStart": 25425,
      "docEnd": 25749,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "NetFlow",
          "name": "flow",
          "decl": "NetFlow flow"
        }
      ]
    },
    {
      "name": "GetClientAvgLoss",
      "docStart": 25814,
      "docEnd": 26177,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "NetFlow",
          "name": "flow",
          "decl": "NetFlow flow"
        }
      ]
    },
    {
      "name": "GetClientAvgChoke",
      "docStart": 26239,
      "docEnd": 26603,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "NetFlow",
          "name": "flow",
          "decl": "NetFlow flow"
        }
      ]
    },
    {
      "name": "GetClientAvgData",
      "docStart": 26666,
      "docEnd": 26941,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "NetFlow",
          "name": "flow",
          "decl": "NetFlow flow"
        }
      ]
    },
    {
      "name": "GetClientAvgPackets",
      "docStart": 27003,
      "docEnd": 27302,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "NetFlow",
          "name": "flow",
          "decl": "NetFlow flow"
        }
      ]
    },
    {
      "name": "GetClientOfUserId",
      "docStart": 27367,
      "docEnd": 27568,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "userid",
          "decl": "int userid"
        }
      ]
    },
    {
      "name": "KickClient",
      "docStart": 27615,
      "docEnd": 28491,
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
      "name": "KickClientEx",
      "docStart": 28565,
      "docEnd": 29160,
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
      "name": "ChangeClientTeam",
      "docStart": 29236,
      "docEnd": 29574,
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
          "name": "team",
          "decl": "int team"
        }
      ]
    },
    {
      "name": "GetClientSerial",
      "docStart": 29631,
      "docEnd": 29844,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "GetClientFromSerial",
      "docStart": 29889,
      "docEnd": 30056,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "serial",
          "decl": "int serial"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "NetFlow",
      "docStart": 1640,
      "docEnd": 1677,
      "entries": [
        {
          "name": "NetFlow_Outgoing",
          "docStart": 1721,
          "docEnd": 1745
        },
        {
          "name": "NetFlow_Incoming",
          "docStart": 1772,
          "docEnd": 1796
        },
        {
          "name": "NetFlow_Both",
          "docStart": 1823,
          "docEnd": 1857
        }
      ]
    },
    {
      "name": "AuthIdType",
      "docStart": 1865,
      "docEnd": 2159,
      "entries": [
        {
          "name": "AuthId_Engine",
          "docStart": 2205,
          "docEnd": 2270
        },
        {
          "name": "AuthId_Steam2",
          "docStart": 2276,
          "docEnd": 2355
        },
        {
          "name": "AuthId_Steam3",
          "docStart": 2461,
          "docEnd": 2511
        },
        {
          "name": "AuthId_SteamID64",
          "docStart": 2537,
          "docEnd": 2601
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}