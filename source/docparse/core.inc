{
  "functions": [
    {
      "name": "IsNullVector",
      "docStart": 4872,
      "docEnd": 5030,
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
      "docStart": 5081,
      "docEnd": 5239,
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
      "docStart": 5473,
      "docEnd": 5709,
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
      "docStart": 1913,
      "docEnd": 1970,
      "entries": [
        {
          "name": "Plugin_Continue",
          "docStart": 2013,
          "docEnd": 2054
        },
        {
          "name": "Plugin_Changed",
          "docStart": 2081,
          "docEnd": 2143
        },
        {
          "name": "Plugin_Handled",
          "docStart": 2170,
          "docEnd": 2222
        },
        {
          "name": "Plugin_Stop",
          "docStart": 2249,
          "docEnd": 2312
        }
      ]
    },
    {
      "name": "Identity",
      "docStart": 2320,
      "docEnd": 2358,
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
      "docStart": 2600,
      "docEnd": 2634,
      "entries": [
        {
          "name": "Plugin_Running",
          "docStart": 2683,
          "docEnd": 2764
        },
        {
          "name": "Plugin_Paused",
          "docStart": 2791,
          "docEnd": 2826
        },
        {
          "name": "Plugin_Error",
          "docStart": 2853,
          "docEnd": 2945
        },
        {
          "name": "Plugin_Loaded",
          "docStart": 2972,
          "docEnd": 3026
        },
        {
          "name": "Plugin_Failed",
          "docStart": 3053,
          "docEnd": 3087
        },
        {
          "name": "Plugin_Created",
          "docStart": 3114,
          "docEnd": 3159
        },
        {
          "name": "Plugin_Uncompiled",
          "docStart": 3186,
          "docEnd": 3231
        },
        {
          "name": "Plugin_BadLoad",
          "docStart": 3258,
          "docEnd": 3287
        },
        {
          "name": "Plugin_Evicted",
          "docStart": 3314,
          "docEnd": 3357
        }
      ]
    },
    {
      "name": "PluginInfo",
      "docStart": 3365,
      "docEnd": 3799,
      "entries": [
        {
          "name": "PlInfo_Name",
          "docStart": 3846,
          "docEnd": 3865
        },
        {
          "name": "PlInfo_Author",
          "docStart": 3892,
          "docEnd": 3913
        },
        {
          "name": "PlInfo_Description",
          "docStart": 3940,
          "docEnd": 3966
        },
        {
          "name": "PlInfo_Version",
          "docStart": 3993,
          "docEnd": 4015
        },
        {
          "name": "PlInfo_URL",
          "docStart": 4042,
          "docEnd": 4060
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}