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

// Function: sub_0022F780
// Address: 0x22f780 - 0x22f7e0
void sub_0022F780_0x22f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F780_0x22f780");
#endif

    switch (ctx->pc) {
        case 0x22f7b4u: goto label_22f7b4;
        case 0x22f7c0u: goto label_22f7c0;
        case 0x22f7ccu: goto label_22f7cc;
        default: break;
    }

    ctx->pc = 0x22f780u;

    // 0x22f780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22f780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22f784: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22f784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22f788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f78c: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22F78Cu;
    {
        const bool branch_taken_0x22f78c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x22F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F78Cu;
        // 0x22f790: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f78c) {
            ctx->pc = 0x22F7CCu;
            goto label_22f7cc;
        }
    }
    ctx->pc = 0x22F794u;
    // 0x22f794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22f794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f798: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22F798u;
    {
        const bool branch_taken_0x22f798 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x22F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F798u;
        // 0x22f79c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f798) {
            ctx->pc = 0x22F7D0u;
            goto label_22f7d0;
        }
    }
    ctx->pc = 0x22F7A0u;
    // 0x22f7a0: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x22f7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
    // 0x22f7a4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x22f7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x22f7a8: 0x26109a40  addiu       $s0, $s0, -0x65C0
    ctx->pc = 0x22f7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941248));
    // 0x22f7ac: 0xc08ba96  jal         func_22EA58
    ctx->pc = 0x22F7ACu;
    SET_GPR_U32(ctx, 31, 0x22F7B4u);
    ctx->pc = 0x22F7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7ACu;
    // 0x22f7b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA58u, 0x22F7ACu, 0x22F7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7B4u;
label_22f7b4:
    // 0x22f7b4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x22f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x22f7b8: 0xc08ba96  jal         func_22EA58
    ctx->pc = 0x22F7B8u;
    SET_GPR_U32(ctx, 31, 0x22F7C0u);
    ctx->pc = 0x22F7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7B8u;
    // 0x22f7bc: 0x24050065  addiu       $a1, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA58u, 0x22F7B8u, 0x22F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7C0u;
label_22f7c0:
    // 0x22f7c0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x22f7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x22f7c4: 0xc08ba96  jal         func_22EA58
    ctx->pc = 0x22F7C4u;
    SET_GPR_U32(ctx, 31, 0x22F7CCu);
    ctx->pc = 0x22F7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7C4u;
    // 0x22f7c8: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA58u, 0x22F7C4u, 0x22F7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7CCu;
label_22f7cc:
    // 0x22f7cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22f7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22f7d0:
    // 0x22f7d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22f7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22f7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x22F7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7D4u;
        // 0x22f7d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F7DCu;
    // 0x22f7dc: 0x0  nop
    ctx->pc = 0x22f7dcu;
    // NOP
    ctx->pc = 0x22f7e0u;
}
