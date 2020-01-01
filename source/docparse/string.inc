{
  "functions": [
    {
      "name": "strlen",
      "docStart": 1899,
      "docEnd": 2064,
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
      "docStart": 2106,
      "docEnd": 2584,
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
      "docStart": 2677,
      "docEnd": 3094,
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
      "docStart": 3181,
      "docEnd": 3662,
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
      "docStart": 4048,
      "docEnd": 4395,
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
      "docStart": 4540,
      "docEnd": 4967,
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
      "docStart": 5298,
      "docEnd": 5665,
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
      "docStart": 5749,
      "docEnd": 6323,
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
      "docStart": 6409,
      "docEnd": 7052,
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
      "docStart": 7140,
      "docEnd": 7369,
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
      "docStart": 7430,
      "docEnd": 7724,
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
      "docStart": 7800,
      "docEnd": 8064,
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
      "docStart": 8129,
      "docEnd": 8312,
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
      "docStart": 8363,
      "docEnd": 8614,
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
      "docStart": 8680,
      "docEnd": 8971,
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
      "docStart": 9040,
      "docEnd": 9612,
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
      "docStart": 9959,
      "docEnd": 10153,
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
      "docStart": 10193,
      "docEnd": 10775,
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
      "docStart": 10871,
      "docEnd": 11365,
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
      "docStart": 11492,
      "docEnd": 12407,
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
      "docStart": 12573,
      "docEnd": 12857,
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
      "docStart": 12908,
      "docEnd": 13167,
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
      "docStart": 13206,
      "docEnd": 13440,
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
      "docStart": 13481,
      "docEnd": 13721,
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
      "docStart": 13760,
      "docEnd": 14004,
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
      "docStart": 14039,
      "docEnd": 14289,
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
      "docStart": 14328,
      "docEnd": 14578,
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
      "docStart": 14617,
      "docEnd": 15143,
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
      "docStart": 15186,
      "docEnd": 15415,
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
      "docStart": 15532,
      "docEnd": 15762,
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
      "docStart": 15879,
      "docEnd": 16299,
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
      "docStart": 16654,
      "docEnd": 16917,
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
      "docStart": 17131,
      "docEnd": 17754,
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
      "docStart": 18389,
      "docEnd": 18932,
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