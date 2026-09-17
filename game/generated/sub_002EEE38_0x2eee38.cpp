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

// Function: sub_002EEE38
// Address: 0x2eee38 - 0x2eee78
void sub_002EEE38_0x2eee38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEE38_0x2eee38");
#endif

    switch (ctx->pc) {
        case 0x2eee38u: goto label_2eee38;
        case 0x2eee3cu: goto label_2eee3c;
        case 0x2eee40u: goto label_2eee40;
        case 0x2eee44u: goto label_2eee44;
        case 0x2eee48u: goto label_2eee48;
        case 0x2eee4cu: goto label_2eee4c;
        case 0x2eee50u: goto label_2eee50;
        case 0x2eee54u: goto label_2eee54;
        case 0x2eee58u: goto label_2eee58;
        case 0x2eee5cu: goto label_2eee5c;
        case 0x2eee60u: goto label_2eee60;
        case 0x2eee64u: goto label_2eee64;
        case 0x2eee68u: goto label_2eee68;
        case 0x2eee6cu: goto label_2eee6c;
        case 0x2eee70u: goto label_2eee70;
        case 0x2eee74u: goto label_2eee74;
        default: break;
    }

    ctx->pc = 0x2eee38u;

label_2eee38:
    // 0x2eee38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eee38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2eee3c:
    // 0x2eee3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2eee40:
    // 0x2eee40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2eee40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2eee44:
    // 0x2eee44: 0xc0bba4e  jal         func_2EE938
label_2eee48:
    if (ctx->pc == 0x2EEE48u) {
        ctx->pc = 0x2EEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE44u;
        // 0x2eee48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEE4Cu;
        goto label_2eee4c;
    }
    ctx->pc = 0x2EEE44u;
    SET_GPR_U32(ctx, 31, 0x2EEE4Cu);
    ctx->pc = 0x2EEE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEE44u;
    // 0x2eee48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE938u, 0x2EEE44u, 0x2EEE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEE4Cu;
label_2eee4c:
    // 0x2eee4c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2eee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2eee50:
    // 0x2eee50: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x2eee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_2eee54:
    // 0x2eee54: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2eee54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2eee58:
    // 0x2eee58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2eee58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2eee5c:
    // 0x2eee5c: 0x60f809  jalr        $v1
label_2eee60:
    if (ctx->pc == 0x2EEE60u) {
        ctx->pc = 0x2EEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE5Cu;
        // 0x2eee60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEE64u;
        goto label_2eee64;
    }
    ctx->pc = 0x2EEE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EEE64u);
        ctx->pc = 0x2EEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE5Cu;
        // 0x2eee60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEE5Cu, 0x2EEE64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EEE64u;
label_2eee64:
    // 0x2eee64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eee64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2eee68:
    // 0x2eee68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2eee68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2eee6c:
    // 0x2eee6c: 0x3e00008  jr          $ra
label_2eee70:
    if (ctx->pc == 0x2EEE70u) {
        ctx->pc = 0x2EEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE6Cu;
        // 0x2eee70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EEE74u;
        goto label_2eee74;
    }
    ctx->pc = 0x2EEE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE6Cu;
        // 0x2eee70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEE74u;
label_2eee74:
    // 0x2eee74: 0x0  nop
    ctx->pc = 0x2eee74u;
    // NOP
    ctx->pc = 0x2eee78u;
}
