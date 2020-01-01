{
  "functions": [
    {
      "name": "StartPrepSDKCall",
      "docStart": 4142,
      "docEnd": 4258,
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
      "docStart": 4311,
      "docEnd": 4430,
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
      "docStart": 4484,
      "docEnd": 5003,
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
      "docStart": 5097,
      "docEnd": 5276,
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
      "docStart": 5331,
      "docEnd": 5753,
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
      "docStart": 5857,
      "docEnd": 6317,
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
      "docStart": 6427,
      "docEnd": 6782,
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
      "docStart": 6891,
      "docEnd": 7063,
      "kind": "native",
      "returnType": "Handle",
      "arguments": []
    },
    {
      "name": "SDKCall",
      "docStart": 7100,
      "docEnd": 8151,
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
      "docStart": 8198,
      "docEnd": 8348,
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
          "docStart": 2173,
          "docEnd": 2192
        },
        {
          "name": "SDKCall_Entity",
          "docStart": 2219,
          "docEnd": 2243
        },
        {
          "name": "SDKCall_Player",
          "docStart": 2270,
          "docEnd": 2294
        },
        {
          "name": "SDKCall_GameRules",
          "docStart": 2321,
          "docEnd": 2344
        },
        {
          "name": "SDKCall_EntityList",
          "docStart": 2371,
          "docEnd": 2401
        },
        {
          "name": "SDKCall_Raw",
          "docStart": 2428,
          "docEnd": 2476
        }
      ]
    },
    {
      "name": "SDKLibrary",
      "entries": [
        {
          "name": "SDKLibrary_Server",
          "docStart": 2529,
          "docEnd": 2562
        },
        {
          "name": "SDKLibrary_Engine",
          "docStart": 2589,
          "docEnd": 2619
        }
      ]
    },
    {
      "name": "SDKFuncConfSource",
      "entries": [
        {
          "name": "SDKConf_Virtual",
          "docStart": 2679,
          "docEnd": 2732
        },
        {
          "name": "SDKConf_Signature",
          "docStart": 2759,
          "docEnd": 2811
        },
        {
          "name": "SDKConf_Address",
          "docStart": 2838,
          "docEnd": 2888
        }
      ]
    },
    {
      "name": "SDKType",
      "entries": [
        {
          "name": "SDKType_CBaseEntity",
          "docStart": 2938,
          "docEnd": 2977
        },
        {
          "name": "SDKType_CBasePlayer",
          "docStart": 3004,
          "docEnd": 3043
        },
        {
          "name": "SDKType_Vector",
          "docStart": 3070,
          "docEnd": 3111
        },
        {
          "name": "SDKType_QAngle",
          "docStart": 3138,
          "docEnd": 3180
        },
        {
          "name": "SDKType_PlainOldData",
          "docStart": 3207,
          "docEnd": 3249
        },
        {
          "name": "SDKType_Float",
          "docStart": 3276,
          "docEnd": 3295
        },
        {
          "name": "SDKType_Edict",
          "docStart": 3322,
          "docEnd": 3357
        },
        {
          "name": "SDKType_String",
          "docStart": 3384,
          "docEnd": 3434
        },
        {
          "name": "SDKType_Bool",
          "docStart": 3461,
          "docEnd": 3482
        }
      ]
    },
    {
      "name": "SDKPassMethod",
      "entries": [
        {
          "name": "SDKPass_Pointer",
          "docStart": 3538,
          "docEnd": 3563
        },
        {
          "name": "SDKPass_Plain",
          "docStart": 3590,
          "docEnd": 3616
        },
        {
          "name": "SDKPass_ByValue",
          "docStart": 3643,
          "docEnd": 3674
        },
        {
          "name": "SDKPass_ByRef",
          "docStart": 3701,
          "docEnd": 3736
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}