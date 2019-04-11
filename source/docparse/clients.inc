{
  "functions": [
    {
      "name": "OnClientConnect",
      "docStart": 3007,
      "docEnd": 3794,
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
      "docStart": 3871,
      "docEnd": 4014,
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
      "docStart": 4063,
      "docEnd": 4556,
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
      "docStart": 4607,
      "docEnd": 4711,
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
      "docStart": 4761,
      "docEnd": 4864,
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
      "docStart": 4919,
      "docEnd": 5309,
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
      "docStart": 5368,
      "docEnd": 5764,
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
      "docStart": 5836,
      "docEnd": 6091,
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
      "docStart": 6166,
      "docEnd": 6266,
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
      "docStart": 6321,
      "docEnd": 6693,
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
      "docStart": 6762,
      "docEnd": 7371,
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
      "docStart": 7426,
      "docEnd": 7930,
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
      "docStart": 7985,
      "docEnd": 8277,
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
      "docStart": 8939,
      "docEnd": 9579,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "GetClientCount",
      "docStart": 9617,
      "docEnd": 9788,
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
      "docStart": 9842,
      "docEnd": 10169,
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
      "docStart": 10238,
      "docEnd": 10654,
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
      "docStart": 11422,
      "docEnd": 12020,
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
      "docStart": 12132,
      "docEnd": 12692,
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
      "docStart": 12759,
      "docEnd": 13021,
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
      "docStart": 13066,
      "docEnd": 13232,
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
      "docStart": 13280,
      "docEnd": 13522,
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
      "docStart": 13567,
      "docEnd": 13862,
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
      "docStart": 14150,
      "docEnd": 14322,
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
      "docStart": 14371,
      "docEnd": 14531,
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
      "docStart": 14574,
      "docEnd": 14740,
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
      "docStart": 14787,
      "docEnd": 14949,
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
      "docStart": 14994,
      "docEnd": 15160,
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
      "docStart": 15207,
      "docEnd": 15512,
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
      "docStart": 15556,
      "docEnd": 15892,
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
      "docStart": 15980,
      "docEnd": 16198,
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
      "docStart": 16242,
      "docEnd": 16537,
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
      "docStart": 16609,
      "docEnd": 16818,
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
      "docStart": 16864,
      "docEnd": 17129,
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
      "docStart": 17187,
      "docEnd": 17434,
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
      "docStart": 17495,
      "docEnd": 17756,
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
      "docStart": 17813,
      "docEnd": 18036,
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
      "docStart": 18081,
      "docEnd": 18403,
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
      "docStart": 18459,
      "docEnd": 18833,
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
      "docStart": 18883,
      "docEnd": 19207,
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
      "docStart": 19258,
      "docEnd": 19382,
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
      "docStart": 19435,
      "docEnd": 19682,
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
      "docStart": 19771,
      "docEnd": 19955,
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
      "docStart": 20000,
      "docEnd": 20298,
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
      "docStart": 20369,
      "docEnd": 20669,
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
      "docStart": 20742,
      "docEnd": 20974,
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
      "docStart": 21032,
      "docEnd": 21264,
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
      "docStart": 21322,
      "docEnd": 21559,
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
      "docStart": 21622,
      "docEnd": 21857,
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
      "docStart": 21920,
      "docEnd": 22102,
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
      "docStart": 22146,
      "docEnd": 22334,
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
      "docStart": 22379,
      "docEnd": 22565,
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
      "docStart": 22609,
      "docEnd": 22810,
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
      "docStart": 22857,
      "docEnd": 23078,
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
      "docStart": 23126,
      "docEnd": 23332,
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
      "docStart": 23377,
      "docEnd": 23703,
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
      "docStart": 23765,
      "docEnd": 24055,
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
      "docStart": 24120,
      "docEnd": 24449,
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
      "docStart": 24511,
      "docEnd": 24841,
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
      "docStart": 24904,
      "docEnd": 25145,
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
      "docStart": 25207,
      "docEnd": 25472,
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
      "docStart": 25537,
      "docEnd": 25711,
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
      "docStart": 25758,
      "docEnd": 26603,
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
      "docStart": 26677,
      "docEnd": 27241,
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
      "docStart": 27317,
      "docEnd": 27615,
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
      "docStart": 27672,
      "docEnd": 27855,
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
      "docStart": 27900,
      "docEnd": 28051,
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
          "docStart": 1719,
          "docEnd": 1743
        },
        {
          "name": "NetFlow_Incoming",
          "docStart": 1765,
          "docEnd": 1789
        },
        {
          "name": "NetFlow_Both",
          "docStart": 1808,
          "docEnd": 1842
        }
      ]
    },
    {
      "name": "AuthIdType",
      "docStart": 1850,
      "docEnd": 2144,
      "entries": [
        {
          "name": "AuthId_Engine",
          "docStart": 2190,
          "docEnd": 2255
        },
        {
          "name": "AuthId_Steam2",
          "docStart": 2261,
          "docEnd": 2340
        },
        {
          "name": "AuthId_Steam3",
          "docStart": 2446,
          "docEnd": 2496
        },
        {
          "name": "AuthId_SteamID64",
          "docStart": 2522,
          "docEnd": 2586
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}