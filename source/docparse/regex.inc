{
  "functions": [
    {
      "name": "CompileRegex",
      "docStart": 8261,
      "docEnd": 8840,
      "kind": "native",
      "returnType": "Regex",
      "arguments": [
        {
          "type": "const char[]",
          "name": "pattern",
          "decl": "const char[] pattern"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "char[]",
          "name": "error",
          "decl": "char[] error"
        },
        {
          "type": "int",
          "name": "maxLen",
          "decl": "int maxLen"
        },
        {
          "type": "RegexError&",
          "name": "errcode",
          "decl": "RegexError& errcode"
        }
      ]
    },
    {
      "name": "MatchRegex",
      "docStart": 8982,
      "docEnd": 9374,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "regex",
          "decl": "Handle regex"
        },
        {
          "type": "const char[]",
          "name": "str",
          "decl": "const char[] str"
        },
        {
          "type": "RegexError&",
          "name": "ret",
          "decl": "RegexError& ret"
        }
      ]
    },
    {
      "name": "GetRegexSubString",
      "docStart": 9470,
      "docEnd": 10091,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "regex",
          "decl": "Handle regex"
        },
        {
          "type": "int",
          "name": "str_id",
          "decl": "int str_id"
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
      "name": "SimpleRegexMatch",
      "docStart": 10180,
      "docEnd": 10786,
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "str",
          "decl": "const char[] str"
        },
        {
          "type": "const char[]",
          "name": "pattern",
          "decl": "const char[] pattern"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "char[]",
          "name": "error",
          "decl": "char[] error"
        },
        {
          "type": "int",
          "name": "maxLen",
          "decl": "int maxLen"
        }
      ]
    },
    {
      "name": "__ext_regex_SetNTVOptional",
      "kind": "stock",
      "returnType": "void",
      "arguments": []
    }
  ],
  "methodmaps": [
    {
      "name": "Regex",
      "docStart": 4917,
      "docEnd": 5008,
      "methods": [
        {
          "name": "Regex",
          "docStart": 5040,
          "docEnd": 5389,
          "returnType": "Regex",
          "arguments": [
            {
              "type": "const char[]",
              "name": "pattern",
              "decl": "const char[] pattern"
            },
            {
              "type": "int",
              "name": "flags",
              "decl": "int flags"
            },
            {
              "type": "char[]",
              "name": "error",
              "decl": "char[] error"
            },
            {
              "type": "int",
              "name": "maxLen",
              "decl": "int maxLen"
            },
            {
              "type": "RegexError&",
              "name": "errcode",
              "decl": "RegexError& errcode"
            }
          ]
        },
        {
          "name": "Match",
          "docStart": 5527,
          "docEnd": 6026,
          "returnType": "int",
          "arguments": [
            {
              "type": "const char[]",
              "name": "str",
              "decl": "const char[] str"
            },
            {
              "type": "RegexError&",
              "name": "ret",
              "decl": "RegexError& ret"
            },
            {
              "type": "int",
              "name": "offset",
              "decl": "int offset"
            }
          ]
        },
        {
          "name": "MatchAll",
          "docStart": 6129,
          "docEnd": 6490,
          "returnType": "int",
          "arguments": [
            {
              "type": "const char[]",
              "name": "str",
              "decl": "const char[] str"
            },
            {
              "type": "RegexError&",
              "name": "ret",
              "decl": "RegexError& ret"
            }
          ]
        },
        {
          "name": "GetSubString",
          "docStart": 6579,
          "docEnd": 7372,
          "returnType": "bool",
          "arguments": [
            {
              "type": "int",
              "name": "str_id",
              "decl": "int str_id"
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
            },
            {
              "type": "int",
              "name": "match",
              "decl": "int match"
            }
          ]
        },
        {
          "name": "MatchCount",
          "docStart": 7467,
          "docEnd": 7617,
          "returnType": "int",
          "arguments": []
        },
        {
          "name": "CaptureCount",
          "docStart": 7657,
          "docEnd": 7960,
          "returnType": "int",
          "arguments": [
            {
              "type": "int",
              "name": "match",
              "decl": "int match"
            }
          ]
        },
        {
          "name": "MatchOffset",
          "docStart": 8015,
          "docEnd": 8206,
          "returnType": "int",
          "arguments": [
            {
              "type": "int",
              "name": "match",
              "decl": "int match"
            }
          ]
        }
      ],
      "properties": []
    }
  ],
  "enums": [
    {
      "name": "RegexError",
      "docStart": 2880,
      "docEnd": 2922,
      "entries": [
        {
          "name": "REGEX_ERROR_NONE",
          "docStart": 2970,
          "docEnd": 2984
        },
        {
          "name": "REGEX_ERROR_ASSERT",
          "docStart": 3015,
          "docEnd": 3037
        },
        {
          "name": "REGEX_ERROR_BADBR",
          "docStart": 3065,
          "docEnd": 3098
        },
        {
          "name": "REGEX_ERROR_BADPAT",
          "docStart": 3126,
          "docEnd": 3145
        },
        {
          "name": "REGEX_ERROR_BADRPT",
          "docStart": 3173,
          "docEnd": 3192
        },
        {
          "name": "REGEX_ERROR_EBRACE",
          "docStart": 3220,
          "docEnd": 3239
        },
        {
          "name": "REGEX_ERROR_EBRACK",
          "docStart": 3267,
          "docEnd": 3286
        },
        {
          "name": "REGEX_ERROR_ECOLLATE",
          "docStart": 3314,
          "docEnd": 3350
        },
        {
          "name": "REGEX_ERROR_ECTYPE",
          "docStart": 3378,
          "docEnd": 3393
        },
        {
          "name": "REGEX_ERROR_EESCAPE",
          "docStart": 3421,
          "docEnd": 3446
        },
        {
          "name": "REGEX_ERROR_EMPTY",
          "docStart": 3474,
          "docEnd": 3496
        },
        {
          "name": "REGEX_ERROR_EPAREN",
          "docStart": 3524,
          "docEnd": 3543
        },
        {
          "name": "REGEX_ERROR_ERANGE",
          "docStart": 3571,
          "docEnd": 3596
        },
        {
          "name": "REGEX_ERROR_ESIZE",
          "docStart": 3624,
          "docEnd": 3648
        },
        {
          "name": "REGEX_ERROR_ESPACE",
          "docStart": 3676,
          "docEnd": 3702
        },
        {
          "name": "REGEX_ERROR_ESUBREG",
          "docStart": 3730,
          "docEnd": 3754
        },
        {
          "name": "REGEX_ERROR_INVARG",
          "docStart": 3782,
          "docEnd": 3800
        },
        {
          "name": "REGEX_ERROR_NOMATCH",
          "docStart": 3834,
          "docEnd": 3858
        },
        {
          "name": "REGEX_ERROR_NULL"
        },
        {
          "name": "REGEX_ERROR_BADOPTION"
        },
        {
          "name": "REGEX_ERROR_BADMAGIC"
        },
        {
          "name": "REGEX_ERROR_UNKNOWN_OPCODE"
        },
        {
          "name": "REGEX_ERROR_NOMEMORY"
        },
        {
          "name": "REGEX_ERROR_NOSUBSTRING"
        },
        {
          "name": "REGEX_ERROR_MATCHLIMIT"
        },
        {
          "name": "REGEX_ERROR_CALLOUT",
          "docStart": 4102,
          "docEnd": 4133
        },
        {
          "name": "REGEX_ERROR_BADUTF8"
        },
        {
          "name": "REGEX_ERROR_BADUTF8_OFFSET"
        },
        {
          "name": "REGEX_ERROR_PARTIAL"
        },
        {
          "name": "REGEX_ERROR_BADPARTIAL"
        },
        {
          "name": "REGEX_ERROR_INTERNAL"
        },
        {
          "name": "REGEX_ERROR_BADCOUNT"
        },
        {
          "name": "REGEX_ERROR_DFA_UITEM"
        },
        {
          "name": "REGEX_ERROR_DFA_UCOND"
        },
        {
          "name": "REGEX_ERROR_DFA_UMLIMIT"
        },
        {
          "name": "REGEX_ERROR_DFA_WSSIZE"
        },
        {
          "name": "REGEX_ERROR_DFA_RECURSE"
        },
        {
          "name": "REGEX_ERROR_RECURSIONLIMIT"
        },
        {
          "name": "REGEX_ERROR_NULLWSLIMIT",
          "docStart": 4551,
          "docEnd": 4580
        },
        {
          "name": "REGEX_ERROR_BADNEWLINE"
        },
        {
          "name": "REGEX_ERROR_BADOFFSET"
        },
        {
          "name": "REGEX_ERROR_SHORTUTF8"
        },
        {
          "name": "REGEX_ERROR_RECURSELOOP"
        },
        {
          "name": "REGEX_ERROR_JIT_STACKLIMIT"
        },
        {
          "name": "REGEX_ERROR_BADMODE"
        },
        {
          "name": "REGEX_ERROR_BADENDIANNESS"
        },
        {
          "name": "REGEX_ERROR_DFA_BADRESTART"
        },
        {
          "name": "REGEX_ERROR_JIT_BADOPTION"
        },
        {
          "name": "REGEX_ERROR_BADLENGTH"
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}