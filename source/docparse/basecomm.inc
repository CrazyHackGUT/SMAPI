{
  "functions": [
    {
      "name": "BaseComm_OnClientMute",
      "docStart": 1643,
      "docEnd": 1796,
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
      "docStart": 1868,
      "docEnd": 2022,
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
      "docStart": 2091,
      "docEnd": 2240,
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
      "docStart": 2294,
      "docEnd": 2441,
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
      "docStart": 2494,
      "docEnd": 2701,
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
      "docStart": 2768,
      "docEnd": 2980,
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