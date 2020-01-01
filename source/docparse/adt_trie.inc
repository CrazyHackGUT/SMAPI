{
  "functions": [
    {
      "name": "CreateTrie",
      "docStart": 6579,
      "docEnd": 7229,
      "kind": "native",
      "returnType": "StringMap",
      "arguments": []
    },
    {
      "name": "SetTrieValue",
      "docStart": 7265,
      "docEnd": 7673,
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
      "docStart": 7764,
      "docEnd": 8217,
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
      "docStart": 8331,
      "docEnd": 8730,
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
      "docStart": 8831,
      "docEnd": 9193,
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
      "docStart": 9266,
      "docEnd": 9781,
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
      "docStart": 9882,
      "docEnd": 10394,
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
      "docStart": 10497,
      "docEnd": 10736,
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
      "docStart": 10799,
      "docEnd": 10924,
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
      "docStart": 10964,
      "docEnd": 11158,
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
      "docStart": 11199,
      "docEnd": 11537,
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
      "docStart": 11588,
      "docEnd": 11904,
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
      "docStart": 11957,
      "docEnd": 12311,
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
      "docStart": 12382,
      "docEnd": 12765,
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
      "docEnd": 5711,
      "methods": [
        {
          "name": "KeyBufferSize",
          "docStart": 5862,
          "docEnd": 6143,
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
          "docStart": 6194,
          "docEnd": 6502,
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
          "docStart": 5755,
          "docEnd": 5805,
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