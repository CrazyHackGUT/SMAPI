{
  "functions": [
    {
      "name": "GameRules_GetProp",
      "docStart": 2543,
      "docEnd": 3080,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        }
      ]
    },
    {
      "name": "GameRules_SetProp",
      "docStart": 3161,
      "docEnd": 3723,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "any",
          "name": "value",
          "decl": "any value"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        },
        {
          "type": "bool",
          "name": "changeState",
          "decl": "bool changeState"
        }
      ]
    },
    {
      "name": "GameRules_GetPropFloat",
      "docStart": 3840,
      "docEnd": 4140,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        }
      ]
    },
    {
      "name": "GameRules_SetPropFloat",
      "docStart": 4216,
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
          "type": "float",
          "name": "value",
          "decl": "float value"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        },
        {
          "type": "bool",
          "name": "changeState",
          "decl": "bool changeState"
        }
      ]
    },
    {
      "name": "GameRules_GetPropEnt",
      "docStart": 4652,
      "docEnd": 5075,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        }
      ]
    },
    {
      "name": "GameRules_SetPropEnt",
      "docStart": 5147,
      "docEnd": 5496,
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
          "name": "other",
          "decl": "int other"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        },
        {
          "type": "bool",
          "name": "changeState",
          "decl": "bool changeState"
        }
      ]
    },
    {
      "name": "GameRules_GetPropVector",
      "docStart": 5604,
      "docEnd": 5923,
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
          "name": "vec",
          "decl": "float vec[3]"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        }
      ]
    },
    {
      "name": "GameRules_SetPropVector",
      "docStart": 6013,
      "docEnd": 6360,
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
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "int",
          "name": "element",
          "decl": "int element"
        },
        {
          "type": "bool",
          "name": "changeState",
          "decl": "bool changeState"
        }
      ]
    },
    {
      "name": "GameRules_GetPropString",
      "docStart": 6480,
      "docEnd": 6793,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        }
      ]
    },
    {
      "name": "GameRules_SetPropString",
      "docStart": 6880,
      "docEnd": 7168,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "prop",
          "decl": "const char[] prop"
        },
        {
          "type": "const char[]",
          "name": "buffer",
          "decl": "const char[] buffer"
        },
        {
          "type": "bool",
          "name": "changeState",
          "decl": "bool changeState"
        }
      ]
    },
    {
      "name": "GameRules_GetRoundState",
      "docStart": 7273,
      "docEnd": 7416,
      "kind": "stock",
      "returnType": "RoundState",
      "arguments": []
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "RoundState",
      "entries": [
        {
          "name": "RoundState_Init",
          "docStart": 1681,
          "docEnd": 1717
        },
        {
          "name": "RoundState_Pregame",
          "docStart": 1741,
          "docEnd": 1909
        },
        {
          "name": "RoundState_StartGame",
          "docStart": 1936,
          "docEnd": 1995
        },
        {
          "name": "RoundState_Preround",
          "docStart": 2024,
          "docEnd": 2068
        },
        {
          "name": "RoundState_RoundRunning",
          "docStart": 2096,
          "docEnd": 2127
        },
        {
          "name": "RoundState_TeamWin",
          "docStart": 2159,
          "docEnd": 2186
        },
        {
          "name": "RoundState_Restart",
          "docStart": 2213,
          "docEnd": 2269
        },
        {
          "name": "RoundState_Stalemate",
          "docStart": 2296,
          "docEnd": 2329
        },
        {
          "name": "RoundState_GameOver",
          "docStart": 2358,
          "docEnd": 2400
        },
        {
          "name": "RoundState_Bonus",
          "docStart": 2428,
          "docEnd": 2467
        },
        {
          "name": "RoundState_BetweenRounds",
          "docStart": 2492,
          "docEnd": 2508
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}