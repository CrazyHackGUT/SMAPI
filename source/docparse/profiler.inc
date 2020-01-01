{
  "functions": [
    {
      "name": "CreateProfiler",
      "docStart": 2343,
      "docEnd": 2506,
      "kind": "native",
      "returnType": "Profiler",
      "arguments": []
    },
    {
      "name": "StartProfiling",
      "docStart": 2545,
      "docEnd": 2663,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "prof",
          "decl": "Handle prof"
        }
      ]
    },
    {
      "name": "StopProfiling",
      "docStart": 2709,
      "docEnd": 2857,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "prof",
          "decl": "Handle prof"
        }
      ]
    },
    {
      "name": "GetProfilerTime",
      "docStart": 2902,
      "docEnd": 3171,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "Handle",
          "name": "prof",
          "decl": "Handle prof"
        }
      ]
    },
    {
      "name": "EnterProfilingEvent",
      "docStart": 3219,
      "docEnd": 3477,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const char[]",
          "name": "group",
          "decl": "const char[] group"
        },
        {
          "type": "const char[]",
          "name": "name",
          "decl": "const char[] name"
        }
      ]
    },
    {
      "name": "LeaveProfilingEvent",
      "docStart": 3554,
      "docEnd": 3764,
      "kind": "native",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "IsProfilingActive",
      "docStart": 3804,
      "docEnd": 3952,
      "kind": "native",
      "returnType": "bool",
      "arguments": []
    }
  ],
  "methodmaps": [
    {
      "name": "Profiler",
      "methods": [
        {
          "name": "Profiler",
          "docStart": 1730,
          "docEnd": 1878,
          "returnType": "Profiler",
          "arguments": []
        },
        {
          "name": "Start",
          "docStart": 1912,
          "docEnd": 1944,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "Stop",
          "docStart": 1979,
          "docEnd": 2069,
          "returnType": "void",
          "arguments": []
        }
      ],
      "properties": [
        {
          "name": "Time",
          "docStart": 2104,
          "docEnd": 2283,
          "type": "float",
          "getter": true,
          "setter": false
        }
      ]
    }
  ],
  "enums": [],
  "constants": [],
  "typesets": [],
  "typedefs": []
}