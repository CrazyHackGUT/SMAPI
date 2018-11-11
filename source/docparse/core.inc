{
  "functions": [
    {
      "name": "IsNullVector",
      "docStart": 4732,
      "docEnd": 4890,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        }
      ]
    },
    {
      "name": "IsNullString",
      "docStart": 4941,
      "docEnd": 5099,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "str",
          "decl": "const char[] str"
        }
      ]
    },
    {
      "name": "VerifyCoreVersion",
      "kind": "native",
      "returnType": "int",
      "arguments": []
    },
    {
      "name": "MarkNativeAsOptional",
      "docStart": 5333,
      "docEnd": 5562,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "__ext_core_SetNTVOptional",
      "kind": "stock",
      "returnType": "void",
      "arguments": []
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "Action",
      "docStart": 1910,
      "docEnd": 1967,
      "entries": [
        {
          "name": "Plugin_Continue",
          "docStart": 2007,
          "docEnd": 2048
        },
        {
          "name": "Plugin_Changed",
          "docStart": 2072,
          "docEnd": 2134
        },
        {
          "name": "Plugin_Handled",
          "docStart": 2158,
          "docEnd": 2210
        },
        {
          "name": "Plugin_Stop",
          "docStart": 2231,
          "docEnd": 2294
        }
      ]
    },
    {
      "name": "Identity",
      "docStart": 2302,
      "docEnd": 2340,
      "entries": [
        {
          "name": "Identity_Core"
        },
        {
          "name": "Identity_Extension"
        },
        {
          "name": "Identity_Plugin"
        }
      ]
    },
    {
      "name": "PluginStatus",
      "docStart": 2582,
      "docEnd": 2616,
      "entries": [
        {
          "name": "Plugin_Running",
          "docStart": 2660,
          "docEnd": 2741
        },
        {
          "name": "Plugin_Paused",
          "docStart": 2761,
          "docEnd": 2796
        },
        {
          "name": "Plugin_Error",
          "docStart": 2815,
          "docEnd": 2907
        },
        {
          "name": "Plugin_Loaded",
          "docStart": 2927,
          "docEnd": 2981
        },
        {
          "name": "Plugin_Failed",
          "docStart": 3001,
          "docEnd": 3035
        },
        {
          "name": "Plugin_Created",
          "docStart": 3056,
          "docEnd": 3101
        },
        {
          "name": "Plugin_Uncompiled",
          "docStart": 3124,
          "docEnd": 3169
        },
        {
          "name": "Plugin_BadLoad",
          "docStart": 3190,
          "docEnd": 3219
        },
        {
          "name": "Plugin_Evicted",
          "docStart": 3239,
          "docEnd": 3282
        }
      ]
    },
    {
      "name": "PluginInfo",
      "docStart": 3290,
      "docEnd": 3724,
      "entries": [
        {
          "name": "PlInfo_Name",
          "docStart": 3762,
          "docEnd": 3781
        },
        {
          "name": "PlInfo_Author",
          "docStart": 3801,
          "docEnd": 3822
        },
        {
          "name": "PlInfo_Description",
          "docStart": 3846,
          "docEnd": 3872
        },
        {
          "name": "PlInfo_Version",
          "docStart": 3893,
          "docEnd": 3915
        },
        {
          "name": "PlInfo_URL",
          "docStart": 3933,
          "docEnd": 3951
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}