{
  "functions": [
    {
      "name": "GetEntityFlags",
      "docStart": 8558,
      "docEnd": 8926,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "SetEntityFlags",
      "docStart": 8970,
      "docEnd": 9368,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "flags",
          "decl": "int flags"
        }
      ]
    },
    {
      "name": "GetEntityMoveType",
      "docStart": 9426,
      "docEnd": 9603,
      "kind": "stock",
      "returnType": "MoveType",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "SetEntityMoveType",
      "docStart": 10059,
      "docEnd": 10237,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "MoveType",
          "name": "mt",
          "decl": "MoveType mt"
        }
      ]
    },
    {
      "name": "GetEntityRenderMode",
      "docStart": 10680,
      "docEnd": 10852,
      "kind": "stock",
      "returnType": "RenderMode",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "SetEntityRenderMode",
      "docStart": 11305,
      "docEnd": 11480,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "RenderMode",
          "name": "mode",
          "decl": "RenderMode mode"
        }
      ]
    },
    {
      "name": "GetEntityRenderFx",
      "docStart": 11922,
      "docEnd": 12090,
      "kind": "stock",
      "returnType": "RenderFx",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "SetEntityRenderFx",
      "docStart": 12533,
      "docEnd": 12702,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "RenderFx",
          "name": "fx",
          "decl": "RenderFx fx"
        }
      ]
    },
    {
      "name": "GetEntityRenderColor",
      "docStart": 13132,
      "docEnd": 13419,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int&",
          "name": "r",
          "decl": "int& r"
        },
        {
          "type": "int&",
          "name": "g",
          "decl": "int& g"
        },
        {
          "type": "int&",
          "name": "b",
          "decl": "int& b"
        },
        {
          "type": "int&",
          "name": "a",
          "decl": "int& a"
        }
      ]
    },
    {
      "name": "SetEntityRenderColor",
      "docStart": 14132,
      "docEnd": 14418,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "r",
          "decl": "int r"
        },
        {
          "type": "int",
          "name": "g",
          "decl": "int g"
        },
        {
          "type": "int",
          "name": "b",
          "decl": "int b"
        },
        {
          "type": "int",
          "name": "a",
          "decl": "int a"
        }
      ]
    },
    {
      "name": "GetEntityGravity",
      "docStart": 15163,
      "docEnd": 15342,
      "kind": "stock",
      "returnType": "float",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        }
      ]
    },
    {
      "name": "SetEntityGravity",
      "docStart": 15782,
      "docEnd": 15994,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "float",
          "name": "amount",
          "decl": "float amount"
        }
      ]
    },
    {
      "name": "SetEntityHealth",
      "docStart": 16448,
      "docEnd": 16615,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "entity",
          "decl": "int entity"
        },
        {
          "type": "int",
          "name": "amount",
          "decl": "int amount"
        }
      ]
    },
    {
      "name": "GetClientButtons",
      "docStart": 17584,
      "docEnd": 17792,
      "kind": "stock",
      "returnType": "int",
      "arguments": [
        {
          "type": "int",
          "name": "client",
          "decl": "int client"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [
    {
      "name": "MoveType",
      "entries": [
        {
          "name": "MOVETYPE_NONE",
          "docStart": 1703,
          "docEnd": 1722
        },
        {
          "name": "MOVETYPE_ISOMETRIC",
          "docStart": 1747,
          "docEnd": 1766
        },
        {
          "name": "MOVETYPE_WALK",
          "docStart": 1787,
          "docEnd": 1829
        },
        {
          "name": "MOVETYPE_STEP",
          "docStart": 1850,
          "docEnd": 1909
        },
        {
          "name": "MOVETYPE_FLY",
          "docStart": 1929,
          "docEnd": 1978
        },
        {
          "name": "MOVETYPE_FLYGRAVITY",
          "docStart": 2003,
          "docEnd": 2057
        },
        {
          "name": "MOVETYPE_VPHYSICS",
          "docStart": 2081,
          "docEnd": 2117
        },
        {
          "name": "MOVETYPE_PUSH",
          "docStart": 2138,
          "docEnd": 2178
        },
        {
          "name": "MOVETYPE_NOCLIP",
          "docStart": 2200,
          "docEnd": 2262
        },
        {
          "name": "MOVETYPE_LADDER",
          "docStart": 2284,
          "docEnd": 2337
        },
        {
          "name": "MOVETYPE_OBSERVER",
          "docStart": 2361,
          "docEnd": 2421
        },
        {
          "name": "MOVETYPE_CUSTOM",
          "docStart": 2443,
          "docEnd": 2496
        }
      ]
    },
    {
      "name": "RenderMode",
      "entries": [
        {
          "name": "RENDER_NORMAL",
          "docStart": 2543,
          "docEnd": 2554
        },
        {
          "name": "RENDER_TRANSCOLOR",
          "docStart": 2577,
          "docEnd": 2599
        },
        {
          "name": "RENDER_TRANSTEXTURE",
          "docStart": 2623,
          "docEnd": 2647
        },
        {
          "name": "RENDER_GLOW",
          "docStart": 2665,
          "docEnd": 2735
        },
        {
          "name": "RENDER_TRANSALPHA",
          "docStart": 2758,
          "docEnd": 2788
        },
        {
          "name": "RENDER_TRANSADD",
          "docStart": 2809,
          "docEnd": 2827
        },
        {
          "name": "RENDER_ENVIRONMENTAL",
          "docStart": 2852,
          "docEnd": 2901
        },
        {
          "name": "RENDER_TRANSADDFRAMEBLEND",
          "docStart": 2931,
          "docEnd": 3001
        },
        {
          "name": "RENDER_TRANSALPHAADD",
          "docStart": 3026,
          "docEnd": 3050
        },
        {
          "name": "RENDER_WORLDGLOW",
          "docStart": 3072,
          "docEnd": 3134
        },
        {
          "name": "RENDER_NONE",
          "docStart": 3152,
          "docEnd": 3173
        }
      ]
    },
    {
      "name": "RenderFx",
      "entries": [
        {
          "name": "RENDERFX_NONE"
        },
        {
          "name": "RENDERFX_PULSE_SLOW"
        },
        {
          "name": "RENDERFX_PULSE_FAST"
        },
        {
          "name": "RENDERFX_PULSE_SLOW_WIDE"
        },
        {
          "name": "RENDERFX_PULSE_FAST_WIDE"
        },
        {
          "name": "RENDERFX_FADE_SLOW"
        },
        {
          "name": "RENDERFX_FADE_FAST"
        },
        {
          "name": "RENDERFX_SOLID_SLOW"
        },
        {
          "name": "RENDERFX_SOLID_FAST"
        },
        {
          "name": "RENDERFX_STROBE_SLOW"
        },
        {
          "name": "RENDERFX_STROBE_FAST"
        },
        {
          "name": "RENDERFX_STROBE_FASTER"
        },
        {
          "name": "RENDERFX_FLICKER_SLOW"
        },
        {
          "name": "RENDERFX_FLICKER_FAST"
        },
        {
          "name": "RENDERFX_NO_DISSIPATION"
        },
        {
          "name": "RENDERFX_DISTORT",
          "docStart": 3602,
          "docEnd": 3641
        },
        {
          "name": "RENDERFX_HOLOGRAM",
          "docStart": 3665,
          "docEnd": 3705
        },
        {
          "name": "RENDERFX_EXPLODE",
          "docStart": 3728,
          "docEnd": 3756
        },
        {
          "name": "RENDERFX_GLOWSHELL",
          "docStart": 3781,
          "docEnd": 3802
        },
        {
          "name": "RENDERFX_CLAMP_MIN_SCALE",
          "docStart": 3831,
          "docEnd": 3895
        },
        {
          "name": "RENDERFX_ENV_RAIN",
          "docStart": 3919,
          "docEnd": 3966
        },
        {
          "name": "RENDERFX_ENV_SNOW",
          "docStart": 3990,
          "docEnd": 4037
        },
        {
          "name": "RENDERFX_SPOTLIGHT",
          "docStart": 4062,
          "docEnd": 4106
        },
        {
          "name": "RENDERFX_RAGDOLL",
          "docStart": 4129,
          "docEnd": 4200
        },
        {
          "name": "RENDERFX_PULSE_FAST_WIDER"
        },
        {
          "name": "RENDERFX_MAX"
        }
      ]
    }
  ],
  "constants": [],
  "typesets": [],
  "typedefs": []
}