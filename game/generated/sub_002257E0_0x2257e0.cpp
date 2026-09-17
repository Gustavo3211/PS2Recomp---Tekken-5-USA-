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

// Function: sub_002257E0
// Address: 0x2257e0 - 0x225888
void sub_002257E0_0x2257e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002257E0_0x2257e0");
#endif

    switch (ctx->pc) {
        case 0x22582cu: goto label_22582c;
        default: break;
    }

    ctx->pc = 0x2257e0u;

    // 0x2257e0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2257e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2257e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2257e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2257e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2257e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2257ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2257ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2257f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2257f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2257f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2257f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2257f8: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x2257f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x2257fc: 0x261061b0  addiu       $s0, $s0, 0x61B0
    ctx->pc = 0x2257fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25008));
    // 0x225800: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x225800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x225804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225808: 0x8e110020  lw          $s1, 0x20($s0)
    ctx->pc = 0x225808u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x22580c: 0x1623000a  bne         $s1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x22580Cu;
    {
        const bool branch_taken_0x22580c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x225810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22580Cu;
        // 0x225810: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22580c) {
            ctx->pc = 0x225838u;
            goto label_225838;
        }
    }
    ctx->pc = 0x225814u;
    // 0x225814: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x225814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x225818: 0x24020097  addiu       $v0, $zero, 0x97
    ctx->pc = 0x225818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x22581c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22581Cu;
    {
        const bool branch_taken_0x22581c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22581c) {
            ctx->pc = 0x225820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22581Cu;
            // 0x225820: 0x8e030048  lw          $v1, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22583Cu;
            goto label_22583c;
        }
    }
    ctx->pc = 0x225824u;
    // 0x225824: 0xc08ff0e  jal         func_23FC38
    ctx->pc = 0x225824u;
    SET_GPR_U32(ctx, 31, 0x22582Cu);
    ctx->pc = 0x225828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225824u;
    // 0x225828: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FC38u, 0x225824u, 0x22582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22582Cu;
label_22582c:
    // 0x22582c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x22582Cu;
    {
        const bool branch_taken_0x22582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22582Cu;
        // 0x225830: 0xae110044  sw          $s1, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22582c) {
            ctx->pc = 0x225870u;
            goto label_225870;
        }
    }
    ctx->pc = 0x225834u;
    // 0x225834: 0x0  nop
    ctx->pc = 0x225834u;
    // NOP
label_225838:
    // 0x225838: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x225838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_22583c:
    // 0x22583c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x22583cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x225840: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x225840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x225844: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x225844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x225848: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x225848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x22584c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x22584cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x225850: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x225850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x225854: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x225854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x225858: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x225858u;
    {
        const bool branch_taken_0x225858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225858u;
        // 0x22585c: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225858) {
            ctx->pc = 0x225870u;
            goto label_225870;
        }
    }
    ctx->pc = 0x225860u;
    // 0x225860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225864: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x225864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x225868: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x225868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x22586c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x22586cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_225870:
    // 0x225870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225874: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22587c: 0x3e00008  jr          $ra
    ctx->pc = 0x22587Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22587Cu;
        // 0x225880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22587Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225884u;
    // 0x225884: 0x0  nop
    ctx->pc = 0x225884u;
    // NOP
    ctx->pc = 0x225888u;
}
