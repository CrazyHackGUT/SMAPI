{
  "functions": [
    {
      "name": "CreateTimer",
      "docStart": 3084,
      "docEnd": 3668,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "float",
          "name": "interval",
          "decl": "float interval"
        },
        {
          "type": "Timer",
          "name": "func",
          "decl": "Timer func"
        },
        {
          "type": "any",
          "name": "data",
          "decl": "any data"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "KillTimer",
      "docStart": 3766,
      "docEnd": 4127,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "timer",
          "decl": "Handle timer"
        },
        {
          "type": "bool",
          "name": "autoClose",
          "decl": "bool autoClose"
        }
      ]
    },
    {
      "name": "TriggerTimer",
      "docStart": 4191,
      "docEnd": 4430,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "timer",
          "decl": "Handle timer"
        },
        {
          "type": "bool",
          "name": "reset",
          "decl": "bool reset"
        }
      ]
    },
    {
      "name": "GetTickedTime",
      "docStart": 4493,
      "docEnd": 4938,
      "kind": "native",
      "returnType": "float",
      "arguments": []
    },
    {
      "name": "GetMapTimeLeft",
      "docStart": 4973,
      "docEnd": 5401,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int&",
          "name": "timeleft",
          "decl": "int& timeleft"
        }
      ]
    },
    {
      "name": "GetMapTimeLimit",
      "docStart": 5449,
      "docEnd": 5845,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int&",
          "name": "time",
          "decl": "int& time"
        }
      ]
    },
    {
      "name": "ExtendMapTimeLimit",
      "docStart": 5890,
      "docEnd": 6232,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "int",
          "name": "time",
          "decl": "int time"
        }
      ]
    },
    {
      "name": "GetTickInterval",
      "docStart": 6279,
      "docEnd": 6458,
      "kind": "native",
      "returnType": "float",
      "arguments": []
    },
    {
      "name": "OnMapTimeLeftChanged",
      "docStart": 6495,
      "docEnd": 7121,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "IsServerProcessing",
      "docStart": 7163,
      "docEnd": 7507,
      "kind": "native",
      "returnType": "bool",
      "arguments": []
    },
    {
      "name": "CreateDataTimer",
      "docStart": 7546,
      "docEnd": 8209,
      "kind": "stock",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "float",
          "name": "interval",
          "decl": "float interval"
        },
        {
          "type": "Timer",
          "name": "func",
          "decl": "Timer func"
        },
        {
          "type": "Handle&",
          "name": "datapack",
          "decl": "Handle &datapack"
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
  "enums": [],
  "constants": [],
  "typesets": [
    {
      "name": "Timer",
      "docStart": 2034,
      "docEnd": 2110,
      "types": [
        {
          "type": "function Action(Handle timer, Handle hndl)",
          "docStart": 2131,
          "docEnd": 2427
        },
        {
          "type": "function Action(Handle timer, any data)",
          "docStart": 2479,
          "docEnd": 2773
        },
        {
          "type": "function Action(Handle timer)",
          "docStart": 2822,
          "docEnd": 3043
        }
      ]
    }
  ],
  "typedefs": []
}