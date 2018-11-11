{
  "functions": [
    {
      "name": "ByteCountToCells",
      "docStart": 1659,
      "docEnd": 1903,
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
      "docStart": 9199,
      "docEnd": 9930,
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
      "docStart": 9999,
      "docEnd": 10147,
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
      "docStart": 10190,
      "docEnd": 10559,
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
      "docStart": 10604,
      "docEnd": 10933,
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
      "docStart": 10990,
      "docEnd": 11141,
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
      "docStart": 11185,
      "docEnd": 11501,
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
      "docStart": 11557,
      "docEnd": 11805,
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
      "docStart": 11872,
      "docEnd": 12423,
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
      "docStart": 12502,
      "docEnd": 12885,
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
      "docStart": 12972,
      "docEnd": 13279,
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
      "docStart": 13366,
      "docEnd": 13759,
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
      "docStart": 13842,
      "docEnd": 14227,
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
      "docStart": 14326,
      "docEnd": 14578,
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
      "docStart": 14655,
      "docEnd": 15026,
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
      "docStart": 15115,
      "docEnd": 15472,
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
      "docStart": 15528,
      "docEnd": 15910,
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
      "docStart": 15969,
      "docEnd": 16160,
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
      "docStart": 16231,
      "docEnd": 16518,
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
      "docStart": 16586,
      "docEnd": 16942,
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
      "docStart": 17013,
      "docEnd": 17185,
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
          "docStart": 2035,
          "docEnd": 2833,
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
          "docStart": 2899,
          "docEnd": 2965,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "Clone",
          "docStart": 3000,
          "docEnd": 3325,
          "returnType": "ArrayList",
          "arguments": []
        },
        {
          "name": "Resize",
          "docStart": 3365,
          "docEnd": 3613,
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
          "docStart": 3660,
          "docEnd": 3972,
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
          "docStart": 4014,
          "docEnd": 4187,
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
          "docStart": 4244,
          "docEnd": 4768,
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
          "docStart": 4837,
          "docEnd": 5205,
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
          "docStart": 5278,
          "docEnd": 5566,
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
          "docStart": 5643,
          "docEnd": 6038,
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
          "docStart": 6111,
          "docEnd": 6495,
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
          "docStart": 6580,
          "docEnd": 6809,
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
          "docStart": 6877,
          "docEnd": 7250,
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
          "docStart": 7330,
          "docEnd": 7648,
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
          "docStart": 7694,
          "docEnd": 8037,
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
          "docStart": 8081,
          "docEnd": 8238,
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
          "docStart": 8296,
          "docEnd": 8532,
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
          "docStart": 8588,
          "docEnd": 8932,
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
        }
      ],
      "properties": [
        {
          "name": "Length",
          "docStart": 8991,
          "docEnd": 9025,
          "type": "int",
          "getter": true,
          "setter": false
        },
        {
          "name": "BlockSize",
          "docStart": 9083,
          "docEnd": 9136,
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