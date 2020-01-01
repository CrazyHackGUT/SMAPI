{
  "functions": [
    {
      "name": "GetUserMessageType",
      "docStart": 2218,
      "docEnd": 2358,
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
      "docStart": 2568,
      "docEnd": 2642,
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
      "docStart": 2801,
      "docEnd": 2877,
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
      "docStart": 3034,
      "docEnd": 3253,
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
      "docStart": 3309,
      "docEnd": 3602,
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
      "docStart": 3682,
      "docEnd": 4374,
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
      "docStart": 4479,
      "docEnd": 5172,
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
      "docStart": 5270,
      "docEnd": 5340,
      "kind": "native",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "HookUserMessage",
      "docStart": 7234,
      "docEnd": 7693,
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
      "docStart": 7814,
      "docEnd": 8083,
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
      "docStart": 8171,
      "docEnd": 8532,
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
      "docStart": 8833,
      "docEnd": 9230,
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
      "docStart": 1645,
      "docEnd": 1680,
      "entries": [
        {
          "name": "INVALID_MESSAGE_ID"
        }
      ]
    },
    {
      "name": "UserMessageType",
      "docStart": 1731,
      "docEnd": 1781,
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
      "docStart": 5371,
      "docEnd": 5421,
      "types": [
        {
          "type": "function Action(UserMsg msg_id, BfRead msg, const int[] players, int playersNum, bool reliable, bool init)",
          "docStart": 5444,
          "docEnd": 6105
        },
        {
          "type": "function Action(UserMsg msg_id, Protobuf msg, const int[] players, int playersNum, bool reliable, bool init)",
          "docStart": 6219,
          "docEnd": 6876
        }
      ]
    }
  ],
  "typedefs": [
    {
      "name": "MsgPostHook",
      "docStart": 6997,
      "docEnd": 7164,
      "type": "function void(UserMsg msg_id, bool sent)"
    }
  ]
}