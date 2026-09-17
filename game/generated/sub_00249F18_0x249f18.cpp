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

// Function: sub_00249F18
// Address: 0x249f18 - 0x249fa8
void sub_00249F18_0x249f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249F18_0x249f18");
#endif

    switch (ctx->pc) {
        case 0x249f38u: goto label_249f38;
        case 0x249f78u: goto label_249f78;
        default: break;
    }

    ctx->pc = 0x249f18u;

    // 0x249f18: 0x8f83c9e8  lw          $v1, -0x3618($gp)
    ctx->pc = 0x249f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953448)));
    // 0x249f1c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x249F1Cu;
    {
        const bool branch_taken_0x249f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x249f1c) {
            ctx->pc = 0x249F5Cu;
            goto label_249f5c;
        }
    }
    ctx->pc = 0x249F24u;
    // 0x249f24: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x249f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x249f28: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x249F28u;
    {
        const bool branch_taken_0x249f28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x249f28) {
            ctx->pc = 0x249F5Cu;
            goto label_249f5c;
        }
    }
    ctx->pc = 0x249F30u;
    // 0x249f30: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x249f30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x249f34: 0x0  nop
    ctx->pc = 0x249f34u;
    // NOP
label_249f38:
    // 0x249f38: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x249F38u;
    {
        const bool branch_taken_0x249f38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x249F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F38u;
        // 0x249f3c: 0x94640002  lhu         $a0, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f38) {
            ctx->pc = 0x249F48u;
            goto label_249f48;
        }
    }
    ctx->pc = 0x249F40u;
    // 0x249f40: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x249f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x249f44: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x249f44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
label_249f48:
    // 0x249f48: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x249f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x249f4c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x249f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x249f50: 0x0  nop
    ctx->pc = 0x249f50u;
    // NOP
    // 0x249f54: 0x443fff8  bgezl       $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x249F54u;
    {
        const bool branch_taken_0x249f54 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x249f54) {
            ctx->pc = 0x249F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249F54u;
            // 0x249f58: 0x84620002  lh          $v0, 0x2($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249f38;
        }
    }
    ctx->pc = 0x249F5Cu;
label_249f5c:
    // 0x249f5c: 0x8f83c9ec  lw          $v1, -0x3614($gp)
    ctx->pc = 0x249f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953452)));
    // 0x249f60: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x249F60u;
    {
        const bool branch_taken_0x249f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x249f60) {
            ctx->pc = 0x249F9Cu;
            goto label_249f9c;
        }
    }
    ctx->pc = 0x249F68u;
    // 0x249f68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x249f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x249f6c: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x249F6Cu;
    {
        const bool branch_taken_0x249f6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x249f6c) {
            ctx->pc = 0x249F9Cu;
            goto label_249f9c;
        }
    }
    ctx->pc = 0x249F74u;
    // 0x249f74: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x249f74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_249f78:
    // 0x249f78: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x249F78u;
    {
        const bool branch_taken_0x249f78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x249F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F78u;
        // 0x249f7c: 0x94640002  lhu         $a0, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f78) {
            ctx->pc = 0x249F88u;
            goto label_249f88;
        }
    }
    ctx->pc = 0x249F80u;
    // 0x249f80: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x249f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x249f84: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x249f84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
label_249f88:
    // 0x249f88: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x249f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x249f8c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x249f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x249f90: 0x0  nop
    ctx->pc = 0x249f90u;
    // NOP
    // 0x249f94: 0x443fff8  bgezl       $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x249F94u;
    {
        const bool branch_taken_0x249f94 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x249f94) {
            ctx->pc = 0x249F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249F94u;
            // 0x249f98: 0x84620002  lh          $v0, 0x2($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249f78;
        }
    }
    ctx->pc = 0x249F9Cu;
label_249f9c:
    // 0x249f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x249F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249FA4u;
    // 0x249fa4: 0x0  nop
    ctx->pc = 0x249fa4u;
    // NOP
    ctx->pc = 0x249fa8u;
}
