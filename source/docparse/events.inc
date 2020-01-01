{
  "functions": [
    {
      "name": "HookEvent",
      "docStart": 6975,
      "docEnd": 7286,
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
      "docStart": 7392,
      "docEnd": 7773,
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
      "docStart": 7881,
      "docEnd": 8208,
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
      "docStart": 8316,
      "docEnd": 8900,
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
      "docStart": 8968,
      "docEnd": 9265,
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
      "docStart": 9333,
      "docEnd": 9513,
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
      "docStart": 9564,
      "docEnd": 9922,
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
      "docStart": 10006,
      "docEnd": 10254,
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
      "docStart": 10329,
      "docEnd": 10687,
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
      "docStart": 10764,
      "docEnd": 11266,
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
      "docStart": 11339,
      "docEnd": 11711,
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
      "docStart": 11796,
      "docEnd": 12058,
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
      "docStart": 12135,
      "docEnd": 12560,
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
      "docStart": 12680,
      "docEnd": 12926,
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
      "docStart": 13011,
      "docEnd": 13288,
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
      "docStart": 13361,
      "docEnd": 13719,
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
          "docStart": 3276,
          "docEnd": 3469,
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
          "docStart": 3528,
          "docEnd": 3719,
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
          "docStart": 3771,
          "docEnd": 3912,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "GetBool",
          "docStart": 3948,
          "docEnd": 4199,
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
          "docStart": 4273,
          "docEnd": 4414,
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
          "docStart": 4479,
          "docEnd": 4730,
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
          "docStart": 4797,
          "docEnd": 5197,
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
          "docStart": 5260,
          "docEnd": 5525,
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
          "docStart": 5600,
          "docEnd": 5755,
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
          "docStart": 5822,
          "docEnd": 6140,
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
          "docStart": 6250,
          "docEnd": 6389,
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
          "docStart": 6464,
          "docEnd": 6629,
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
          "docStart": 6692,
          "docEnd": 6862,
          "type": "bool",
          "getter": true,
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
          "docStart": 1788,
          "docEnd": 1836
        },
        {
          "name": "EventHookMode_Post",
          "docStart": 1875,
          "docEnd": 1922
        },
        {
          "name": "EventHookMode_PostNoCopy",
          "docStart": 1961,
          "docEnd": 2040
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [
    {
      "name": "EventHook",
      "docStart": 2048,
      "docEnd": 2092,
      "types": [
        {
          "type": "function Action(Event event, const char[] name, bool dontBroadcast)",
          "docStart": 2117,
          "docEnd": 2701
        },
        {
          "type": "function void(Event event, const char[] name, bool dontBroadcast)",
          "docStart": 2779,
          "docEnd": 3168
        }
      ]
    }
  ],
  "typedefs": []
}