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

// Function: sub_00208930
// Address: 0x208930 - 0x208a18
void sub_00208930_0x208930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208930_0x208930");
#endif

    switch (ctx->pc) {
        case 0x208968u: goto label_208968;
        case 0x2089acu: goto label_2089ac;
        case 0x2089c0u: goto label_2089c0;
        case 0x2089e4u: goto label_2089e4;
        case 0x2089fcu: goto label_2089fc;
        case 0x208a04u: goto label_208a04;
        default: break;
    }

    ctx->pc = 0x208930u;

    // 0x208930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208934: 0xaf8098d4  sw          $zero, -0x672C($gp)
    ctx->pc = 0x208934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940884), GPR_U32(ctx, 0));
    // 0x208938: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20893c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208940: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x208940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x208944: 0xaf8098d8  sw          $zero, -0x6728($gp)
    ctx->pc = 0x208944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940888), GPR_U32(ctx, 0));
    // 0x208948: 0x84860092  lh          $a2, 0x92($a0)
    ctx->pc = 0x208948u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
    // 0x20894c: 0x14c2000a  bne         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20894Cu;
    {
        const bool branch_taken_0x20894c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x208950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20894Cu;
        // 0x208950: 0x94830092  lhu         $v1, 0x92($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20894c) {
            ctx->pc = 0x208978u;
            goto label_208978;
        }
    }
    ctx->pc = 0x208954u;
    // 0x208954: 0x84a20092  lh          $v0, 0x92($a1)
    ctx->pc = 0x208954u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
    // 0x208958: 0x54460008  bnel        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x208958u;
    {
        const bool branch_taken_0x208958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x208958) {
            ctx->pc = 0x20895Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208958u;
            // 0x20895c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20897Cu;
            goto label_20897c;
        }
    }
    ctx->pc = 0x208960u;
    // 0x208960: 0xc092934  jal         func_24A4D0
    ctx->pc = 0x208960u;
    SET_GPR_U32(ctx, 31, 0x208968u);
    ctx->pc = 0x208964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208960u;
    // 0x208964: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A4D0u, 0x208960u, 0x208968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208968u;
label_208968:
    // 0x208968: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x208968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20896c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x20896Cu;
    {
        const bool branch_taken_0x20896c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20896Cu;
        // 0x208970: 0xaf8298d4  sw          $v0, -0x672C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20896c) {
            ctx->pc = 0x208A08u;
            goto label_208a08;
        }
    }
    ctx->pc = 0x208974u;
    // 0x208974: 0x0  nop
    ctx->pc = 0x208974u;
    // NOP
label_208978:
    // 0x208978: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x208978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_20897c:
    // 0x20897c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x20897cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x208980: 0x244683c0  addiu       $a2, $v0, -0x7C40
    ctx->pc = 0x208980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x208984: 0x28630001  slti        $v1, $v1, 0x1
    ctx->pc = 0x208984u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x208988: 0x90c2002b  lbu         $v0, 0x2B($a2)
    ctx->pc = 0x208988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 43)));
    // 0x20898c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20898cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208990: 0x1444000f  bne         $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x208990u;
    {
        const bool branch_taken_0x208990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x208994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208990u;
        // 0x208994: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208990) {
            ctx->pc = 0x2089D0u;
            goto label_2089d0;
        }
    }
    ctx->pc = 0x208998u;
    // 0x208998: 0x90c2002d  lbu         $v0, 0x2D($a2)
    ctx->pc = 0x208998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 45)));
    // 0x20899c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20899Cu;
    {
        const bool branch_taken_0x20899c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20899c) {
            ctx->pc = 0x2089B8u;
            goto label_2089b8;
        }
    }
    ctx->pc = 0x2089A4u;
    // 0x2089a4: 0xc092934  jal         func_24A4D0
    ctx->pc = 0x2089A4u;
    SET_GPR_U32(ctx, 31, 0x2089ACu);
    ctx->pc = 0x2089A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2089A4u;
    // 0x2089a8: 0x2404002b  addiu       $a0, $zero, 0x2B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A4D0u, 0x2089A4u, 0x2089ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2089ACu;
label_2089ac:
    // 0x2089ac: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2089acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2089b0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2089B0u;
    {
        const bool branch_taken_0x2089b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2089B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089B0u;
        // 0x2089b4: 0xaf8298d4  sw          $v0, -0x672C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089b0) {
            ctx->pc = 0x208A08u;
            goto label_208a08;
        }
    }
    ctx->pc = 0x2089B8u;
label_2089b8:
    // 0x2089b8: 0xc092934  jal         func_24A4D0
    ctx->pc = 0x2089B8u;
    SET_GPR_U32(ctx, 31, 0x2089C0u);
    ctx->pc = 0x2089BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2089B8u;
    // 0x2089bc: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A4D0u, 0x2089B8u, 0x2089C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2089C0u;
label_2089c0:
    // 0x2089c0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2089c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2089c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2089C4u;
    {
        const bool branch_taken_0x2089c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2089C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089C4u;
        // 0x2089c8: 0xaf8298d4  sw          $v0, -0x672C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089c4) {
            ctx->pc = 0x208A08u;
            goto label_208a08;
        }
    }
    ctx->pc = 0x2089CCu;
    // 0x2089cc: 0x0  nop
    ctx->pc = 0x2089ccu;
    // NOP
label_2089d0:
    // 0x2089d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2089d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2089d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2089d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2089d8: 0x8c4288d0  lw          $v0, -0x7730($v0)
    ctx->pc = 0x2089d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    // 0x2089dc: 0xc086408  jal         func_219020
    ctx->pc = 0x2089DCu;
    SET_GPR_U32(ctx, 31, 0x2089E4u);
    ctx->pc = 0x2089E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2089DCu;
    // 0x2089e0: 0x84440042  lh          $a0, 0x42($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219020u, 0x2089DCu, 0x2089E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2089E4u;
label_2089e4:
    // 0x2089e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2089e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2089e8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2089e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2089ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2089ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2089f0: 0xaf8298d4  sw          $v0, -0x672C($gp)
    ctx->pc = 0x2089f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940884), GPR_U32(ctx, 2));
    // 0x2089f4: 0xc091a7c  jal         func_2469F0
    ctx->pc = 0x2089F4u;
    SET_GPR_U32(ctx, 31, 0x2089FCu);
    ctx->pc = 0x2089F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2089F4u;
    // 0x2089f8: 0xaf9098d8  sw          $s0, -0x6728($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940888), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2469F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2469F0u, 0x2089F4u, 0x2089FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2089FCu;
label_2089fc:
    // 0x2089fc: 0xc091a74  jal         func_2469D0
    ctx->pc = 0x2089FCu;
    SET_GPR_U32(ctx, 31, 0x208A04u);
    ctx->pc = 0x208A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2089FCu;
    // 0x208a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2469D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2469D0u, 0x2089FCu, 0x208A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A04u;
label_208a04:
    // 0x208a04: 0xaf82c8c8  sw          $v0, -0x3738($gp)
    ctx->pc = 0x208a04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953160), GPR_U32(ctx, 2));
label_208a08:
    // 0x208a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208a0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x208a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208a10: 0x3e00008  jr          $ra
    ctx->pc = 0x208A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A10u;
        // 0x208a14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208A18u;
}
