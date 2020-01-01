{
  "functions": [
    {
      "name": "BfWriteBool",
      "docStart": 7262,
      "docEnd": 7508,
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
      "docStart": 7560,
      "docEnd": 7806,
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
      "docStart": 7857,
      "docEnd": 8076,
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
      "docStart": 8126,
      "docEnd": 8385,
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
      "docStart": 8436,
      "docEnd": 8704,
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
      "docStart": 8754,
      "docEnd": 9014,
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
      "docStart": 9063,
      "docEnd": 9296,
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
      "docStart": 9349,
      "docEnd": 9572,
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
      "docStart": 9636,
      "docEnd": 9931,
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
      "docStart": 9983,
      "docEnd": 10260,
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
      "docStart": 10330,
      "docEnd": 10556,
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
      "docStart": 10611,
      "docEnd": 10857,
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
      "docStart": 10918,
      "docEnd": 11146,
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
      "docStart": 11206,
      "docEnd": 11439,
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
      "docStart": 11499,
      "docEnd": 11721,
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
      "docStart": 11761,
      "docEnd": 11992,
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
      "docStart": 12031,
      "docEnd": 12257,
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
      "docStart": 12296,
      "docEnd": 12540,
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
      "docStart": 12580,
      "docEnd": 12833,
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
      "docStart": 12872,
      "docEnd": 13115,
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
      "docStart": 13153,
      "docEnd": 13396,
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
      "docStart": 13438,
      "docEnd": 14271,
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
      "docStart": 14359,
      "docEnd": 14630,
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
      "docStart": 14671,
      "docEnd": 14944,
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
      "docStart": 15001,
      "docEnd": 15223,
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
      "docStart": 15265,
      "docEnd": 15514,
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
      "docStart": 15574,
      "docEnd": 15811,
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
      "docStart": 15870,
      "docEnd": 16106,
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
      "docStart": 16165,
      "docEnd": 16411,
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