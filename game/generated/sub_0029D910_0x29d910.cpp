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

// Function: sub_0029D910
// Address: 0x29d910 - 0x29da50
void sub_0029D910_0x29d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D910_0x29d910");
#endif

    switch (ctx->pc) {
        case 0x29d960u: goto label_29d960;
        case 0x29d97cu: goto label_29d97c;
        case 0x29d998u: goto label_29d998;
        case 0x29d9b0u: goto label_29d9b0;
        case 0x29d9d0u: goto label_29d9d0;
        case 0x29d9e4u: goto label_29d9e4;
        case 0x29da14u: goto label_29da14;
        default: break;
    }

    ctx->pc = 0x29d910u;

    // 0x29d910: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29d910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29d914: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x29d914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x29d918: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29d918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d91c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29d91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29d920: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29d920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d924: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29d924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29d928: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x29d928u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x29d92c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x29d92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x29d930: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x29d930u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x29d934: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x29d934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x29d938: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x29d938u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d93c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x29d93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x29d940: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x29d940u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
    // 0x29d944: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x29d944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x29d948: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x29d948u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d94c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29d94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29d950: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x29d950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x29d954: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x29d954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x29d958: 0x8e530154  lw          $s3, 0x154($s2)
    ctx->pc = 0x29d958u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x29d95c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x29d95cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_29d960:
    // 0x29d960: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29D960u;
    {
        const bool branch_taken_0x29d960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D960u;
        // 0x29d964: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d960) {
            ctx->pc = 0x29D988u;
            goto label_29d988;
        }
    }
    ctx->pc = 0x29D968u;
    // 0x29d968: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x29d968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x29d96c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29d96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d970: 0x2445c3b0  addiu       $a1, $v0, -0x3C50
    ctx->pc = 0x29d970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951856));
    // 0x29d974: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29D974u;
    SET_GPR_U32(ctx, 31, 0x29D97Cu);
    ctx->pc = 0x29D978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D974u;
    // 0x29d978: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29D974u, 0x29D97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D97Cu;
label_29d97c:
    // 0x29d97c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x29D97Cu;
    {
        const bool branch_taken_0x29d97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D97Cu;
        // 0x29d980: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d97c) {
            ctx->pc = 0x29D9DCu;
            goto label_29d9dc;
        }
    }
    ctx->pc = 0x29D984u;
    // 0x29d984: 0x0  nop
    ctx->pc = 0x29d984u;
    // NOP
label_29d988:
    // 0x29d988: 0x163e0005  bne         $s1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D988u;
    {
        const bool branch_taken_0x29d988 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 30));
        ctx->pc = 0x29D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D988u;
        // 0x29d98c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d988) {
            ctx->pc = 0x29D9A0u;
            goto label_29d9a0;
        }
    }
    ctx->pc = 0x29D990u;
    // 0x29d990: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29D990u;
    SET_GPR_U32(ctx, 31, 0x29D998u);
    ctx->pc = 0x29D994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D990u;
    // 0x29d994: 0x26e5c3c0  addiu       $a1, $s7, -0x3C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29D990u, 0x29D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D998u;
label_29d998:
    // 0x29d998: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x29D998u;
    {
        const bool branch_taken_0x29d998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D998u;
        // 0x29d99c: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d998) {
            ctx->pc = 0x29D9D8u;
            goto label_29d9d8;
        }
    }
    ctx->pc = 0x29D9A0u;
label_29d9a0:
    // 0x29d9a0: 0x16360005  bne         $s1, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D9A0u;
    {
        const bool branch_taken_0x29d9a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        if (branch_taken_0x29d9a0) {
            ctx->pc = 0x29D9B8u;
            goto label_29d9b8;
        }
    }
    ctx->pc = 0x29D9A8u;
    // 0x29d9a8: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29D9A8u;
    SET_GPR_U32(ctx, 31, 0x29D9B0u);
    ctx->pc = 0x29D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D9A8u;
    // 0x29d9ac: 0x26a5c3d0  addiu       $a1, $s5, -0x3C30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29D9A8u, 0x29D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D9B0u;
label_29d9b0:
    // 0x29d9b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29D9B0u;
    {
        const bool branch_taken_0x29d9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9B0u;
        // 0x29d9b4: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9b0) {
            ctx->pc = 0x29D9D8u;
            goto label_29d9d8;
        }
    }
    ctx->pc = 0x29D9B8u;
label_29d9b8:
    // 0x29d9b8: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x29D9B8u;
    {
        const bool branch_taken_0x29d9b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d9b8) {
            ctx->pc = 0x29D9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D9B8u;
            // 0x29d9bc: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D9D8u;
            goto label_29d9d8;
        }
    }
    ctx->pc = 0x29D9C0u;
    // 0x29d9c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29d9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d9c4: 0x2685c3e0  addiu       $a1, $s4, -0x3C20
    ctx->pc = 0x29d9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951904));
    // 0x29d9c8: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x29D9C8u;
    SET_GPR_U32(ctx, 31, 0x29D9D0u);
    ctx->pc = 0x29D9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D9C8u;
    // 0x29d9cc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x29D9C8u, 0x29D9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D9D0u;
label_29d9d0:
    // 0x29d9d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29D9D0u;
    {
        const bool branch_taken_0x29d9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D9D0u;
        // 0x29d9d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d9d0) {
            ctx->pc = 0x29D9DCu;
            goto label_29d9dc;
        }
    }
    ctx->pc = 0x29D9D8u;
label_29d9d8:
    // 0x29d9d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29d9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29d9dc:
    // 0x29d9dc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x29D9DCu;
    SET_GPR_U32(ctx, 31, 0x29D9E4u);
    ctx->pc = 0x29D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D9DCu;
    // 0x29d9e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x29D9DCu, 0x29D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D9E4u;
label_29d9e4:
    // 0x29d9e4: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x29d9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x29d9e8: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x29d9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x29d9ec: 0x2404efff  addiu       $a0, $zero, -0x1001
    ctx->pc = 0x29d9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29d9f0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x29d9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x29d9f4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x29d9f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d9f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x29d9f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29d9fc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29d9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29da00: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x29da00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x29da04: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x29da04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x29da08: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x29da08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x29da0c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29DA0Cu;
    SET_GPR_U32(ctx, 31, 0x29DA14u);
    ctx->pc = 0x29DA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DA0Cu;
    // 0x29da10: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29DA0Cu, 0x29DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DA14u;
label_29da14:
    // 0x29da14: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x29da14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x29da18: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x29DA18u;
    {
        const bool branch_taken_0x29da18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29da18) {
            ctx->pc = 0x29DA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DA18u;
            // 0x29da1c: 0x2a220003  slti        $v0, $s1, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d960;
        }
    }
    ctx->pc = 0x29DA20u;
    // 0x29da20: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x29da20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29da24: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x29da24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29da28: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29da28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29da2c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x29da2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29da30: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29da30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29da34: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x29da34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29da38: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x29da38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29da3c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x29da3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29da40: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x29da40u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29da44: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x29da44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x29da48: 0x3e00008  jr          $ra
    ctx->pc = 0x29DA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA48u;
        // 0x29da4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DA50u;
}
