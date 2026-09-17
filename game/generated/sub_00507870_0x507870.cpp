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

// Function: sub_00507870
// Address: 0x507870 - 0x507930
void sub_00507870_0x507870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00507870_0x507870");
#endif

    switch (ctx->pc) {
        case 0x50789cu: goto label_50789c;
        default: break;
    }

    ctx->pc = 0x507870u;

    // 0x507870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x507870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x507874: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x507874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x507878: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x507878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50787c: 0x2450c580  addiu       $s0, $v0, -0x3A80
    ctx->pc = 0x50787cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952320));
    // 0x507880: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x507880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x507884: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x507884u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC580u));
    // 0x507888: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x507888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50788c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x50788cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507890: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x507890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x507894: 0xc14481c  jal         func_512070
    ctx->pc = 0x507894u;
    SET_GPR_U32(ctx, 31, 0x50789Cu);
    ctx->pc = 0x507898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507894u;
    // 0x507898: 0x2464c57c  addiu       $a0, $v1, -0x3A84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x507894u, 0x50789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50789Cu;
label_50789c:
    // 0x50789c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50789cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5078a0: 0x5443001f  bnel        $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x5078A0u;
    {
        const bool branch_taken_0x5078a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x5078a0) {
            ctx->pc = 0x5078A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5078A0u;
            // 0x5078a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x507920u;
            goto label_507920;
        }
    }
    ctx->pc = 0x5078A8u;
    // 0x5078a8: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x5078a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x5078ac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x5078acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5078b0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x5078b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5078b4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x5078b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x5078b8: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x5078b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x5078bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5078bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5078c0: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x5078c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x5078c4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x5078c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5078c8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x5078c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x5078cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5078ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5078d0: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x5078d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x5078d4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x5078d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5078d8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x5078d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x5078dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5078dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5078e0: 0xa4650006  sh          $a1, 0x6($v1)
    ctx->pc = 0x5078e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x5078e4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x5078e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5078e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5078e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5078ec: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x5078ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x5078f0: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x5078f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x5078f4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x5078f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x5078f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5078f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5078fc: 0xa465000a  sh          $a1, 0xA($v1)
    ctx->pc = 0x5078fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 5));
    // 0x507900: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x507900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507904: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x507904u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x507908: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x507908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50790c: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x50790cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x507910: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x507910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507914: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x507914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x507918: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x507918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x50791c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50791cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_507920:
    // 0x507920: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x507920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x507924: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x507924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x507928: 0x3e00008  jr          $ra
    ctx->pc = 0x507928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507928u;
        // 0x50792c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x507928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x507930u;
}
