{
  "functions": [
    {
      "name": "OnBanClient",
      "docStart": 1972,
      "docEnd": 2700,
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
      "docStart": 2912,
      "docEnd": 3477,
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
      "docStart": 3656,
      "docEnd": 4078,
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
      "docStart": 4209,
      "docEnd": 5135,
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
      "docStart": 5339,
      "docEnd": 6024,
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
      "docStart": 6196,
      "docEnd": 6788,
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