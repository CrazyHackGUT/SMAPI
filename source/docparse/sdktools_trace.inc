{
  "functions": [
    {
      "name": "TR_GetPointContents",
      "docStart": 11108,
      "docEnd": 11339,
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
      "docStart": 11414,
      "docEnd": 11596,
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
      "docStart": 11670,
      "docEnd": 11987,
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
      "docStart": 12104,
      "docEnd": 12374,
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
      "docStart": 12530,
      "docEnd": 13246,
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
      "docStart": 13441,
      "docEnd": 14114,
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
      "docStart": 14367,
      "docEnd": 14988,
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
      "docStart": 15178,
      "docEnd": 15752,
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
      "docStart": 15986,
      "docEnd": 16316,
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
      "docStart": 16467,
      "docEnd": 16754,
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
      "docStart": 16960,
      "docEnd": 17107,
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
      "docStart": 17174,
      "docEnd": 17561,
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
      "docStart": 17685,
      "docEnd": 18025,
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
      "docStart": 18189,
      "docEnd": 18868,
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
      "docStart": 19067,
      "docEnd": 19702,
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
      "docStart": 19946,
      "docEnd": 20348,
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
      "docStart": 20507,
      "docEnd": 20866,
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
      "docStart": 21081,
      "docEnd": 21300,
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
      "docStart": 21371,
      "docEnd": 21620,
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
      "docStart": 21682,
      "docEnd": 21979,
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
      "docStart": 22050,
      "docEnd": 22269,
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
      "docStart": 22334,
      "docEnd": 22561,
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
      "docStart": 22639,
      "docEnd": 22874,
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
      "docStart": 22937,
      "docEnd": 23182,
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
      "docStart": 23251,
      "docEnd": 23543,
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
      "docStart": 23619,
      "docEnd": 23843,
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
      "docStart": 23907,
      "docEnd": 24104,
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
      "docStart": 24168,
      "docEnd": 24383,
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
      "docStart": 24446,
      "docEnd": 24702,
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
      "docStart": 24760,
      "docEnd": 25018,
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
      "docStart": 25078,
      "docEnd": 25331,
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
      "docStart": 25387,
      "docEnd": 25605,
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
      "docStart": 25665,
      "docEnd": 25930,
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
      "docStart": 25996,
      "docEnd": 26169,
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
          "docStart": 9821,
          "docEnd": 9895
        },
        {
          "name": "RayType_Infinite",
          "docStart": 9918,
          "docEnd": 10009
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
          "docStart": 10048,
          "docEnd": 10246
        },
        {
          "type": "function bool(int entity, int contentsMask, any data)",
          "docStart": 10299,
          "docEnd": 10537
        }
      ]
    },
    {
      "name": "TraceEntityEnumerator",
      "types": [
        {
          "type": "function bool(int entity)",
          "docStart": 10638,
          "docEnd": 10813
        },
        {
          "type": "function bool(int entity, any data)",
          "docStart": 10848,
          "docEnd": 11061
        }
      ]
    }
  ],
  "typedefs": []
}