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

// Function: sub_00277688
// Address: 0x277688 - 0x277760
void sub_00277688_0x277688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277688_0x277688");
#endif

    switch (ctx->pc) {
        case 0x277754u: goto label_277754;
        default: break;
    }

    ctx->pc = 0x277688u;

    // 0x277688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x277688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27768c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x27768cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277694: 0x30c8f0fc  andi        $t0, $a2, 0xF0FC
    ctx->pc = 0x277694u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)61692);
    // 0x277698: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x277698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27769c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x27769cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2776a0: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x2776a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2776a4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2776a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2776a8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2776a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2776ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2776acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2776b0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2776b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2776b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2776b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2776b8: 0x3c0a003b  lui         $t2, 0x3B
    ctx->pc = 0x2776b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)59 << 16));
    // 0x2776bc: 0x254aa620  addiu       $t2, $t2, -0x59E0
    ctx->pc = 0x2776bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294944288));
    // 0x2776c0: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x2776c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2776c4: 0x8d4706a8  lw          $a3, 0x6A8($t2)
    ctx->pc = 0x2776c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1704)));
    // 0x2776c8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2776c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2776cc: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x2776ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2776d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2776D0u;
    {
        const bool branch_taken_0x2776d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2776D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776D0u;
        // 0x2776d4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2776d0) {
            ctx->pc = 0x2776F0u;
            goto label_2776f0;
        }
    }
    ctx->pc = 0x2776D8u;
    // 0x2776d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2776d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2776dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2776dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2776e0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2776e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2776e4: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x2776e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x2776e8: 0x809dd70  j           func_2775C0
    ctx->pc = 0x2776E8u;
    ctx->pc = 0x2776ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2776E8u;
    // 0x2776ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2775C0u;
    sub_002775C0_0x2775c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2776F0u;
label_2776f0:
    // 0x2776f0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2776f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2776f4: 0x2444fffc  addiu       $a0, $v0, -0x4
    ctx->pc = 0x2776f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2776f8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2776f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2776fc: 0x14680005  bne         $v1, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2776FCu;
    {
        const bool branch_taken_0x2776fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x277700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776FCu;
        // 0x277700: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2776fc) {
            ctx->pc = 0x277714u;
            goto label_277714;
        }
    }
    ctx->pc = 0x277704u;
    // 0x277704: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x277704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x277708: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x277708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x27770c: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27770Cu;
    {
        const bool branch_taken_0x27770c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27770c) {
            ctx->pc = 0x277710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27770Cu;
            // 0x277710: 0x90830002  lbu         $v1, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277728u;
            goto label_277728;
        }
    }
    ctx->pc = 0x277714u;
label_277714:
    // 0x277714: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x277714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277718: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x277718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27771c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x27771cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277720: 0x809dd76  j           func_2775D8
    ctx->pc = 0x277720u;
    ctx->pc = 0x277724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277720u;
    // 0x277724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2775D8u;
    sub_002775D8_0x2775d8(rdram, ctx, runtime); return;
    ctx->pc = 0x277728u;
label_277728:
    // 0x277728: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x277728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27772c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x27772cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x277730: 0x246500ff  addiu       $a1, $v1, 0xFF
    ctx->pc = 0x277730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x277734: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x277734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x277738: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x277738u;
    {
        const bool branch_taken_0x277738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277738u;
        // 0x27773c: 0xa0830002  sb          $v1, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277738) {
            ctx->pc = 0x277754u;
            goto label_277754;
        }
    }
    ctx->pc = 0x277740u;
    // 0x277740: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x277740u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x277744: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x277744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277748: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x277748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27774c: 0xc09dd76  jal         func_2775D8
    ctx->pc = 0x27774Cu;
    SET_GPR_U32(ctx, 31, 0x277754u);
    ctx->pc = 0x277750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27774Cu;
    // 0x277750: 0x8d4406a8  lw          $a0, 0x6A8($t2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 1704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2775D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2775D8u, 0x27774Cu, 0x277754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277754u;
label_277754:
    // 0x277754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277758: 0x3e00008  jr          $ra
    ctx->pc = 0x277758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277758u;
        // 0x27775c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277760u;
}
