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
      "name": "TR_EnumerateEntitiesSphere",
      "docStart": 15098,
      "docEnd": 15550,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "float",
          "name": "radius",
          "decl": "float radius"
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
      "name": "TR_EnumerateEntitiesBox",
      "docStart": 15869,
      "docEnd": 16305,
      "kind": "native",
      "returnType": "void",
      "arguments": [
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
      "name": "TR_EnumerateEntitiesPoint",
      "docStart": 16601,
      "docEnd": 17001,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
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
      "docStart": 17240,
      "docEnd": 17934,
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
      "docStart": 18229,
      "docEnd": 18868,
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
      "docStart": 19228,
      "docEnd": 19614,
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
      "docStart": 19857,
      "docEnd": 20192,
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
      "docStart": 20518,
      "docEnd": 20679,
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
      "docStart": 20746,
      "docEnd": 21187,
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
      "docStart": 21374,
      "docEnd": 21760,
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
      "docStart": 22008,
      "docEnd": 22754,
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
      "docStart": 23073,
      "docEnd": 23767,
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
      "docStart": 24155,
      "docEnd": 24624,
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
      "docStart": 24887,
      "docEnd": 25305,
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
      "docStart": 25655,
      "docEnd": 25899,
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
      "docStart": 25970,
      "docEnd": 26247,
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
      "docStart": 26309,
      "docEnd": 26634,
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
      "docStart": 26705,
      "docEnd": 26950,
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
      "docStart": 27015,
      "docEnd": 27268,
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
      "docStart": 27346,
      "docEnd": 27609,
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
      "docStart": 27672,
      "docEnd": 27945,
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
      "docStart": 28014,
      "docEnd": 28320,
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
      "docStart": 28396,
      "docEnd": 28648,
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
      "docStart": 28712,
      "docEnd": 28937,
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
      "docStart": 29001,
      "docEnd": 29244,
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
      "docStart": 29307,
      "docEnd": 29591,
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
      "docStart": 29649,
      "docEnd": 29935,
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
      "docStart": 29995,
      "docEnd": 30276,
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
      "docStart": 30332,
      "docEnd": 30578,
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
      "docStart": 30638,
      "docEnd": 31056,
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
      "docStart": 31119,
      "docEnd": 31411,
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
      "docStart": 31477,
      "docEnd": 31670,
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