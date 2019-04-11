{
  "functions": [
    {
      "name": "BfWriteBool",
      "docStart": 7262,
      "docEnd": 7480,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "bool",
          "name": "bit",
          "decl": "bool bit"
        }
      ]
    },
    {
      "name": "BfWriteByte",
      "docStart": 7532,
      "docEnd": 7751,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "int",
          "name": "byte",
          "decl": "int byte"
        }
      ]
    },
    {
      "name": "BfWriteChar",
      "docStart": 7802,
      "docEnd": 7993,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "int",
          "name": "chr",
          "decl": "int chr"
        }
      ]
    },
    {
      "name": "BfWriteShort",
      "docStart": 8043,
      "docEnd": 8274,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "int",
          "name": "num",
          "decl": "int num"
        }
      ]
    },
    {
      "name": "BfWriteWord",
      "docStart": 8325,
      "docEnd": 8565,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "int",
          "name": "num",
          "decl": "int num"
        }
      ]
    },
    {
      "name": "BfWriteNum",
      "docStart": 8615,
      "docEnd": 8847,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "int",
          "name": "num",
          "decl": "int num"
        }
      ]
    },
    {
      "name": "BfWriteFloat",
      "docStart": 8896,
      "docEnd": 9101,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "float",
          "name": "num",
          "decl": "float num"
        }
      ]
    },
    {
      "name": "BfWriteString",
      "docStart": 9154,
      "docEnd": 9351,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "const char[]",
          "name": "string",
          "decl": "const char[] string"
        }
      ]
    },
    {
      "name": "BfWriteEntity",
      "docStart": 9415,
      "docEnd": 9682,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "int",
          "name": "ent",
          "decl": "int ent"
        }
      ]
    },
    {
      "name": "BfWriteAngle",
      "docStart": 9734,
      "docEnd": 9980,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "float",
          "name": "angle",
          "decl": "float angle"
        },
        {
          "type": "int",
          "name": "numBits",
          "decl": "int numBits"
        }
      ]
    },
    {
      "name": "BfWriteCoord",
      "docStart": 10050,
      "docEnd": 10250,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "float",
          "name": "coord",
          "decl": "float coord"
        }
      ]
    },
    {
      "name": "BfWriteVecCoord",
      "docStart": 10305,
      "docEnd": 10525,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "float[3]",
          "name": "coord",
          "decl": "float coord[3]"
        }
      ]
    },
    {
      "name": "BfWriteVecNormal",
      "docStart": 10586,
      "docEnd": 10786,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "float[3]",
          "name": "vec",
          "decl": "float vec[3]"
        }
      ]
    },
    {
      "name": "BfWriteAngles",
      "docStart": 10846,
      "docEnd": 11053,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "float[3]",
          "name": "angles",
          "decl": "float angles[3]"
        }
      ]
    },
    {
      "name": "BfReadBool",
      "docStart": 11113,
      "docEnd": 11305,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        }
      ]
    },
    {
      "name": "BfReadByte",
      "docStart": 11345,
      "docEnd": 11546,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        }
      ]
    },
    {
      "name": "BfReadChar",
      "docStart": 11585,
      "docEnd": 11781,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        }
      ]
    },
    {
      "name": "BfReadShort",
      "docStart": 11820,
      "docEnd": 12034,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        }
      ]
    },
    {
      "name": "BfReadWord",
      "docStart": 12074,
      "docEnd": 12297,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        }
      ]
    },
    {
      "name": "BfReadNum",
      "docStart": 12336,
      "docEnd": 12549,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        }
      ]
    },
    {
      "name": "BfReadFloat",
      "docStart": 12587,
      "docEnd": 12800,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        }
      ]
    },
    {
      "name": "BfReadString",
      "docStart": 12842,
      "docEnd": 13565,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "char[]",
          "name": "buffer",
          "decl": "char[] buffer"
        },
        {
          "type": "int",
          "name": "maxlength",
          "decl": "int maxlength"
        },
        {
          "type": "bool",
          "name": "line",
          "decl": "bool line"
        }
      ]
    },
    {
      "name": "BfReadEntity",
      "docStart": 13653,
      "docEnd": 13894,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        }
      ]
    },
    {
      "name": "BfReadAngle",
      "docStart": 13935,
      "docEnd": 14173,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "int",
          "name": "numBits",
          "decl": "int numBits"
        }
      ]
    },
    {
      "name": "BfReadCoord",
      "docStart": 14230,
      "docEnd": 14422,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        }
      ]
    },
    {
      "name": "BfReadVecCoord",
      "docStart": 14464,
      "docEnd": 14687,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "float[3]",
          "name": "coord",
          "decl": "float coord[3]"
        }
      ]
    },
    {
      "name": "BfReadVecNormal",
      "docStart": 14747,
      "docEnd": 14956,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "float[3]",
          "name": "vec",
          "decl": "float vec[3]"
        }
      ]
    },
    {
      "name": "BfReadAngles",
      "docStart": 15015,
      "docEnd": 15225,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        },
        {
          "type": "float[3]",
          "name": "angles",
          "decl": "float angles[3]"
        }
      ]
    },
    {
      "name": "BfGetNumBytesLeft",
      "docStart": 15284,
      "docEnd": 15500,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "bf",
          "decl": "Handle bf"
        }
      ]
    }
  ],
  "methodmaps": [
    {
      "name": "BfWrite",
      "methods": [
        {
          "name": "WriteBool",
          "docStart": 1692,
          "docEnd": 1817,
          "returnType": "void",
          "arguments": [
            {
              "type": "bool",
              "name": "bit",
              "decl": "bool bit"
            }
          ]
        },
        {
          "name": "WriteByte",
          "docStart": 1866,
          "docEnd": 1992,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "byte",
              "decl": "int byte"
            }
          ]
        },
        {
          "name": "WriteChar",
          "docStart": 2039,
          "docEnd": 2138,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "chr",
              "decl": "int chr"
            }
          ]
        },
        {
          "name": "WriteShort",
          "docStart": 2184,
          "docEnd": 2323,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "num",
              "decl": "int num"
            }
          ]
        },
        {
          "name": "WriteWord",
          "docStart": 2370,
          "docEnd": 2518,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "num",
              "decl": "int num"
            }
          ]
        },
        {
          "name": "WriteNum",
          "docStart": 2564,
          "docEnd": 2704,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "num",
              "decl": "int num"
            }
          ]
        },
        {
          "name": "WriteFloat",
          "docStart": 2749,
          "docEnd": 2862,
          "returnType": "void",
          "arguments": [
            {
              "type": "float",
              "name": "num",
              "decl": "float num"
            }
          ]
        },
        {
          "name": "WriteString",
          "docStart": 2911,
          "docEnd": 3014,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "string",
              "decl": "const char[] string"
            }
          ]
        },
        {
          "name": "WriteEntity",
          "docStart": 3074,
          "docEnd": 3179,
          "returnType": "void",
          "arguments": [
            {
              "type": "int",
              "name": "ent",
              "decl": "int ent"
            }
          ]
        },
        {
          "name": "WriteAngle",
          "docStart": 3227,
          "docEnd": 3381,
          "returnType": "void",
          "arguments": [
            {
              "type": "float",
              "name": "angle",
              "decl": "float angle"
            },
            {
              "type": "int",
              "name": "numBits",
              "decl": "int numBits"
            }
          ]
        },
        {
          "name": "WriteCoord",
          "docStart": 3447,
          "docEnd": 3553,
          "returnType": "void",
          "arguments": [
            {
              "type": "float",
              "name": "coord",
              "decl": "float coord"
            }
          ]
        },
        {
          "name": "WriteVecCoord",
          "docStart": 3604,
          "docEnd": 3730,
          "returnType": "void",
          "arguments": [
            {
              "type": "float[3]",
              "name": "coord",
              "decl": "float coord[3]"
            }
          ]
        },
        {
          "name": "WriteVecNormal",
          "docStart": 3787,
          "docEnd": 3895,
          "returnType": "void",
          "arguments": [
            {
              "type": "float[3]",
              "name": "vec",
              "decl": "float vec[3]"
            }
          ]
        },
        {
          "name": "WriteAngles",
          "docStart": 3951,
          "docEnd": 4064,
          "returnType": "void",
          "arguments": [
            {
              "type": "float[3]",
              "name": "angles",
              "decl": "float angles[3]"
            }
          ]
        }
      ],
      "properties": []
    },
    {
      "name": "BfRead",
      "methods": [
        {
          "name": "ReadBool",
          "docStart": 4154,
          "docEnd": 4255,
          "returnType": "bool",
          "arguments": []
        },
        {
          "name": "ReadByte",
          "docStart": 4293,
          "docEnd": 4404,
          "returnType": "int",
          "arguments": []
        },
        {
          "name": "ReadChar",
          "docStart": 4441,
          "docEnd": 4547,
          "returnType": "int",
          "arguments": []
        },
        {
          "name": "ReadShort",
          "docStart": 4584,
          "docEnd": 4759,
          "returnType": "int",
          "arguments": []
        },
        {
          "name": "ReadWord",
          "docStart": 4797,
          "docEnd": 4981,
          "returnType": "int",
          "arguments": []
        },
        {
          "name": "ReadNum",
          "docStart": 5018,
          "docEnd": 5141,
          "returnType": "int",
          "arguments": []
        },
        {
          "name": "ReadFloat",
          "docStart": 5177,
          "docEnd": 5300,
          "returnType": "float",
          "arguments": []
        },
        {
          "name": "ReadString",
          "docStart": 5340,
          "docEnd": 6032,
          "returnType": "int",
          "arguments": [
            {
              "type": "char[]",
              "name": "buffer",
              "decl": "char[] buffer"
            },
            {
              "type": "int",
              "name": "maxlength",
              "decl": "int maxlength"
            },
            {
              "type": "bool",
              "name": "line",
              "decl": "bool line"
            }
          ]
        },
        {
          "name": "ReadEntity",
          "docStart": 6116,
          "docEnd": 6217,
          "returnType": "int",
          "arguments": []
        },
        {
          "name": "ReadAngle",
          "docStart": 6256,
          "docEnd": 6406,
          "returnType": "float",
          "arguments": [
            {
              "type": "int",
              "name": "numBits",
              "decl": "int numBits"
            }
          ]
        },
        {
          "name": "ReadCoord",
          "docStart": 6459,
          "docEnd": 6561,
          "returnType": "float",
          "arguments": []
        },
        {
          "name": "ReadVecCoord",
          "docStart": 6601,
          "docEnd": 6730,
          "returnType": "void",
          "arguments": [
            {
              "type": "float[3]",
              "name": "coord",
              "decl": "float coord[3]"
            }
          ]
        },
        {
          "name": "ReadVecNormal",
          "docStart": 6786,
          "docEnd": 6903,
          "returnType": "void",
          "arguments": [
            {
              "type": "float[3]",
              "name": "vec",
              "decl": "float vec[3]"
            }
          ]
        },
        {
          "name": "ReadAngles",
          "docStart": 6958,
          "docEnd": 7074,
          "returnType": "void",
          "arguments": [
            {
              "type": "float[3]",
              "name": "angles",
              "decl": "float angles[3]"
            }
          ]
        }
      ],
      "properties": [
        {
          "name": "BytesLeft",
          "docStart": 7129,
          "docEnd": 7199,
          "type": "int",
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