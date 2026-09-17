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

// Function: sub_003405D8
// Address: 0x3405d8 - 0x340660
void sub_003405D8_0x3405d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003405D8_0x3405d8");
#endif

    switch (ctx->pc) {
        case 0x3405f8u: goto label_3405f8;
        default: break;
    }

    ctx->pc = 0x3405d8u;

    // 0x3405d8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3405d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3405dc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3405dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3405e0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3405e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3405e4: 0x1043001b  beq         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3405E4u;
    {
        const bool branch_taken_0x3405e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3405E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3405E4u;
        // 0x3405e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3405e4) {
            ctx->pc = 0x340654u;
            goto label_340654;
        }
    }
    ctx->pc = 0x3405ECu;
    // 0x3405ec: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x3405ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3405f0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3405f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3405f4: 0x0  nop
    ctx->pc = 0x3405f4u;
    // NOP
label_3405f8:
    // 0x3405f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3405f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3405fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3405fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x340600: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x340600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x340604: 0x2904000a  slti        $a0, $t0, 0xA
    ctx->pc = 0x340604u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x340608: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x340608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x34060c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x34060cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x340610: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x340610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x340614: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x340614u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x340618: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x340618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x34061c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x34061cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x340620: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x340620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x340624: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x340624u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x340628: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x340628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x34062c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x34062cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x340630: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x340630u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x340634: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x340634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x340638: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x340638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x34063c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x34063cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x340640: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x340640u;
    {
        const bool branch_taken_0x340640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x340644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340640u;
        // 0x340644: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340640) {
            ctx->pc = 0x340654u;
            goto label_340654;
        }
    }
    ctx->pc = 0x340648u;
    // 0x340648: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x340648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34064c: 0x5449ffea  bnel        $v0, $t1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x34064Cu;
    {
        const bool branch_taken_0x34064c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x34064c) {
            ctx->pc = 0x340650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34064Cu;
            // 0x340650: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3405F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3405f8;
        }
    }
    ctx->pc = 0x340654u;
label_340654:
    // 0x340654: 0x3e00008  jr          $ra
    ctx->pc = 0x340654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340654u;
        // 0x340658: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34065Cu;
    // 0x34065c: 0x0  nop
    ctx->pc = 0x34065cu;
    // NOP
    ctx->pc = 0x340660u;
}
