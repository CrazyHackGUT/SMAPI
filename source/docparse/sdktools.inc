{
  "functions": [
    {
      "name": "StartPrepSDKCall",
      "docStart": 3986,
      "docEnd": 4095,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "SDKCallType",
          "name": "type",
          "decl": "SDKCallType type"
        }
      ]
    },
    {
      "name": "PrepSDKCall_SetVirtual",
      "docStart": 4148,
      "docEnd": 4262,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "vtblidx",
          "decl": "int vtblidx"
        }
      ]
    },
    {
      "name": "PrepSDKCall_SetSignature",
      "docStart": 4316,
      "docEnd": 4776,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "SDKLibrary",
          "name": "lib",
          "decl": "SDKLibrary lib"
        },
        {
          "type": "const char[]",
          "name": "signature",
          "decl": "const char[] signature"
        },
        {
          "type": "int",
          "name": "bytes",
          "decl": "int bytes"
        }
      ]
    },
    {
      "name": "PrepSDKCall_SetAddress",
      "docStart": 4870,
      "docEnd": 5032,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Address",
          "name": "addr",
          "decl": "Address addr"
        }
      ]
    },
    {
      "name": "PrepSDKCall_SetFromConf",
      "docStart": 5087,
      "docEnd": 5482,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "gameconf",
          "decl": "Handle gameconf"
        },
        {
          "type": "SDKFuncConfSource",
          "name": "source",
          "decl": "SDKFuncConfSource source"
        },
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "PrepSDKCall_SetReturnInfo",
      "docStart": 5586,
      "docEnd": 6025,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "SDKType",
          "name": "type",
          "decl": "SDKType type"
        },
        {
          "type": "SDKPassMethod",
          "name": "pass",
          "decl": "SDKPassMethod pass"
        },
        {
          "type": "int",
          "name": "decflags",
          "decl": "int decflags"
        },
        {
          "type": "int",
          "name": "encflags",
          "decl": "int encflags"
        }
      ]
    },
    {
      "name": "PrepSDKCall_AddParameter",
      "docStart": 6135,
      "docEnd": 6468,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "SDKType",
          "name": "type",
          "decl": "SDKType type"
        },
        {
          "type": "SDKPassMethod",
          "name": "pass",
          "decl": "SDKPassMethod pass"
        },
        {
          "type": "int",
          "name": "decflags",
          "decl": "int decflags"
        },
        {
          "type": "int",
          "name": "encflags",
          "decl": "int encflags"
        }
      ]
    },
    {
      "name": "EndPrepSDKCall",
      "docStart": 6577,
      "docEnd": 6739,
      "kind": "native",
      "returnType": "Handle",
      "arguments": []
    },
    {
      "name": "SDKCall",
      "docStart": 6776,
      "docEnd": 7793,
      "kind": "native",
      "returnType": "any",
      "arguments": [
        {
          "type": "Handle",
          "name": "call",
          "decl": "Handle call"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "GetPlayerResourceEntity",
      "docStart": 7840,
      "docEnd": 7980,
      "kind": "native",
      "returnType": "int",
      "arguments": []
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "SDKCallType",
      "entries": [
        {
          "name": "SDKCall_Static",
          "docStart": 2168,
          "docEnd": 2187
        },
        {
          "name": "SDKCall_Entity",
          "docStart": 2207,
          "docEnd": 2231
        },
        {
          "name": "SDKCall_Player",
          "docStart": 2251,
          "docEnd": 2275
        },
        {
          "name": "SDKCall_GameRules",
          "docStart": 2297,
          "docEnd": 2320
        },
        {
          "name": "SDKCall_EntityList",
          "docStart": 2343,
          "docEnd": 2373
        },
        {
          "name": "SDKCall_Raw",
          "docStart": 2391,
          "docEnd": 2439
        }
      ]
    },
    {
      "name": "SDKLibrary",
      "entries": [
        {
          "name": "SDKLibrary_Server",
          "docStart": 2488,
          "docEnd": 2521
        },
        {
          "name": "SDKLibrary_Engine",
          "docStart": 2543,
          "docEnd": 2573
        }
      ]
    },
    {
      "name": "SDKFuncConfSource",
      "entries": [
        {
          "name": "SDKConf_Virtual",
          "docStart": 2630,
          "docEnd": 2683
        },
        {
          "name": "SDKConf_Signature",
          "docStart": 2709,
          "docEnd": 2761
        },
        {
          "name": "SDKConf_Address",
          "docStart": 2785,
          "docEnd": 2835
        }
      ]
    },
    {
      "name": "SDKType",
      "entries": [
        {
          "name": "SDKType_CBaseEntity",
          "docStart": 2882,
          "docEnd": 2921
        },
        {
          "name": "SDKType_CBasePlayer",
          "docStart": 2945,
          "docEnd": 2984
        },
        {
          "name": "SDKType_Vector",
          "docStart": 3005,
          "docEnd": 3046
        },
        {
          "name": "SDKType_QAngle",
          "docStart": 3067,
          "docEnd": 3109
        },
        {
          "name": "SDKType_PlainOldData",
          "docStart": 3134,
          "docEnd": 3176
        },
        {
          "name": "SDKType_Float",
          "docStart": 3196,
          "docEnd": 3215
        },
        {
          "name": "SDKType_Edict",
          "docStart": 3235,
          "docEnd": 3270
        },
        {
          "name": "SDKType_String",
          "docStart": 3291,
          "docEnd": 3341
        },
        {
          "name": "SDKType_Bool",
          "docStart": 3360,
          "docEnd": 3381
        }
      ]
    },
    {
      "name": "SDKPassMethod",
      "entries": [
        {
          "name": "SDKPass_Pointer",
          "docStart": 3431,
          "docEnd": 3456
        },
        {
          "name": "SDKPass_Plain",
          "docStart": 3476,
          "docEnd": 3502
        },
        {
          "name": "SDKPass_ByValue",
          "docStart": 3523,
          "docEnd": 3554
        },
        {
          "name": "SDKPass_ByRef",
          "docStart": 3574,
          "docEnd": 3609
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}