#include <validation.h>
#include <rpc/server.h>
#include <base58.h>
#include <primitives/transaction.h>
#include <core_io.h>

CTransactionRef GetBlockRewardTransaction(const CBlock& block);
CTxOut GetStakeTXOut(const CTxIn& txin);
std::string GetBlockRewardWinner(const CBlock& block);
CAmount GetBlockInputCoins(const CBlock& block);
CAmount GetCoinbaseReward(const CBlock& block);
float GetBlockInput(const CBlock& block);