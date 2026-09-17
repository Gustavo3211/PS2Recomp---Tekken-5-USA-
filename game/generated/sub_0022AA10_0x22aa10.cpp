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

// Function: sub_0022AA10
// Address: 0x22aa10 - 0x22aaa0
void sub_0022AA10_0x22aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AA10_0x22aa10");
#endif

    switch (ctx->pc) {
        case 0x22aa24u: goto label_22aa24;
        case 0x22aa34u: goto label_22aa34;
        case 0x22aa48u: goto label_22aa48;
        case 0x22aa5cu: goto label_22aa5c;
        case 0x22aa90u: goto label_22aa90;
        default: break;
    }

    ctx->pc = 0x22aa10u;

    // 0x22aa10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22aa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22aa14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22aa18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22aa1c: 0xc08eaea  jal         func_23ABA8
    ctx->pc = 0x22AA1Cu;
    SET_GPR_U32(ctx, 31, 0x22AA24u);
    ctx->pc = 0x22AA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA1Cu;
    // 0x22aa20: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ABA8u, 0x22AA1Cu, 0x22AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA24u;
label_22aa24:
    // 0x22aa24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22AA24u;
    {
        const bool branch_taken_0x22aa24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aa24) {
            ctx->pc = 0x22AA40u;
            goto label_22aa40;
        }
    }
    ctx->pc = 0x22AA2Cu;
    // 0x22aa2c: 0xc08b8a2  jal         func_22E288
    ctx->pc = 0x22AA2Cu;
    SET_GPR_U32(ctx, 31, 0x22AA34u);
    ctx->pc = 0x22E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E288u, 0x22AA2Cu, 0x22AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA34u;
label_22aa34:
    // 0x22aa34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22aa38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22AA38u;
    {
        const bool branch_taken_0x22aa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA38u;
        // 0x22aa3c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa38) {
            ctx->pc = 0x22AA4Cu;
            goto label_22aa4c;
        }
    }
    ctx->pc = 0x22AA40u;
label_22aa40:
    // 0x22aa40: 0xc08b8a2  jal         func_22E288
    ctx->pc = 0x22AA40u;
    SET_GPR_U32(ctx, 31, 0x22AA48u);
    ctx->pc = 0x22E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E288u, 0x22AA40u, 0x22AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA48u;
label_22aa48:
    // 0x22aa48: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22aa48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_22aa4c:
    // 0x22aa4c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x22aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x22aa50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22aa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22aa54: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22AA54u;
    SET_GPR_U32(ctx, 31, 0x22AA5Cu);
    ctx->pc = 0x22AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA54u;
    // 0x22aa58: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22AA54u, 0x22AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA5Cu;
label_22aa5c:
    // 0x22aa5c: 0x24460068  addiu       $a2, $v0, 0x68
    ctx->pc = 0x22aa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x22aa60: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x22aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22aa64: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22AA64u;
    {
        const bool branch_taken_0x22aa64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA64u;
        // 0x22aa68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa64) {
            ctx->pc = 0x22AA7Cu;
            goto label_22aa7c;
        }
    }
    ctx->pc = 0x22AA6Cu;
    // 0x22aa6c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22aa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22aa70: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22aa74: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AA74u;
    {
        const bool branch_taken_0x22aa74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22aa74) {
            ctx->pc = 0x22AA88u;
            goto label_22aa88;
        }
    }
    ctx->pc = 0x22AA7Cu;
label_22aa7c:
    // 0x22aa7c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x22aa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x22aa80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22aa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa84: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x22aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_22aa88:
    // 0x22aa88: 0xc0b82aa  jal         func_2E0AA8
    ctx->pc = 0x22AA88u;
    SET_GPR_U32(ctx, 31, 0x22AA90u);
    ctx->pc = 0x2E0AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0AA8u, 0x22AA88u, 0x22AA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA90u;
label_22aa90:
    // 0x22aa90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22aa90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22aa94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22aa94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22aa98: 0x3e00008  jr          $ra
    ctx->pc = 0x22AA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA98u;
        // 0x22aa9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AAA0u;
}
