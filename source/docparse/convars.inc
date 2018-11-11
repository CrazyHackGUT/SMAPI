{
  "functions": [
    {
      "name": "CreateConVar",
      "docStart": 2572,
      "docEnd": 3462,
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
      "docStart": 3655,
      "docEnd": 3790,
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
      "docStart": 10858,
      "docEnd": 11100,
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
      "docStart": 11171,
      "docEnd": 11440,
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
      "docStart": 11513,
      "docEnd": 11702,
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
      "docStart": 11746,
      "docEnd": 12475,
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
      "docStart": 12572,
      "docEnd": 12761,
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
      "docStart": 12803,
      "docEnd": 13532,
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
      "docStart": 13627,
      "docEnd": 13830,
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
      "docStart": 13876,
      "docEnd": 14619,
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
      "docStart": 14718,
      "docEnd": 14979,
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
      "docStart": 15054,
      "docEnd": 15781,
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
      "docStart": 15888,
      "docEnd": 16584,
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
      "docStart": 16667,
      "docEnd": 17005,
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
      "docStart": 17080,
      "docEnd": 17300,
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
      "docStart": 17344,
      "docEnd": 17558,
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
      "docStart": 17614,
      "docEnd": 18010,
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
      "docStart": 18089,
      "docEnd": 18476,
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
      "docStart": 18568,
      "docEnd": 18819,
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
      "docStart": 18891,
      "docEnd": 19222,
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
      "docStart": 20605,
      "docEnd": 21055,
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
      "docStart": 21173,
      "docEnd": 21345,
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
      "docStart": 3837,
      "docEnd": 3903,
      "methods": [
        {
          "name": "SetBool",
          "docStart": 4488,
          "docEnd": 5182,
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
          "docStart": 5267,
          "docEnd": 5961,
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
          "docStart": 6044,
          "docEnd": 6752,
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
          "docStart": 6839,
          "docEnd": 7057,
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
          "docStart": 7120,
          "docEnd": 7818,
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
          "docStart": 7913,
          "docEnd": 8576,
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
          "docStart": 8656,
          "docEnd": 8920,
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
          "docStart": 8983,
          "docEnd": 9309,
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
          "docStart": 9376,
          "docEnd": 9691,
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
          "docStart": 9771,
          "docEnd": 9936,
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
          "docStart": 9996,
          "docEnd": 10312,
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
          "docStart": 10386,
          "docEnd": 10513,
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
          "docStart": 10575,
          "docEnd": 10792,
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
          "docStart": 3933,
          "docEnd": 3985,
          "type": "bool",
          "getter": true,
          "setter": true
        },
        {
          "name": "IntValue",
          "docStart": 4070,
          "docEnd": 4123,
          "type": "int",
          "getter": true,
          "setter": true
        },
        {
          "name": "FloatValue",
          "docStart": 4209,
          "docEnd": 4259,
          "type": "float",
          "getter": true,
          "setter": true
        },
        {
          "name": "Flags",
          "docStart": 4351,
          "docEnd": 4405,
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
          "docStart": 1859,
          "docEnd": 1914
        },
        {
          "name": "ConVarQuery_NotFound",
          "docStart": 1941,
          "docEnd": 1976
        },
        {
          "name": "ConVarQuery_NotValid",
          "docStart": 2003,
          "docEnd": 2081
        },
        {
          "name": "ConVarQuery_Protected",
          "docStart": 2108,
          "docEnd": 2198
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
          "docStart": 19332,
          "docEnd": 19869
        },
        {
          "type": "function void(QueryCookie cookie, int client, ConVarQueryResult result, const char[] cvarName, const char[] cvarValue)",
          "docStart": 20006,
          "docEnd": 20478
        }
      ]
    }
  ],
  "typedefs": [
    {
      "name": "ConVarChanged",
      "docStart": 2203,
      "docEnd": 2469,
      "type": "function void(ConVar convar, const char[] oldValue, const char[] newValue)"
    }
  ]
}