{
  "functions": [
    {
      "name": "SortIntegers",
      "docStart": 1970,
      "docEnd": 2166,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int[]",
          "name": "array",
          "decl": "int[] array"
        },
        {
          "type": "int",
          "name": "array_size",
          "decl": "int array_size"
        },
        {
          "type": "SortOrder",
          "name": "order",
          "decl": "SortOrder order"
        }
      ]
    },
    {
      "name": "SortFloats",
      "docStart": 2260,
      "docEnd": 2481,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "float[]",
          "name": "array",
          "decl": "float[] array"
        },
        {
          "type": "int",
          "name": "array_size",
          "decl": "int array_size"
        },
        {
          "type": "SortOrder",
          "name": "order",
          "decl": "SortOrder order"
        }
      ]
    },
    {
      "name": "SortStrings",
      "docStart": 2575,
      "docEnd": 2769,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "char[][]",
          "name": "array",
          "decl": "char[][] array"
        },
        {
          "type": "int",
          "name": "array_size",
          "decl": "int array_size"
        },
        {
          "type": "SortOrder",
          "name": "order",
          "decl": "SortOrder order"
        }
      ]
    },
    {
      "name": "SortCustom1D",
      "docStart": 3519,
      "docEnd": 3812,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int[]",
          "name": "array",
          "decl": "int[] array"
        },
        {
          "type": "int",
          "name": "array_size",
          "decl": "int array_size"
        },
        {
          "type": "SortFunc1D",
          "name": "sortfunc",
          "decl": "SortFunc1D sortfunc"
        },
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "SortCustom2D",
      "docStart": 4677,
      "docEnd": 5019,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "any[][]",
          "name": "array",
          "decl": "any[][] array"
        },
        {
          "type": "int",
          "name": "array_size",
          "decl": "int array_size"
        },
        {
          "type": "SortFunc2D",
          "name": "sortfunc",
          "decl": "SortFunc2D sortfunc"
        },
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "SortADTArray",
      "docStart": 5130,
      "docEnd": 5382,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "SortOrder",
          "name": "order",
          "decl": "SortOrder order"
        },
        {
          "type": "SortType",
          "name": "type",
          "decl": "SortType type"
        }
      ]
    },
    {
      "name": "SortADTArrayCustom",
      "docStart": 6171,
      "docEnd": 6436,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "SortFuncADTArray",
          "name": "sortfunc",
          "decl": "SortFuncADTArray sortfunc"
        },
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "SortOrder",
      "docStart": 1641,
      "docEnd": 1678,
      "entries": [
        {
          "name": "Sort_Ascending",
          "docStart": 1724,
          "docEnd": 1747
        },
        {
          "name": "Sort_Descending",
          "docStart": 1774,
          "docEnd": 1798
        },
        {
          "name": "Sort_Random",
          "docStart": 1825,
          "docEnd": 1845
        }
      ]
    },
    {
      "name": "SortType",
      "docStart": 1853,
      "docEnd": 1896,
      "entries": [
        {
          "name": "Sort_Integer"
        },
        {
          "name": "Sort_Float"
        },
        {
          "name": "Sort_String"
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [
    {
      "name": "SortFunc2D",
      "docStart": 3921,
      "docEnd": 4489,
      "types": [
        {
          "type": "function int(int[] elem1, int[] elem2, const int[][] array, Handle hndl)"
        },
        {
          "type": "function int(char[] elem1, char[] elem2, const char[][] array, Handle hndl)"
        }
      ]
    }
  ],
  "typedefs": [
    {
      "name": "SortFunc1D",
      "docStart": 2865,
      "docEnd": 3424,
      "type": "function int(int elem1, int elem2, const int[] array, Handle hndl)"
    },
    {
      "name": "SortFuncADTArray",
      "docStart": 5459,
      "docEnd": 6073,
      "type": "function int(int index1, int index2, Handle array, Handle hndl)"
    }
  ]
}