const char* const currency_abi = R"=====(
{
  "types": [{
      "new_type_name": "account_name",
      "type": "name"
    }
  ],
  "structs": [{
      "name": "transfer",
      "base": "",
      "fields": [
        {"name":"from", "type":"account_name"},
        {"name":"to", "type":"account_name"},
        {"name":"quantity", "type":"asset"},
        {"name":"memo", "type":"string"}
      ]
    },{
     "name": "create",
     "base": "",
     "fields": [
        {"name":"issuer", "type":"account_name"},
        {"name":"maximum_supply", "type":"asset"},
        {"name":"can_freeze", "type":"uint8"},
        {"name":"can_recall", "type":"uint8"},
        {"name":"can_whitelist", "type":"uint8"}
     ]
  },{
     "name": "issue",
     "base": "",
     "fields": [
        {"name":"to", "type":"account_name"},
        {"name":"quantity", "type":"asset"},
        {"name":"memo", "type":"string"}
     ]
  },{
      "name": "account",
      "base": "",
      "fields": [
         {"name":"balance",   "type":"asset"},
         {"name":"frozen",    "type":"uint8"},
         {"name":"whitelist", "type":"uint8"}
      ]
    },{
      "name": "currency_stats",
      "base": "",
      "fields": [
         {"name":"supply",            "type":"asset"},
         {"name":"max_supply",        "type":"asset"},
         {"name":"issuer",            "type":"account_name"},
         {"name":"can_freeze",        "type":"uint8"},
         {"name":"can_recall",        "type":"uint8"},
         {"name":"can_whitelist",     "type":"uint8"},
         {"name":"is_frozen",         "type":"uint8"},
         {"name":"enforce_whitelist", "type":"uint8"}
      ]
    }
  ],
  "actions": [{
      "name": "transfer",
      "type": "transfer",
      "ricardian_contract": ""
    },{
      "name": "issue",
      "type": "issue",
      "ricardian_contract": ""
    }, {
      "name": "create",
      "type": "create",
      "ricardian_contract": ""
    }

  ],
  "tables": [{
      "name": "accounts",
      "type": "account",
      "index_type": "i64",
      "key_names" : ["currency"],
      "key_types" : ["uint64"]
    },{
      "name": "stat",
      "type": "currency_stats",
      "index_type": "i64",
      "key_names" : ["currency"],
      "key_types" : ["uint64"]
    }
  ],
  "clauses": []
}
)=====";
