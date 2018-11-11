{
  "functions": [
    {
      "name": "CreateTrie",
      "docStart": 6569,
      "docEnd": 7209,
      "kind": "native",
      "returnType": "StringMap",
      "arguments": []
    },
    {
      "name": "SetTrieValue",
      "docStart": 7245,
      "docEnd": 7599,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "map",
          "decl": "Handle map"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "any",
          "name": "value",
          "decl": "any value"
        },
        {
          "type": "bool",
          "name": "replace",
          "decl": "bool replace"
        }
      ]
    },
    {
      "name": "SetTrieArray",
      "docStart": 7690,
      "docEnd": 8085,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "map",
          "decl": "Handle map"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "const any[]",
          "name": "array",
          "decl": "const any[] array"
        },
        {
          "type": "int",
          "name": "num_items",
          "decl": "int num_items"
        },
        {
          "type": "bool",
          "name": "replace",
          "decl": "bool replace"
        }
      ]
    },
    {
      "name": "SetTrieString",
      "docStart": 8199,
      "docEnd": 8544,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "map",
          "decl": "Handle map"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "const char[]",
          "name": "value",
          "decl": "const char[] value"
        },
        {
          "type": "bool",
          "name": "replace",
          "decl": "bool replace"
        }
      ]
    },
    {
      "name": "GetTrieValue",
      "docStart": 8645,
      "docEnd": 8942,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "map",
          "decl": "Handle map"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "any&",
          "name": "value",
          "decl": "any& value"
        }
      ]
    },
    {
      "name": "GetTrieArray",
      "docStart": 9015,
      "docEnd": 9452,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "map",
          "decl": "Handle map"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "any[]",
          "name": "array",
          "decl": "any[] array"
        },
        {
          "type": "int",
          "name": "max_size",
          "decl": "int max_size"
        },
        {
          "type": "int&",
          "name": "size",
          "decl": "int& size"
        }
      ]
    },
    {
      "name": "GetTrieString",
      "docStart": 9553,
      "docEnd": 9987,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "map",
          "decl": "Handle map"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "char[]",
          "name": "value",
          "decl": "char[] value"
        },
        {
          "type": "int",
          "name": "max_size",
          "decl": "int max_size"
        },
        {
          "type": "int&",
          "name": "size",
          "decl": "int& size"
        }
      ]
    },
    {
      "name": "RemoveFromTrie",
      "docStart": 10090,
      "docEnd": 10288,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "map",
          "decl": "Handle map"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        }
      ]
    },
    {
      "name": "ClearTrie",
      "docStart": 10351,
      "docEnd": 10455,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "map",
          "decl": "Handle map"
        }
      ]
    },
    {
      "name": "GetTrieSize",
      "docStart": 10495,
      "docEnd": 10657,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "map",
          "decl": "Handle map"
        }
      ]
    },
    {
      "name": "CreateTrieSnapshot",
      "docStart": 10698,
      "docEnd": 11009,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "Handle",
          "name": "map",
          "decl": "Handle map"
        }
      ]
    },
    {
      "name": "TrieSnapshotLength",
      "docStart": 11060,
      "docEnd": 11348,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "snapshot",
          "decl": "Handle snapshot"
        }
      ]
    },
    {
      "name": "TrieSnapshotKeyBufferSize",
      "docStart": 11401,
      "docEnd": 11721,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "snapshot",
          "decl": "Handle snapshot"
        },
        {
          "type": "int",
          "name": "index",
          "decl": "int index"
        }
      ]
    },
    {
      "name": "GetTrieSnapshotKey",
      "docStart": 11792,
      "docEnd": 12129,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "snapshot",
          "decl": "Handle snapshot"
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
    }
  ],
  "methodmaps": [
    {
      "name": "StringMap",
      "docStart": 1659,
      "docEnd": 1698,
      "methods": [
        {
          "name": "StringMap",
          "docStart": 1734,
          "docEnd": 2366,
          "returnType": "StringMap",
          "arguments": []
        },
        {
          "name": "SetValue",
          "docStart": 2400,
          "docEnd": 2713,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "any",
              "name": "value",
              "decl": "any value"
            },
            {
              "type": "bool",
              "name": "replace",
              "decl": "bool replace"
            }
          ]
        },
        {
          "name": "SetArray",
          "docStart": 2797,
          "docEnd": 3153,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "const any[]",
              "name": "array",
              "decl": "const any[] array"
            },
            {
              "type": "int",
              "name": "num_items",
              "decl": "int num_items"
            },
            {
              "type": "bool",
              "name": "replace",
              "decl": "bool replace"
            }
          ]
        },
        {
          "name": "SetString",
          "docStart": 3260,
          "docEnd": 3564,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "const char[]",
              "name": "value",
              "decl": "const char[] value"
            },
            {
              "type": "bool",
              "name": "replace",
              "decl": "bool replace"
            }
          ]
        },
        {
          "name": "GetValue",
          "docStart": 3658,
          "docEnd": 3925,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "any&",
              "name": "value",
              "decl": "any& value"
            }
          ]
        },
        {
          "name": "GetArray",
          "docStart": 3991,
          "docEnd": 4442,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "any[]",
              "name": "array",
              "decl": "any[] array"
            },
            {
              "type": "int",
              "name": "max_size",
              "decl": "int max_size"
            },
            {
              "type": "int&",
              "name": "size",
              "decl": "int& size"
            }
          ]
        },
        {
          "name": "GetString",
          "docStart": 4536,
          "docEnd": 4949,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "char[]",
              "name": "value",
              "decl": "char[] value"
            },
            {
              "type": "int",
              "name": "max_size",
              "decl": "int max_size"
            },
            {
              "type": "int&",
              "name": "size",
              "decl": "int& size"
            }
          ]
        },
        {
          "name": "Remove",
          "docStart": 5045,
          "docEnd": 5193,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            }
          ]
        },
        {
          "name": "Clear",
          "docStart": 5245,
          "docEnd": 5278,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "Snapshot",
          "docStart": 5313,
          "docEnd": 5375,
          "returnType": "StringMapSnapshot",
          "arguments": []
        }
      ],
      "properties": [
        {
          "name": "Size",
          "docStart": 5426,
          "docEnd": 5471,
          "type": "int",
          "getter": true,
          "setter": false
        }
      ]
    },
    {
      "name": "StringMapSnapshot",
      "docStart": 5529,
      "docEnd": 5701,
      "methods": [
        {
          "name": "KeyBufferSize",
          "docStart": 5852,
          "docEnd": 6133,
          "returnType": "int",
          "arguments": [
            {
              "type": "int",
              "name": "index",
              "decl": "int index"
            }
          ]
        },
        {
          "name": "GetKey",
          "docStart": 6184,
          "docEnd": 6492,
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
        }
      ],
      "properties": [
        {
          "name": "Length",
          "docStart": 5745,
          "docEnd": 5795,
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