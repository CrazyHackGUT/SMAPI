{
  "functions": [
    {
      "name": "CreateTimer",
      "docStart": 3200,
      "docEnd": 3828,
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
      "docStart": 3926,
      "docEnd": 4320,
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
      "docStart": 4384,
      "docEnd": 4648,
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
      "docStart": 4711,
      "docEnd": 5159,
      "kind": "native",
      "returnType": "float",
      "arguments": []
    },
    {
      "name": "GetMapTimeLeft",
      "docStart": 5194,
      "docEnd": 5646,
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
      "docStart": 5694,
      "docEnd": 6117,
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
      "docStart": 6162,
      "docEnd": 6549,
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
      "docStart": 6596,
      "docEnd": 6784,
      "kind": "native",
      "returnType": "float",
      "arguments": []
    },
    {
      "name": "OnMapTimeLeftChanged",
      "docStart": 6821,
      "docEnd": 7442,
      "kind": "forward",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "IsServerProcessing",
      "docStart": 7484,
      "docEnd": 7832,
      "kind": "native",
      "returnType": "bool",
      "arguments": []
    },
    {
      "name": "CreateDataTimer",
      "docStart": 7871,
      "docEnd": 8574,
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
      "docStart": 2065,
      "docEnd": 2141,
      "types": [
        {
          "type": "function Action(Handle timer, Handle hndl)",
          "docStart": 2162,
          "docEnd": 2489
        },
        {
          "type": "function Action(Handle timer, any data)",
          "docStart": 2540,
          "docEnd": 2865
        },
        {
          "type": "function Action(Handle timer)",
          "docStart": 2913,
          "docEnd": 3159
        }
      ]
    }
  ],
  "typedefs": []
}