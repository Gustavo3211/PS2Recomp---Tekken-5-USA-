#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E9510
// Address: 0x2e9510 - 0x2e9748
void sub_002E9510_0x2e9510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9510_0x2e9510");
#endif

    switch (ctx->pc) {
        case 0x2e9568u: goto label_2e9568;
        case 0x2e957cu: goto label_2e957c;
        case 0x2e9590u: goto label_2e9590;
        case 0x2e95a4u: goto label_2e95a4;
        case 0x2e95b8u: goto label_2e95b8;
        case 0x2e95ccu: goto label_2e95cc;
        case 0x2e95d0u: goto label_2e95d0;
        case 0x2e95ecu: goto label_2e95ec;
        case 0x2e95fcu: goto label_2e95fc;
        case 0x2e9618u: goto label_2e9618;
        case 0x2e9624u: goto label_2e9624;
        case 0x2e963cu: goto label_2e963c;
        case 0x2e9648u: goto label_2e9648;
        case 0x2e9660u: goto label_2e9660;
        case 0x2e9670u: goto label_2e9670;
        case 0x2e9690u: goto label_2e9690;
        case 0x2e96a4u: goto label_2e96a4;
        case 0x2e96b4u: goto label_2e96b4;
        case 0x2e96ccu: goto label_2e96cc;
        case 0x2e96dcu: goto label_2e96dc;
        case 0x2e96fcu: goto label_2e96fc;
        case 0x2e9710u: goto label_2e9710;
        default: break;
    }

    ctx->pc = 0x2e9510u;

    // 0x2e9510: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e9510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e9514: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2e9514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2e9518: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e9518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e951c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e951cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2e9520: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2e9520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2e9524: 0x24a502b0  addiu       $a1, $a1, 0x2B0
    ctx->pc = 0x2e9524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 688));
    // 0x2e9528: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e9528u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e952c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e952cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9530: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2e9530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2e9534: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2e9534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2e9538: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2e9538u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e953c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2e953cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2e9540: 0x26760008  addiu       $s6, $s3, 0x8
    ctx->pc = 0x2e9540u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2e9544: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2e9544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2e9548: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x2e9548u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
    // 0x2e954c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2e954cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2e9550: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x2e9550u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    // 0x2e9554: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2e9554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2e9558: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2e9558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2e955c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2e955cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2e9560: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E9560u;
    SET_GPR_U32(ctx, 31, 0x2E9568u);
    ctx->pc = 0x2E9564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9560u;
    // 0x2e9564: 0x2c0a82d  daddu       $s5, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E9560u, 0x2E9568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9568u;
label_2e9568:
    // 0x2e9568: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x2e9568u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
    // 0x2e956c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e956cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2e9570: 0x24a502f0  addiu       $a1, $a1, 0x2F0
    ctx->pc = 0x2e9570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    // 0x2e9574: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E9574u;
    SET_GPR_U32(ctx, 31, 0x2E957Cu);
    ctx->pc = 0x2E9578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9574u;
    // 0x2e9578: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E9574u, 0x2E957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E957Cu;
label_2e957c:
    // 0x2e957c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e957cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2e9580: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x2e9580u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x2e9584: 0x24a50330  addiu       $a1, $a1, 0x330
    ctx->pc = 0x2e9584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 816));
    // 0x2e9588: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E9588u;
    SET_GPR_U32(ctx, 31, 0x2E9590u);
    ctx->pc = 0x2E958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9588u;
    // 0x2e958c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E9588u, 0x2E9590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9590u;
label_2e9590:
    // 0x2e9590: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e9590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2e9594: 0xae620058  sw          $v0, 0x58($s3)
    ctx->pc = 0x2e9594u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
    // 0x2e9598: 0x24a502d0  addiu       $a1, $a1, 0x2D0
    ctx->pc = 0x2e9598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 720));
    // 0x2e959c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E959Cu;
    SET_GPR_U32(ctx, 31, 0x2E95A4u);
    ctx->pc = 0x2E95A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E959Cu;
    // 0x2e95a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E959Cu, 0x2E95A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95A4u;
