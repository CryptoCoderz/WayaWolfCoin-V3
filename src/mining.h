// Copyright (c) 2016-2022 The CryptoCoderz Team / Espers
// Copyright (c) 2018-2022 The CryptoCoderz Team / INSaNe project
// Copyright (c) 2018-2022 The Rubix project
// Copyright (c) 2022 The WayaWolfCoin project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_MINING_H
#define BITCOIN_MINING_H

#include "bignum.h"
/** Minimum nCoinAge required to stake PoS */
static const unsigned int nStakeMinAge = 2 * 60; // 2 Hours
/** Time to elapse before new modifier is computed */
static const unsigned int nModifierInterval = 2 * 60;
/** Genesis block subsidy */
static const int64_t nGenesisBlockReward = 1 * COIN;
/** Reserve block subsidy */
static const int64_t nBlockRewardReserve = 100600 * COIN; // premine 10,060,000 WW
/** Standard block subsidy */
static const int64_t nBlockStandardReward = (6.25 * COIN); // 6.25 WW
/** Block spacing preferred */
static const int64_t BLOCK_SPACING = (2.5 * 60); // Two and a Half minutes (150 seconds)
/** Block spacing minimum */
static const int64_t BLOCK_SPACING_MIN = (1.5 * 60); // One-and-a-Half minutes (1 Min, 30 Sec)
/** Block spacing maximum */
static const int64_t BLOCK_SPACING_MAX = (3.5 * 60); // Three-and-a-Half minutes (3 Min, 30 Sec)
/** Desired block times/spacing */
static const int64_t GetTargetSpacing = BLOCK_SPACING;
/** PubkeyAliasService required fee */
inline int64_t PubkeyaliasserviceFEE(int nHeight) { return 75; } // ON (75 WW)
/** Coinbase transaction outputs can only be staked after this number of new blocks (network rule) */
static int64_t nStakeMinConfirmations = 20;// changes at block 300 to 1000 (3 days)
/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int nTransactionMaturity = 5; // 5-TXs
/** Coinbase generated outputs can only be spent after this number of new blocks (network rule) */
static const int nCoinbaseMaturity = 30; // 30-Mined


#endif // BITCOIN_MINING_H
