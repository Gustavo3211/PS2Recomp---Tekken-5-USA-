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

// Function: sub_00110418
// Address: 0x110418 - 0x1104e0
void sub_00110418_0x110418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110418_0x110418");
#endif

    switch (ctx->pc) {
        case 0x110468u: goto label_110468;
        case 0x110488u: goto label_110488;
        case 0x11049cu: goto label_11049c;
        case 0x1104b0u: goto label_1104b0;
        case 0x1104c0u: goto label_1104c0;
        case 0x1104c8u: goto label_1104c8;
        default: break;
    }

    ctx->pc = 0x110418u;

    // 0x110418: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x110418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11041c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x11041cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x110420: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x110420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x110424: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x110424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110428: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x110428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11042c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x11042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x110430: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x110430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x110434: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x110434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x110438: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x110438u;
    {
        const bool branch_taken_0x110438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110438) {
            ctx->pc = 0x11043Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110438u;
            // 0x11043c: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11044Cu;
            goto label_11044c;
        }
    }
    ctx->pc = 0x110440u;
    // 0x110440: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x110440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x110444: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x110444u;
    {
        const bool branch_taken_0x110444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110444u;
        // 0x110448: 0x34428008  ori         $v0, $v0, 0x8008 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110444) {
            ctx->pc = 0x1104CCu;
            goto label_1104cc;
        }
    }
    ctx->pc = 0x11044Cu;
label_11044c:
    // 0x11044c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11044cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110450: 0x2442df28  addiu       $v0, $v0, -0x20D8
    ctx->pc = 0x110450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958888));
    // 0x110454: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x110454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x110458: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x110458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11045c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11045cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110460: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x110460u;
    SET_GPR_U32(ctx, 31, 0x110468u);
    ctx->pc = 0x110464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110460u;
    // 0x110464: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x110460u, 0x110468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110468u;
label_110468:
    // 0x110468: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11046c: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11046Cu;
    {
        const bool branch_taken_0x11046c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x110470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11046Cu;
        // 0x110470: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11046c) {
            ctx->pc = 0x110480u;
            goto label_110480;
        }
    }
    ctx->pc = 0x110474u;
    // 0x110474: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x110474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x110478: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x110478u;
    {
        const bool branch_taken_0x110478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110478u;
        // 0x11047c: 0x34428003  ori         $v0, $v0, 0x8003 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110478) {
            ctx->pc = 0x1104CCu;
            goto label_1104cc;
        }
    }
    ctx->pc = 0x110480u;
label_110480:
    // 0x110480: 0xc046922  jal         func_11A488
    ctx->pc = 0x110480u;
    SET_GPR_U32(ctx, 31, 0x110488u);
    ctx->pc = 0x110484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110480u;
    // 0x110484: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A488u, 0x110480u, 0x110488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110488u;
label_110488:
    // 0x110488: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x110488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x11048c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11048cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110490: 0x24a50658  addiu       $a1, $a1, 0x658
    ctx->pc = 0x110490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1624));
    // 0x110494: 0xc04698e  jal         func_11A638
    ctx->pc = 0x110494u;
    SET_GPR_U32(ctx, 31, 0x11049Cu);
    ctx->pc = 0x110498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110494u;
    // 0x110498: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A638u, 0x110494u, 0x11049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11049Cu;
label_11049c:
    // 0x11049c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11049cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104a0: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1104A0u;
    {
        const bool branch_taken_0x1104a0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1104a0) {
            ctx->pc = 0x1104B8u;
            goto label_1104b8;
        }
    }
    ctx->pc = 0x1104A8u;
    // 0x1104a8: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x1104A8u;
    SET_GPR_U32(ctx, 31, 0x1104B0u);
    ctx->pc = 0x1104ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1104A8u;
    // 0x1104ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x1104A8u, 0x1104B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1104B0u;
label_1104b0:
    // 0x1104b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1104B0u;
    {
        const bool branch_taken_0x1104b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1104B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104B0u;
        // 0x1104b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1104b0) {
            ctx->pc = 0x1104CCu;
            goto label_1104cc;
        }
    }
    ctx->pc = 0x1104B8u;
label_1104b8:
    // 0x1104b8: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x1104B8u;
    SET_GPR_U32(ctx, 31, 0x1104C0u);
    ctx->pc = 0x1104BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1104B8u;
    // 0x1104bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x1104B8u, 0x1104C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1104C0u;
label_1104c0:
    // 0x1104c0: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x1104C0u;
    SET_GPR_U32(ctx, 31, 0x1104C8u);
    ctx->pc = 0x1104C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1104C0u;
    // 0x1104c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x1104C0u, 0x1104C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1104C8u;
label_1104c8:
    // 0x1104c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1104c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1104cc:
    // 0x1104cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1104ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1104d0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1104d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1104d4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1104d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1104d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1104D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1104DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104D8u;
        // 0x1104dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1104D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1104E0u;
}
