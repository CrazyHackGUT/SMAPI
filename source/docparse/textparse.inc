{
  "functions": [
    {
      "name": "SMC_CreateParser",
      "docStart": 7458,
      "docEnd": 7611,
      "kind": "native",
      "returnType": "SMCParser",
      "arguments": []
    },
    {
      "name": "SMC_ParseFile",
      "docStart": 7653,
      "docEnd": 8096,
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
      "docStart": 8188,
      "docEnd": 8623,
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
      "docStart": 8704,
      "docEnd": 8923,
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
      "docStart": 8992,
      "docEnd": 9198,
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
      "docStart": 9263,
      "docEnd": 9544,
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
      "docStart": 9644,
      "docEnd": 9804,
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
      "docStart": 5364,
      "docEnd": 5681,
      "methods": [
        {
          "name": "SMCParser",
          "docStart": 5717,
          "docEnd": 5756,
          "returnType": "SMCParser",
          "arguments": []
        },
        {
          "name": "ParseFile",
          "docStart": 5790,
          "docEnd": 6097,
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
          "docStart": 7052,
          "docEnd": 7369,
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
          "docStart": 6186,
          "docEnd": 6243,
          "type": "SMC_ParseStart",
          "getter": false,
          "setter": true
        },
        {
          "name": "OnEnd",
          "docStart": 6331,
          "docEnd": 6386,
          "type": "SMC_ParseEnd",
          "getter": false,
          "setter": true
        },
        {
          "name": "OnEnterSection",
          "docStart": 6468,
          "docEnd": 6525,
          "type": "SMC_NewSection",
          "getter": false,
          "setter": true
        },
        {
          "name": "OnLeaveSection",
          "docStart": 6620,
          "docEnd": 6677,
          "type": "SMC_EndSection",
          "getter": false,
          "setter": true
        },
        {
          "name": "OnKeyValue",
          "docStart": 6772,
          "docEnd": 6827,
          "type": "SMC_KeyValue",
          "getter": false,
          "setter": true
        },
        {
          "name": "OnRawLine",
          "docStart": 6914,
          "docEnd": 6968,
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
          "docStart": 2060,
          "docEnd": 2084
        },
        {
          "name": "SMCParse_Halt",
          "docStart": 2115,
          "docEnd": 2140
        },
        {
          "name": "SMCParse_HaltFail",
          "docStart": 2171,
          "docEnd": 2210
        }
      ]
    },
    {
      "name": "SMCError",
      "docStart": 2218,
      "docEnd": 2249,
      "entries": [
        {
          "name": "SMCError_Okay",
          "docStart": 2298,
          "docEnd": 2314
        },
        {
          "name": "SMCError_StreamOpen",
          "docStart": 2345,
          "docEnd": 2374
        },
        {
          "name": "SMCError_StreamError",
          "docStart": 2405,
          "docEnd": 2439
        },
        {
          "name": "SMCError_Custom",
          "docStart": 2470,
          "docEnd": 2509
        },
        {
          "name": "SMCError_InvalidSection1",
          "docStart": 2540,
          "docEnd": 2607
        },
        {
          "name": "SMCError_InvalidSection2",
          "docStart": 2638,
          "docEnd": 2687
        },
        {
          "name": "SMCError_InvalidSection3",
          "docStart": 2718,
          "docEnd": 2784
        },
        {
          "name": "SMCError_InvalidSection4",
          "docStart": 2815,
          "docEnd": 2865
        },
        {
          "name": "SMCError_InvalidSection5",
          "docStart": 2896,
          "docEnd": 2946
        },
        {
          "name": "SMCError_InvalidTokens",
          "docStart": 2977,
          "docEnd": 3039
        },
        {
          "name": "SMCError_TokenOverflow",
          "docStart": 3070,
          "docEnd": 3105
        },
        {
          "name": "SMCError_InvalidProperty1",
          "docStart": 3136,
          "docEnd": 3190
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": [
    {
      "name": "SMC_ParseStart",
      "docStart": 3198,
      "docEnd": 3293,
      "type": "function void(SMCParser smc)"
    },
    {
      "name": "SMC_NewSection",
      "docStart": 3354,
      "docEnd": 3721,
      "type": "function SMCResult(SMCParser smc, const char[] name, bool opt_quotes)"
    },
    {
      "name": "SMC_KeyValue",
      "docStart": 3823,
      "docEnd": 4290,
      "type": "function SMCResult(SMCParser smc, const char[] key, const char[] value, bool key_quotes, bool value_quotes)"
    },
    {
      "name": "SMC_EndSection",
      "docStart": 4428,
      "docEnd": 4595,
      "type": "function SMCResult(SMCParser smc)"
    },
    {
      "name": "SMC_ParseEnd",
      "docStart": 4661,
      "docEnd": 4883,
      "type": "function void(SMCParser smc, bool halted, bool failed)"
    },
    {
      "name": "SMC_RawLine",
      "docStart": 4968,
      "docEnd": 5270,
      "type": "function SMCResult(SMCParser smc, const char[] line, int lineno)"
    }
  ]
}