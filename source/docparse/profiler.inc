{
  "functions": [
    {
      "name": "CreateProfiler",
      "docStart": 2305,
      "docEnd": 2457,
      "kind": "native",
      "returnType": "Profiler",
      "arguments": []
    },
    {
      "name": "StartProfiling",
      "docStart": 2496,
      "docEnd": 2594,
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
      "docStart": 2640,
      "docEnd": 2768,
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
      "docStart": 2813,
      "docEnd": 3051,
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
      "docStart": 3099,
      "docEnd": 3357,
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
      "docStart": 3434,
      "docEnd": 3644,
      "kind": "native",
      "returnType": "void",
      "arguments": []
    },
    {
      "name": "IsProfilingActive",
      "docStart": 3684,
      "docEnd": 3832,
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
          "docEnd": 1866,
          "returnType": "Profiler",
          "arguments": []
        },
        {
          "name": "Start",
          "docStart": 1900,
          "docEnd": 1932,
          "returnType": "void",
          "arguments": []
        },
        {
          "name": "Stop",
          "docStart": 1967,
          "docEnd": 2044,
          "returnType": "void",
          "arguments": []
        }
      ],
      "properties": [
        {
          "name": "Time",
          "docStart": 2079,
          "docEnd": 2246,
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