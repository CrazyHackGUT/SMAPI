{
  "functions": [
    {
      "name": "HookEvent",
      "docStart": 6740,
      "docEnd": 7022,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "EventHook",
          "name": "callback",
          "decl": "EventHook callback"
        },
        {
          "type": "EventHookMode",
          "name": "mode",
          "decl": "EventHookMode mode"
        }
      ]
    },
    {
      "name": "HookEventEx",
      "docStart": 7128,
      "docEnd": 7470,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "EventHook",
          "name": "callback",
          "decl": "EventHook callback"
        },
        {
          "type": "EventHookMode",
          "name": "mode",
          "decl": "EventHookMode mode"
        }
      ]
    },
    {
      "name": "UnhookEvent",
      "docStart": 7578,
      "docEnd": 7876,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "EventHook",
          "name": "callback",
          "decl": "EventHook callback"
        },
        {
          "type": "EventHookMode",
          "name": "mode",
          "decl": "EventHookMode mode"
        }
      ]
    },
    {
      "name": "CreateEvent",
      "docStart": 7984,
      "docEnd": 8511,
      "kind": "native",
      "returnType": "Event",
      "arguments": [
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        },
        {
          "type": "bool",
          "name": "force",
          "decl": "bool force"
        }
      ]
    },
    {
      "name": "FireEvent",
      "docStart": 8579,
      "docEnd": 8859,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "event",
          "decl": "Handle event"
        },
        {
          "type": "bool",
          "name": "dontBroadcast",
          "decl": "bool dontBroadcast"
        }
      ]
    },
    {
      "name": "CancelCreatedEvent",
      "docStart": 8927,
      "docEnd": 9090,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "event",
          "decl": "Handle event"
        }
      ]
    },
    {
      "name": "GetEventBool",
      "docStart": 9141,
      "docEnd": 9460,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "event",
          "decl": "Handle event"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "bool",
          "name": "defValue",
          "decl": "bool defValue"
        }
      ]
    },
    {
      "name": "SetEventBool",
      "docStart": 9544,
      "docEnd": 9761,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "event",
          "decl": "Handle event"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "bool",
          "name": "value",
          "decl": "bool value"
        }
      ]
    },
    {
      "name": "GetEventInt",
      "docStart": 9836,
      "docEnd": 10155,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "event",
          "decl": "Handle event"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "int",
          "name": "defValue",
          "decl": "int defValue"
        }
      ]
    },
    {
      "name": "SetEventInt",
      "docStart": 10232,
      "docEnd": 10703,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "event",
          "decl": "Handle event"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "int",
          "name": "value",
          "decl": "int value"
        }
      ]
    },
    {
      "name": "GetEventFloat",
      "docStart": 10776,
      "docEnd": 11109,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "Handle",
          "name": "event",
          "decl": "Handle event"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "float",
          "name": "defValue",
          "decl": "float defValue"
        }
      ]
    },
    {
      "name": "SetEventFloat",
      "docStart": 11194,
      "docEnd": 11425,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "event",
          "decl": "Handle event"
        },
        {
          "type": "const char[]",
          "name": "key",
          "decl": "const char[] key"
        },
        {
          "type": "float",
          "name": "value",
          "decl": "float value"
        }
      ]
    },
    {
      "name": "GetEventString",
      "docStart": 11502,
      "docEnd": 11889,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "event",
          "decl": "Handle event"
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
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "const char[]",
          "name": "defvalue",
          "decl": "const char[] defvalue"
        }
      ]
    },
    {
      "name": "SetEventString",
      "docStart": 12009,
      "docEnd": 12224,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "event",
          "decl": "Handle event"
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
        }
      ]
    },
    {
      "name": "GetEventName",
      "docStart": 12309,
      "docEnd": 12559,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "event",
          "decl": "Handle event"
        },
        {
          "type": "char[]",
          "name": "name",
          "decl": "char[] name"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "SetEventBroadcast",
      "docStart": 12632,
      "docEnd": 12990,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "event",
          "decl": "Handle event"
        },
        {
          "type": "bool",
          "name": "dontBroadcast",
          "decl": "bool dontBroadcast"
        }
      ]
    }
  ],
  "methodmaps": [
    {
      "name": "Event",
      "methods": [
        {
          "name": "Fire",
          "docStart": 3071,
          "docEnd": 3264,
          "returnType": "void",
          "arguments": [
            {
              "type": "bool",
              "name": "dontBroadcast",
              "decl": "bool dontBroadcast"
            }
          ]
        },
        {
          "name": "FireToClient",
          "docStart": 3323,
          "docEnd": 3508,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "client",
              "decl": "int client"
            }
          ]
        },
        {
          "name": "Cancel",
          "docStart": 3560,
          "docEnd": 3701,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "GetBool",
          "docStart": 3737,
          "docEnd": 3988,
          "returnType": "bool",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "bool",
              "name": "defValue",
              "decl": "bool defValue"
            }
          ]
        },
        {
          "name": "SetBool",
          "docStart": 4062,
          "docEnd": 4203,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "bool",
              "name": "value",
              "decl": "bool value"
            }
          ]
        },
        {
          "name": "GetInt",
          "docStart": 4268,
          "docEnd": 4519,
          "returnType": "int",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "int",
              "name": "defValue",
              "decl": "int defValue"
            }
          ]
        },
        {
          "name": "SetInt",
          "docStart": 4586,
          "docEnd": 4986,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "int",
              "name": "value",
              "decl": "int value"
            }
          ]
        },
        {
          "name": "GetFloat",
          "docStart": 5049,
          "docEnd": 5314,
          "returnType": "float",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "float",
              "name": "defValue",
              "decl": "float defValue"
            }
          ]
        },
        {
          "name": "SetFloat",
          "docStart": 5389,
          "docEnd": 5544,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "key",
              "decl": "const char[] key"
            },
            {
              "type": "float",
              "name": "value",
              "decl": "float value"
            }
          ]
        },
        {
          "name": "GetString",
          "docStart": 5611,
          "docEnd": 5929,
          "returnType": "void",
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
              "name": "maxlength",
              "decl": "int maxlength"
            },
            {
              "type": "const char[]",
              "name": "defvalue",
              "decl": "const char[] defvalue"
            }
          ]
        },
        {
          "name": "SetString",
          "docStart": 6039,
          "docEnd": 6178,
          "returnType": "void",
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
            }
          ]
        },
        {
          "name": "GetName",
          "docStart": 6253,
          "docEnd": 6418,
          "returnType": "void",
          "arguments": [
            {
              "type": "char[]",
              "name": "name",
              "decl": "char[] name"
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
          "name": "BroadcastDisabled",
          "docStart": 6481,
          "docEnd": 6651,
          "type": "bool",
          "getter": false,
          "setter": true
        }
      ]
    }
  ],
  "enums": [
    {
      "name": "EventHookMode",
      "docStart": 1655,
      "docEnd": 1726,
      "entries": [
        {
          "name": "EventHookMode_Pre",
          "docStart": 1775,
          "docEnd": 1823
        },
        {
          "name": "EventHookMode_Post",
          "docStart": 1850,
          "docEnd": 1897
        },
        {
          "name": "EventHookMode_PostNoCopy",
          "docStart": 1927,
          "docEnd": 2006
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [
    {
      "name": "EventHook",
      "docStart": 2014,
      "docEnd": 2058,
      "types": [
        {
          "type": "function Action(Event event, const char[] name, bool dontBroadcast)",
          "docStart": 2083,
          "docEnd": 2528
        },
        {
          "type": "function void(Event event, const char[] name, bool dontBroadcast)",
          "docStart": 2603,
          "docEnd": 2963
        }
      ]
    }
  ],
  "typedefs": []
}