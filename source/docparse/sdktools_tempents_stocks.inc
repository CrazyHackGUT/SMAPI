{
  "functions": [
    {
      "name": "TE_SetupSparks",
      "docStart": 3555,
      "docEnd": 3786,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "dir",
          "decl": "const float dir[3]"
        },
        {
          "type": "int",
          "name": "Magnitude",
          "decl": "int Magnitude"
        },
        {
          "type": "int",
          "name": "TrailLength",
          "decl": "int TrailLength"
        }
      ]
    },
    {
      "name": "TE_SetupSmoke",
      "docStart": 4081,
      "docEnd": 4312,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "int",
          "name": "Model",
          "decl": "int Model"
        },
        {
          "type": "float",
          "name": "Scale",
          "decl": "float Scale"
        },
        {
          "type": "int",
          "name": "FrameRate",
          "decl": "int FrameRate"
        }
      ]
    },
    {
      "name": "TE_SetupDust",
      "docStart": 4583,
      "docEnd": 4808,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "dir",
          "decl": "const float dir[3]"
        },
        {
          "type": "float",
          "name": "Size",
          "decl": "float Size"
        },
        {
          "type": "float",
          "name": "Speed",
          "decl": "float Speed"
        }
      ]
    },
    {
      "name": "TE_SetupMuzzleFlash",
      "docStart": 5082,
      "docEnd": 5367,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "angles",
          "decl": "const float angles[3]"
        },
        {
          "type": "float",
          "name": "Scale",
          "decl": "float Scale"
        },
        {
          "type": "int",
          "name": "Type",
          "decl": "int Type"
        }
      ]
    },
    {
      "name": "TE_SetupMetalSparks",
      "docStart": 5650,
      "docEnd": 5808,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "dir",
          "decl": "const float dir[3]"
        }
      ]
    },
    {
      "name": "TE_SetupEnergySplash",
      "docStart": 5988,
      "docEnd": 6203,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "dir",
          "decl": "const float dir[3]"
        },
        {
          "type": "bool",
          "name": "Explosive",
          "decl": "bool Explosive"
        }
      ]
    },
    {
      "name": "TE_SetupArmorRicochet",
      "docStart": 6443,
      "docEnd": 6608,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "dir",
          "decl": "const float dir[3]"
        }
      ]
    },
    {
      "name": "TE_SetupGlowSprite",
      "docStart": 6792,
      "docEnd": 7074,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "int",
          "name": "Model",
          "decl": "int Model"
        },
        {
          "type": "float",
          "name": "Life",
          "decl": "float Life"
        },
        {
          "type": "float",
          "name": "Size",
          "decl": "float Size"
        },
        {
          "type": "int",
          "name": "Brightness",
          "decl": "int Brightness"
        }
      ]
    },
    {
      "name": "TE_SetupExplosion",
      "docStart": 7402,
      "docEnd": 7860,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "int",
          "name": "Model",
          "decl": "int Model"
        },
        {
          "type": "float",
          "name": "Scale",
          "decl": "float Scale"
        },
        {
          "type": "int",
          "name": "Framerate",
          "decl": "int Framerate"
        },
        {
          "type": "int",
          "name": "Flags",
          "decl": "int Flags"
        },
        {
          "type": "int",
          "name": "Radius",
          "decl": "int Radius"
        },
        {
          "type": "int",
          "name": "Magnitude",
          "decl": "int Magnitude"
        },
        {
          "type": "const float[3]",
          "name": "normal",
          "decl": "const float normal[3]"
        },
        {
          "type": "int",
          "name": "MaterialType",
          "decl": "int MaterialType"
        }
      ]
    },
    {
      "name": "TE_SetupBloodSprite",
      "docStart": 8443,
      "docEnd": 8779,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pos",
          "decl": "const float pos[3]"
        },
        {
          "type": "const float[3]",
          "name": "dir",
          "decl": "const float dir[3]"
        },
        {
          "type": "const int[4]",
          "name": "color",
          "decl": "const int color[4]"
        },
        {
          "type": "int",
          "name": "Size",
          "decl": "int Size"
        },
        {
          "type": "int",
          "name": "SprayModel",
          "decl": "int SprayModel"
        },
        {
          "type": "int",
          "name": "BloodDropModel",
          "decl": "int BloodDropModel"
        }
      ]
    },
    {
      "name": "TE_SetupBeamRingPoint",
      "docStart": 9277,
      "docEnd": 9921,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "center",
          "decl": "const float center[3]"
        },
        {
          "type": "float",
          "name": "Start_Radius",
          "decl": "float Start_Radius"
        },
        {
          "type": "float",
          "name": "End_Radius",
          "decl": "float End_Radius"
        },
        {
          "type": "int",
          "name": "ModelIndex",
          "decl": "int ModelIndex"
        },
        {
          "type": "int",
          "name": "HaloIndex",
          "decl": "int HaloIndex"
        },
        {
          "type": "int",
          "name": "StartFrame",
          "decl": "int StartFrame"
        },
        {
          "type": "int",
          "name": "FrameRate",
          "decl": "int FrameRate"
        },
        {
          "type": "float",
          "name": "Life",
          "decl": "float Life"
        },
        {
          "type": "float",
          "name": "Width",
          "decl": "float Width"
        },
        {
          "type": "float",
          "name": "Amplitude",
          "decl": "float Amplitude"
        },
        {
          "type": "const int[4]",
          "name": "Color",
          "decl": "const int Color[4]"
        },
        {
          "type": "int",
          "name": "Speed",
          "decl": "int Speed"
        },
        {
          "type": "int",
          "name": "Flags",
          "decl": "int Flags"
        }
      ]
    },
    {
      "name": "TE_SetupBeamPoints",
      "docStart": 10892,
      "docEnd": 11564,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "start",
          "decl": "const float start[3]"
        },
        {
          "type": "const float[3]",
          "name": "end",
          "decl": "const float end[3]"
        },
        {
          "type": "int",
          "name": "ModelIndex",
          "decl": "int ModelIndex"
        },
        {
          "type": "int",
          "name": "HaloIndex",
          "decl": "int HaloIndex"
        },
        {
          "type": "int",
          "name": "StartFrame",
          "decl": "int StartFrame"
        },
        {
          "type": "int",
          "name": "FrameRate",
          "decl": "int FrameRate"
        },
        {
          "type": "float",
          "name": "Life",
          "decl": "float Life"
        },
        {
          "type": "float",
          "name": "Width",
          "decl": "float Width"
        },
        {
          "type": "float",
          "name": "EndWidth",
          "decl": "float EndWidth"
        },
        {
          "type": "int",
          "name": "FadeLength",
          "decl": "int FadeLength"
        },
        {
          "type": "float",
          "name": "Amplitude",
          "decl": "float Amplitude"
        },
        {
          "type": "const int[4]",
          "name": "Color",
          "decl": "const int Color[4]"
        },
        {
          "type": "int",
          "name": "Speed",
          "decl": "int Speed"
        }
      ]
    },
    {
      "name": "TE_SetupBeamLaser",
      "docStart": 12456,
      "docEnd": 13158,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "StartEntity",
          "decl": "int StartEntity"
        },
        {
          "type": "int",
          "name": "EndEntity",
          "decl": "int EndEntity"
        },
        {
          "type": "int",
          "name": "ModelIndex",
          "decl": "int ModelIndex"
        },
        {
          "type": "int",
          "name": "HaloIndex",
          "decl": "int HaloIndex"
        },
        {
          "type": "int",
          "name": "StartFrame",
          "decl": "int StartFrame"
        },
        {
          "type": "int",
          "name": "FrameRate",
          "decl": "int FrameRate"
        },
        {
          "type": "float",
          "name": "Life",
          "decl": "float Life"
        },
        {
          "type": "float",
          "name": "Width",
          "decl": "float Width"
        },
        {
          "type": "float",
          "name": "EndWidth",
          "decl": "float EndWidth"
        },
        {
          "type": "int",
          "name": "FadeLength",
          "decl": "int FadeLength"
        },
        {
          "type": "float",
          "name": "Amplitude",
          "decl": "float Amplitude"
        },
        {
          "type": "const int[4]",
          "name": "Color",
          "decl": "const int Color[4]"
        },
        {
          "type": "int",
          "name": "Speed",
          "decl": "int Speed"
        }
      ]
    },
    {
      "name": "TE_SetupBeamRing",
      "docStart": 14056,
      "docEnd": 14680,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "StartEntity",
          "decl": "int StartEntity"
        },
        {
          "type": "int",
          "name": "EndEntity",
          "decl": "int EndEntity"
        },
        {
          "type": "int",
          "name": "ModelIndex",
          "decl": "int ModelIndex"
        },
        {
          "type": "int",
          "name": "HaloIndex",
          "decl": "int HaloIndex"
        },
        {
          "type": "int",
          "name": "StartFrame",
          "decl": "int StartFrame"
        },
        {
          "type": "int",
          "name": "FrameRate",
          "decl": "int FrameRate"
        },
        {
          "type": "float",
          "name": "Life",
          "decl": "float Life"
        },
        {
          "type": "float",
          "name": "Width",
          "decl": "float Width"
        },
        {
          "type": "float",
          "name": "Amplitude",
          "decl": "float Amplitude"
        },
        {
          "type": "const int[4]",
          "name": "Color",
          "decl": "const int Color[4]"
        },
        {
          "type": "int",
          "name": "Speed",
          "decl": "int Speed"
        },
        {
          "type": "int",
          "name": "Flags",
          "decl": "int Flags"
        }
      ]
    },
    {
      "name": "TE_SetupBeamFollow",
      "docStart": 15571,
      "docEnd": 16020,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "int",
          "name": "EntIndex",
          "decl": "int EntIndex"
        },
        {
          "type": "int",
          "name": "ModelIndex",
          "decl": "int ModelIndex"
        },
        {
          "type": "int",
          "name": "HaloIndex",
          "decl": "int HaloIndex"
        },
        {
          "type": "float",
          "name": "Life",
          "decl": "float Life"
        },
        {
          "type": "float",
          "name": "Width",
          "decl": "float Width"
        },
        {
          "type": "float",
          "name": "EndWidth",
          "decl": "float EndWidth"
        },
        {
          "type": "int",
          "name": "FadeLength",
          "decl": "int FadeLength"
        },
        {
          "type": "const int[4]",
          "name": "Color",
          "decl": "const int Color[4]"
        }
      ]
    }
  ],
  "methodmaps": [],
  "enums": [],
  "constants": [],
  "typesets": [],
  "typedefs": []
}