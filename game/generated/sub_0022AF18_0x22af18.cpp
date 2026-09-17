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

// Function: sub_0022AF18
// Address: 0x22af18 - 0x22af98
void sub_0022AF18_0x22af18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AF18_0x22af18");
#endif

    switch (ctx->pc) {
        case 0x22af40u: goto label_22af40;
        case 0x22af80u: goto label_22af80;
        default: break;
    }

    ctx->pc = 0x22af18u;

    // 0x22af18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22af18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22af1c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x22af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x22af20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22af20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22af24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22af24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22af28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22af2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22af2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22af30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22af34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22af34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22af38: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22AF38u;
    SET_GPR_U32(ctx, 31, 0x22AF40u);
    ctx->pc = 0x22AF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF38u;
    // 0x22af3c: 0x244437e0  addiu       $a0, $v0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22AF38u, 0x22AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF40u;
label_22af40:
    // 0x22af40: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x22af40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x22af44: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22af44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22af48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22af48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22af4c: 0x24460070  addiu       $a2, $v0, 0x70
    ctx->pc = 0x22af4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x22af50: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x22af50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22af54: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22AF54u;
    {
        const bool branch_taken_0x22af54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF54u;
        // 0x22af58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af54) {
            ctx->pc = 0x22AF6Cu;
            goto label_22af6c;
        }
    }
    ctx->pc = 0x22AF5Cu;
    // 0x22af5c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22af60: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22af60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22af64: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AF64u;
    {
        const bool branch_taken_0x22af64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22af64) {
            ctx->pc = 0x22AF78u;
            goto label_22af78;
        }
    }
    ctx->pc = 0x22AF6Cu;
label_22af6c:
    // 0x22af6c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x22af6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x22af70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22af70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af74: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x22af74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_22af78:
    // 0x22af78: 0xc0b88c8  jal         func_2E2320
    ctx->pc = 0x22AF78u;
    SET_GPR_U32(ctx, 31, 0x22AF80u);
    ctx->pc = 0x2E2320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2320u, 0x22AF78u, 0x22AF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF80u;
label_22af80:
    // 0x22af80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22af80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22af84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22af84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22af88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22af88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22af8c: 0x3e00008  jr          $ra
    ctx->pc = 0x22AF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF8Cu;
        // 0x22af90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AF94u;
    // 0x22af94: 0x0  nop
    ctx->pc = 0x22af94u;
    // NOP
    ctx->pc = 0x22af98u;
}
