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

// Function: sub_005136B8
// Address: 0x5136b8 - 0x5137c0
void sub_005136B8_0x5136b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005136B8_0x5136b8");
#endif

    switch (ctx->pc) {
        case 0x5136c8u: goto label_5136c8;
        case 0x5136f8u: goto label_5136f8;
        case 0x513790u: goto label_513790;
        default: break;
    }

    ctx->pc = 0x5136b8u;

    // 0x5136b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5136b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5136bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5136bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5136c0: 0xc124620  jal         func_491880
    ctx->pc = 0x5136C0u;
    SET_GPR_U32(ctx, 31, 0x5136C8u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x5136C0u, 0x5136C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5136C8u;
label_5136c8:
    // 0x5136c8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x5136c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x5136cc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x5136ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x5136d0: 0x8ca5e80c  lw          $a1, -0x17F4($a1)
    ctx->pc = 0x5136d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961164)));
    // 0x5136d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x5136d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5136d8: 0x3c0a0090  lui         $t2, 0x90
    ctx->pc = 0x5136d8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)144 << 16));
    // 0x5136dc: 0x2543f080  addiu       $v1, $t2, -0xF80
    ctx->pc = 0x5136dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294963328));
    // 0x5136e0: 0x3406e828  ori         $a2, $zero, 0xE828
    ctx->pc = 0x5136e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59432);
    // 0x5136e4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x5136e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x5136e8: 0x8462009a  lh          $v0, 0x9A($v1)
    ctx->pc = 0x5136e8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8FF11Au));
    // 0x5136ec: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x5136ECu;
    {
        const bool branch_taken_0x5136ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5136F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5136ECu;
        // 0x5136f0: 0x3c090002  lui         $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5136ec) {
            ctx->pc = 0x5137A8u;
            goto label_5137a8;
        }
    }
    ctx->pc = 0x5136F4u;
    // 0x5136f4: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x5136f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_5136f8:
    // 0x5136f8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x5136f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x5136fc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x5136fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x513700: 0x3503ffff  ori         $v1, $t0, 0xFFFF
    ctx->pc = 0x513700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x513704: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x513704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x513708: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x513708u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x51370c: 0x1072024  and         $a0, $t0, $a3
    ctx->pc = 0x51370cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x513710: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x513710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x513714: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x513714u;
    {
        const bool branch_taken_0x513714 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x513718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513714u;
        // 0x513718: 0x42402  srl         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513714) {
            ctx->pc = 0x513780u;
            goto label_513780;
        }
    }
    ctx->pc = 0x51371Cu;
    // 0x51371c: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x51371cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x513720: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x513720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x513724: 0xa4a80000  sh          $t0, 0x0($a1)
    ctx->pc = 0x513724u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x513728: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x513728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x51372c: 0x3524ffff  ori         $a0, $t1, 0xFFFF
    ctx->pc = 0x51372cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x513730: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x513730u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x513734: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x513734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x513738: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x513738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x51373c: 0x834824  and         $t1, $a0, $v1
    ctx->pc = 0x51373cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x513740: 0x1271024  and         $v0, $t1, $a3
    ctx->pc = 0x513740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x513744: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x513744u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x513748: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x513748u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x51374c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x51374cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x513750: 0xa4a90000  sh          $t1, 0x0($a1)
    ctx->pc = 0x513750u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x513754: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x513754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x513758: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x513758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x51375c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x51375cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x513760: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x513760u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x513764: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x513764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x513768: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x513768u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x51376c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x51376cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x513770: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x513770u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x513774: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x513774u;
    {
        const bool branch_taken_0x513774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513774u;
        // 0x513778: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513774) {
            ctx->pc = 0x513798u;
            goto label_513798;
        }
    }
    ctx->pc = 0x51377Cu;
    // 0x51377c: 0x0  nop
    ctx->pc = 0x51377cu;
    // NOP
label_513780:
    // 0x513780: 0x2542f080  addiu       $v0, $t2, -0xF80
    ctx->pc = 0x513780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294963328));
    // 0x513784: 0xa4a80000  sh          $t0, 0x0($a1)
    ctx->pc = 0x513784u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x513788: 0xc12a6f0  jal         func_4A9BC0
    ctx->pc = 0x513788u;
    SET_GPR_U32(ctx, 31, 0x513790u);
    ctx->pc = 0x51378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513788u;
    // 0x51378c: 0xa440009a  sh          $zero, 0x9A($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 154), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9BC0u, 0x513788u, 0x513790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513790u;
label_513790:
    // 0x513790: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x513790u;
    {
        const bool branch_taken_0x513790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513790u;
        // 0x513794: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513790) {
            ctx->pc = 0x5137B4u;
            goto label_5137b4;
        }
    }
    ctx->pc = 0x513798u;
label_513798:
    // 0x513798: 0x2542f080  addiu       $v0, $t2, -0xF80
    ctx->pc = 0x513798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294963328));
    // 0x51379c: 0x8443009a  lh          $v1, 0x9A($v0)
    ctx->pc = 0x51379cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 154)));
    // 0x5137a0: 0x5460ffd5  bnel        $v1, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x5137A0u;
    {
        const bool branch_taken_0x5137a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5137a0) {
            ctx->pc = 0x5137A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5137A0u;
            // 0x5137a4: 0x84c20000  lh          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5136F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5136f8;
        }
    }
    ctx->pc = 0x5137A8u;
label_5137a8:
    // 0x5137a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x5137a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x5137ac: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x5137acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x5137b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x5137b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_5137b4:
    // 0x5137b4: 0x3e00008  jr          $ra
    ctx->pc = 0x5137B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5137B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5137B4u;
        // 0x5137b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5137B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5137BCu;
    // 0x5137bc: 0x0  nop
    ctx->pc = 0x5137bcu;
    // NOP
    ctx->pc = 0x5137c0u;
}
