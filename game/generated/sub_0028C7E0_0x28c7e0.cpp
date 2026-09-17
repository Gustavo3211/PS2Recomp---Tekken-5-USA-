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

// Function: sub_0028C7E0
// Address: 0x28c7e0 - 0x28c9d8
void sub_0028C7E0_0x28c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C7E0_0x28c7e0");
#endif

    switch (ctx->pc) {
        case 0x28c830u: goto label_28c830;
        case 0x28c848u: goto label_28c848;
        case 0x28c860u: goto label_28c860;
        case 0x28c878u: goto label_28c878;
        case 0x28c88cu: goto label_28c88c;
        case 0x28c8a0u: goto label_28c8a0;
        case 0x28c8b4u: goto label_28c8b4;
        case 0x28c8c8u: goto label_28c8c8;
        case 0x28c8d8u: goto label_28c8d8;
        case 0x28c8e8u: goto label_28c8e8;
        case 0x28c8f8u: goto label_28c8f8;
        case 0x28c908u: goto label_28c908;
        case 0x28c918u: goto label_28c918;
        case 0x28c928u: goto label_28c928;
        case 0x28c93cu: goto label_28c93c;
        case 0x28c954u: goto label_28c954;
        case 0x28c968u: goto label_28c968;
        case 0x28c978u: goto label_28c978;
        case 0x28c988u: goto label_28c988;
        case 0x28c998u: goto label_28c998;
        case 0x28c9a4u: goto label_28c9a4;
        default: break;
    }

    ctx->pc = 0x28c7e0u;

    // 0x28c7e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28c7e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28c7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c7e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28c7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c7ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28c7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28c7f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28c7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c7f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28c7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28c7f8: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x28c7f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x28c7fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28c7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28c800: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x28c800u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x28c804: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x28c804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x28c808: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x28c808u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x28c80c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x28c80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x28c810: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x28c810u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x28c814: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28c814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28c818: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28c81c: 0xae11003c  sw          $s1, 0x3C($s0)
    ctx->pc = 0x28c81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
    // 0x28c820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c824: 0x24a59e70  addiu       $a1, $a1, -0x6190
    ctx->pc = 0x28c824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942320));
    // 0x28c828: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28C828u;
    SET_GPR_U32(ctx, 31, 0x28C830u);
    ctx->pc = 0x28C82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C828u;
    // 0x28c82c: 0x26b59f10  addiu       $s5, $s5, -0x60F0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28C828u, 0x28C830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C830u;
label_28c830:
    // 0x28c830: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28c834: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x28c834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x28c838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c83c: 0x24a59e80  addiu       $a1, $a1, -0x6180
    ctx->pc = 0x28c83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942336));
    // 0x28c840: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28C840u;
    SET_GPR_U32(ctx, 31, 0x28C848u);
    ctx->pc = 0x28C844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C840u;
    // 0x28c844: 0x26949f28  addiu       $s4, $s4, -0x60D8 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28C840u, 0x28C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C848u;
label_28c848:
    // 0x28c848: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28c84c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x28c84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x28c850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c854: 0x24a59e90  addiu       $a1, $a1, -0x6170
    ctx->pc = 0x28c854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942352));
    // 0x28c858: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28C858u;
    SET_GPR_U32(ctx, 31, 0x28C860u);
    ctx->pc = 0x28C85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C858u;
    // 0x28c85c: 0x26739f40  addiu       $s3, $s3, -0x60C0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28C858u, 0x28C860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C860u;
label_28c860:
    // 0x28c860: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28c864: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x28c864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x28c868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c86c: 0x24a59ea0  addiu       $a1, $a1, -0x6160
    ctx->pc = 0x28c86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942368));
    // 0x28c870: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28C870u;
    SET_GPR_U32(ctx, 31, 0x28C878u);
    ctx->pc = 0x28C874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C870u;
    // 0x28c874: 0x26529f58  addiu       $s2, $s2, -0x60A8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28C870u, 0x28C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C878u;
label_28c878:
    // 0x28c878: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28c87c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x28c87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x28c880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c884: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28C884u;
    SET_GPR_U32(ctx, 31, 0x28C88Cu);
    ctx->pc = 0x28C888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C884u;
    // 0x28c888: 0x24a59eb0  addiu       $a1, $a1, -0x6150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28C884u, 0x28C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C88Cu;
label_28c88c:
    // 0x28c88c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c88cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28c890: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x28c890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x28c894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c898: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28C898u;
    SET_GPR_U32(ctx, 31, 0x28C8A0u);
    ctx->pc = 0x28C89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C898u;
    // 0x28c89c: 0x24a59ec8  addiu       $a1, $a1, -0x6138 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28C898u, 0x28C8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C8A0u;
label_28c8a0:
    // 0x28c8a0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28c8a4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x28c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x28c8a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8ac: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28C8ACu;
    SET_GPR_U32(ctx, 31, 0x28C8B4u);
    ctx->pc = 0x28C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C8ACu;
    // 0x28c8b0: 0x24a59ee0  addiu       $a1, $a1, -0x6120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28C8ACu, 0x28C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C8B4u;
