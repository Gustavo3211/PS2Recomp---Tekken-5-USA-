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

// Function: sub_002787D0
// Address: 0x2787d0 - 0x278890
void sub_002787D0_0x2787d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002787D0_0x2787d0");
#endif

    switch (ctx->pc) {
        case 0x278828u: goto label_278828;
        case 0x278860u: goto label_278860;
        default: break;
    }

    ctx->pc = 0x2787d0u;

    // 0x2787d0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2787d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2787d4: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2787D4u;
    {
        const bool branch_taken_0x2787d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2787d4) {
            ctx->pc = 0x278888u;
            goto label_278888;
        }
    }
    ctx->pc = 0x2787DCu;
    // 0x2787dc: 0x9483003c  lhu         $v1, 0x3C($a0)
    ctx->pc = 0x2787dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2787e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2787e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2787e4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2787e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2787e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2787e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2787ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2787ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2787f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2787f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2787f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2787f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2787f8: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2787f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2787fc: 0x24c6a620  addiu       $a2, $a2, -0x59E0
    ctx->pc = 0x2787fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944288));
    // 0x278800: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x278800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x278804: 0x24c90002  addiu       $t1, $a2, 0x2
    ctx->pc = 0x278804u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x278808: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x278808u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x27880c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x27880cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x278810: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x278810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278814: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x278814u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x278818: 0xa4c0000c  sh          $zero, 0xC($a2)
    ctx->pc = 0x278818u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x27881c: 0xa4c0000e  sh          $zero, 0xE($a2)
    ctx->pc = 0x27881cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x278820: 0xa4c00010  sh          $zero, 0x10($a2)
    ctx->pc = 0x278820u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x278824: 0x0  nop
    ctx->pc = 0x278824u;
    // NOP
label_278828:
    // 0x278828: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x278828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x27882c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x27882cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x278830: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x278830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x278834: 0x29040100  slti        $a0, $t0, 0x100
    ctx->pc = 0x278834u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x278838: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x278838u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27883c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x27883cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278840: 0xa4600010  sh          $zero, 0x10($v1)
    ctx->pc = 0x278840u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x278844: 0xa4400210  sh          $zero, 0x210($v0)
    ctx->pc = 0x278844u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 528), (uint16_t)GPR_U32(ctx, 0));
    // 0x278848: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x278848u;
    {
        const bool branch_taken_0x278848 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278848u;
        // 0x27884c: 0xa4a00410  sh          $zero, 0x410($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1040), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278848) {
            ctx->pc = 0x278828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278828;
        }
    }
    ctx->pc = 0x278850u;
    // 0x278850: 0x24c70006  addiu       $a3, $a2, 0x6
    ctx->pc = 0x278850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x278854: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x278854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x278858: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x278858u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27885c: 0x0  nop
    ctx->pc = 0x27885cu;
    // NOP
label_278860:
    // 0x278860: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x278860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x278864: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x278864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x278868: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x278868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x27886c: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x27886cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x278870: 0x29040019  slti        $a0, $t0, 0x19
    ctx->pc = 0x278870u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x278874: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x278874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x278878: 0xa4600610  sh          $zero, 0x610($v1)
    ctx->pc = 0x278878u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1552), (uint16_t)GPR_U32(ctx, 0));
    // 0x27887c: 0xa4400640  sh          $zero, 0x640($v0)
    ctx->pc = 0x27887cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1600), (uint16_t)GPR_U32(ctx, 0));
    // 0x278880: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x278880u;
    {
        const bool branch_taken_0x278880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x278884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278880u;
        // 0x278884: 0xa4a00670  sh          $zero, 0x670($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1648), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278880) {
            ctx->pc = 0x278860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278860;
        }
    }
    ctx->pc = 0x278888u;
label_278888:
    // 0x278888: 0x3e00008  jr          $ra
    ctx->pc = 0x278888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278890u;
}
