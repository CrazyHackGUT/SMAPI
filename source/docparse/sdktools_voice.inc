{
  "functions": [
    {
      "name": "SetClientListeningFlags",
      "docStart": 2421,
      "docEnd": 2552,
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
      "docStart": 2617,
      "docEnd": 2769,
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
      "docStart": 3699,
      "docEnd": 4010,
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
      "docStart": 4099,
      "docEnd": 4322,
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
      "docStart": 4396,
      "docEnd": 4613,
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
          "docStart": 2302,
          "docEnd": 2333
        },
        {
          "name": "Listen_No",
          "docStart": 2356,
          "docEnd": 2374
        },
        {
          "name": "Listen_Yes",
          "docStart": 2397,
          "docEnd": 2413
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}