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

// Function: sub_00246E58
// Address: 0x246e58 - 0x246eb0
void sub_00246E58_0x246e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246E58_0x246e58");
#endif

    switch (ctx->pc) {
        case 0x246e70u: goto label_246e70;
        default: break;
    }

    ctx->pc = 0x246e58u;

    // 0x246e58: 0x8f85c9dc  lw          $a1, -0x3624($gp)
    ctx->pc = 0x246e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953436)));
    // 0x246e5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246e60: 0x18a00010  blez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x246E60u;
    {
        const bool branch_taken_0x246e60 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x246E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E60u;
        // 0x246e64: 0x8f83c9d8  lw          $v1, -0x3628($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e60) {
            ctx->pc = 0x246EA4u;
            goto label_246ea4;
        }
    }
    ctx->pc = 0x246E68u;
    // 0x246e68: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x246e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x246e6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x246e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_246e70:
    // 0x246e70: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x246E70u;
    {
        const bool branch_taken_0x246e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x246e70) {
            ctx->pc = 0x246E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246E70u;
            // 0x246e74: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x246E90u;
            goto label_246e90;
        }
    }
    ctx->pc = 0x246E78u;
    // 0x246e78: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x246e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x246e7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x246e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x246e80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x246e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x246e84: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x246E84u;
    {
        const bool branch_taken_0x246e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246e84) {
            ctx->pc = 0x246E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246E84u;
            // 0x246e88: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246E98u;
            goto label_246e98;
        }
    }
    ctx->pc = 0x246E8Cu;
    // 0x246e8c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x246e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_246e90:
    // 0x246e90: 0x8f85c9dc  lw          $a1, -0x3624($gp)
    ctx->pc = 0x246e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953436)));
    // 0x246e94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x246e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_246e98:
    // 0x246e98: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x246e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x246e9c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x246E9Cu;
    {
        const bool branch_taken_0x246e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E9Cu;
        // 0x246ea0: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e9c) {
            ctx->pc = 0x246E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246e70;
        }
    }
    ctx->pc = 0x246EA4u;
label_246ea4:
    // 0x246ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x246EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246EACu;
    // 0x246eac: 0x0  nop
    ctx->pc = 0x246eacu;
    // NOP
    ctx->pc = 0x246eb0u;
}
