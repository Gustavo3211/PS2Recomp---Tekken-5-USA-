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

// Function: sub_001219B0
// Address: 0x1219b0 - 0x121ad8
void sub_001219B0_0x1219b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001219B0_0x1219b0");
#endif

    switch (ctx->pc) {
        case 0x1219ccu: goto label_1219cc;
        case 0x1219e0u: goto label_1219e0;
        case 0x1219fcu: goto label_1219fc;
        case 0x121a08u: goto label_121a08;
        case 0x121a24u: goto label_121a24;
        case 0x121a38u: goto label_121a38;
        case 0x121a48u: goto label_121a48;
        case 0x121a58u: goto label_121a58;
        case 0x121a70u: goto label_121a70;
        case 0x121a8cu: goto label_121a8c;
        case 0x121a98u: goto label_121a98;
        case 0x121ab0u: goto label_121ab0;
        default: break;
    }

    ctx->pc = 0x1219b0u;

    // 0x1219b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1219b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1219b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1219b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1219b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1219b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1219bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1219bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1219c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1219c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1219c4: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x1219C4u;
    SET_GPR_U32(ctx, 31, 0x1219CCu);
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x1219C4u, 0x1219CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219CCu;
label_1219cc:
    // 0x1219cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1219ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1219d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1219d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1219d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1219d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1219d8: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x1219D8u;
    SET_GPR_U32(ctx, 31, 0x1219E0u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x1219D8u, 0x1219E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219E0u;
label_1219e0:
    // 0x1219e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1219e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1219e4: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x1219e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x1219e8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1219e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1219ec: 0x4400034  bltz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1219ECu;
    {
        const bool branch_taken_0x1219ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1219F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219ECu;
        // 0x1219f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219ec) {
            ctx->pc = 0x121AC0u;
            goto label_121ac0;
        }
    }
    ctx->pc = 0x1219F4u;
    // 0x1219f4: 0xc048cc0  jal         func_123300
    ctx->pc = 0x1219F4u;
    SET_GPR_U32(ctx, 31, 0x1219FCu);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x1219F4u, 0x1219FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219FCu;
label_1219fc:
    // 0x1219fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1219fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a00: 0xc048e16  jal         func_123858
    ctx->pc = 0x121A00u;
    SET_GPR_U32(ctx, 31, 0x121A08u);
    ctx->pc = 0x123858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123858u, 0x121A00u, 0x121A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A08u;
label_121a08:
    // 0x121a08: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x121a08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x121a0c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x121a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x121a10: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x121a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x121a14: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x121A14u;
    {
        const bool branch_taken_0x121a14 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x121A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A14u;
        // 0x121a18: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a14) {
            ctx->pc = 0x121A30u;
            goto label_121a30;
        }
    }
    ctx->pc = 0x121A1Cu;
    // 0x121a1c: 0xc049c20  jal         func_127080
    ctx->pc = 0x121A1Cu;
    SET_GPR_U32(ctx, 31, 0x121A24u);
    ctx->pc = 0x121A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A1Cu;
    // 0x121a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127080u, 0x121A1Cu, 0x121A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A24u;
label_121a24:
    // 0x121a24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x121A24u;
    {
        const bool branch_taken_0x121a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121a24) {
            ctx->pc = 0x121A48u;
            goto label_121a48;
        }
    }
    ctx->pc = 0x121A2Cu;
    // 0x121a2c: 0x0  nop
    ctx->pc = 0x121a2cu;
    // NOP
label_121a30:
    // 0x121a30: 0xc049c20  jal         func_127080
    ctx->pc = 0x121A30u;
    SET_GPR_U32(ctx, 31, 0x121A38u);
    ctx->pc = 0x127080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127080u, 0x121A30u, 0x121A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A38u;
label_121a38:
    // 0x121a38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a3c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x121a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a40: 0xc048c90  jal         func_123240
    ctx->pc = 0x121A40u;
    SET_GPR_U32(ctx, 31, 0x121A48u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x121A40u, 0x121A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A48u;
label_121a48:
    // 0x121a48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x121a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a50: 0xc048ca6  jal         func_123298
    ctx->pc = 0x121A50u;
    SET_GPR_U32(ctx, 31, 0x121A58u);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x121A50u, 0x121A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A58u;
label_121a58:
    // 0x121a58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x121a58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x121a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x121a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a68: 0xc048db2  jal         func_1236C8
    ctx->pc = 0x121A68u;
    SET_GPR_U32(ctx, 31, 0x121A70u);
    ctx->pc = 0x1236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236C8u, 0x121A68u, 0x121A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A70u;
label_121a70:
    // 0x121a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x121a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a78: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121A78u;
    {
        const bool branch_taken_0x121a78 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x121a78) {
            ctx->pc = 0x121AA8u;
            goto label_121aa8;
        }
    }
    ctx->pc = 0x121A80u;
    // 0x121a80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x121a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a84: 0xc048ca6  jal         func_123298
    ctx->pc = 0x121A84u;
    SET_GPR_U32(ctx, 31, 0x121A8Cu);
    ctx->pc = 0x123298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123298u, 0x121A84u, 0x121A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A8Cu;
label_121a8c:
    // 0x121a8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a90: 0xc048e16  jal         func_123858
    ctx->pc = 0x121A90u;
    SET_GPR_U32(ctx, 31, 0x121A98u);
    ctx->pc = 0x123858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123858u, 0x121A90u, 0x121A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A98u;
label_121a98:
    // 0x121a98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x121a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x121a9c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x121a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x121aa0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x121AA0u;
    {
        const bool branch_taken_0x121aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AA0u;
        // 0x121aa4: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121aa0) {
            ctx->pc = 0x121ABCu;
            goto label_121abc;
        }
    }
    ctx->pc = 0x121AA8u;
label_121aa8:
    // 0x121aa8: 0xc048e16  jal         func_123858
    ctx->pc = 0x121AA8u;
    SET_GPR_U32(ctx, 31, 0x121AB0u);
    ctx->pc = 0x123858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123858u, 0x121AA8u, 0x121AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AB0u;
label_121ab0:
    // 0x121ab0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x121ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x121ab4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x121ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x121ab8: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x121ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_121abc:
    // 0x121abc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x121abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121ac0:
    // 0x121ac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121ac4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121ac8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x121ac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121acc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x121accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x121AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AD0u;
        // 0x121ad4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121AD8u;
}
