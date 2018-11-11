{
  "functions": [
    {
      "name": "SetClientListeningFlags",
      "docStart": 2369,
      "docEnd": 2487,
      "kind": "native",
      "returnType": "void",
      "arguments": [
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
    },
    {
      "name": "GetClientListeningFlags",
      "docStart": 2552,
      "docEnd": 2687,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    },
    {
      "name": "SetClientListening",
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "iReceiver",
          "decl": "int iReceiver"
        },
        {
          "type": "int",
          "name": "iSender",
          "decl": "int iSender"
        },
        {
          "type": "bool",
          "name": "bListen",
          "decl": "bool bListen"
        }
      ]
    },
    {
      "name": "GetClientListening",
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "iReceiver",
          "decl": "int iReceiver"
        },
        {
          "type": "int",
          "name": "iSender",
          "decl": "int iSender"
        }
      ]
    },
    {
      "name": "SetListenOverride",
      "docStart": 3462,
      "docEnd": 3750,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "iReceiver",
          "decl": "int iReceiver"
        },
        {
          "type": "int",
          "name": "iSender",
          "decl": "int iSender"
        },
        {
          "type": "ListenOverride",
          "name": "override",
          "decl": "ListenOverride override"
        }
      ]
    },
    {
      "name": "GetListenOverride",
      "docStart": 3839,
      "docEnd": 4043,
      "kind": "native",
      "returnType": "ListenOverride",
      "arguments": [
        {
          "type": "int",
          "name": "iReceiver",
          "decl": "int iReceiver"
        },
        {
          "type": "int",
          "name": "iSender",
          "decl": "int iSender"
        }
      ]
    },
    {
      "name": "IsClientMuted",
      "docStart": 4117,
      "docEnd": 4311,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "iMuter",
          "decl": "int iMuter"
        },
        {
          "type": "int",
          "name": "iMutee",
          "decl": "int iMutee"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "ListenOverride",
      "entries": [
        {
          "name": "Listen_Default",
          "docStart": 2263,
          "docEnd": 2294
        },
        {
          "name": "Listen_No",
          "docStart": 2310,
          "docEnd": 2328
        },
        {
          "name": "Listen_Yes",
          "docStart": 2345,
          "docEnd": 2361
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}