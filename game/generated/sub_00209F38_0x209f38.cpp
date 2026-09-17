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

// Function: sub_00209F38
// Address: 0x209f38 - 0x209fa8
void sub_00209F38_0x209f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209F38_0x209f38");
#endif

    switch (ctx->pc) {
        case 0x209f8cu: goto label_209f8c;
        default: break;
    }

    ctx->pc = 0x209f38u;

    // 0x209f38: 0x8f829730  lw          $v0, -0x68D0($gp)
    ctx->pc = 0x209f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x209f3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209f3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209f40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209f44: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x209f44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x209f48: 0x26038858  addiu       $v1, $s0, -0x77A8
    ctx->pc = 0x209f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x209f4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x209f50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x209f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x209f54: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x209f54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3A8878u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8878u, _value); } while (0);
    // 0x209f58: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x209f58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f5c: 0xaf829730  sw          $v0, -0x68D0($gp)
    ctx->pc = 0x209f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 2));
    // 0x209f60: 0x90820205  lbu         $v0, 0x205($a0)
    ctx->pc = 0x209f60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 517)));
    // 0x209f64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x209F64u;
    {
        const bool branch_taken_0x209f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F64u;
        // 0x209f68: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f64) {
            ctx->pc = 0x209F78u;
            goto label_209f78;
        }
    }
    ctx->pc = 0x209F6Cu;
    // 0x209f6c: 0x90a20205  lbu         $v0, 0x205($a1)
    ctx->pc = 0x209f6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 517)));
    // 0x209f70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x209F70u;
    {
        const bool branch_taken_0x209f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209f70) {
            ctx->pc = 0x209F7Cu;
            goto label_209f7c;
        }
    }
    ctx->pc = 0x209F78u;
label_209f78:
    // 0x209f78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209f7c:
    // 0x209f7c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x209F7Cu;
    {
        const bool branch_taken_0x209f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F7Cu;
        // 0x209f80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f7c) {
            ctx->pc = 0x209F98u;
            goto label_209f98;
        }
    }
    ctx->pc = 0x209F84u;
    // 0x209f84: 0xc082162  jal         func_208588
    ctx->pc = 0x209F84u;
    SET_GPR_U32(ctx, 31, 0x209F8Cu);
    ctx->pc = 0x209F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F84u;
    // 0x209f88: 0xaf829738  sw          $v0, -0x68C8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940472), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208588u, 0x209F84u, 0x209F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F8Cu;
label_209f8c:
    // 0x209f8c: 0x26038858  addiu       $v1, $s0, -0x77A8
    ctx->pc = 0x209f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936664));
    // 0x209f90: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x209f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x209f94: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x209f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_209f98:
    // 0x209f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209f9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x209FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FA0u;
        // 0x209fa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209FA8u;
}
