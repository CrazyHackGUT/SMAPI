{
  "functions": [
    {
      "name": "SortIntegers",
      "docStart": 1964,
      "docEnd": 2145,
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
      "docStart": 2239,
      "docEnd": 2445,
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
      "docStart": 2539,
      "docEnd": 2718,
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
      "docStart": 3401,
      "docEnd": 3675,
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
      "docStart": 4473,
      "docEnd": 4796,
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
      "docStart": 4907,
      "docEnd": 5140,
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
      "docStart": 5860,
      "docEnd": 6108,
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
      "docStart": 1643,
      "docEnd": 1680,
      "entries": [
        {
          "name": "Sort_Ascending",
          "docStart": 1723,
          "docEnd": 1746
        },
        {
          "name": "Sort_Descending",
          "docStart": 1770,
          "docEnd": 1794
        },
        {
          "name": "Sort_Random",
          "docStart": 1815,
          "docEnd": 1835
        }
      ]
    },
    {
      "name": "SortType",
      "docStart": 1843,
      "docEnd": 1886,
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
      "docStart": 3784,
      "docEnd": 4285,
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
      "docStart": 2814,
      "docEnd": 3306,
      "type": "function int(int elem1, int elem2, const int[] array, Handle hndl)"
    },
    {
      "name": "SortFuncADTArray",
      "docStart": 5217,
      "docEnd": 5762,
      "type": "function int(int index1, int index2, Handle array, Handle hndl)"
    }
  ]
}