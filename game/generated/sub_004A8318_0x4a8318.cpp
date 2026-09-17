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

// Function: sub_004A8318
// Address: 0x4a8318 - 0x4a8388
void sub_004A8318_0x4a8318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8318_0x4a8318");
#endif

    switch (ctx->pc) {
        case 0x4a8330u: goto label_4a8330;
        case 0x4a8338u: goto label_4a8338;
        case 0x4a8364u: goto label_4a8364;
        default: break;
    }

    ctx->pc = 0x4a8318u;

    // 0x4a8318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a8318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a831c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a831cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a8320: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a8320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a8324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a8324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a8328: 0xc1232ea  jal         func_48CBA8
    ctx->pc = 0x4A8328u;
    SET_GPR_U32(ctx, 31, 0x4A8330u);
    ctx->pc = 0x4A832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8328u;
    // 0x4a832c: 0x241100d7  addiu       $s1, $zero, 0xD7 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBA8u, 0x4A8328u, 0x4A8330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8330u;
label_4a8330:
    // 0x4a8330: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a8330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a8334: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x4a8334u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a8338:
    // 0x4a8338: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x4a8338u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a833c: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4A833Cu;
    {
        const bool branch_taken_0x4a833c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A8340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A833Cu;
        // 0x4a8340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a833c) {
            ctx->pc = 0x4A8370u;
            goto label_4a8370;
        }
    }
    ctx->pc = 0x4A8344u;
    // 0x4a8344: 0x0  nop
    ctx->pc = 0x4a8344u;
    // NOP
    // 0x4a8348: 0x0  nop
    ctx->pc = 0x4a8348u;
    // NOP
    // 0x4a834c: 0x0  nop
    ctx->pc = 0x4a834cu;
    // NOP
    // 0x4a8350: 0x0  nop
    ctx->pc = 0x4a8350u;
    // NOP
    // 0x4a8354: 0x5451fff8  bnel        $v0, $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4A8354u;
    {
        const bool branch_taken_0x4a8354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4a8354) {
            ctx->pc = 0x4A8358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8354u;
            // 0x4a8358: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8338;
        }
    }
    ctx->pc = 0x4A835Cu;
    // 0x4a835c: 0xc123392  jal         func_48CE48
    ctx->pc = 0x4A835Cu;
    SET_GPR_U32(ctx, 31, 0x4A8364u);
    ctx->pc = 0x48CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CE48u, 0x4A835Cu, 0x4A8364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8364u;
label_4a8364:
    // 0x4a8364: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x4A8364u;
    {
        const bool branch_taken_0x4a8364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8364u;
        // 0x4a8368: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8364) {
            ctx->pc = 0x4A8338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8338;
        }
    }
    ctx->pc = 0x4A836Cu;
    // 0x4a836c: 0x0  nop
    ctx->pc = 0x4a836cu;
    // NOP
label_4a8370:
    // 0x4a8370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a8370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8374: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a8374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a8378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a8378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a837c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A837Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A837Cu;
        // 0x4a8380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A837Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8384u;
    // 0x4a8384: 0x0  nop
    ctx->pc = 0x4a8384u;
    // NOP
    ctx->pc = 0x4a8388u;
}
