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

// Function: sub_002ECED0
// Address: 0x2eced0 - 0x2ecf58
void sub_002ECED0_0x2eced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECED0_0x2eced0");
#endif

    switch (ctx->pc) {
        case 0x2ecef4u: goto label_2ecef4;
        case 0x2ecf18u: goto label_2ecf18;
        case 0x2ecf48u: goto label_2ecf48;
        default: break;
    }

    ctx->pc = 0x2eced0u;

    // 0x2eced0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eced0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eced4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eced4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eced8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eced8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecedc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ecedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ecee0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2ecee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2ecee4: 0x2442eea0  addiu       $v0, $v0, -0x1160
    ctx->pc = 0x2ecee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962848));
    // 0x2ecee8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2ecee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2eceec: 0xc0a5ddc  jal         func_297770
    ctx->pc = 0x2ECEECu;
    SET_GPR_U32(ctx, 31, 0x2ECEF4u);
    ctx->pc = 0x2ECEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECEECu;
    // 0x2ecef0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297770u, 0x2ECEECu, 0x2ECEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECEF4u;
label_2ecef4:
    // 0x2ecef4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ecef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ecef8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ecef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ecefc: 0x244207f0  addiu       $v0, $v0, 0x7F0
    ctx->pc = 0x2ecefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
    // 0x2ecf00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ecf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecf04: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2ecf04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2ecf08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ecf08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecf0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ecf0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecf10: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x2ECF10u;
    SET_GPR_U32(ctx, 31, 0x2ECF18u);
    ctx->pc = 0x2ECF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECF10u;
    // 0x2ecf14: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x2ECF10u, 0x2ECF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECF18u;
label_2ecf18:
    // 0x2ecf18: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2ecf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2ecf1c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2ecf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2ecf20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ecf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ecf24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ECF24u;
    {
        const bool branch_taken_0x2ecf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF24u;
        // 0x2ecf28: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf24) {
            ctx->pc = 0x2ECF48u;
            goto label_2ecf48;
        }
    }
    ctx->pc = 0x2ECF2Cu;
    // 0x2ecf2c: 0x0  nop
    ctx->pc = 0x2ecf2cu;
    // NOP
    // 0x2ecf30: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2ecf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2ecf34: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2ecf34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2ecf38: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2ecf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2ecf3c: 0x2484064c  addiu       $a0, $a0, 0x64C
    ctx->pc = 0x2ecf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1612));
    // 0x2ecf40: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2ECF40u;
    SET_GPR_U32(ctx, 31, 0x2ECF48u);
    ctx->pc = 0x2ECF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECF40u;
    // 0x2ecf44: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2ECF40u, 0x2ECF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECF48u;
label_2ecf48:
    // 0x2ecf48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ecf48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecf4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ecf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ecf50: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF50u;
        // 0x2ecf54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECF58u;
}
