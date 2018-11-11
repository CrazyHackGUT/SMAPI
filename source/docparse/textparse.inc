{
  "functions": [
    {
      "name": "SMC_CreateParser",
      "docStart": 7267,
      "docEnd": 7409,
      "kind": "native",
      "returnType": "SMCParser",
      "arguments": []
    },
    {
      "name": "SMC_ParseFile",
      "docStart": 7451,
      "docEnd": 7843,
      "kind": "native",
      "returnType": "SMCError",
      "arguments": [
        {
          "type": "Handle",
          "name": "smc",
          "decl": "Handle smc"
        },
        {
          "type": "const char[]",
          "name": "file",
          "decl": "const char[] file"
        },
        {
          "type": "int&",
          "name": "line",
          "decl": "int& line"
        },
        {
          "type": "int&",
          "name": "col",
          "decl": "int& col"
        }
      ]
    },
    {
      "name": "SMC_GetErrorString",
      "docStart": 7935,
      "docEnd": 8339,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "SMCError",
          "name": "error",
          "decl": "SMCError error"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "buf_max",
          "decl": "int buf_max"
        }
      ]
    },
    {
      "name": "SMC_SetParseStart",
      "docStart": 8420,
      "docEnd": 8613,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "smc",
          "decl": "Handle smc"
        },
        {
          "type": "SMC_ParseStart",
          "name": "func",
          "decl": "SMC_ParseStart func"
        }
      ]
    },
    {
      "name": "SMC_SetParseEnd",
      "docStart": 8682,
      "docEnd": 8862,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "smc",
          "decl": "Handle smc"
        },
        {
          "type": "SMC_ParseEnd",
          "name": "func",
          "decl": "SMC_ParseEnd func"
        }
      ]
    },
    {
      "name": "SMC_SetReaders",
      "docStart": 8927,
      "docEnd": 9173,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "smc",
          "decl": "Handle smc"
        },
        {
          "type": "SMC_NewSection",
          "name": "ns",
          "decl": "SMC_NewSection ns"
        },
        {
          "type": "SMC_KeyValue",
          "name": "kv",
          "decl": "SMC_KeyValue kv"
        },
        {
          "type": "SMC_EndSection",
          "name": "es",
          "decl": "SMC_EndSection es"
        }
      ]
    },
    {
      "name": "SMC_SetRawLine",
      "docStart": 9273,
      "docEnd": 9418,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "smc",
          "decl": "Handle smc"
        },
        {
          "type": "SMC_RawLine",
          "name": "func",
          "decl": "SMC_RawLine func"
        }
      ]
    }
  ],
  "methodmaps": [
    {
      "name": "SMCParser",
      "docStart": 5205,
      "docEnd": 5522,
      "methods": [
        {
          "name": "SMCParser",
          "docStart": 5558,
          "docEnd": 5597,
          "returnType": "SMCParser",
          "arguments": []
        },
        {
          "name": "ParseFile",
          "docStart": 5631,
          "docEnd": 5922,
          "returnType": "SMCError",
          "arguments": [
            {
              "type": "const char[]",
              "name": "file",
              "decl": "const char[] file"
            },
            {
              "type": "int&",
              "name": "line",
              "decl": "int& line"
            },
            {
              "type": "int&",
              "name": "col",
              "decl": "int& col"
            }
          ]
        },
        {
          "name": "GetErrorString",
          "docStart": 6877,
          "docEnd": 7178,
          "returnType": "void",
          "arguments": [
            {
              "type": "SMCError",
              "name": "error",
              "decl": "SMCError error"
            },
            {
              "type": "char[]",
              "name": "buffer",
              "decl": "char[] buffer"
            },
            {
              "type": "int",
              "name": "buf_max",
              "decl": "int buf_max"
            }
          ]
        }
      ],
      "properties": [
        {
          "name": "OnStart",
          "docStart": 6011,
          "docEnd": 6068,
          "type": "SMC_ParseStart",
          "getter": false,
          "setter": true
        },
        {
          "name": "OnEnd",
          "docStart": 6156,
          "docEnd": 6211,
          "type": "SMC_ParseEnd",
          "getter": false,
          "setter": true
        },
        {
          "name": "OnEnterSection",
          "docStart": 6293,
          "docEnd": 6350,
          "type": "SMC_NewSection",
          "getter": false,
          "setter": true
        },
        {
          "name": "OnLeaveSection",
          "docStart": 6445,
          "docEnd": 6502,
          "type": "SMC_EndSection",
          "getter": false,
          "setter": true
        },
        {
          "name": "OnKeyValue",
          "docStart": 6597,
          "docEnd": 6652,
          "type": "SMC_KeyValue",
          "getter": false,
          "setter": true
        },
        {
          "name": "OnRawLine",
          "docStart": 6739,
          "docEnd": 6793,
          "type": "SMC_RawLine",
          "getter": false,
          "setter": true
        }
      ]
    }
  ],
  "enums": [
    {
      "name": "SMCResult",
      "docStart": 1974,
      "docEnd": 2010,
      "entries": [
        {
          "name": "SMCParse_Continue",
          "docStart": 2053,
          "docEnd": 2077
        },
        {
          "name": "SMCParse_Halt",
          "docStart": 2098,
          "docEnd": 2123
        },
        {
          "name": "SMCParse_HaltFail",
          "docStart": 2146,
          "docEnd": 2185
        }
      ]
    },
    {
      "name": "SMCError",
      "docStart": 2193,
      "docEnd": 2224,
      "entries": [
        {
          "name": "SMCError_Okay",
          "docStart": 2266,
          "docEnd": 2282
        },
        {
          "name": "SMCError_StreamOpen",
          "docStart": 2307,
          "docEnd": 2336
        },
        {
          "name": "SMCError_StreamError",
          "docStart": 2362,
          "docEnd": 2396
        },
        {
          "name": "SMCError_Custom",
          "docStart": 2418,
          "docEnd": 2457
        },
        {
          "name": "SMCError_InvalidSection1",
          "docStart": 2486,
          "docEnd": 2553
        },
        {
          "name": "SMCError_InvalidSection2",
          "docStart": 2582,
          "docEnd": 2631
        },
        {
          "name": "SMCError_InvalidSection3",
          "docStart": 2660,
          "docEnd": 2726
        },
        {
          "name": "SMCError_InvalidSection4",
          "docStart": 2755,
          "docEnd": 2805
        },
        {
          "name": "SMCError_InvalidSection5",
          "docStart": 2834,
          "docEnd": 2884
        },
        {
          "name": "SMCError_InvalidTokens",
          "docStart": 2912,
          "docEnd": 2974
        },
        {
          "name": "SMCError_TokenOverflow",
          "docStart": 3002,
          "docEnd": 3037
        },
        {
          "name": "SMCError_InvalidProperty1",
          "docStart": 3067,
          "docEnd": 3121
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": [
    {
      "name": "SMC_ParseStart",
      "docStart": 3129,
      "docEnd": 3212,
      "type": "function void(SMCParser smc)"
    },
    {
      "name": "SMC_NewSection",
      "docStart": 3273,
      "docEnd": 3630,
      "type": "function SMCResult(SMCParser smc, const char[] name, bool opt_quotes)"
    },
    {
      "name": "SMC_KeyValue",
      "docStart": 3732,
      "docEnd": 4189,
      "type": "function SMCResult(SMCParser smc, const char[] key, const char[] value, bool key_quotes, bool value_quotes)"
    },
    {
      "name": "SMC_EndSection",
      "docStart": 4327,
      "docEnd": 4484,
      "type": "function SMCResult(SMCParser smc)"
    },
    {
      "name": "SMC_ParseEnd",
      "docStart": 4550,
      "docEnd": 4742,
      "type": "function void(SMCParser smc, bool halted, bool failed)"
    },
    {
      "name": "SMC_RawLine",
      "docStart": 4827,
      "docEnd": 5111,
      "type": "function SMCResult(SMCParser smc, const char[] line, int lineno)"
    }
  ]
}