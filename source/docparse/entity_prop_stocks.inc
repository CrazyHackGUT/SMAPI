{
  "functions": [
    {
      "name": "GetEntityFlags",
      "docStart": 9557,
      "docEnd": 9955,
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
      "docStart": 9999,
      "docEnd": 10423,
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
      "docStart": 10481,
      "docEnd": 10688,
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
      "docStart": 11138,
      "docEnd": 11345,
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
      "docStart": 11782,
      "docEnd": 11984,
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
      "docStart": 12431,
      "docEnd": 12633,
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
      "docStart": 13069,
      "docEnd": 13267,
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
      "docStart": 13704,
      "docEnd": 13902,
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
      "docStart": 14326,
      "docEnd": 14672,
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
      "docStart": 15377,
      "docEnd": 15722,
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
      "docStart": 16459,
      "docEnd": 16661,
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
      "docStart": 17095,
      "docEnd": 17333,
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
      "docStart": 17781,
      "docEnd": 17974,
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
      "docStart": 18933,
      "docEnd": 19187,
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
          "docStart": 1708,
          "docEnd": 1727
        },
        {
          "name": "MOVETYPE_ISOMETRIC",
          "docStart": 1758,
          "docEnd": 1777
        },
        {
          "name": "MOVETYPE_WALK",
          "docStart": 1808,
          "docEnd": 1850
        },
        {
          "name": "MOVETYPE_STEP",
          "docStart": 1881,
          "docEnd": 1940
        },
        {
          "name": "MOVETYPE_FLY",
          "docStart": 1971,
          "docEnd": 2020
        },
        {
          "name": "MOVETYPE_FLYGRAVITY",
          "docStart": 2051,
          "docEnd": 2105
        },
        {
          "name": "MOVETYPE_VPHYSICS",
          "docStart": 2136,
          "docEnd": 2172
        },
        {
          "name": "MOVETYPE_PUSH",
          "docStart": 2203,
          "docEnd": 2243
        },
        {
          "name": "MOVETYPE_NOCLIP",
          "docStart": 2274,
          "docEnd": 2336
        },
        {
          "name": "MOVETYPE_LADDER",
          "docStart": 2367,
          "docEnd": 2420
        },
        {
          "name": "MOVETYPE_OBSERVER",
          "docStart": 2451,
          "docEnd": 2511
        },
        {
          "name": "MOVETYPE_CUSTOM",
          "docStart": 2542,
          "docEnd": 2595
        }
      ]
    },
    {
      "name": "RenderMode",
      "entries": [
        {
          "name": "RENDER_NORMAL",
          "docStart": 2652,
          "docEnd": 2663
        },
        {
          "name": "RENDER_TRANSCOLOR",
          "docStart": 2694,
          "docEnd": 2716
        },
        {
          "name": "RENDER_TRANSTEXTURE",
          "docStart": 2747,
          "docEnd": 2771
        },
        {
          "name": "RENDER_GLOW",
          "docStart": 2802,
          "docEnd": 2872
        },
        {
          "name": "RENDER_TRANSALPHA",
          "docStart": 2903,
          "docEnd": 2933
        },
        {
          "name": "RENDER_TRANSADD",
          "docStart": 2964,
          "docEnd": 2982
        },
        {
          "name": "RENDER_ENVIRONMENTAL",
          "docStart": 3013,
          "docEnd": 3062
        },
        {
          "name": "RENDER_TRANSADDFRAMEBLEND",
          "docStart": 3093,
          "docEnd": 3163
        },
        {
          "name": "RENDER_TRANSALPHAADD",
          "docStart": 3194,
          "docEnd": 3218
        },
        {
          "name": "RENDER_WORLDGLOW",
          "docStart": 3249,
          "docEnd": 3311
        },
        {
          "name": "RENDER_NONE",
          "docStart": 3342,
          "docEnd": 3363
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
          "docStart": 3782,
          "docEnd": 3821
        },
        {
          "name": "RENDERFX_HOLOGRAM",
          "docStart": 3852,
          "docEnd": 3892
        },
        {
          "name": "RENDERFX_EXPLODE",
          "docStart": 3923,
          "docEnd": 3951
        },
        {
          "name": "RENDERFX_GLOWSHELL",
          "docStart": 3982,
          "docEnd": 4003
        },
        {
          "name": "RENDERFX_CLAMP_MIN_SCALE",
          "docStart": 4034,
          "docEnd": 4098
        },
        {
          "name": "RENDERFX_ENV_RAIN",
          "docStart": 4129,
          "docEnd": 4176
        },
        {
          "name": "RENDERFX_ENV_SNOW",
          "docStart": 4207,
          "docEnd": 4254
        },
        {
          "name": "RENDERFX_SPOTLIGHT",
          "docStart": 4285,
          "docEnd": 4329
        },
        {
          "name": "RENDERFX_RAGDOLL",
          "docStart": 4360,
          "docEnd": 4431
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