label_2e95a4:
    // 0x2e95a4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e95a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2e95a8: 0xae62005c  sw          $v0, 0x5C($s3)
    ctx->pc = 0x2e95a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 2));
    // 0x2e95ac: 0x24a50310  addiu       $a1, $a1, 0x310
    ctx->pc = 0x2e95acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 784));
    // 0x2e95b0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E95B0u;
    SET_GPR_U32(ctx, 31, 0x2E95B8u);
    ctx->pc = 0x2E95B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E95B0u;
    // 0x2e95b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E95B0u, 0x2E95B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95B8u;
label_2e95b8:
    // 0x2e95b8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e95b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2e95bc: 0xae620060  sw          $v0, 0x60($s3)
    ctx->pc = 0x2e95bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
    // 0x2e95c0: 0x24a50350  addiu       $a1, $a1, 0x350
    ctx->pc = 0x2e95c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
    // 0x2e95c4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E95C4u;
    SET_GPR_U32(ctx, 31, 0x2E95CCu);
    ctx->pc = 0x2E95C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E95C4u;
    // 0x2e95c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E95C4u, 0x2E95CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95CCu;
label_2e95cc:
    // 0x2e95cc: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2e95ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_2e95d0:
    // 0x2e95d0: 0x26910001  addiu       $s1, $s4, 0x1
    ctx->pc = 0x2e95d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2e95d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e95d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e95d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e95dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e95dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e95e0: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2e95e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x2e95e4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2E95E4u;
    SET_GPR_U32(ctx, 31, 0x2E95ECu);
    ctx->pc = 0x2E95E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E95E4u;
    // 0x2e95e8: 0x148080  sll         $s0, $s4, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E95E4u, 0x2E95ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95ECu;
label_2e95ec:
    // 0x2e95ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e95ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e95f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e95f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e95f4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E95F4u;
    SET_GPR_U32(ctx, 31, 0x2E95FCu);
    ctx->pc = 0x2E95F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E95F4u;
    // 0x2e95f8: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E95F4u, 0x2E95FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95FCu;
label_2e95fc:
    // 0x2e95fc: 0x2151821  addu        $v1, $s0, $s5
    ctx->pc = 0x2e95fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2e9600: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x2e9600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x2e9604: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e9604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e9608: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e9608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e960c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e960cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9610: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2E9610u;
    SET_GPR_U32(ctx, 31, 0x2E9618u);
    ctx->pc = 0x2E9614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9610u;
    // 0x2e9614: 0x24450438  addiu       $a1, $v0, 0x438 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E9610u, 0x2E9618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9618u;
label_2e9618:
    // 0x2e9618: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e9618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e961c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E961Cu;
    SET_GPR_U32(ctx, 31, 0x2E9624u);
    ctx->pc = 0x2E9620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E961Cu;
    // 0x2e9620: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E961Cu, 0x2E9624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9624u;
label_2e9624:
    // 0x2e9624: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x2e9624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2e9628: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x2e9628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x2e962c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e962cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9630: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e9630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9634: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2E9634u;
    SET_GPR_U32(ctx, 31, 0x2E963Cu);
    ctx->pc = 0x2E9638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9634u;
    // 0x2e9638: 0x27c50410  addiu       $a1, $fp, 0x410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E9634u, 0x2E963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E963Cu;
label_2e963c:
    // 0x2e963c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e963cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9640: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E9640u;
    SET_GPR_U32(ctx, 31, 0x2E9648u);
    ctx->pc = 0x2E9644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9640u;
    // 0x2e9644: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E9640u, 0x2E9648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9648u;
label_2e9648:
    // 0x2e9648: 0x2151821  addu        $v1, $s0, $s5
    ctx->pc = 0x2e9648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2e964c: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x2e964cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    // 0x2e9650: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e9650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9654: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e9654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9658: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2E9658u;
    SET_GPR_U32(ctx, 31, 0x2E9660u);
    ctx->pc = 0x2E965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9658u;
    // 0x2e965c: 0x26e503e8  addiu       $a1, $s7, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E9658u, 0x2E9660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9660u;
label_2e9660:
    // 0x2e9660: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e9660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9664: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e9664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9668: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E9668u;
    SET_GPR_U32(ctx, 31, 0x2E9670u);
    ctx->pc = 0x2E966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9668u;
    // 0x2e966c: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E9668u, 0x2E9670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9670u;