label_28c8b4:
    // 0x28c8b4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28c8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28c8b8: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x28c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x28c8bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8c0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28C8C0u;
    SET_GPR_U32(ctx, 31, 0x28C8C8u);
    ctx->pc = 0x28C8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C8C0u;
    // 0x28c8c4: 0x24a59ef8  addiu       $a1, $a1, -0x6108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28C8C0u, 0x28C8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C8C8u;
label_28c8c8:
    // 0x28c8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8cc: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x28c8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x28c8d0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28C8D0u;
    SET_GPR_U32(ctx, 31, 0x28C8D8u);
    ctx->pc = 0x28C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C8D0u;
    // 0x28c8d4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28C8D0u, 0x28C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C8D8u;
label_28c8d8:
    // 0x28c8d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8dc: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x28c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x28c8e0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28C8E0u;
    SET_GPR_U32(ctx, 31, 0x28C8E8u);
    ctx->pc = 0x28C8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C8E0u;
    // 0x28c8e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28C8E0u, 0x28C8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C8E8u;
label_28c8e8:
    // 0x28c8e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8ec: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x28c8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x28c8f0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28C8F0u;
    SET_GPR_U32(ctx, 31, 0x28C8F8u);
    ctx->pc = 0x28C8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C8F0u;
    // 0x28c8f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28C8F0u, 0x28C8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C8F8u;
label_28c8f8:
    // 0x28c8f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8fc: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x28c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x28c900: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28C900u;
    SET_GPR_U32(ctx, 31, 0x28C908u);
    ctx->pc = 0x28C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C900u;
    // 0x28c904: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28C900u, 0x28C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C908u;
label_28c908:
    // 0x28c908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c90c: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x28c90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x28c910: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C910u;
    SET_GPR_U32(ctx, 31, 0x28C918u);
    ctx->pc = 0x28C914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C910u;
    // 0x28c914: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C910u, 0x28C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C918u;
label_28c918:
    // 0x28c918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c91c: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x28c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x28c920: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C920u;
    SET_GPR_U32(ctx, 31, 0x28C928u);
    ctx->pc = 0x28C924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C920u;
    // 0x28c924: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C920u, 0x28C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C928u;
label_28c928:
    // 0x28c928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c92c: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x28c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x28c930: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28c930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c934: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C934u;
    SET_GPR_U32(ctx, 31, 0x28C93Cu);
    ctx->pc = 0x28C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C934u;
    // 0x28c938: 0x3c130048  lui         $s3, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C934u, 0x28C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C93Cu;
label_28c93c:
    // 0x28c93c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c940: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x28c940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x28c944: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28c944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c948: 0x26739f70  addiu       $s3, $s3, -0x6090
    ctx->pc = 0x28c948u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942576));
    // 0x28c94c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C94Cu;
    SET_GPR_U32(ctx, 31, 0x28C954u);
    ctx->pc = 0x28C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C94Cu;
    // 0x28c950: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C94Cu, 0x28C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C954u;
label_28c954:
    // 0x28c954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c958: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x28c958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x28c95c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28c95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c960: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28C960u;
    SET_GPR_U32(ctx, 31, 0x28C968u);
    ctx->pc = 0x28C964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C960u;
    // 0x28c964: 0x26529f88  addiu       $s2, $s2, -0x6078 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28C960u, 0x28C968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C968u;
label_28c968:
    // 0x28c968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c96c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x28c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x28c970: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28C970u;
    SET_GPR_U32(ctx, 31, 0x28C978u);
    ctx->pc = 0x28C974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C970u;
    // 0x28c974: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28C970u, 0x28C978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C978u;
label_28c978:
    // 0x28c978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c97c: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x28c97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x28c980: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C980u;
    SET_GPR_U32(ctx, 31, 0x28C988u);
    ctx->pc = 0x28C984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C980u;
    // 0x28c984: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C980u, 0x28C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C988u;
label_28c988:
    // 0x28c988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c98c: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x28c98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x28c990: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28C990u;
    SET_GPR_U32(ctx, 31, 0x28C998u);
    ctx->pc = 0x28C994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C990u;
    // 0x28c994: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28C990u, 0x28C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C998u;
label_28c998:
    // 0x28c998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c99c: 0xc0a3276  jal         func_28C9D8
    ctx->pc = 0x28C99Cu;
    SET_GPR_U32(ctx, 31, 0x28C9A4u);
    ctx->pc = 0x28C9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C99Cu;
    // 0x28c9a0: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C9D8u, 0x28C99Cu, 0x28C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C9A4u;
label_28c9a4:
    // 0x28c9a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c9a8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x28c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x28c9ac: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x28c9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x28c9b0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x28c9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x28c9b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28c9b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28c9b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28c9b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c9bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28c9bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c9c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28c9c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28c9c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x28c9c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c9c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x28c9c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28c9cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28c9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x28C9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C9D0u;
        // 0x28c9d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C9D8u;
}
