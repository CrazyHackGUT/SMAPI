{
  "functions": [
    {
      "name": "TR_GetPointContents",
      "docStart": 11180,
      "docEnd": 11433,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "int&",
          "name": "entindex",
          "decl": "int& entindex"
        }
      ]
    },
    {
      "name": "TR_GetPointContentsEnt",
      "docStart": 11508,
      "docEnd": 11712,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "entindex",
          "decl": "int entindex"
        },
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        }
      ]
    },
    {
      "name": "TR_TraceRay",
      "docStart": 11786,
      "docEnd": 12147,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "RayType",
          "name": "rtype",
          "decl": "RayType rtype"
        }
      ]
    },
    {
      "name": "TR_TraceHull",
      "docStart": 12318,
      "docEnd": 12624,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "const float[3]",
          "name": "mins",
          "decl": "const float mins[3]"
        },
        {
          "type": "const float[3]",
          "name": "maxs",
          "decl": "const float maxs[3]"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "TR_EnumerateEntities",
      "docStart": 12852,
      "docEnd": 13639,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "int",
          "name": "mask",
          "decl": "int mask"
        },
        {
          "type": "RayType",
          "name": "rtype",
          "decl": "RayType rtype"
        },
        {
          "type": "TraceEntityEnumerator",
          "name": "enumerator",
          "decl": "TraceEntityEnumerator enumerator"
        },
        {
          "type": "any",
          "name": "data",
          "decl": "any data"
        }
      ]
    },
    {
      "name": "TR_EnumerateEntitiesHull",
      "docStart": 13959,
      "docEnd": 14695,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "const float[3]",
          "name": "mins",
          "decl": "const float mins[3]"
        },
        {
          "type": "const float[3]",
          "name": "maxs",
          "decl": "const float maxs[3]"
        },
        {
          "type": "int",
          "name": "mask",
          "decl": "int mask"
        },
        {
          "type": "TraceEntityEnumerator",
          "name": "enumerator",
          "decl": "TraceEntityEnumerator enumerator"
        },
        {
          "type": "any",
          "name": "data",
          "decl": "any data"
        }
      ]
    },
    {
      "name": "TR_TraceRayFilter",
      "docStart": 15098,
      "docEnd": 15792,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "RayType",
          "name": "rtype",
          "decl": "RayType rtype"
        },
        {
          "type": "TraceEntityFilter",
          "name": "filter",
          "decl": "TraceEntityFilter filter"
        },
        {
          "type": "any",
          "name": "data",
          "decl": "any data"
        }
      ]
    },
    {
      "name": "TR_TraceHullFilter",
      "docStart": 16087,
      "docEnd": 16726,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "const float[3]",
          "name": "mins",
          "decl": "const float mins[3]"
        },
        {
          "type": "const float[3]",
          "name": "maxs",
          "decl": "const float maxs[3]"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "TraceEntityFilter",
          "name": "filter",
          "decl": "TraceEntityFilter filter"
        },
        {
          "type": "any",
          "name": "data",
          "decl": "any data"
        }
      ]
    },
    {
      "name": "TR_ClipRayToEntity",
      "docStart": 17086,
      "docEnd": 17472,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "RayType",
          "name": "rtype",
          "decl": "RayType rtype"
        },
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "TR_ClipRayHullToEntity",
      "docStart": 17715,
      "docEnd": 18050,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "const float[3]",
          "name": "mins",
          "decl": "const float mins[3]"
        },
        {
          "type": "const float[3]",
          "name": "maxs",
          "decl": "const float maxs[3]"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "TR_ClipCurrentRayToEntity",
      "docStart": 18376,
      "docEnd": 18537,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "TR_TraceRayEx",
      "docStart": 18604,
      "docEnd": 19045,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "RayType",
          "name": "rtype",
          "decl": "RayType rtype"
        }
      ]
    },
    {
      "name": "TR_TraceHullEx",
      "docStart": 19232,
      "docEnd": 19618,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "const float[3]",
          "name": "mins",
          "decl": "const float mins[3]"
        },
        {
          "type": "const float[3]",
          "name": "maxs",
          "decl": "const float maxs[3]"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "TR_TraceRayFilterEx",
      "docStart": 19866,
      "docEnd": 20612,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "RayType",
          "name": "rtype",
          "decl": "RayType rtype"
        },
        {
          "type": "TraceEntityFilter",
          "name": "filter",
          "decl": "TraceEntityFilter filter"
        },
        {
          "type": "any",
          "name": "data",
          "decl": "any data"
        }
      ]
    },
    {
      "name": "TR_TraceHullFilterEx",
      "docStart": 20931,
      "docEnd": 21625,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "const float[3]",
          "name": "mins",
          "decl": "const float mins[3]"
        },
        {
          "type": "const float[3]",
          "name": "maxs",
          "decl": "const float maxs[3]"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "TraceEntityFilter",
          "name": "filter",
          "decl": "TraceEntityFilter filter"
        },
        {
          "type": "any",
          "name": "data",
          "decl": "any data"
        }
      ]
    },
    {
      "name": "TR_ClipRayToEntityEx",
      "docStart": 22013,
      "docEnd": 22482,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "RayType",
          "name": "rtype",
          "decl": "RayType rtype"
        },
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "TR_ClipRayHullToEntityEx",
      "docStart": 22745,
      "docEnd": 23163,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "const float[3]",
          "name": "mins",
          "decl": "const float mins[3]"
        },
        {
          "type": "const float[3]",
          "name": "maxs",
          "decl": "const float maxs[3]"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "TR_ClipCurrentRayToEntityEx",
      "docStart": 23513,
      "docEnd": 23757,
      "kind": "native",
      "returnType": "Handle",
      "arguments": [
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        },
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "TR_GetFraction",
      "docStart": 23828,
      "docEnd": 24105,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "TR_GetFractionLeftSolid",
      "docStart": 24167,
      "docEnd": 24492,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "TR_GetStartPosition",
      "docStart": 24563,
      "docEnd": 24808,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        },
        {
          "type": "float[3]",
          "name": "pos",
          "decl": "float pos[3]"
        }
      ]
    },
    {
      "name": "TR_GetEndPosition",
      "docStart": 24873,
      "docEnd": 25126,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "float[3]",
          "name": "pos",
          "decl": "float pos[3]"
        },
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "TR_GetEntityIndex",
      "docStart": 25204,
      "docEnd": 25467,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "TR_GetDisplacementFlags",
      "docStart": 25530,
      "docEnd": 25803,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "TR_GetSurfaceName",
      "docStart": 25872,
      "docEnd": 26178,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlen",
          "decl": "int maxlen"
        }
      ]
    },
    {
      "name": "TR_GetSurfaceProps",
      "docStart": 26254,
      "docEnd": 26506,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "TR_GetSurfaceFlags",
      "docStart": 26570,
      "docEnd": 26795,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "TR_GetPhysicsBone",
      "docStart": 26859,
      "docEnd": 27102,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "TR_AllSolid",
      "docStart": 27165,
      "docEnd": 27449,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "TR_StartSolid",
      "docStart": 27507,
      "docEnd": 27793,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "TR_DidHit",
      "docStart": 27853,
      "docEnd": 28134,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "TR_GetHitGroup",
      "docStart": 28190,
      "docEnd": 28436,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "TR_GetHitBoxIndex",
      "docStart": 28496,
      "docEnd": 28914,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        }
      ]
    },
    {
      "name": "TR_GetPlaneNormal",
      "docStart": 28977,
      "docEnd": 29269,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "hndl",
          "decl": "Handle hndl"
        },
        {
          "type": "float[3]",
          "name": "normal",
          "decl": "float normal[3]"
        }
      ]
    },
    {
      "name": "TR_PointOutsideWorld",
      "docStart": 29335,
      "docEnd": 29528,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "float[3]",
          "name": "pos",
          "decl": "float pos[3]"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "RayType",
      "entries": [
        {
          "name": "RayType_EndPoint",
          "docStart": 9814,
          "docEnd": 9888
        },
        {
          "name": "RayType_Infinite",
          "docStart": 9911,
          "docEnd": 10002
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [
    {
      "name": "TraceEntityFilter",
      "types": [
        {
          "type": "function bool(int entity, int contentsMask)",
          "docStart": 10041,
          "docEnd": 10256
        },
        {
          "type": "function bool(int entity, int contentsMask, any data)",
          "docStart": 10309,
          "docEnd": 10571
        }
      ]
    },
    {
      "name": "TraceEntityEnumerator",
      "types": [
        {
          "type": "function bool(int entity)",
          "docStart": 10672,
          "docEnd": 10863
        },
        {
          "type": "function bool(int entity, any data)",
          "docStart": 10898,
          "docEnd": 11133
        }
      ]
    }
  ],
  "typedefs": []
}