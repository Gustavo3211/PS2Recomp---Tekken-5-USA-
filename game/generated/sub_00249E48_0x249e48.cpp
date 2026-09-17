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

// Function: sub_00249E48
// Address: 0x249e48 - 0x249e98
void sub_00249E48_0x249e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249E48_0x249e48");
#endif

    switch (ctx->pc) {
        case 0x249e68u: goto label_249e68;
        default: break;
    }

    ctx->pc = 0x249e48u;

    // 0x249e48: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x249E48u;
    {
        const bool branch_taken_0x249e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E48u;
        // 0x249e4c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e48) {
            ctx->pc = 0x249E8Cu;
            goto label_249e8c;
        }
    }
    ctx->pc = 0x249E50u;
    // 0x249e50: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x249e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x249e54: 0x4a0000d  bltz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x249E54u;
    {
        const bool branch_taken_0x249e54 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x249E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E54u;
        // 0x249e58: 0x65102a  slt         $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e54) {
            ctx->pc = 0x249E8Cu;
            goto label_249e8c;
        }
    }
    ctx->pc = 0x249E5Cu;
    // 0x249e5c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x249E5Cu;
    {
        const bool branch_taken_0x249e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E5Cu;
        // 0x249e60: 0xa4800002  sh          $zero, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e5c) {
            ctx->pc = 0x249E8Cu;
            goto label_249e8c;
        }
    }
    ctx->pc = 0x249E64u;
    // 0x249e64: 0x0  nop
    ctx->pc = 0x249e64u;
    // NOP
label_249e68:
    // 0x249e68: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x249e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x249e6c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x249e6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249e70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x249e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x249e74: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x249e74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249e78: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x249E78u;
    {
        const bool branch_taken_0x249e78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x249E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E78u;
        // 0x249e7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e78) {
            ctx->pc = 0x249E8Cu;
            goto label_249e8c;
        }
    }
    ctx->pc = 0x249E80u;
    // 0x249e80: 0x0  nop
    ctx->pc = 0x249e80u;
    // NOP
    // 0x249e84: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x249E84u;
    {
        const bool branch_taken_0x249e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E84u;
        // 0x249e88: 0xa4800002  sh          $zero, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e84) {
            ctx->pc = 0x249E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249e68;
        }
    }
    ctx->pc = 0x249E8Cu;
label_249e8c:
    // 0x249e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x249E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249E94u;
    // 0x249e94: 0x0  nop
    ctx->pc = 0x249e94u;
    // NOP
    ctx->pc = 0x249e98u;
}
