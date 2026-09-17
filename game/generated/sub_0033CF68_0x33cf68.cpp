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

// Function: sub_0033CF68
// Address: 0x33cf68 - 0x33cfc8
void sub_0033CF68_0x33cf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CF68_0x33cf68");
#endif

    switch (ctx->pc) {
        case 0x33cf88u: goto label_33cf88;
        case 0x33cfb8u: goto label_33cfb8;
        default: break;
    }

    ctx->pc = 0x33cf68u;

    // 0x33cf68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33cf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33cf6c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x33cf6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cf70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33cf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33cf74: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x33cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x33cf78: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x33cf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x33cf7c: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x33cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x33cf80: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x33CF80u;
    {
        const bool branch_taken_0x33cf80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF80u;
        // 0x33cf84: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cf80) {
            ctx->pc = 0x33CFACu;
            goto label_33cfac;
        }
    }
    ctx->pc = 0x33CF88u;
label_33cf88:
    // 0x33cf88: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x33cf88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33cf8c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x33cf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x33cf90: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33cf94: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x33cf94u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x33cf98: 0x0  nop
    ctx->pc = 0x33cf98u;
    // NOP
    // 0x33cf9c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33CF9Cu;
    {
        const bool branch_taken_0x33cf9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF9Cu;
        // 0x33cfa0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cf9c) {
            ctx->pc = 0x33CF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33cf88;
        }
    }
    ctx->pc = 0x33CFA4u;
    // 0x33cfa4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x33cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x33cfa8: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x33cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_33cfac:
    // 0x33cfac: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x33cfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33cfb0: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x33CFB0u;
    SET_GPR_U32(ctx, 31, 0x33CFB8u);
    ctx->pc = 0x33CFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CFB0u;
    // 0x33cfb4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x33CFB0u, 0x33CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CFB8u;
label_33cfb8:
    // 0x33cfb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cfbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33cfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x33CFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CFC0u;
        // 0x33cfc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CFC8u;
}
