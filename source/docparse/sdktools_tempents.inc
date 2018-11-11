{
  "functions": [
    {
      "name": "AddTempEntHook",
      "docStart": 2118,
      "docEnd": 2304,
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
      "docStart": 2372,
      "docEnd": 2568,
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
      "docStart": 2639,
      "docEnd": 2762,
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
      "docStart": 2811,
      "docEnd": 2960,
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
      "docStart": 3012,
      "docEnd": 3184,
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
      "docStart": 3244,
      "docEnd": 3406,
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
      "docStart": 3453,
      "docEnd": 3640,
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
      "docStart": 3704,
      "docEnd": 3873,
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
      "docStart": 3924,
      "docEnd": 4081,
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
      "docStart": 4156,
      "docEnd": 4315,
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
      "docStart": 4383,
      "docEnd": 4540,
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
      "docStart": 4615,
      "docEnd": 4839,
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
      "docStart": 4931,
      "docEnd": 5230,
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
      "docStart": 5310,
      "docEnd": 5545,
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
      "docStart": 5700,
      "docEnd": 5844,
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
      "docStart": 6092,
      "docEnd": 6317,
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
      "docStart": 6459,
      "docEnd": 6800,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "float[3]",
          "name": "origin",
          "decl": "float origin[3]"
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
      "docStart": 1660,
      "docEnd": 2006,
      "type": "function Action(const char[] te_name, const int[] Players, int numClients, float delay)"
    }
  ]
}