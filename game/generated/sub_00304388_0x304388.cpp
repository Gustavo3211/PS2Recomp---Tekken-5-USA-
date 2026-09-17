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

// Function: sub_00304388
// Address: 0x304388 - 0x304410
void sub_00304388_0x304388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304388_0x304388");
#endif

    switch (ctx->pc) {
        case 0x3043a8u: goto label_3043a8;
        case 0x3043ccu: goto label_3043cc;
        case 0x3043f0u: goto label_3043f0;
        default: break;
    }

    ctx->pc = 0x304388u;

    // 0x304388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30438c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30438cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304394: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x304394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x304398: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x304398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x30439c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30439cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3043a0: 0xc0bf2d6  jal         func_2FCB58
    ctx->pc = 0x3043A0u;
    SET_GPR_U32(ctx, 31, 0x3043A8u);
    ctx->pc = 0x3043A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3043A0u;
    // 0x3043a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCB58u, 0x3043A0u, 0x3043A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3043A8u;
label_3043a8:
    // 0x3043a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3043a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3043ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3043acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3043b0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3043b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3043b4: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x3043b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x3043b8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3043B8u;
    {
        const bool branch_taken_0x3043b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3043BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043B8u;
        // 0x3043bc: 0x832823  subu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043b8) {
            ctx->pc = 0x3043F8u;
            goto label_3043f8;
        }
    }
    ctx->pc = 0x3043C0u;
    // 0x3043c0: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x3043c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3043c4: 0xc0be9be  jal         func_2FA6F8
    ctx->pc = 0x3043C4u;
    SET_GPR_U32(ctx, 31, 0x3043CCu);
    ctx->pc = 0x3043C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3043C4u;
    // 0x3043c8: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6F8u, 0x3043C4u, 0x3043CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3043CCu;
label_3043cc:
    // 0x3043cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3043ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3043d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3043d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3043d4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3043d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3043d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3043D8u;
    {
        const bool branch_taken_0x3043d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3043DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043D8u;
        // 0x3043dc: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043d8) {
            ctx->pc = 0x3043E8u;
            goto label_3043e8;
        }
    }
    ctx->pc = 0x3043E0u;
    // 0x3043e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3043E0u;
    {
        const bool branch_taken_0x3043e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3043E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043E0u;
        // 0x3043e4: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043e0) {
            ctx->pc = 0x3043F8u;
            goto label_3043f8;
        }
    }
    ctx->pc = 0x3043E8u;
label_3043e8:
    // 0x3043e8: 0xc0bf2ae  jal         func_2FCAB8
    ctx->pc = 0x3043E8u;
    SET_GPR_U32(ctx, 31, 0x3043F0u);
    ctx->pc = 0x2FCAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCAB8u, 0x3043E8u, 0x3043F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3043F0u;
label_3043f0:
    // 0x3043f0: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x3043f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x3043f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3043f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3043f8:
    // 0x3043f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3043f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3043fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3043fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x304400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x304400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304404: 0x3e00008  jr          $ra
    ctx->pc = 0x304404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304404u;
        // 0x304408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30440Cu;
    // 0x30440c: 0x0  nop
    ctx->pc = 0x30440cu;
    // NOP
    ctx->pc = 0x304410u;
}
