/******************************************************************************
 * Copyright © 2014-2018 The SuperNET Developers.                             *
 *                                                                            *
 * See the AUTHORS, DEVELOPER-AGREEMENT and LICENSE files at                  *
 * the top-level directory of this distribution for the individual copyright  *
 * holder information and the developer policies on copyright and licensing.  *
 *                                                                            *
 * Unless otherwise agreed in a custom licensing agreement, no part of the    *
 * SuperNET software, including this file may be copied, modified, propagated *
 * or distributed except according to the terms contained in the LICENSE file *
 *                                                                            *
 * Removal or modification of this copyright notice is prohibited.            *
 *                                                                            *
 ******************************************************************************/


#ifndef CC_CHANNELS_H
#define CC_CHANNELS_H

#include "CCinclude.h"
#define CHANNELS_MAXPAYMENTS 1000

bool ChannelsValidate(struct CCcontract_info *cp,Eval* eval,const CTransaction &tx);
std::string ChannelOpen(uint64_t txfee,CPubKey destpub,int32_t numpayments,int32_t payment);

// CCcustom
UniValue ChannelsInfo();

#endif
