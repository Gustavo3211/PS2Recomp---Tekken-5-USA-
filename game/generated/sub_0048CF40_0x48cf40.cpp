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

// Function: sub_0048CF40
// Address: 0x48cf40 - 0x48cfb0
void sub_0048CF40_0x48cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CF40_0x48cf40");
#endif

    switch (ctx->pc) {
        case 0x48cf60u: goto label_48cf60;
        case 0x48cf8cu: goto label_48cf8c;
        default: break;
    }

    ctx->pc = 0x48cf40u;

    // 0x48cf40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48cf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48cf44: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x48cf44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x48cf48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48cf4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48cf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48cf50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48cf50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cf54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48cf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48cf58: 0x58c03  sra         $s1, $a1, 16
    ctx->pc = 0x48cf58u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    // 0x48cf5c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x48cf5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_48cf60:
    // 0x48cf60: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x48cf60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x48cf64: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x48CF64u;
    {
        const bool branch_taken_0x48cf64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x48CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CF64u;
        // 0x48cf68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cf64) {
            ctx->pc = 0x48CF98u;
            goto label_48cf98;
        }
    }
    ctx->pc = 0x48CF6Cu;
    // 0x48cf6c: 0x0  nop
    ctx->pc = 0x48cf6cu;
    // NOP
    // 0x48cf70: 0x0  nop
    ctx->pc = 0x48cf70u;
    // NOP
    // 0x48cf74: 0x0  nop
    ctx->pc = 0x48cf74u;
    // NOP
    // 0x48cf78: 0x0  nop
    ctx->pc = 0x48cf78u;
    // NOP
    // 0x48cf7c: 0x5622fff8  bnel        $s1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x48CF7Cu;
    {
        const bool branch_taken_0x48cf7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x48cf7c) {
            ctx->pc = 0x48CF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48CF7Cu;
            // 0x48cf80: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48CF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48cf60;
        }
    }
    ctx->pc = 0x48CF84u;
    // 0x48cf84: 0xc123392  jal         func_48CE48
    ctx->pc = 0x48CF84u;
    SET_GPR_U32(ctx, 31, 0x48CF8Cu);
    ctx->pc = 0x48CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CE48u, 0x48CF84u, 0x48CF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CF8Cu;
label_48cf8c:
    // 0x48cf8c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x48CF8Cu;
    {
        const bool branch_taken_0x48cf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CF8Cu;
        // 0x48cf90: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cf8c) {
            ctx->pc = 0x48CF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48cf60;
        }
    }
    ctx->pc = 0x48CF94u;
    // 0x48cf94: 0x0  nop
    ctx->pc = 0x48cf94u;
    // NOP
label_48cf98:
    // 0x48cf98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48cf98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48cf9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48cf9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48cfa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48cfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48cfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x48CFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CFA4u;
        // 0x48cfa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CFACu;
    // 0x48cfac: 0x0  nop
    ctx->pc = 0x48cfacu;
    // NOP
    ctx->pc = 0x48cfb0u;
}
