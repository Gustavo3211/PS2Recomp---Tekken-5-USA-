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

// Function: sub_002DAE28
// Address: 0x2dae28 - 0x2daeb0
void sub_002DAE28_0x2dae28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAE28_0x2dae28");
#endif

    switch (ctx->pc) {
        case 0x2daea0u: goto label_2daea0;
        default: break;
    }

    ctx->pc = 0x2dae28u;

    // 0x2dae28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dae28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dae2c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2dae2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dae30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dae34: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2dae34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2dae38: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2dae38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2dae3c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2dae3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2dae40: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DAE40u;
    {
        const bool branch_taken_0x2dae40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE40u;
        // 0x2dae44: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae40) {
            ctx->pc = 0x2DAEA0u;
            goto label_2daea0;
        }
    }
    ctx->pc = 0x2DAE48u;
    // 0x2dae48: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2DAE48u;
    {
        const bool branch_taken_0x2dae48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dae48) {
            ctx->pc = 0x2DAE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DAE48u;
            // 0x2dae4c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAEA4u;
            goto label_2daea4;
        }
    }
    ctx->pc = 0x2DAE50u;
    // 0x2dae50: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2dae50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2dae54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2dae54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dae58: 0x8c82f4d0  lw          $v0, -0xB30($a0)
    ctx->pc = 0x2dae58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF4D0u));
    // 0x2dae5c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2dae5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dae60: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DAE60u;
    {
        const bool branch_taken_0x2dae60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2DAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE60u;
        // 0x2dae64: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dae60) {
            ctx->pc = 0x2DAEA0u;
            goto label_2daea0;
        }
    }
    ctx->pc = 0x2DAE68u;
    // 0x2dae68: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2dae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2dae6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dae6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dae70: 0x3c0880ff  lui         $t0, 0x80FF
    ctx->pc = 0x2dae70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33023 << 16));
    // 0x2dae74: 0x3c01000c  lui         $at, 0xC
    ctx->pc = 0x2dae74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12 << 16));
    // 0x2dae78: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2dae78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x2dae7c: 0x2484f2d8  addiu       $a0, $a0, -0xD28
    ctx->pc = 0x2dae7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963928));
    // 0x2dae80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dae80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dae84: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2dae84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2dae88: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2dae88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2dae8c: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x2dae8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2dae90: 0x240a018d  addiu       $t2, $zero, 0x18D
    ctx->pc = 0x2dae90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 397));
    // 0x2dae94: 0x240b006e  addiu       $t3, $zero, 0x6E
    ctx->pc = 0x2dae94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2dae98: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2DAE98u;
    SET_GPR_U32(ctx, 31, 0x2DAEA0u);
    ctx->pc = 0x2DAE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAE98u;
    // 0x2dae9c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2DAE98u, 0x2DAEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAEA0u;
label_2daea0:
    // 0x2daea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2daea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2daea4:
    // 0x2daea4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAEA4u;
        // 0x2daea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAEACu;
    // 0x2daeac: 0x0  nop
    ctx->pc = 0x2daeacu;
    // NOP
    ctx->pc = 0x2daeb0u;
}
