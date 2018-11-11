{
  "functions": [
    {
      "name": "CreateStack",
      "docStart": 4876,
      "docEnd": 5578,
      "kind": "native",
      "returnType": "ArrayStack",
      "arguments": [
        {
          "type": "int",
          "name": "blocksize",
          "decl": "int blocksize"
        }
      ]
    },
    {
      "name": "PushStackCell",
      "docStart": 5631,
      "docEnd": 5909,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "stack",
          "decl": "Handle stack"
        },
        {
          "type": "any",
          "name": "value",
          "decl": "any value"
        }
      ]
    },
    {
      "name": "PushStackString",
      "docStart": 5966,
      "docEnd": 6185,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "stack",
          "decl": "Handle stack"
        },
        {
          "type": "const char[]",
          "name": "value",
          "decl": "const char[] value"
        }
      ]
    },
    {
      "name": "PushStackArray",
      "docStart": 6253,
      "docEnd": 6781,
      "kind": "native",
      "returnType": "void",
      "arguments": [
        {
          "type": "Handle",
          "name": "stack",
          "decl": "Handle stack"
        },
        {
          "type": "const any[]",
          "name": "values",
          "decl": "const any[] values"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        }
      ]
    },
    {
      "name": "PopStackCell",
      "docStart": 6861,
      "docEnd": 7248,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "stack",
          "decl": "Handle stack"
        },
        {
          "type": "any&",
          "name": "value",
          "decl": "any& value"
        },
        {
          "type": "int",
          "name": "block",
          "decl": "int block"
        },
        {
          "type": "bool",
          "name": "asChar",
          "decl": "bool asChar"
        }
      ]
    },
    {
      "name": "PopStackString",
      "docStart": 7337,
      "docEnd": 7604,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "stack",
          "decl": "Handle stack"
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
          "type": "int&",
          "name": "written",
          "decl": "int& written"
        }
      ]
    },
    {
      "name": "PopStackArray",
      "docStart": 7697,
      "docEnd": 8050,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "stack",
          "decl": "Handle stack"
        },
        {
          "type": "any[]",
          "name": "buffer",
          "decl": "any[] buffer"
        },
        {
          "type": "int",
          "name": "size",
          "decl": "int size"
        }
      ]
    },
    {
      "name": "IsStackEmpty",
      "docStart": 8123,
      "docEnd": 8280,
      "kind": "native",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "stack",
          "decl": "Handle stack"
        }
      ]
    },
    {
      "name": "PopStack",
      "docStart": 8325,
      "docEnd": 8516,
      "kind": "stock",
      "returnType": "bool",
      "arguments": [
        {
          "type": "Handle",
          "name": "stack",
          "decl": "Handle stack"
        }
      ]
    },
    {
      "name": "GetStackBlockSize",
      "docStart": 8611,
      "docEnd": 8783,
      "kind": "native",
      "returnType": "int",
      "arguments": [
        {
          "type": "Handle",
          "name": "stack",
          "decl": "Handle stack"
        }
      ]
    }
  ],
  "methodmaps": [
    {
      "name": "ArrayStack",
      "methods": [
        {
          "name": "ArrayStack",
          "docStart": 1696,
          "docEnd": 2401,
          "returnType": "ArrayStack",
          "arguments": [
            {
              "type": "int",
              "name": "blocksize",
              "decl": "int blocksize"
            }
          ]
        },
        {
          "name": "Push",
          "docStart": 2451,
          "docEnd": 2649,
          "returnType": "void",
          "arguments": [
            {
              "type": "any",
              "name": "value",
              "decl": "any value"
            }
          ]
        },
        {
          "name": "PushString",
          "docStart": 2692,
          "docEnd": 2828,
          "returnType": "void",
          "arguments": [
            {
              "type": "const char[]",
              "name": "value",
              "decl": "const char[] value"
            }
          ]
        },
        {
          "name": "PushArray",
          "docStart": 2886,
          "docEnd": 3410,
          "returnType": "void",
          "arguments": [
            {
              "type": "const any[]",
              "name": "values",
              "decl": "const any[] values"
            },
            {
              "type": "int",
              "name": "size",
              "decl": "int size"
            }
          ]
        },
        {
          "name": "Pop",
          "docStart": 3480,
          "docEnd": 3830,
          "returnType": "any",
          "arguments": [
            {
              "type": "int",
              "name": "block",
              "decl": "int block"
            },
            {
              "type": "bool",
              "name": "asChar",
              "decl": "bool asChar"
            }
          ]
        },
        {
          "name": "PopString",
          "docStart": 3892,
          "docEnd": 4205,
          "returnType": "void",
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
              "type": "int&",
              "name": "written",
              "decl": "int& written"
            }
          ]
        },
        {
          "name": "PopArray",
          "docStart": 4290,
          "docEnd": 4584,
          "returnType": "void",
          "arguments": [
            {
              "type": "any[]",
              "name": "buffer",
              "decl": "any[] buffer"
            },
            {
              "type": "int",
              "name": "size",
              "decl": "int size"
            }
          ]
        }
      ],
      "properties": [
        {
          "name": "Empty",
          "docStart": 4647,
          "docEnd": 4702,
          "type": "bool",
          "getter": true,
          "setter": false
        },
        {
          "name": "BlockSize",
          "docStart": 4760,
          "docEnd": 4813,
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