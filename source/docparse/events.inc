{
  "functions": [
    {
      "name": "HookEvent",
      "docStart": 6848,
      "docEnd": 7130,
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
      "docStart": 7236,
      "docEnd": 7578,
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
      "docStart": 7686,
      "docEnd": 7984,
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
      "docStart": 8092,
      "docEnd": 8619,
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
      "docStart": 8687,
      "docEnd": 8967,
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
      "docStart": 9035,
      "docEnd": 9198,
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
      "docStart": 9249,
      "docEnd": 9568,
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
      "docStart": 9652,
      "docEnd": 9869,
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
      "docStart": 9944,
      "docEnd": 10263,
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
      "docStart": 10340,
      "docEnd": 10811,
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
      "docStart": 10884,
      "docEnd": 11217,
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
      "docStart": 11302,
      "docEnd": 11533,
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
      "docStart": 11610,
      "docEnd": 11997,
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
      "docStart": 12117,
      "docEnd": 12332,
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
      "docStart": 12417,
      "docEnd": 12667,
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
      "docStart": 12740,
      "docEnd": 13098,
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
          "docStart": 3155,
          "docEnd": 3348,
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
          "docStart": 3407,
          "docEnd": 3592,
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
          "docStart": 3644,
          "docEnd": 3785,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "GetBool",
          "docStart": 3821,
          "docEnd": 4072,
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
          "docStart": 4146,
          "docEnd": 4287,
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
          "docStart": 4352,
          "docEnd": 4603,
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
          "docStart": 4670,
          "docEnd": 5070,
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
          "docStart": 5133,
          "docEnd": 5398,
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
          "docStart": 5473,
          "docEnd": 5628,
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
          "docStart": 5695,
          "docEnd": 6013,
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
          "docStart": 6123,
          "docEnd": 6262,
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
          "docStart": 6337,
          "docEnd": 6502,
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
          "docStart": 6565,
          "docEnd": 6735,
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
          "docEnd": 2612
        },
        {
          "type": "function void(Event event, const char[] name, bool dontBroadcast)",
          "docStart": 2687,
          "docEnd": 3047
        }
      ]
    }
  ],
  "typedefs": []
}