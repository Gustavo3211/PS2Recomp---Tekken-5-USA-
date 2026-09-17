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

// Function: sub_00118B50
// Address: 0x118b50 - 0x118c50
void sub_00118B50_0x118b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118B50_0x118b50");
#endif

    switch (ctx->pc) {
        case 0x118b90u: goto label_118b90;
        case 0x118b9cu: goto label_118b9c;
        case 0x118bacu: goto label_118bac;
        case 0x118bc0u: goto label_118bc0;
        case 0x118bd8u: goto label_118bd8;
        case 0x118becu: goto label_118bec;
        case 0x118c08u: goto label_118c08;
        default: break;
    }

    ctx->pc = 0x118b50u;

    // 0x118b50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x118b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x118b54: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x118b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x118b58: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x118b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x118b5c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x118b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x118b60: 0x3c150012  lui         $s5, 0x12
    ctx->pc = 0x118b60u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)18 << 16));
    // 0x118b64: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x118b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x118b68: 0x3c140012  lui         $s4, 0x12
    ctx->pc = 0x118b68u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)18 << 16));
    // 0x118b6c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118b70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118b74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118b78: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x118b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x118b7c: 0x245011c0  addiu       $s0, $v0, 0x11C0
    ctx->pc = 0x118b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4544));
    // 0x118b80: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x118b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x118b84: 0x8c4411c0  lw          $a0, 0x11C0($v0)
    ctx->pc = 0x118b84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1311C0u));
    // 0x118b88: 0xc046314  jal         func_118C50
    ctx->pc = 0x118B88u;
    SET_GPR_U32(ctx, 31, 0x118B90u);
    ctx->pc = 0x118B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118B88u;
    // 0x118b8c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C50u, 0x118B88u, 0x118B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B90u;
label_118b90:
    // 0x118b90: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x118b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x118b94: 0xc046314  jal         func_118C50
    ctx->pc = 0x118B94u;
    SET_GPR_U32(ctx, 31, 0x118B9Cu);
    ctx->pc = 0x118B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118B94u;
    // 0x118b98: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C50u, 0x118B94u, 0x118B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B9Cu;
label_118b9c:
    // 0x118b9c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x118b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x118ba0: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x118ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x118ba4: 0xc0462c2  jal         func_118B08
    ctx->pc = 0x118BA4u;
    SET_GPR_U32(ctx, 31, 0x118BACu);
    ctx->pc = 0x118BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118BA4u;
    // 0x118ba8: 0x26a68ac8  addiu       $a2, $s5, -0x7538 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294937288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B08u, 0x118BA4u, 0x118BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118BACu;
label_118bac:
    // 0x118bac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x118bacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118bb0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x118bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x118bb4: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x118bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x118bb8: 0xc0462c2  jal         func_118B08
    ctx->pc = 0x118BB8u;
    SET_GPR_U32(ctx, 31, 0x118BC0u);
    ctx->pc = 0x118BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118BB8u;
    // 0x118bbc: 0x26868a90  addiu       $a2, $s4, -0x7570 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294937232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B08u, 0x118BB8u, 0x118BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118BC0u;
label_118bc0:
    // 0x118bc0: 0x2671fdf4  addiu       $s1, $s3, -0x20C
    ctx->pc = 0x118bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
    // 0x118bc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x118bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118bc8: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x118bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    // 0x118bcc: 0x12300014  beq         $s1, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x118BCCu;
    {
        const bool branch_taken_0x118bcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x118BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118BCCu;
        // 0x118bd0: 0x3c160013  lui         $s6, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118bcc) {
            ctx->pc = 0x118C20u;
            goto label_118c20;
        }
    }
    ctx->pc = 0x118BD4u;
    // 0x118bd4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x118bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_118bd8:
    // 0x118bd8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x118BD8u;
    {
        const bool branch_taken_0x118bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118BD8u;
        // 0x118bdc: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118bd8) {
            ctx->pc = 0x118BF8u;
            goto label_118bf8;
        }
    }
    ctx->pc = 0x118BE0u;
    // 0x118be0: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x118be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x118be4: 0xc0462c2  jal         func_118B08
    ctx->pc = 0x118BE4u;
    SET_GPR_U32(ctx, 31, 0x118BECu);
    ctx->pc = 0x118BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118BE4u;
    // 0x118be8: 0x26a68ac8  addiu       $a2, $s5, -0x7538 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294937288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B08u, 0x118BE4u, 0x118BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118BECu;
label_118bec:
    // 0x118bec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x118becu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118bf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x118BF0u;
    {
        const bool branch_taken_0x118bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118BF0u;
        // 0x118bf4: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118bf0) {
            ctx->pc = 0x118C10u;
            goto label_118c10;
        }
    }
    ctx->pc = 0x118BF8u;
label_118bf8:
    // 0x118bf8: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x118bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x118bfc: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x118bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x118c00: 0xc0462c2  jal         func_118B08
    ctx->pc = 0x118C00u;
    SET_GPR_U32(ctx, 31, 0x118C08u);
    ctx->pc = 0x118C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C00u;
    // 0x118c04: 0x26868a90  addiu       $a2, $s4, -0x7570 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294937232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B08u, 0x118C00u, 0x118C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C08u;
label_118c08:
    // 0x118c08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x118c08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c0c: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x118c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
label_118c10:
    // 0x118c10: 0x1630fff1  bne         $s1, $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x118C10u;
    {
        const bool branch_taken_0x118c10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x118C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C10u;
        // 0x118c14: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c10) {
            ctx->pc = 0x118BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118bd8;
        }
    }
    ctx->pc = 0x118C18u;
    // 0x118c18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x118C18u;
    {
        const bool branch_taken_0x118c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C18u;
        // 0x118c1c: 0xaed111b8  sw          $s1, 0x11B8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4536), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c18) {
            ctx->pc = 0x118C24u;
            goto label_118c24;
        }
    }
    ctx->pc = 0x118C20u;
label_118c20:
    // 0x118c20: 0xaed111b8  sw          $s1, 0x11B8($s6)
    ctx->pc = 0x118c20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4536), GPR_U32(ctx, 17));
label_118c24:
    // 0x118c24: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x118c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118c28: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x118c28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x118c2c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x118c2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118c30: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x118c30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118c34: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x118c34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118c38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118c3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118c3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118c44: 0x3e00008  jr          $ra
    ctx->pc = 0x118C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C44u;
        // 0x118c48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118C4Cu;
    // 0x118c4c: 0x0  nop
    ctx->pc = 0x118c4cu;
    // NOP
    ctx->pc = 0x118c50u;
}
