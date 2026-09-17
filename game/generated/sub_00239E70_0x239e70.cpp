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

// Function: sub_00239E70
// Address: 0x239e70 - 0x239f50
void sub_00239E70_0x239e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239E70_0x239e70");
#endif

    switch (ctx->pc) {
        case 0x239eb0u: goto label_239eb0;
        case 0x239ed8u: goto label_239ed8;
        case 0x239eecu: goto label_239eec;
        case 0x239ef4u: goto label_239ef4;
        case 0x239f40u: goto label_239f40;
        default: break;
    }

    ctx->pc = 0x239e70u;

    // 0x239e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x239e74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239e78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239e80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x239e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e84: 0x6000024  bltz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x239E84u;
    {
        const bool branch_taken_0x239e84 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x239E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E84u;
        // 0x239e88: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e84) {
            ctx->pc = 0x239F18u;
            goto label_239f18;
        }
    }
    ctx->pc = 0x239E8Cu;
    // 0x239e8c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x239e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x239e90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239E90u;
    {
        const bool branch_taken_0x239e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E90u;
        // 0x239e94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e90) {
            ctx->pc = 0x239EA8u;
            goto label_239ea8;
        }
    }
    ctx->pc = 0x239E98u;
    // 0x239e98: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x239E98u;
    {
        const bool branch_taken_0x239e98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x239E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E98u;
        // 0x239e9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e98) {
            ctx->pc = 0x239ED0u;
            goto label_239ed0;
        }
    }
    ctx->pc = 0x239EA0u;
    // 0x239ea0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x239EA0u;
    {
        const bool branch_taken_0x239ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EA0u;
        // 0x239ea4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ea0) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239EA8u;
label_239ea8:
    // 0x239ea8: 0xc08e76c  jal         func_239DB0
    ctx->pc = 0x239EA8u;
    SET_GPR_U32(ctx, 31, 0x239EB0u);
    ctx->pc = 0x239DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239DB0u, 0x239EA8u, 0x239EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239EB0u;
label_239eb0:
    // 0x239eb0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x239EB0u;
    {
        const bool branch_taken_0x239eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EB0u;
        // 0x239eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239eb0) {
            ctx->pc = 0x239F18u;
            goto label_239f18;
        }
    }
    ctx->pc = 0x239EB8u;
    // 0x239eb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239ebc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x239ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ec0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239ec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239ec8: 0x808e744  j           func_239D10
    ctx->pc = 0x239EC8u;
    ctx->pc = 0x239ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239EC8u;
    // 0x239ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239D10u;
    sub_00239D10_0x239d10(rdram, ctx, runtime); return;
    ctx->pc = 0x239ED0u;
label_239ed0:
    // 0x239ed0: 0xc08e76c  jal         func_239DB0
    ctx->pc = 0x239ED0u;
    SET_GPR_U32(ctx, 31, 0x239ED8u);
    ctx->pc = 0x239ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239ED0u;
    // 0x239ed4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239DB0u, 0x239ED0u, 0x239ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239ED8u;
label_239ed8:
    // 0x239ed8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239ED8u;
    {
        const bool branch_taken_0x239ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239ed8) {
            ctx->pc = 0x239EECu;
            goto label_239eec;
        }
    }
    ctx->pc = 0x239EE0u;
    // 0x239ee0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x239ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ee4: 0xc08e744  jal         func_239D10
    ctx->pc = 0x239EE4u;
    SET_GPR_U32(ctx, 31, 0x239EECu);
    ctx->pc = 0x239EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239EE4u;
    // 0x239ee8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239D10u, 0x239EE4u, 0x239EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239EECu;
label_239eec:
    // 0x239eec: 0xc08e76c  jal         func_239DB0
    ctx->pc = 0x239EECu;
    SET_GPR_U32(ctx, 31, 0x239EF4u);
    ctx->pc = 0x239EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239EECu;
    // 0x239ef0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239DB0u, 0x239EECu, 0x239EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239EF4u;
label_239ef4:
    // 0x239ef4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x239EF4u;
    {
        const bool branch_taken_0x239ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EF4u;
        // 0x239ef8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ef4) {
            ctx->pc = 0x239F18u;
            goto label_239f18;
        }
    }
    ctx->pc = 0x239EFCu;
    // 0x239efc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239f00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239f04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x239f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239f08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239f0c: 0x808e744  j           func_239D10
    ctx->pc = 0x239F0Cu;
    ctx->pc = 0x239F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F0Cu;
    // 0x239f10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239D10u;
    sub_00239D10_0x239d10(rdram, ctx, runtime); return;
    ctx->pc = 0x239F14u;
    // 0x239f14: 0x0  nop
    ctx->pc = 0x239f14u;
    // NOP
label_239f18:
    // 0x239f18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239f18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239f1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239f1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_239f20:
    // 0x239f20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239f24: 0x3e00008  jr          $ra
    ctx->pc = 0x239F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F24u;
        // 0x239f28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239F2Cu;
    // 0x239f2c: 0x0  nop
    ctx->pc = 0x239f2cu;
    // NOP
    // 0x239f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x239f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239f38: 0xc08e744  jal         func_239D10
    ctx->pc = 0x239F38u;
    SET_GPR_U32(ctx, 31, 0x239F40u);
    ctx->pc = 0x239F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F38u;
    // 0x239f3c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239D10u, 0x239F38u, 0x239F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F40u;
label_239f40:
    // 0x239f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239f44: 0x3e00008  jr          $ra
    ctx->pc = 0x239F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F44u;
        // 0x239f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239F4Cu;
    // 0x239f4c: 0x0  nop
    ctx->pc = 0x239f4cu;
    // NOP
    ctx->pc = 0x239f50u;
}
