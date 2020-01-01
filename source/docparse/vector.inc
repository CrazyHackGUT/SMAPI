{
  "functions": [
    {
      "name": "GetVectorLength",
      "docStart": 1637,
      "docEnd": 1849,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "bool",
          "name": "squared",
          "decl": "bool squared"
        }
      ]
    },
    {
      "name": "GetVectorDistance",
      "docStart": 1924,
      "docEnd": 2187,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "vec1",
          "decl": "const float vec1[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec2",
          "decl": "const float vec2[3]"
        },
        {
          "type": "bool",
          "name": "squared",
          "decl": "bool squared"
        }
      ]
    },
    {
      "name": "GetVectorDotProduct",
      "docStart": 2286,
      "docEnd": 2481,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "vec1",
          "decl": "const float vec1[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec2",
          "decl": "const float vec2[3]"
        }
      ]
    },
    {
      "name": "GetVectorCrossProduct",
      "docStart": 2562,
      "docEnd": 2801,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "vec1",
          "decl": "const float vec1[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec2",
          "decl": "const float vec2[3]"
        },
        {
          "type": "float[3]",
          "name": "result",
          "decl": "float result[3]"
        }
      ]
    },
    {
      "name": "NormalizeVector",
      "docStart": 2900,
      "docEnd": 3107,
      "kind": "native",
      "returnType": "float",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "float[3]",
          "name": "result",
          "decl": "float result[3]"
        }
      ]
    },
    {
      "name": "GetAngleVectors",
      "docStart": 3179,
      "docEnd": 3455,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "angle",
          "decl": "const float angle[3]"
        },
        {
          "type": "float[3]",
          "name": "fwd",
          "decl": "float fwd[3]"
        },
        {
          "type": "float[3]",
          "name": "right",
          "decl": "float right[3]"
        },
        {
          "type": "float[3]",
          "name": "up",
          "decl": "float up[3]"
        }
      ]
    },
    {
      "name": "GetVectorAngles",
      "docStart": 3554,
      "docEnd": 3672,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "float[3]",
          "name": "angle",
          "decl": "float angle[3]"
        }
      ]
    },
    {
      "name": "GetVectorVectors",
      "docStart": 3742,
      "docEnd": 3951,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "vec",
          "decl": "const float vec[3]"
        },
        {
          "type": "float[3]",
          "name": "right",
          "decl": "float right[3]"
        },
        {
          "type": "float[3]",
          "name": "up",
          "decl": "float up[3]"
        }
      ]
    },
    {
      "name": "AddVectors",
      "docStart": 4035,
      "docEnd": 4252,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "vec1",
          "decl": "const float vec1[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec2",
          "decl": "const float vec2[3]"
        },
        {
          "type": "float[3]",
          "name": "result",
          "decl": "float result[3]"
        }
      ]
    },
    {
      "name": "SubtractVectors",
      "docStart": 4443,
      "docEnd": 4705,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "vec1",
          "decl": "const float vec1[3]"
        },
        {
          "type": "const float[3]",
          "name": "vec2",
          "decl": "const float vec2[3]"
        },
        {
          "type": "float[3]",
          "name": "result",
          "decl": "float result[3]"
        }
      ]
    },
    {
      "name": "ScaleVector",
      "docStart": 4901,
      "docEnd": 5005,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "float[3]",
          "name": "vec",
          "decl": "float vec[3]"
        },
        {
          "type": "float",
          "name": "scale",
          "decl": "float scale"
        }
      ]
    },
    {
      "name": "NegateVector",
      "docStart": 5123,
      "docEnd": 5192,
      "kind": "stock",
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
      "name": "MakeVectorFromPoints",
      "docStart": 5301,
      "docEnd": 5535,
      "kind": "stock",
      "returnType": "void",
      "arguments": [
        {
          "type": "const float[3]",
          "name": "pt1",
          "decl": "const float pt1[3]"
        },
        {
          "type": "const float[3]",
          "name": "pt2",
          "decl": "const float pt2[3]"
        },
        {
          "type": "float[3]",
          "name": "output",
          "decl": "float output[3]"
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