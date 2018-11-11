{
  "functions": [
    {
      "name": "OnBanClient",
      "docStart": 1947,
      "docEnd": 2596,
      "kind": "forward",
      "returnType": "Action",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "time",
          "decl": "int time"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "const char[]",
          "name": "reason",
          "decl": "const char[] reason"
        },
        {
          "type": "const char[]",
          "name": "kick_message",
          "decl": "const char[] kick_message"
        },
        {
          "type": "const char[]",
          "name": "command",
          "decl": "const char[] command"
        },
        {
          "type": "any",
          "name": "source",
          "decl": "any source"
        }
      ]
    },
    {
      "name": "OnBanIdentity",
      "docStart": 2808,
      "docEnd": 3329,
      "kind": "forward",
      "returnType": "Action",
      "arguments": [
        {
          "type": "const char[]",
          "name": "identity",
          "decl": "const char[] identity"
        },
        {
          "type": "int",
          "name": "time",
          "decl": "int time"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "const char[]",
          "name": "reason",
          "decl": "const char[] reason"
        },
        {
          "type": "const char[]",
          "name": "command",
          "decl": "const char[] command"
        },
        {
          "type": "any",
          "name": "source",
          "decl": "any source"
        }
      ]
    },
    {
      "name": "OnRemoveBan",
      "docStart": 3508,
      "docEnd": 3899,
      "kind": "forward",
      "returnType": "Action",
      "arguments": [
        {
          "type": "const char[]",
          "name": "identity",
          "decl": "const char[] identity"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "const char[]",
          "name": "command",
          "decl": "const char[] command"
        },
        {
          "type": "any",
          "name": "source",
          "decl": "any source"
        }
      ]
    },
    {
      "name": "BanClient",
      "docStart": 4030,
      "docEnd": 4834,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "int",
          "name": "time",
          "decl": "int time"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "const char[]",
          "name": "reason",
          "decl": "const char[] reason"
        },
        {
          "type": "const char[]",
          "name": "kick_message",
          "decl": "const char[] kick_message"
        },
        {
          "type": "const char[]",
          "name": "command",
          "decl": "const char[] command"
        },
        {
          "type": "any",
          "name": "source",
          "decl": "any source"
        }
      ]
    },
    {
      "name": "BanIdentity",
      "docStart": 5038,
      "docEnd": 5647,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "identity",
          "decl": "const char[] identity"
        },
        {
          "type": "int",
          "name": "time",
          "decl": "int time"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "const char[]",
          "name": "reason",
          "decl": "const char[] reason"
        },
        {
          "type": "const char[]",
          "name": "command",
          "decl": "const char[] command"
        },
        {
          "type": "any",
          "name": "source",
          "decl": "any source"
        }
      ]
    },
    {
      "name": "RemoveBan",
      "docStart": 5819,
      "docEnd": 6348,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "const char[]",
          "name": "identity",
          "decl": "const char[] identity"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "const char[]",
          "name": "command",
          "decl": "const char[] command"
        },
        {
          "type": "any",
          "name": "source",
          "decl": "any source"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [],
  "constants": [],
  "typesets": [],
  "typedefs": []
}