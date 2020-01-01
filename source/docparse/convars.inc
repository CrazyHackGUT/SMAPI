{
  "functions": [
    {
      "name": "CreateConVar",
      "docStart": 2638,
      "docEnd": 3601,
      "kind": "native",
      "returnType": "ConVar",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "const char[]",
          "name": "defaultValue",
          "decl": "const char[] defaultValue"
        },
        {
          "type": "const char[]",
          "name": "description",
          "decl": "const char[] description"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "bool",
          "name": "hasMin",
          "decl": "bool hasMin"
        },
        {
          "type": "float",
          "name": "min",
          "decl": "float min"
        },
        {
          "type": "bool",
          "name": "hasMax",
          "decl": "bool hasMax"
        },
        {
          "type": "float",
          "name": "max",
          "decl": "float max"
        }
      ]
    },
    {
      "name": "FindConVar",
      "docStart": 3794,
      "docEnd": 3954,
      "kind": "native",
      "returnType": "ConVar",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "HookConVarChange",
      "docStart": 11022,
      "docEnd": 11285,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
        },
        {
          "type": "ConVarChanged",
          "name": "callback",
          "decl": "ConVarChanged callback"
        }
      ]
    },
    {
      "name": "UnhookConVarChange",
      "docStart": 11356,
      "docEnd": 11646,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
        },
        {
          "type": "ConVarChanged",
          "name": "callback",
          "decl": "ConVarChanged callback"
        }
      ]
    },
    {
      "name": "GetConVarBool",
      "docStart": 11719,
      "docEnd": 11935,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
        }
      ]
    },
    {
      "name": "SetConVarBool",
      "docStart": 11979,
      "docEnd": 12788,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
        },
        {
          "type": "bool",
          "name": "value",
          "decl": "bool value"
        },
        {
          "type": "bool",
          "name": "replicate",
          "decl": "bool replicate"
        },
        {
          "type": "bool",
          "name": "notify",
          "decl": "bool notify"
        }
      ]
    },
    {
      "name": "GetConVarInt",
      "docStart": 12885,
      "docEnd": 13101,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
        }
      ]
    },
    {
      "name": "SetConVarInt",
      "docStart": 13143,
      "docEnd": 13952,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
        },
        {
          "type": "int",
          "name": "value",
          "decl": "int value"
        },
        {
          "type": "bool",
          "name": "replicate",
          "decl": "bool replicate"
        },
        {
          "type": "bool",
          "name": "notify",
          "decl": "bool notify"
        }
      ]
    },
    {
      "name": "GetConVarFloat",
      "docStart": 14047,
      "docEnd": 14277,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
        }
      ]
    },
    {
      "name": "SetConVarFloat",
      "docStart": 14323,
      "docEnd": 15146,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
        },
        {
          "type": "float",
          "name": "value",
          "decl": "float value"
        },
        {
          "type": "bool",
          "name": "replicate",
          "decl": "bool replicate"
        },
        {
          "type": "bool",
          "name": "notify",
          "decl": "bool notify"
        }
      ]
    },
    {
      "name": "GetConVarString",
      "docStart": 15245,
      "docEnd": 15532,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
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
        }
      ]
    },
    {
      "name": "SetConVarString",
      "docStart": 15607,
      "docEnd": 16414,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
        },
        {
          "type": "const char[]",
          "name": "value",
          "decl": "const char[] value"
        },
        {
          "type": "bool",
          "name": "replicate",
          "decl": "bool replicate"
        },
        {
          "type": "bool",
          "name": "notify",
          "decl": "bool notify"
        }
      ]
    },
    {
      "name": "ResetConVar",
      "docStart": 16521,
      "docEnd": 17291,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
        },
        {
          "type": "bool",
          "name": "replicate",
          "decl": "bool replicate"
        },
        {
          "type": "bool",
          "name": "notify",
          "decl": "bool notify"
        }
      ]
    },
    {
      "name": "GetConVarDefault",
      "docStart": 17374,
      "docEnd": 17748,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
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
        }
      ]
    },
    {
      "name": "GetConVarFlags",
      "docStart": 17823,
      "docEnd": 18070,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
        }
      ]
    },
    {
      "name": "SetConVarFlags",
      "docStart": 18114,
      "docEnd": 18351,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "GetConVarBounds",
      "docStart": 18407,
      "docEnd": 18843,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
        },
        {
          "type": "ConVarBounds",
          "name": "type",
          "decl": "ConVarBounds type"
        },
        {
          "type": "float&",
          "name": "value",
          "decl": "float& value"
        }
      ]
    },
    {
      "name": "SetConVarBounds",
      "docStart": 18922,
      "docEnd": 19347,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
        },
        {
          "type": "ConVarBounds",
          "name": "type",
          "decl": "ConVarBounds type"
        },
        {
          "type": "bool",
          "name": "set",
          "decl": "bool set"
        },
        {
          "type": "float",
          "name": "value",
          "decl": "float value"
        }
      ]
    },
    {
      "name": "GetConVarName",
      "docStart": 19439,
      "docEnd": 19717,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
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
      "name": "SendConVarValue",
      "docStart": 19789,
      "docEnd": 20158,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "Handle",
          "name": "convar",
          "decl": "Handle convar"
        },
        {
          "type": "const char[]",
          "name": "value",
          "decl": "const char[] value"
        }
      ]
    },
    {
      "name": "QueryClientConVar",
      "docStart": 21625,
      "docEnd": 22120,
      "kind": "native",
      "returnType": "QueryCookie",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "const char[]",
          "name": "cvarName",
          "decl": "const char[] cvarName"
        },
        {
          "type": "ConVarQueryFinished",
          "name": "callback",
          "decl": "ConVarQueryFinished callback"
        },
        {
          "type": "any",
          "name": "value",
          "decl": "any value"
        }
      ]
    },
    {
      "name": "IsValidConVarChar",
      "docStart": 22238,
      "docEnd": 22431,
      "kind": "stock",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "c",
          "decl": "int c"
        }
      ]
    }
  ],
  "methodmaps": [
    {
      "name": "ConVar",
      "docStart": 4001,
      "docEnd": 4067,
      "methods": [
        {
          "name": "SetBool",
          "docStart": 4652,
          "docEnd": 5346,
          "returnType": "void",
          "arguments": [
            {
              "type": "bool",
              "name": "value",
              "decl": "bool value"
            },
            {
              "type": "bool",
              "name": "replicate",
              "decl": "bool replicate"
            },
            {
              "type": "bool",
              "name": "notify",
              "decl": "bool notify"
            }
          ]
        },
        {
          "name": "SetInt",
          "docStart": 5431,
          "docEnd": 6125,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "value",
              "decl": "int value"
            },
            {
              "type": "bool",
              "name": "replicate",
              "decl": "bool replicate"
            },
            {
              "type": "bool",
              "name": "notify",
              "decl": "bool notify"
            }
          ]
        },
        {
          "name": "SetFloat",
          "docStart": 6208,
          "docEnd": 6916,
          "returnType": "void",
          "arguments": [
            {
              "type": "float",
              "name": "value",
              "decl": "float value"
            },
            {
              "type": "bool",
              "name": "replicate",
              "decl": "bool replicate"
            },
            {
              "type": "bool",
              "name": "notify",
              "decl": "bool notify"
            }
          ]
        },
        {
          "name": "GetString",
          "docStart": 7003,
          "docEnd": 7221,
          "returnType": "void",
          "arguments": [
            {
              "type": "char[]",
              "name": "value",
              "decl": "char[] value"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            }
          ]
        },
        {
          "name": "SetString",
          "docStart": 7284,
          "docEnd": 7982,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "value",
              "decl": "const char[] value"
            },
            {
              "type": "bool",
              "name": "replicate",
              "decl": "bool replicate"
            },
            {
              "type": "bool",
              "name": "notify",
              "decl": "bool notify"
            }
          ]
        },
        {
          "name": "RestoreDefault",
          "docStart": 8077,
          "docEnd": 8740,
          "returnType": "void",
          "arguments": [
            {
              "type": "bool",
              "name": "replicate",
              "decl": "bool replicate"
            },
            {
              "type": "bool",
              "name": "notify",
              "decl": "bool notify"
            }
          ]
        },
        {
          "name": "GetDefault",
          "docStart": 8820,
          "docEnd": 9084,
          "returnType": "int",
          "arguments": [
            {
              "type": "char[]",
              "name": "value",
              "decl": "char[] value"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            }
          ]
        },
        {
          "name": "GetBounds",
          "docStart": 9147,
          "docEnd": 9473,
          "returnType": "bool",
          "arguments": [
            {
              "type": "ConVarBounds",
              "name": "type",
              "decl": "ConVarBounds type"
            },
            {
              "type": "float&",
              "name": "value",
              "decl": "float& value"
            }
          ]
        },
        {
          "name": "SetBounds",
          "docStart": 9540,
          "docEnd": 9855,
          "returnType": "void",
          "arguments": [
            {
              "type": "ConVarBounds",
              "name": "type",
              "decl": "ConVarBounds type"
            },
            {
              "type": "bool",
              "name": "set",
              "decl": "bool set"
            },
            {
              "type": "float",
              "name": "value",
              "decl": "float value"
            }
          ]
        },
        {
          "name": "GetName",
          "docStart": 9935,
          "docEnd": 10100,
          "returnType": "void",
          "arguments": [
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
          "name": "ReplicateToClient",
          "docStart": 10160,
          "docEnd": 10476,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "client",
              "decl": "int client"
            },
            {
              "type": "const char[]",
              "name": "value",
              "decl": "const char[] value"
            }
          ]
        },
        {
          "name": "AddChangeHook",
          "docStart": 10550,
          "docEnd": 10677,
          "returnType": "void",
          "arguments": [
            {
              "type": "ConVarChanged",
              "name": "callback",
              "decl": "ConVarChanged callback"
            }
          ]
        },
        {
          "name": "RemoveChangeHook",
          "docStart": 10739,
          "docEnd": 10956,
          "returnType": "void",
          "arguments": [
            {
              "type": "ConVarChanged",
              "name": "callback",
              "decl": "ConVarChanged callback"
            }
          ]
        }
      ],
      "properties": [
        {
          "name": "BoolValue",
          "docStart": 4097,
          "docEnd": 4149,
          "type": "bool",
          "getter": true,
          "setter": true
        },
        {
          "name": "IntValue",
          "docStart": 4234,
          "docEnd": 4287,
          "type": "int",
          "getter": true,
          "setter": true
        },
        {
          "name": "FloatValue",
          "docStart": 4373,
          "docEnd": 4423,
          "type": "float",
          "getter": true,
          "setter": true
        },
        {
          "name": "Flags",
          "docStart": 4515,
          "docEnd": 4569,
          "type": "int",
          "getter": true,
          "setter": true
        }
      ]
    }
  ],
  "enums": [
    {
      "name": "ConVarBounds",
      "docStart": 1619,
      "docEnd": 1691,
      "entries": [
        {
          "name": "ConVarBound_Upper"
        },
        {
          "name": "ConVarBound_Lower"
        }
      ]
    },
    {
      "name": "ConVarQueryResult",
      "docStart": 1759,
      "docEnd": 1807,
      "entries": [
        {
          "name": "ConVarQuery_Okay",
          "docStart": 1870,
          "docEnd": 1925
        },
        {
          "name": "ConVarQuery_NotFound",
          "docStart": 1963,
          "docEnd": 1998
        },
        {
          "name": "ConVarQuery_NotValid",
          "docStart": 2036,
          "docEnd": 2114
        },
        {
          "name": "ConVarQuery_Protected",
          "docStart": 2152,
          "docEnd": 2242
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [
    {
      "name": "ConVarQueryFinished",
      "types": [
        {
          "type": "function void(QueryCookie cookie, int client, ConVarQueryResult result, const char[] cvarName, const char[] cvarValue, any value)",
          "docStart": 20268,
          "docEnd": 20850
        },
        {
          "type": "function void(QueryCookie cookie, int client, ConVarQueryResult result, const char[] cvarName, const char[] cvarValue)",
          "docStart": 20987,
          "docEnd": 21498
        }
      ]
    }
  ],
  "typedefs": [
    {
      "name": "ConVarChanged",
      "docStart": 2247,
      "docEnd": 2535,
      "type": "function void(ConVar convar, const char[] oldValue, const char[] newValue)"
    }
  ]
}