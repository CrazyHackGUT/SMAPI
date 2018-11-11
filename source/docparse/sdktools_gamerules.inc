{
  "functions": [
    {
      "name": "GameRules_GetProp",
      "docStart": 2556,
      "docEnd": 3023,
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
      "docStart": 3104,
      "docEnd": 3597,
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
      "docStart": 3714,
      "docEnd": 3982,
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
      "docStart": 4058,
      "docEnd": 4352,
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
      "docStart": 4464,
      "docEnd": 4824,
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
      "docStart": 4896,
      "docEnd": 5215,
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
      "docStart": 5323,
      "docEnd": 5612,
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
      "docStart": 5702,
      "docEnd": 6016,
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
      "docStart": 6136,
      "docEnd": 6410,
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
      "docStart": 6497,
      "docEnd": 6751,
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
      "docStart": 6856,
      "docEnd": 6978,
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
          "docStart": 1683,
          "docEnd": 1719
        },
        {
          "name": "RoundState_Pregame",
          "docStart": 1744,
          "docEnd": 1912
        },
        {
          "name": "RoundState_StartGame",
          "docStart": 1940,
          "docEnd": 1999
        },
        {
          "name": "RoundState_Preround",
          "docStart": 2029,
          "docEnd": 2073
        },
        {
          "name": "RoundState_RoundRunning",
          "docStart": 2102,
          "docEnd": 2133
        },
        {
          "name": "RoundState_TeamWin",
          "docStart": 2166,
          "docEnd": 2193
        },
        {
          "name": "RoundState_Restart",
          "docStart": 2221,
          "docEnd": 2277
        },
        {
          "name": "RoundState_Stalemate",
          "docStart": 2305,
          "docEnd": 2338
        },
        {
          "name": "RoundState_GameOver",
          "docStart": 2368,
          "docEnd": 2410
        },
        {
          "name": "RoundState_Bonus",
          "docStart": 2439,
          "docEnd": 2478
        },
        {
          "name": "RoundState_BetweenRounds",
          "docStart": 2504,
          "docEnd": 2520
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}