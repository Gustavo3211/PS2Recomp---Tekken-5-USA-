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

// Function: sub_00208A18
// Address: 0x208a18 - 0x208a90
void sub_00208A18_0x208a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208A18_0x208a18");
#endif

    ctx->pc = 0x208a18u;

    // 0x208a18: 0x8f8498d4  lw          $a0, -0x672C($gp)
    ctx->pc = 0x208a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940884)));
    // 0x208a1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208a20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208a24: 0x2882000e  slti        $v0, $a0, 0xE
    ctx->pc = 0x208a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x208a28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x208A28u;
    {
        const bool branch_taken_0x208a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A28u;
        // 0x208a2c: 0x2883000c  slti        $v1, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a28) {
            ctx->pc = 0x208A50u;
            goto label_208a50;
        }
    }
    ctx->pc = 0x208A30u;
    // 0x208a30: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x208A30u;
    {
        const bool branch_taken_0x208a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A30u;
        // 0x208a34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a30) {
            ctx->pc = 0x208A68u;
            goto label_208a68;
        }
    }
    ctx->pc = 0x208A38u;
    // 0x208a38: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x208a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x208a3c: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x208A3Cu;
    {
        const bool branch_taken_0x208a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x208A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A3Cu;
        // 0x208a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a3c) {
            ctx->pc = 0x208A6Cu;
            goto label_208a6c;
        }
    }
    ctx->pc = 0x208A44u;
    // 0x208a44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x208A44u;
    {
        const bool branch_taken_0x208a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208a44) {
            ctx->pc = 0x208A88u;
            goto label_208a88;
        }
    }
    ctx->pc = 0x208A4Cu;
    // 0x208a4c: 0x0  nop
    ctx->pc = 0x208a4cu;
    // NOP
label_208a50:
    // 0x208a50: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x208a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x208a54: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208A54u;
    {
        const bool branch_taken_0x208a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x208A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A54u;
        // 0x208a58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a54) {
            ctx->pc = 0x208A78u;
            goto label_208a78;
        }
    }
    ctx->pc = 0x208A5Cu;
    // 0x208a5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x208A5Cu;
    {
        const bool branch_taken_0x208a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208a5c) {
            ctx->pc = 0x208A88u;
            goto label_208a88;
        }
    }
    ctx->pc = 0x208A64u;
    // 0x208a64: 0x0  nop
    ctx->pc = 0x208a64u;
    // NOP
label_208a68:
    // 0x208a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208a6c:
    // 0x208a6c: 0x80a3a92  j           func_28EA48
    ctx->pc = 0x208A6Cu;
    ctx->pc = 0x208A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A6Cu;
    // 0x208a70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA48u;
    sub_0028EA48_0x28ea48(rdram, ctx, runtime); return;
    ctx->pc = 0x208A74u;
    // 0x208a74: 0x0  nop
    ctx->pc = 0x208a74u;
    // NOP
label_208a78:
    // 0x208a78: 0x8f8598d8  lw          $a1, -0x6728($gp)
    ctx->pc = 0x208a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940888)));
    // 0x208a7c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x208a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x208a80: 0x80a3a92  j           func_28EA48
    ctx->pc = 0x208A80u;
    ctx->pc = 0x208A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A80u;
    // 0x208a84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA48u;
    sub_0028EA48_0x28ea48(rdram, ctx, runtime); return;
    ctx->pc = 0x208A88u;
label_208a88:
    // 0x208a88: 0x3e00008  jr          $ra
    ctx->pc = 0x208A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A88u;
        // 0x208a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208A90u;
}
