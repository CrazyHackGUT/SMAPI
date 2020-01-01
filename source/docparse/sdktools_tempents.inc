{
  "functions": [
    {
      "name": "AddTempEntHook",
      "docStart": 2151,
      "docEnd": 2364,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "te_name",
          "decl": "const char[] te_name"
        },
        {
          "type": "TEHook",
          "name": "hook",
          "decl": "TEHook hook"
        }
      ]
    },
    {
      "name": "RemoveTempEntHook",
      "docStart": 2432,
      "docEnd": 2655,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "te_name",
          "decl": "const char[] te_name"
        },
        {
          "type": "TEHook",
          "name": "hook",
          "decl": "TEHook hook"
        }
      ]
    },
    {
      "name": "TE_Start",
      "docStart": 2726,
      "docEnd": 2868,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "te_name",
          "decl": "const char[] te_name"
        }
      ]
    },
    {
      "name": "TE_IsValidProp",
      "docStart": 2917,
      "docEnd": 3086,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        }
      ]
    },
    {
      "name": "TE_WriteNum",
      "docStart": 3138,
      "docEnd": 3338,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "int",
          "name": "value",
          "decl": "int value"
        }
      ]
    },
    {
      "name": "TE_ReadNum",
      "docStart": 3398,
      "docEnd": 3593,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        }
      ]
    },
    {
      "name": "TE_WriteFloat",
      "docStart": 3640,
      "docEnd": 3855,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "float",
          "name": "value",
          "decl": "float value"
        }
      ]
    },
    {
      "name": "TE_ReadFloat",
      "docStart": 3919,
      "docEnd": 4121,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        }
      ]
    },
    {
      "name": "TE_WriteVector",
      "docStart": 4172,
      "docEnd": 4357,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "const float[3]",
          "name": "vector",
          "decl": "const float vector[3]"
        }
      ]
    },
    {
      "name": "TE_ReadVector",
      "docStart": 4432,
      "docEnd": 4619,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "float[3]",
          "name": "vector",
          "decl": "float vector[3]"
        }
      ]
    },
    {
      "name": "TE_WriteAngles",
      "docStart": 4687,
      "docEnd": 4872,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "const float[3]",
          "name": "angles",
          "decl": "const float angles[3]"
        }
      ]
    },
    {
      "name": "TE_WriteFloatArray",
      "docStart": 4947,
      "docEnd": 5203,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "const float[]",
          "name": "array",
          "decl": "const float[] array"
        },
        {
          "type": "int",
          "name": "arraySize",
          "decl": "int arraySize"
        }
      ]
    },
    {
      "name": "TE_Send",
      "docStart": 5295,
      "docEnd": 5623,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const int[]",
          "name": "clients",
          "decl": "const int[] clients"
        },
        {
          "type": "int",
          "name": "numClients",
          "decl": "int numClients"
        },
        {
          "type": "float",
          "name": "delay",
          "decl": "float delay"
        }
      ]
    },
    {
      "name": "TE_WriteEncodedEnt",
      "docStart": 5703,
      "docEnd": 5966,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "int",
          "name": "value",
          "decl": "int value"
        }
      ]
    },
    {
      "name": "TE_SendToAll",
      "docStart": 6121,
      "docEnd": 6272,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "float",
          "name": "delay",
          "decl": "float delay"
        }
      ]
    },
    {
      "name": "TE_SendToClient",
      "docStart": 6520,
      "docEnd": 6772,
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
          "name": "delay",
          "decl": "float delay"
        }
      ]
    },
    {
      "name": "TE_SendToAllInRange",
      "docStart": 6914,
      "docEnd": 7269,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "origin",
          "decl": "const float origin[3]"
        },
        {
          "type": "ClientRangeType",
          "name": "rangeType",
          "decl": "ClientRangeType rangeType"
        },
        {
          "type": "float",
          "name": "delay",
          "decl": "float delay"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [],
  "constants": [],
  "typesets": [],
  "typedefs": [
    {
      "name": "TEHook",
      "docStart": 1659,
      "docEnd": 2039,
      "type": "function Action(const char[] te_name, const int[] Players, int numClients, float delay)"
    }
  ]
}