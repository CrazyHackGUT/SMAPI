{
  "functions": [
    {
      "name": "CompileRegex",
      "docStart": 8460,
      "docEnd": 9076,
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
      "docStart": 9218,
      "docEnd": 9640,
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
      "docStart": 9736,
      "docEnd": 10387,
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
      "docStart": 10476,
      "docEnd": 11121,
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
      "docStart": 5141,
      "docEnd": 5232,
      "methods": [
        {
          "name": "Regex",
          "docStart": 5264,
          "docEnd": 5640,
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
          "docStart": 5778,
          "docEnd": 6251,
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
          "docStart": 6353,
          "docEnd": 6682,
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
          "docStart": 6771,
          "docEnd": 7534,
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
          "docStart": 7628,
          "docEnd": 7788,
          "returnType": "int",
          "arguments": []
        },
        {
          "name": "CaptureCount",
          "docStart": 7827,
          "docEnd": 8143,
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
          "docStart": 8197,
          "docEnd": 8404,
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
      "docStart": 2903,
      "docEnd": 2945,
      "entries": [
        {
          "name": "REGEX_ERROR_NONE",
          "docStart": 3004,
          "docEnd": 3018
        },
        {
          "name": "REGEX_ERROR_ASSERT",
          "docStart": 3059,
          "docEnd": 3081
        },
        {
          "name": "REGEX_ERROR_BADBR",
          "docStart": 3120,
          "docEnd": 3153
        },
        {
          "name": "REGEX_ERROR_BADPAT",
          "docStart": 3192,
          "docEnd": 3211
        },
        {
          "name": "REGEX_ERROR_BADRPT",
          "docStart": 3250,
          "docEnd": 3269
        },
        {
          "name": "REGEX_ERROR_EBRACE",
          "docStart": 3308,
          "docEnd": 3327
        },
        {
          "name": "REGEX_ERROR_EBRACK",
          "docStart": 3366,
          "docEnd": 3385
        },
        {
          "name": "REGEX_ERROR_ECOLLATE",
          "docStart": 3424,
          "docEnd": 3460
        },
        {
          "name": "REGEX_ERROR_ECTYPE",
          "docStart": 3499,
          "docEnd": 3514
        },
        {
          "name": "REGEX_ERROR_EESCAPE",
          "docStart": 3553,
          "docEnd": 3578
        },
        {
          "name": "REGEX_ERROR_EMPTY",
          "docStart": 3617,
          "docEnd": 3639
        },
        {
          "name": "REGEX_ERROR_EPAREN",
          "docStart": 3678,
          "docEnd": 3697
        },
        {
          "name": "REGEX_ERROR_ERANGE",
          "docStart": 3736,
          "docEnd": 3761
        },
        {
          "name": "REGEX_ERROR_ESIZE",
          "docStart": 3800,
          "docEnd": 3824
        },
        {
          "name": "REGEX_ERROR_ESPACE",
          "docStart": 3863,
          "docEnd": 3889
        },
        {
          "name": "REGEX_ERROR_ESUBREG",
          "docStart": 3928,
          "docEnd": 3952
        },
        {
          "name": "REGEX_ERROR_INVARG",
          "docStart": 3991,
          "docEnd": 4009
        },
        {
          "name": "REGEX_ERROR_NOMATCH",
          "docStart": 4050,
          "docEnd": 4074
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
          "docStart": 4324,
          "docEnd": 4355
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
          "docStart": 4776,
          "docEnd": 4805
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