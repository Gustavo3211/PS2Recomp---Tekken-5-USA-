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

// Function: sub_00296848
// Address: 0x296848 - 0x2968d8
void sub_00296848_0x296848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296848_0x296848");
#endif

    switch (ctx->pc) {
        case 0x29685cu: goto label_29685c;
        case 0x296870u: goto label_296870;
        case 0x296884u: goto label_296884;
        case 0x296898u: goto label_296898;
        case 0x2968a0u: goto label_2968a0;
        case 0x2968c0u: goto label_2968c0;
        default: break;
    }

    ctx->pc = 0x296848u;

    // 0x296848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29684c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29684cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296850: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x296850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x296854: 0xc0a5ab2  jal         func_296AC8
    ctx->pc = 0x296854u;
    SET_GPR_U32(ctx, 31, 0x29685Cu);
    ctx->pc = 0x296858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296854u;
    // 0x296858: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296AC8u, 0x296854u, 0x29685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29685Cu;
label_29685c:
    // 0x29685c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x29685cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x296860: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x296860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x296864: 0x2463e2d0  addiu       $v1, $v1, -0x1D30
    ctx->pc = 0x296864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959824));
    // 0x296868: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x296868u;
    SET_GPR_U32(ctx, 31, 0x296870u);
    ctx->pc = 0x29686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296868u;
    // 0x29686c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x296868u, 0x296870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296870u;
label_296870:
    // 0x296870: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x296870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296874: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x296874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x296878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29687c: 0xc089636  jal         func_2258D8
    ctx->pc = 0x29687Cu;
    SET_GPR_U32(ctx, 31, 0x296884u);
    ctx->pc = 0x296880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29687Cu;
    // 0x296880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x29687Cu, 0x296884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296884u;
label_296884:
    // 0x296884: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x296884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x296888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29688c: 0x2442bb90  addiu       $v0, $v0, -0x4470
    ctx->pc = 0x29688cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949776));
    // 0x296890: 0xc0a5a0a  jal         func_296828
    ctx->pc = 0x296890u;
    SET_GPR_U32(ctx, 31, 0x296898u);
    ctx->pc = 0x296894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296890u;
    // 0x296894: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296828u, 0x296890u, 0x296898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296898u;
label_296898:
    // 0x296898: 0xc0a5a0c  jal         func_296830
    ctx->pc = 0x296898u;
    SET_GPR_U32(ctx, 31, 0x2968A0u);
    ctx->pc = 0x29689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296898u;
    // 0x29689c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296830u, 0x296898u, 0x2968A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2968A0u;
label_2968a0:
    // 0x2968a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2968A0u;
    {
        const bool branch_taken_0x2968a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2968A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2968A0u;
        // 0x2968a4: 0xaf80b5d0  sw          $zero, -0x4A30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294948304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2968a0) {
            ctx->pc = 0x2968E0u;
            return;
        }
    }
    ctx->pc = 0x2968A8u;
    // 0x2968a8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2968a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2968ac: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2968acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2968b0: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x2968b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x2968b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2968b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2968b8: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x2968B8u;
    SET_GPR_U32(ctx, 31, 0x2968C0u);
    ctx->pc = 0x2968BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2968B8u;
    // 0x2968bc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x2968B8u, 0x2968C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2968C0u;
label_2968c0:
    // 0x2968c0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2968c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2968c4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2968c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2968c8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2968c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2968cc: 0x2484ff00  addiu       $a0, $a0, -0x100
    ctx->pc = 0x2968ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
    // 0x2968d0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2968D0u;
    SET_GPR_U32(ctx, 31, 0x2968D8u);
    ctx->pc = 0x2968D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2968D0u;
    // 0x2968d4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2968D0u, 0x2968D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2968D8u;
}