label_2e9670:
    // 0x2e9670: 0x2a83000a  slti        $v1, $s4, 0xA
    ctx->pc = 0x2e9670u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2e9674: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2E9674u;
    {
        const bool branch_taken_0x2e9674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9674u;
        // 0x2e9678: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9674) {
            ctx->pc = 0x2E95D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e95d0;
        }
    }
    ctx->pc = 0x2E967Cu;
    // 0x2e967c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2e967cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9680: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x2e9680u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    // 0x2e9684: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x2e9684u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
    // 0x2e9688: 0x26750004  addiu       $s5, $s3, 0x4
    ctx->pc = 0x2e9688u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2e968c: 0x0  nop
    ctx->pc = 0x2e968cu;
    // NOP
label_2e9690:
    // 0x2e9690: 0x26900001  addiu       $s0, $s4, 0x1
    ctx->pc = 0x2e9690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2e9694: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e9694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9698: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e9698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e969c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2E969Cu;
    SET_GPR_U32(ctx, 31, 0x2E96A4u);
    ctx->pc = 0x2E96A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E969Cu;
    // 0x2e96a0: 0x27c50460  addiu       $a1, $fp, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E969Cu, 0x2E96A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E96A4u;
label_2e96a4:
    // 0x2e96a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e96a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e96a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e96a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e96ac: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E96ACu;
    SET_GPR_U32(ctx, 31, 0x2E96B4u);
    ctx->pc = 0x2E96B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E96ACu;
    // 0x2e96b0: 0x148880  sll         $s1, $s4, 2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E96ACu, 0x2E96B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E96B4u;
label_2e96b4:
    // 0x2e96b4: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x2e96b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x2e96b8: 0xac620100  sw          $v0, 0x100($v1)
    ctx->pc = 0x2e96b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
    // 0x2e96bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e96bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e96c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e96c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e96c4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2E96C4u;
    SET_GPR_U32(ctx, 31, 0x2E96CCu);
    ctx->pc = 0x2E96C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E96C4u;
    // 0x2e96c8: 0x26e50488  addiu       $a1, $s7, 0x488 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 1160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2E96C4u, 0x2E96CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E96CCu;
label_2e96cc:
    // 0x2e96cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e96ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e96d0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2e96d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e96d4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E96D4u;
    SET_GPR_U32(ctx, 31, 0x2E96DCu);
    ctx->pc = 0x2E96D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E96D4u;
    // 0x2e96d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E96D4u, 0x2E96DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E96DCu;
label_2e96dc:
    // 0x2e96dc: 0x2a830007  slti        $v1, $s4, 0x7
    ctx->pc = 0x2e96dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2e96e0: 0x2358821  addu        $s1, $s1, $s5
    ctx->pc = 0x2e96e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x2e96e4: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2E96E4u;
    {
        const bool branch_taken_0x2e96e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96E4u;
        // 0x2e96e8: 0xae220120  sw          $v0, 0x120($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96e4) {
            ctx->pc = 0x2E9690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9690;
        }
    }
    ctx->pc = 0x2E96ECu;
    // 0x2e96ec: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e96ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2e96f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e96f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e96f4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E96F4u;
    SET_GPR_U32(ctx, 31, 0x2E96FCu);
    ctx->pc = 0x2E96F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E96F4u;
    // 0x2e96f8: 0x24a50398  addiu       $a1, $a1, 0x398 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E96F4u, 0x2E96FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E96FCu;
label_2e96fc:
    // 0x2e96fc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e96fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2e9700: 0xae620140  sw          $v0, 0x140($s3)
    ctx->pc = 0x2e9700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 320), GPR_U32(ctx, 2));
    // 0x2e9704: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e9704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9708: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E9708u;
    SET_GPR_U32(ctx, 31, 0x2E9710u);
    ctx->pc = 0x2E970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9708u;
    // 0x2e970c: 0x24a50370  addiu       $a1, $a1, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E9708u, 0x2E9710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9710u;
label_2e9710:
    // 0x2e9710: 0xae620144  sw          $v0, 0x144($s3)
    ctx->pc = 0x2e9710u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 324), GPR_U32(ctx, 2));
    // 0x2e9714: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2e9714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e9718: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2e9718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e971c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2e971cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e9720: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2e9720u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e9724: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2e9724u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e9728: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2e9728u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2e972c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2e972cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e9730: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2e9730u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e9734: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2e9734u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e9738: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2e9738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e973c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E973Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E973Cu;
        // 0x2e9740: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E973Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9744u;
    // 0x2e9744: 0x0  nop
    ctx->pc = 0x2e9744u;
    // NOP
    ctx->pc = 0x2e9748u;
}
