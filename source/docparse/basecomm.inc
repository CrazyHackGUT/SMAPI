{
  "functions": [
    {
      "name": "BaseComm_OnClientMute",
      "docStart": 1643,
      "docEnd": 1806,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "bool",
          "name": "muteState",
          "decl": "bool muteState"
        }
      ]
    },
    {
      "name": "BaseComm_OnClientGag",
      "docStart": 1877,
      "docEnd": 2042,
      "kind": "forward",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "bool",
          "name": "gagState",
          "decl": "bool gagState"
        }
      ]
    },
    {
      "name": "BaseComm_IsClientGagged",
      "docStart": 2110,
      "docEnd": 2275,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "BaseComm_IsClientMuted",
      "docStart": 2329,
      "docEnd": 2492,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "BaseComm_SetClientGag",
      "docStart": 2545,
      "docEnd": 2772,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "bool",
          "name": "gagState",
          "decl": "bool gagState"
        }
      ]
    },
    {
      "name": "BaseComm_SetClientMute",
      "docStart": 2839,
      "docEnd": 3070,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        },
        {
          "type": "bool",
          "name": "muteState",
          "decl": "bool muteState"
        }
      ]
    },
    {
      "name": "__pl_basecomm_SetNTVOptional",
      "kind": "stock",
      "returnType": "void",
      "arguments": []
    }
  ],
  "methodmaps": [],
  "enums": [],
  "constants": [],
  "typesets": [],
  "typedefs": []
}