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

// Function: sub_0033EAF8
// Address: 0x33eaf8 - 0x33eb40
void sub_0033EAF8_0x33eaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EAF8_0x33eaf8");
#endif

    switch (ctx->pc) {
        case 0x33eaf8u: goto label_33eaf8;
        case 0x33eafcu: goto label_33eafc;
        case 0x33eb00u: goto label_33eb00;
        case 0x33eb04u: goto label_33eb04;
        case 0x33eb08u: goto label_33eb08;
        case 0x33eb0cu: goto label_33eb0c;
        case 0x33eb10u: goto label_33eb10;
        case 0x33eb14u: goto label_33eb14;
        case 0x33eb18u: goto label_33eb18;
        case 0x33eb1cu: goto label_33eb1c;
        case 0x33eb20u: goto label_33eb20;
        case 0x33eb24u: goto label_33eb24;
        case 0x33eb28u: goto label_33eb28;
        case 0x33eb2cu: goto label_33eb2c;
        case 0x33eb30u: goto label_33eb30;
        case 0x33eb34u: goto label_33eb34;
        case 0x33eb38u: goto label_33eb38;
        case 0x33eb3cu: goto label_33eb3c;
        default: break;
    }

    ctx->pc = 0x33eaf8u;

label_33eaf8:
    // 0x33eaf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33eaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33eafc:
    // 0x33eafc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33eafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33eb00:
    // 0x33eb00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33eb00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33eb04:
    // 0x33eb04: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33eb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_33eb08:
    // 0x33eb08: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x33eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33eb0c:
    // 0x33eb0c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x33eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_33eb10:
    // 0x33eb10: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33eb10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33eb14:
    // 0x33eb14: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33eb18:
    // 0x33eb18: 0x60f809  jalr        $v1
label_33eb1c:
    if (ctx->pc == 0x33EB1Cu) {
        ctx->pc = 0x33EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB18u;
        // 0x33eb1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EB20u;
        goto label_33eb20;
    }
    ctx->pc = 0x33EB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33EB20u);
        ctx->pc = 0x33EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB18u;
        // 0x33eb1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EB18u, 0x33EB20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33EB20u;
label_33eb20:
    // 0x33eb20: 0x8f84cccc  lw          $a0, -0x3334($gp)
    ctx->pc = 0x33eb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954188)));
label_33eb24:
    // 0x33eb24: 0xc0cf186  jal         func_33C618
label_33eb28:
    if (ctx->pc == 0x33EB28u) {
        ctx->pc = 0x33EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB24u;
        // 0x33eb28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EB2Cu;
        goto label_33eb2c;
    }
    ctx->pc = 0x33EB24u;
    SET_GPR_U32(ctx, 31, 0x33EB2Cu);
    ctx->pc = 0x33EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EB24u;
    // 0x33eb28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C618u, 0x33EB24u, 0x33EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EB2Cu;
label_33eb2c:
    // 0x33eb2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33eb2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33eb30:
    // 0x33eb30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33eb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33eb34:
    // 0x33eb34: 0x3e00008  jr          $ra
label_33eb38:
    if (ctx->pc == 0x33EB38u) {
        ctx->pc = 0x33EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB34u;
        // 0x33eb38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EB3Cu;
        goto label_33eb3c;
    }
    ctx->pc = 0x33EB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EB34u;
        // 0x33eb38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EB3Cu;
label_33eb3c:
    // 0x33eb3c: 0x0  nop
    ctx->pc = 0x33eb3cu;
    // NOP
    ctx->pc = 0x33eb40u;
}
