{
  "functions": [
    {
      "name": "GetVectorLength",
      "docStart": 1638,
      "docEnd": 1827,
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
      "docStart": 1902,
      "docEnd": 2132,
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
      "docStart": 2231,
      "docEnd": 2399,
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
      "docStart": 2480,
      "docEnd": 2697,
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
      "docStart": 2796,
      "docEnd": 2976,
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
      "docStart": 3048,
      "docEnd": 3291,
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
      "docStart": 3390,
      "docEnd": 3492,
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
      "docStart": 3562,
      "docEnd": 3745,
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
      "docStart": 3829,
      "docEnd": 4025,
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
      "docStart": 4216,
      "docEnd": 4457,
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
      "docStart": 4653,
      "docEnd": 4741,
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
      "docStart": 4859,
      "docEnd": 4919,
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
      "docStart": 5028,
      "docEnd": 5237,
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