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

// Function: sub_00276728
// Address: 0x276728 - 0x276840
void sub_00276728_0x276728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276728_0x276728");
#endif

    switch (ctx->pc) {
        case 0x276738u: goto label_276738;
        case 0x276740u: goto label_276740;
        case 0x276748u: goto label_276748;
        case 0x276750u: goto label_276750;
        case 0x276770u: goto label_276770;
        case 0x2767f0u: goto label_2767f0;
        default: break;
    }

    ctx->pc = 0x276728u;

    // 0x276728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27672c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27672cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276730: 0xc0404fa  jal         func_1013E8
    ctx->pc = 0x276730u;
    SET_GPR_U32(ctx, 31, 0x276738u);
    ctx->pc = 0x1013E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1013E8u, 0x276730u, 0x276738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276738u;
label_276738:
    // 0x276738: 0xc040500  jal         func_101400
    ctx->pc = 0x276738u;
    SET_GPR_U32(ctx, 31, 0x276740u);
    ctx->pc = 0x27673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276738u;
    // 0x27673c: 0xaf82ca64  sw          $v0, -0x359C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953572), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101400u, 0x276738u, 0x276740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276740u;
label_276740:
    // 0x276740: 0xc040508  jal         func_101420
    ctx->pc = 0x276740u;
    SET_GPR_U32(ctx, 31, 0x276748u);
    ctx->pc = 0x276744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276740u;
    // 0x276744: 0xaf82ca68  sw          $v0, -0x3598($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101420u, 0x276740u, 0x276748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276748u;
label_276748:
    // 0x276748: 0xaf82ca6c  sw          $v0, -0x3594($gp)
    ctx->pc = 0x276748u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953580), GPR_U32(ctx, 2));
    // 0x27674c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27674cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276750:
    // 0x276750: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x276750u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x276754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x276754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276758: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x276758u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x27675c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x27675cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x276760: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x276760u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x276764: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x276764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x276768: 0x24980  sll         $t1, $v0, 6
    ctx->pc = 0x276768u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x27676c: 0x0  nop
    ctx->pc = 0x27676cu;
    // NOP
label_276770:
    // 0x276770: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x276770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x276774: 0x8f83ca68  lw          $v1, -0x3598($gp)
    ctx->pc = 0x276774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x276778: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x276778u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27677c: 0x8f85ca64  lw          $a1, -0x359C($gp)
    ctx->pc = 0x27677cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953572)));
    // 0x276780: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x276780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x276784: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x276784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x276788: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x276788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27678c: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x27678cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x276790: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x276790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x276794: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x276794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x276798: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x276798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x27679c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27679cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2767a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2767a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2767a4: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x2767a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2767a8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2767A8u;
    {
        const bool branch_taken_0x2767a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2767ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2767A8u;
        // 0x2767ac: 0xac820054  sw          $v0, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2767a8) {
            ctx->pc = 0x276770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276770;
        }
    }
    ctx->pc = 0x2767B0u;
    // 0x2767b0: 0x8f84ca68  lw          $a0, -0x3598($gp)
    ctx->pc = 0x2767b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x2767b4: 0xe81023  subu        $v0, $a3, $t0
    ctx->pc = 0x2767b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2767b8: 0x8f83ca6c  lw          $v1, -0x3594($gp)
    ctx->pc = 0x2767b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953580)));
    // 0x2767bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2767bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2767c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2767c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2767c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2767c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2767c8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2767c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2767cc: 0x29040002  slti        $a0, $t0, 0x2
    ctx->pc = 0x2767ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2767d0: 0x1480ffdf  bnez        $a0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2767D0u;
    {
        const bool branch_taken_0x2767d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2767D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2767D0u;
        // 0x2767d4: 0xac43006c  sw          $v1, 0x6C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2767d0) {
            ctx->pc = 0x276750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276750;
        }
    }
    ctx->pc = 0x2767D8u;
    // 0x2767d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2767d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2767dc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2767dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2767e0: 0x8f88ca68  lw          $t0, -0x3598($gp)
    ctx->pc = 0x2767e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x2767e4: 0x244a88d0  addiu       $t2, $v0, -0x7730
    ctx->pc = 0x2767e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x2767e8: 0x2469a620  addiu       $t1, $v1, -0x59E0
    ctx->pc = 0x2767e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944288));
    // 0x2767ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2767ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2767f0:
    // 0x2767f0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2767f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2767f4: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x2767f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2767f8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2767f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2767fc: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x2767fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x276800: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x276800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276804: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x276804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x276808: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x276808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x27680c: 0x28e60002  slti        $a2, $a3, 0x2
    ctx->pc = 0x27680cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x276810: 0x94a3003c  lhu         $v1, 0x3C($a1)
    ctx->pc = 0x276810u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x276814: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x276814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x276818: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x276818u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27681c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27681cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x276820: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x276820u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276824: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x276824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x276828: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x276828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x27682c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x27682Cu;
    {
        const bool branch_taken_0x27682c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x276830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27682Cu;
        // 0x276830: 0xac4406a8  sw          $a0, 0x6A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1704), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27682c) {
            ctx->pc = 0x2767F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2767f0;
        }
    }
    ctx->pc = 0x276834u;
    // 0x276834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276838: 0x3e00008  jr          $ra
    ctx->pc = 0x276838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276838u;
        // 0x27683c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276840u;
}
