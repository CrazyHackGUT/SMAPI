{
  "functions": [
    {
      "name": "GetUserMessageType",
      "docStart": 2200,
      "docEnd": 2330,
      "kind": "native",
      "returnType": "UserMessageType",
      "arguments": []
    },
    {
      "name": "UserMessageToProtobuf",
      "kind": "stock",
      "returnType": "Protobuf",
      "arguments": [
        {
          "type": "Handle",
          "name": "msg",
          "decl": "Handle msg"
        }
      ]
    },
    {
      "name": "UserMessageToBfWrite",
      "docStart": 2530,
      "docEnd": 2604,
      "kind": "stock",
      "returnType": "BfWrite",
      "arguments": [
        {
          "type": "Handle",
          "name": "msg",
          "decl": "Handle msg"
        }
      ]
    },
    {
      "name": "UserMessageToBfRead",
      "docStart": 2753,
      "docEnd": 2829,
      "kind": "stock",
      "returnType": "BfRead",
      "arguments": [
        {
          "type": "Handle",
          "name": "msg",
          "decl": "Handle msg"
        }
      ]
    },
    {
      "name": "GetUserMessageId",
      "docStart": 2975,
      "docEnd": 3176,
      "kind": "native",
      "returnType": "UserMsg",
      "arguments": [
        {
          "type": "const char[]",
          "name": "msg",
          "decl": "const char[] msg"
        }
      ]
    },
    {
      "name": "GetUserMessageName",
      "docStart": 3232,
      "docEnd": 3498,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "UserMsg",
          "name": "msg_id",
          "decl": "UserMsg msg_id"
        },
        {
          "type": "char[]",
          "name": "msg",
          "decl": "char[] msg"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        }
      ]
    },
    {
      "name": "StartMessage",
      "docStart": 3578,
      "docEnd": 4194,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "const char[]",
          "name": "msgname",
          "decl": "const char[] msgname"
        },
        {
          "type": "const int[]",
          "name": "clients",
          "decl": "const int[] clients"
        },
        {
          "type": "int",
          "name": "numClients",
          "decl": "int numClients"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "StartMessageEx",
      "docStart": 4299,
      "docEnd": 4913,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "UserMsg",
          "name": "msg",
          "decl": "UserMsg msg"
        },
        {
          "type": "const int[]",
          "name": "clients",
          "decl": "const int[] clients"
        },
        {
          "type": "int",
          "name": "numClients",
          "decl": "int numClients"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "EndMessage",
      "docStart": 5011,
      "docEnd": 5081,
      "kind": "native",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "HookUserMessage",
      "docStart": 6816,
      "docEnd": 7209,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "UserMsg",
          "name": "msg_id",
          "decl": "UserMsg msg_id"
        },
        {
          "type": "MsgHook",
          "name": "hook",
          "decl": "MsgHook hook"
        },
        {
          "type": "bool",
          "name": "intercept",
          "decl": "bool intercept"
        },
        {
          "type": "function void(UserMsg msg_id, bool sent)",
          "name": "post",
          "decl": "function void(UserMsg msg_id, bool sent) post"
        }
      ]
    },
    {
      "name": "UnhookUserMessage",
      "docStart": 7330,
      "docEnd": 7572,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "UserMsg",
          "name": "msg_id",
          "decl": "UserMsg msg_id"
        },
        {
          "type": "MsgHook",
          "name": "hook",
          "decl": "MsgHook hook"
        },
        {
          "type": "bool",
          "name": "intercept",
          "decl": "bool intercept"
        }
      ]
    },
    {
      "name": "StartMessageAll",
      "docStart": 7660,
      "docEnd": 7980,
      "kind": "stock",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "const char[]",
          "name": "msgname",
          "decl": "const char[] msgname"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "StartMessageOne",
      "docStart": 8275,
      "docEnd": 8625,
      "kind": "stock",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "const char[]",
          "name": "msgname",
          "decl": "const char[] msgname"
        },
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "UserMsg",
      "docStart": 1647,
      "docEnd": 1682,
      "entries": [
        {
          "name": "INVALID_MESSAGE_ID"
        }
      ]
    },
    {
      "name": "UserMessageType",
      "docStart": 1734,
      "docEnd": 1784,
      "entries": [
        {
          "name": "UM_BitBuf"
        },
        {
          "name": "UM_Protobuf"
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [
    {
      "name": "MsgHook",
      "docStart": 5112,
      "docEnd": 5162,
      "types": [
        {
          "type": "function Action(UserMsg msg_id, BfRead msg, const int[] players, int playersNum, bool reliable, bool init)",
          "docStart": 5185,
          "docEnd": 5773
        },
        {
          "type": "function Action(UserMsg msg_id, Protobuf msg, const int[] players, int playersNum, bool reliable, bool init)",
          "docStart": 5887,
          "docEnd": 6471
        }
      ]
    }
  ],
  "typedefs": [
    {
      "name": "MsgPostHook",
      "docStart": 6592,
      "docEnd": 6746,
      "type": "function void(UserMsg msg_id, bool sent)"
    }
  ]
}