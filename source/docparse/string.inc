{
  "functions": [
    {
      "name": "strlen",
      "docStart": 1899,
      "docEnd": 2046,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "str",
          "decl": "const char[] str"
        }
      ]
    },
    {
      "name": "StrContains",
      "docStart": 2088,
      "docEnd": 2510,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "str",
          "decl": "const char[] str"
        },
        {
          "type": "const char[]",
          "name": "substr",
          "decl": "const char[] substr"
        },
        {
          "type": "bool",
          "name": "caseSensitive",
          "decl": "bool caseSensitive"
        }
      ]
    },
    {
      "name": "strcmp",
      "docStart": 2603,
      "docEnd": 2948,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "str1",
          "decl": "const char[] str1"
        },
        {
          "type": "const char[]",
          "name": "str2",
          "decl": "const char[] str2"
        },
        {
          "type": "bool",
          "name": "caseSensitive",
          "decl": "bool caseSensitive"
        }
      ]
    },
    {
      "name": "strncmp",
      "docStart": 3035,
      "docEnd": 3436,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "str1",
          "decl": "const char[] str1"
        },
        {
          "type": "const char[]",
          "name": "str2",
          "decl": "const char[] str2"
        },
        {
          "type": "int",
          "name": "num",
          "decl": "int num"
        },
        {
          "type": "bool",
          "name": "caseSensitive",
          "decl": "bool caseSensitive"
        }
      ]
    },
    {
      "name": "StrCompare",
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "str1",
          "decl": "const char[] str1"
        },
        {
          "type": "const char[]",
          "name": "str2",
          "decl": "const char[] str2"
        },
        {
          "type": "bool",
          "name": "caseSensitive",
          "decl": "bool caseSensitive"
        }
      ]
    },
    {
      "name": "StrEqual",
      "docStart": 3814,
      "docEnd": 4122,
      "kind": "stock",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "str1",
          "decl": "const char[] str1"
        },
        {
          "type": "const char[]",
          "name": "str2",
          "decl": "const char[] str2"
        },
        {
          "type": "bool",
          "name": "caseSensitive",
          "decl": "bool caseSensitive"
        }
      ]
    },
    {
      "name": "strcopy",
      "docStart": 4267,
      "docEnd": 4666,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "char[]",
          "name": "dest",
          "decl": "char[] dest"
        },
        {
          "type": "int",
          "name": "destLen",
          "decl": "int destLen"
        },
        {
          "type": "const char[]",
          "name": "source",
          "decl": "const char[] source"
        }
      ]
    },
    {
      "name": "StrCopy",
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "char[]",
          "name": "dest",
          "decl": "char[] dest"
        },
        {
          "type": "int",
          "name": "destLen",
          "decl": "int destLen"
        },
        {
          "type": "const char[]",
          "name": "source",
          "decl": "const char[] source"
        }
      ]
    },
    {
      "name": "Format",
      "docStart": 4990,
      "docEnd": 5324,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "const char[]",
          "name": "format",
          "decl": "const char[] format"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "FormatEx",
      "docStart": 5408,
      "docEnd": 5949,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "const char[]",
          "name": "format",
          "decl": "const char[] format"
        },
        {
          "type": "any...",
          "name": "...",
          "decl": "any... ..."
        }
      ]
    },
    {
      "name": "VFormat",
      "docStart": 6035,
      "docEnd": 6632,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "const char[]",
          "name": "format",
          "decl": "const char[] format"
        },
        {
          "type": "int",
          "name": "varpos",
          "decl": "int varpos"
        }
      ]
    },
    {
      "name": "StringToInt",
      "docStart": 6720,
      "docEnd": 6925,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "str",
          "decl": "const char[] str"
        },
        {
          "type": "int",
          "name": "nBase",
          "decl": "int nBase"
        }
      ]
    },
    {
      "name": "StringToIntEx",
      "docStart": 6986,
      "docEnd": 7250,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "str",
          "decl": "const char[] str"
        },
        {
          "type": "int&",
          "name": "result",
          "decl": "int& result"
        },
        {
          "type": "int",
          "name": "nBase",
          "decl": "int nBase"
        }
      ]
    },
    {
      "name": "IntToString",
      "docStart": 7326,
      "docEnd": 7561,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "num",
          "decl": "int num"
        },
        {
          "type": "char[]",
          "name": "str",
          "decl": "char[] str"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "StringToFloat",
      "docStart": 7626,
      "docEnd": 7791,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "const char[]",
          "name": "str",
          "decl": "const char[] str"
        }
      ]
    },
    {
      "name": "StringToFloatEx",
      "docStart": 7842,
      "docEnd": 8069,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "str",
          "decl": "const char[] str"
        },
        {
          "type": "float&",
          "name": "result",
          "decl": "float& result"
        }
      ]
    },
    {
      "name": "FloatToString",
      "docStart": 8135,
      "docEnd": 8397,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "float",
          "name": "num",
          "decl": "float num"
        },
        {
          "type": "char[]",
          "name": "str",
          "decl": "char[] str"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "BreakString",
      "docStart": 8466,
      "docEnd": 9008,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "source",
          "decl": "const char[] source"
        },
        {
          "type": "char[]",
          "name": "arg",
          "decl": "char[] arg"
        },
        {
          "type": "int",
          "name": "argLen",
          "decl": "int argLen"
        }
      ]
    },
    {
      "name": "StrBreak",
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "source",
          "decl": "const char[] source"
        },
        {
          "type": "char[]",
          "name": "arg",
          "decl": "char[] arg"
        },
        {
          "type": "int",
          "name": "argLen",
          "decl": "int argLen"
        }
      ]
    },
    {
      "name": "TrimString",
      "docStart": 9348,
      "docEnd": 9524,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "char[]",
          "name": "str",
          "decl": "char[] str"
        }
      ]
    },
    {
      "name": "SplitString",
      "docStart": 9564,
      "docEnd": 10080,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "source",
          "decl": "const char[] source"
        },
        {
          "type": "const char[]",
          "name": "split",
          "decl": "const char[] split"
        },
        {
          "type": "char[]",
          "name": "part",
          "decl": "char[] part"
        },
        {
          "type": "int",
          "name": "partLen",
          "decl": "int partLen"
        }
      ]
    },
    {
      "name": "ReplaceString",
      "docStart": 10176,
      "docEnd": 10639,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "char[]",
          "name": "text",
          "decl": "char[] text"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "const char[]",
          "name": "search",
          "decl": "const char[] search"
        },
        {
          "type": "const char[]",
          "name": "replace",
          "decl": "const char[] replace"
        },
        {
          "type": "bool",
          "name": "caseSensitive",
          "decl": "bool caseSensitive"
        }
      ]
    },
    {
      "name": "ReplaceStringEx",
      "docStart": 10766,
      "docEnd": 11580,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "char[]",
          "name": "text",
          "decl": "char[] text"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "const char[]",
          "name": "search",
          "decl": "const char[] search"
        },
        {
          "type": "const char[]",
          "name": "replace",
          "decl": "const char[] replace"
        },
        {
          "type": "int",
          "name": "searchLen",
          "decl": "int searchLen"
        },
        {
          "type": "int",
          "name": "replaceLen",
          "decl": "int replaceLen"
        },
        {
          "type": "bool",
          "name": "caseSensitive",
          "decl": "bool caseSensitive"
        }
      ]
    },
    {
      "name": "GetCharBytes",
      "docStart": 11746,
      "docEnd": 12014,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "source",
          "decl": "const char[] source"
        }
      ]
    },
    {
      "name": "IsCharAlpha",
      "docStart": 12065,
      "docEnd": 12306,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "chr",
          "decl": "int chr"
        }
      ]
    },
    {
      "name": "IsCharNumeric",
      "docStart": 12345,
      "docEnd": 12561,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "chr",
          "decl": "int chr"
        }
      ]
    },
    {
      "name": "IsCharSpace",
      "docStart": 12602,
      "docEnd": 12824,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "chr",
          "decl": "int chr"
        }
      ]
    },
    {
      "name": "IsCharMB",
      "docStart": 12863,
      "docEnd": 13073,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "chr",
          "decl": "int chr"
        }
      ]
    },
    {
      "name": "IsCharUpper",
      "docStart": 13108,
      "docEnd": 13340,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "chr",
          "decl": "int chr"
        }
      ]
    },
    {
      "name": "IsCharLower",
      "docStart": 13379,
      "docEnd": 13611,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "chr",
          "decl": "int chr"
        }
      ]
    },
    {
      "name": "StripQuotes",
      "docStart": 13650,
      "docEnd": 14143,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "char[]",
          "name": "text",
          "decl": "char[] text"
        }
      ]
    },
    {
      "name": "CharToUpper",
      "docStart": 14186,
      "docEnd": 14381,
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "chr",
          "decl": "int chr"
        }
      ]
    },
    {
      "name": "CharToLower",
      "docStart": 14496,
      "docEnd": 14692,
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "chr",
          "decl": "int chr"
        }
      ]
    },
    {
      "name": "FindCharInString",
      "docStart": 14806,
      "docEnd": 15163,
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "str",
          "decl": "const char[] str"
        },
        {
          "type": "char",
          "name": "c",
          "decl": "char c"
        },
        {
          "type": "bool",
          "name": "reverse",
          "decl": "bool reverse"
        }
      ]
    },
    {
      "name": "StrCat",
      "docStart": 15482,
      "docEnd": 15720,
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "const char[]",
          "name": "source",
          "decl": "const char[] source"
        }
      ]
    },
    {
      "name": "ExplodeString",
      "docStart": 15934,
      "docEnd": 16487,
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[]",
          "name": "text",
          "decl": "const char[] text"
        },
        {
          "type": "const char[]",
          "name": "split",
          "decl": "const char[] split"
        },
        {
          "type": "char[][]",
          "name": "buffers",
          "decl": "char[][] buffers"
        },
        {
          "type": "int",
          "name": "maxStrings",
          "decl": "int maxStrings"
        },
        {
          "type": "int",
          "name": "maxStringLength",
          "decl": "int maxStringLength"
        },
        {
          "type": "bool",
          "name": "copyRemainder",
          "decl": "bool copyRemainder"
        }
      ]
    },
    {
      "name": "ImplodeStrings",
      "docStart": 17122,
      "docEnd": 17631,
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "const char[][]",
          "name": "strings",
          "decl": "const char[][] strings"
        },
        {
          "type": "int",
          "name": "numStrings",
          "decl": "int numStrings"
        },
        {
          "type": "const char[]",
          "name": "join",
          "decl": "const char[] join"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxLength",
          "decl": "int maxLength"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [],
  "constants": [],
  "typesets": [],
  "typedefs": []
}