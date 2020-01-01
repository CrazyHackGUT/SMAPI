{
  "functions": [
    {
      "name": "CreateStack",
      "docStart": 4859,
      "docEnd": 5606,
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
      "docStart": 5659,
      "docEnd": 5960,
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
      "docStart": 6017,
      "docEnd": 6259,
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
      "docStart": 6327,
      "docEnd": 6917,
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
      "docStart": 6997,
      "docEnd": 7445,
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
      "docStart": 7534,
      "docEnd": 7837,
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
      "docStart": 7930,
      "docEnd": 8339,
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
      "docStart": 8412,
      "docEnd": 8596,
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
      "docStart": 8641,
      "docEnd": 8859,
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
      "docStart": 8954,
      "docEnd": 9152,
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
          "docEnd": 3813,
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
          "docStart": 3875,
          "docEnd": 4188,
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
          "docStart": 4273,
          "docEnd": 4567,
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
          "docStart": 4630,
          "docEnd": 4685,
          "type": "bool",
          "getter": true,
          "setter": false
        },
        {
          "name": "BlockSize",
          "docStart": 4743,
          "docEnd": 4796,
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