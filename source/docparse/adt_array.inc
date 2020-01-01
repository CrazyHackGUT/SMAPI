{
  "functions": [
    {
      "name": "ByteCountToCells",
      "docStart": 1659,
      "docEnd": 1920,
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        }
      ]
    },
    {
      "name": "CreateArray",
      "docStart": 9788,
      "docEnd": 10583,
      "kind": "native",
      "returnType": "ArrayList",
      "arguments": [
        {
          "type": "int",
          "name": "blocksize",
          "decl": "int blocksize"
        },
        {
          "type": "int",
          "name": "startsize",
          "decl": "int startsize"
        }
      ]
    },
    {
      "name": "ClearArray",
      "docStart": 10652,
      "docEnd": 10817,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        }
      ]
    },
    {
      "name": "CloneArray",
      "docStart": 10860,
      "docEnd": 11256,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        }
      ]
    },
    {
      "name": "ResizeArray",
      "docStart": 11301,
      "docEnd": 11652,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "int",
          "name": "newsize",
          "decl": "int newsize"
        }
      ]
    },
    {
      "name": "GetArraySize",
      "docStart": 11709,
      "docEnd": 11887,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        }
      ]
    },
    {
      "name": "PushArrayCell",
      "docStart": 11931,
      "docEnd": 12280,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "any",
          "name": "value",
          "decl": "any value"
        }
      ]
    },
    {
      "name": "PushArrayString",
      "docStart": 12336,
      "docEnd": 12617,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "const char[]",
          "name": "value",
          "decl": "const char[] value"
        }
      ]
    },
    {
      "name": "PushArrayArray",
      "docStart": 12684,
      "docEnd": 13307,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "const any[]",
          "name": "values",
          "decl": "const any[] values"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        }
      ]
    },
    {
      "name": "GetArrayCell",
      "docStart": 13386,
      "docEnd": 13830,
      "kind": "native",
      "returnType": "any",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        },
        {
          "type": "int",
          "name": "block",
          "decl": "int block"
        },
        {
          "type": "bool",
          "name": "asChar",
          "decl": "bool asChar"
        }
      ]
    },
    {
      "name": "GetArrayString",
      "docStart": 13917,
      "docEnd": 14266,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "GetArrayArray",
      "docStart": 14353,
      "docEnd": 14808,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        },
        {
          "type": "any[]",
          "name": "buffer",
          "decl": "any[] buffer"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        }
      ]
    },
    {
      "name": "SetArrayCell",
      "docStart": 14891,
      "docEnd": 15333,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        },
        {
          "type": "any",
          "name": "value",
          "decl": "any value"
        },
        {
          "type": "int",
          "name": "block",
          "decl": "int block"
        },
        {
          "type": "bool",
          "name": "asChar",
          "decl": "bool asChar"
        }
      ]
    },
    {
      "name": "SetArrayString",
      "docStart": 15432,
      "docEnd": 15723,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        },
        {
          "type": "const char[]",
          "name": "value",
          "decl": "const char[] value"
        }
      ]
    },
    {
      "name": "SetArrayArray",
      "docStart": 15800,
      "docEnd": 16233,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        },
        {
          "type": "const any[]",
          "name": "values",
          "decl": "const any[] values"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        }
      ]
    },
    {
      "name": "ShiftArrayUp",
      "docStart": 16322,
      "docEnd": 16702,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "RemoveFromArray",
      "docStart": 16758,
      "docEnd": 17163,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "SwapArrayItems",
      "docStart": 17222,
      "docEnd": 17442,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "int",
          "name": "index1",
          "decl": "int index1"
        },
        {
          "type": "int",
          "name": "index2",
          "decl": "int index2"
        }
      ]
    },
    {
      "name": "FindStringInArray",
      "docStart": 17513,
      "docEnd": 17834,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "const char[]",
          "name": "item",
          "decl": "const char[] item"
        }
      ]
    },
    {
      "name": "FindValueInArray",
      "docStart": 17902,
      "docEnd": 18298,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        },
        {
          "type": "any",
          "name": "item",
          "decl": "any item"
        },
        {
          "type": "int",
          "name": "block",
          "decl": "int block"
        }
      ]
    },
    {
      "name": "GetArrayBlockSize",
      "docStart": 18369,
      "docEnd": 18567,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "array",
          "decl": "Handle array"
        }
      ]
    }
  ],
  "methodmaps": [
    {
      "name": "ArrayList",
      "methods": [
        {
          "name": "ArrayList",
          "docStart": 2063,
          "docEnd": 2861,
          "returnType": "ArrayList",
          "arguments": [
            {
              "type": "int",
              "name": "blocksize",
              "decl": "int blocksize"
            },
            {
              "type": "int",
              "name": "startsize",
              "decl": "int startsize"
            }
          ]
        },
        {
          "name": "Clear",
          "docStart": 2927,
          "docEnd": 2993,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "Clone",
          "docStart": 3028,
          "docEnd": 3353,
          "returnType": "ArrayList",
          "arguments": []
        },
        {
          "name": "Resize",
          "docStart": 3393,
          "docEnd": 3641,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "newsize",
              "decl": "int newsize"
            }
          ]
        },
        {
          "name": "Push",
          "docStart": 3688,
          "docEnd": 3995,
          "returnType": "int",
          "arguments": [
            {
              "type": "any",
              "name": "value",
              "decl": "any value"
            }
          ]
        },
        {
          "name": "PushString",
          "docStart": 4037,
          "docEnd": 4210,
          "returnType": "int",
          "arguments": [
            {
              "type": "const char[]",
              "name": "value",
              "decl": "const char[] value"
            }
          ]
        },
        {
          "name": "PushArray",
          "docStart": 4267,
          "docEnd": 4791,
          "returnType": "int",
          "arguments": [
            {
              "type": "const any[]",
              "name": "values",
              "decl": "const any[] values"
            },
            {
              "type": "int",
              "name": "size",
              "decl": "int size"
            }
          ]
        },
        {
          "name": "Get",
          "docStart": 4860,
          "docEnd": 5228,
          "returnType": "any",
          "arguments": [
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            },
            {
              "type": "int",
              "name": "block",
              "decl": "int block"
            },
            {
              "type": "bool",
              "name": "asChar",
              "decl": "bool asChar"
            }
          ]
        },
        {
          "name": "GetString",
          "docStart": 5301,
          "docEnd": 5589,
          "returnType": "int",
          "arguments": [
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            },
            {
              "type": "char[]",
              "name": "buffer",
              "decl": "char[] buffer"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            }
          ]
        },
        {
          "name": "GetArray",
          "docStart": 5666,
          "docEnd": 6061,
          "returnType": "int",
          "arguments": [
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            },
            {
              "type": "any[]",
              "name": "buffer",
              "decl": "any[] buffer"
            },
            {
              "type": "int",
              "name": "size",
              "decl": "int size"
            }
          ]
        },
        {
          "name": "Set",
          "docStart": 6134,
          "docEnd": 6518,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            },
            {
              "type": "any",
              "name": "value",
              "decl": "any value"
            },
            {
              "type": "int",
              "name": "block",
              "decl": "int block"
            },
            {
              "type": "bool",
              "name": "asChar",
              "decl": "bool asChar"
            }
          ]
        },
        {
          "name": "SetString",
          "docStart": 6603,
          "docEnd": 6832,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            },
            {
              "type": "const char[]",
              "name": "value",
              "decl": "const char[] value"
            }
          ]
        },
        {
          "name": "SetArray",
          "docStart": 6900,
          "docEnd": 7273,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            },
            {
              "type": "const any[]",
              "name": "values",
              "decl": "const any[] values"
            },
            {
              "type": "int",
              "name": "size",
              "decl": "int size"
            }
          ]
        },
        {
          "name": "ShiftUp",
          "docStart": 7353,
          "docEnd": 7671,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "Erase",
          "docStart": 7717,
          "docEnd": 8060,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "SwapAt",
          "docStart": 8104,
          "docEnd": 8261,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "index1",
              "decl": "int index1"
            },
            {
              "type": "int",
              "name": "index2",
              "decl": "int index2"
            }
          ]
        },
        {
          "name": "FindString",
          "docStart": 8319,
          "docEnd": 8555,
          "returnType": "int",
          "arguments": [
            {
              "type": "const char[]",
              "name": "item",
              "decl": "const char[] item"
            }
          ]
        },
        {
          "name": "FindValue",
          "docStart": 8611,
          "docEnd": 8952,
          "returnType": "int",
          "arguments": [
            {
              "type": "any",
              "name": "item",
              "decl": "any item"
            },
            {
              "type": "int",
              "name": "block",
              "decl": "int block"
            }
          ]
        },
        {
          "name": "Sort",
          "docStart": 9011,
          "docEnd": 9210,
          "returnType": "void",
          "arguments": [
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
          "name": "SortCustom",
          "docStart": 9274,
          "docEnd": 9486,
          "returnType": "void",
          "arguments": [
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
      "properties": [
        {
          "name": "Length",
          "docStart": 9580,
          "docEnd": 9614,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "BlockSize",
          "docStart": 9672,
          "docEnd": 9725,
          "type": "int",
          "getter": true,
          "setter": false
        }
      ]
    }
  ],
  "enums": [],
  "constants": [],
  "typesets": [],
  "typedefs": []
}