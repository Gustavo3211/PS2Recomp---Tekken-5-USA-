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

// Function: sub_005116F8
// Address: 0x5116f8 - 0x5117c8
void sub_005116F8_0x5116f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005116F8_0x5116f8");
#endif

    switch (ctx->pc) {
        case 0x511764u: goto label_511764;
        case 0x511780u: goto label_511780;
        case 0x5117a0u: goto label_5117a0;
        default: break;
    }

    ctx->pc = 0x5116f8u;

    // 0x5116f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5116f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5116fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5116fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x511700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x511700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x511704: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x511704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x511708: 0x26020044  addiu       $v0, $s0, 0x44
    ctx->pc = 0x511708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x51170c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x51170cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x511710: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x511710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x511714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x511714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x511718: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x511718u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x51171c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x51171cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x511720: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x511720u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x511724: 0x4a10020  bgez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x511724u;
    {
        const bool branch_taken_0x511724 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x511728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511724u;
        // 0x511728: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511724) {
            ctx->pc = 0x5117A8u;
            goto label_5117a8;
        }
    }
    ctx->pc = 0x51172Cu;
    // 0x51172c: 0x2612000a  addiu       $s2, $s0, 0xA
    ctx->pc = 0x51172cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x511730: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x511730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x511734: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x511734u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x511738: 0x2453f080  addiu       $s3, $v0, -0xF80
    ctx->pc = 0x511738u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x51173c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x51173cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x511740: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x511740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x511744: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x511744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x511748: 0x8c6240c0  lw          $v0, 0x40C0($v1)
    ctx->pc = 0x511748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16576)));
    // 0x51174c: 0x50450017  beql        $v0, $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x51174Cu;
    {
        const bool branch_taken_0x51174c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x51174c) {
            ctx->pc = 0x511750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x51174Cu;
            // 0x511750: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5117ACu;
            goto label_5117ac;
        }
    }
    ctx->pc = 0x511754u;
    // 0x511754: 0x5602000a  bnel        $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x511754u;
    {
        const bool branch_taken_0x511754 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x511754) {
            ctx->pc = 0x511758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x511754u;
            // 0x511758: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x511780u;
            goto label_511780;
        }
    }
    ctx->pc = 0x51175Cu;
    // 0x51175c: 0xc144af2  jal         func_512BC8
    ctx->pc = 0x51175Cu;
    SET_GPR_U32(ctx, 31, 0x511764u);
    ctx->pc = 0x512BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512BC8u, 0x51175Cu, 0x511764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x511764u;
label_511764:
    // 0x511764: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x511764u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x511768: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x511768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x51176c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x51176cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x511770: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x511770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x511774: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x511774u;
    {
        const bool branch_taken_0x511774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x511778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511774u;
        // 0x511778: 0xac4340c0  sw          $v1, 0x40C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x511774) {
            ctx->pc = 0x5117A8u;
            goto label_5117a8;
        }
    }
    ctx->pc = 0x51177Cu;
    // 0x51177c: 0x0  nop
    ctx->pc = 0x51177cu;
    // NOP
label_511780:
    // 0x511780: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x511780u;
    {
        const bool branch_taken_0x511780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x511780) {
            ctx->pc = 0x511798u;
            goto label_511798;
        }
    }
    ctx->pc = 0x511788u;
    // 0x511788: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x511788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51178c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x51178cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x511790: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x511790u;
    {
        const bool branch_taken_0x511790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x511790) {
            ctx->pc = 0x511780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_511780;
        }
    }
    ctx->pc = 0x511798u;
label_511798:
    // 0x511798: 0xc144af2  jal         func_512BC8
    ctx->pc = 0x511798u;
    SET_GPR_U32(ctx, 31, 0x5117A0u);
    ctx->pc = 0x51179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x511798u;
    // 0x51179c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512BC8u, 0x511798u, 0x5117A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5117A0u;
label_5117a0:
    // 0x5117a0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x5117a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x5117a4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x5117a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_5117a8:
    // 0x5117a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5117a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_5117ac:
    // 0x5117ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5117acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5117b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5117b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5117b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5117b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5117b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5117b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5117bc: 0x3e00008  jr          $ra
    ctx->pc = 0x5117BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5117C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5117BCu;
        // 0x5117c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5117BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5117C4u;
    // 0x5117c4: 0x0  nop
    ctx->pc = 0x5117c4u;
    // NOP
    ctx->pc = 0x5117c8u;
}
