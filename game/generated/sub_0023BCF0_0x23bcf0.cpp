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

// Function: sub_0023BCF0
// Address: 0x23bcf0 - 0x23bd58
void sub_0023BCF0_0x23bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BCF0_0x23bcf0");
#endif

    switch (ctx->pc) {
        case 0x23bd10u: goto label_23bd10;
        default: break;
    }

    ctx->pc = 0x23bcf0u;

    // 0x23bcf0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x23bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x23bcf4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x23bcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23bcf8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x23bcf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x23bcfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23bcfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23bd00: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23BD00u;
    {
        const bool branch_taken_0x23bd00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD00u;
        // 0x23bd04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd00) {
            ctx->pc = 0x23BD4Cu;
            goto label_23bd4c;
        }
    }
    ctx->pc = 0x23BD08u;
    // 0x23bd08: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23bd08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bd0c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x23bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23bd10:
    // 0x23bd10: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x23bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23bd14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23bd18: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23bd1c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x23BD1Cu;
    {
        const bool branch_taken_0x23bd1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bd1c) {
            ctx->pc = 0x23BD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BD1Cu;
            // 0x23bd20: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BD40u;
            goto label_23bd40;
        }
    }
    ctx->pc = 0x23BD24u;
    // 0x23bd24: 0xc4400090  lwc1        $f0, 0x90($v0)
    ctx->pc = 0x23bd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23bd28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23bd28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bd2c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x23BD2Cu;
    {
        const bool branch_taken_0x23bd2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bd2c) {
            ctx->pc = 0x23BD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BD2Cu;
            // 0x23bd30: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BD40u;
            goto label_23bd40;
        }
    }
    ctx->pc = 0x23BD34u;
    // 0x23bd34: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x23bd34u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x23bd38: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23bd38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bd3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23bd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23bd40:
    // 0x23bd40: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x23bd40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x23bd44: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x23BD44u;
    {
        const bool branch_taken_0x23bd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD44u;
        // 0x23bd48: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bd44) {
            ctx->pc = 0x23BD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23bd10;
        }
    }
    ctx->pc = 0x23BD4Cu;
label_23bd4c:
    // 0x23bd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x23BD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BD4Cu;
        // 0x23bd50: 0xac860034  sw          $a2, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BD54u;
    // 0x23bd54: 0x0  nop
    ctx->pc = 0x23bd54u;
    // NOP
    ctx->pc = 0x23bd58u;
}
