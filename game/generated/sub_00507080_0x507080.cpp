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

// Function: sub_00507080
// Address: 0x507080 - 0x507128
void sub_00507080_0x507080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00507080_0x507080");
#endif

    switch (ctx->pc) {
        case 0x5070c4u: goto label_5070c4;
        default: break;
    }

    ctx->pc = 0x507080u;

    // 0x507080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x507080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x507084: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x507084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x507088: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x507088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x50708c: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x50708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x507090: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x507090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x507094: 0x24520054  addiu       $s2, $v0, 0x54
    ctx->pc = 0x507094u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x507098: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x507098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x50709c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x50709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x5070a0: 0x84434cce  lh          $v1, 0x4CCE($v0)
    ctx->pc = 0x5070a0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x903D4Eu));
    // 0x5070a4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x5070A4u;
    {
        const bool branch_taken_0x5070a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5070A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5070A4u;
        // 0x5070a8: 0x24510050  addiu       $s1, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5070a4) {
            ctx->pc = 0x507110u;
            goto label_507110;
        }
    }
    ctx->pc = 0x5070ACu;
    // 0x5070ac: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x5070acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x5070b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x5070b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5070b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x5070b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5070b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x5070b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5070bc: 0xc14481c  jal         func_512070
    ctx->pc = 0x5070BCu;
    SET_GPR_U32(ctx, 31, 0x5070C4u);
    ctx->pc = 0x5070C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5070BCu;
    // 0x5070c0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x5070BCu, 0x5070C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5070C4u;
label_5070c4:
    // 0x5070c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5070c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5070c8: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x5070C8u;
    {
        const bool branch_taken_0x5070c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x5070CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5070C8u;
        // 0x5070cc: 0x24040200  addiu       $a0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5070c8) {
            ctx->pc = 0x507104u;
            goto label_507104;
        }
    }
    ctx->pc = 0x5070D0u;
    // 0x5070d0: 0x24020210  addiu       $v0, $zero, 0x210
    ctx->pc = 0x5070d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x5070d4: 0x24030176  addiu       $v1, $zero, 0x176
    ctx->pc = 0x5070d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
    // 0x5070d8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x5070d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x5070dc: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x5070dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x5070e0: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x5070e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x5070e4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x5070e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x5070e8: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x5070e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x5070ec: 0xa604000a  sh          $a0, 0xA($s0)
    ctx->pc = 0x5070ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x5070f0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x5070f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x5070f4: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x5070f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x5070f8: 0xa6040008  sh          $a0, 0x8($s0)
    ctx->pc = 0x5070f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x5070fc: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x5070fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x507100: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x507100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_507104:
    // 0x507104: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x507104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507108: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x507108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x50710c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x50710cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_507110:
    // 0x507110: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x507110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x507114: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x507114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x507118: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x507118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50711c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x50711cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x507120: 0x3e00008  jr          $ra
    ctx->pc = 0x507120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507120u;
        // 0x507124: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x507120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x507128u;
}
