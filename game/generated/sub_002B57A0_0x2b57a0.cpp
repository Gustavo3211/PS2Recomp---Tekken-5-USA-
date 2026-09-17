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

// Function: sub_002B57A0
// Address: 0x2b57a0 - 0x2b58a8
void sub_002B57A0_0x2b57a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B57A0_0x2b57a0");
#endif

    switch (ctx->pc) {
        case 0x2b57dcu: goto label_2b57dc;
        case 0x2b582cu: goto label_2b582c;
        case 0x2b5854u: goto label_2b5854;
        case 0x2b5860u: goto label_2b5860;
        case 0x2b5868u: goto label_2b5868;
        case 0x2b587cu: goto label_2b587c;
        case 0x2b5884u: goto label_2b5884;
        default: break;
    }

    ctx->pc = 0x2b57a0u;

label_2b57a0:
    // 0x2b57a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b57a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b57a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b57a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b57a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b57a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b57ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b57acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b57b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b57b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b57b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b57b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b57b8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2b57b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b57bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b57bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b57c0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2b57c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b57c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b57c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b57c8: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2B57C8u;
    {
        const bool branch_taken_0x2b57c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B57CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B57C8u;
        // 0x2b57cc: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b57c8) {
            ctx->pc = 0x2B5884u;
            goto label_2b5884;
        }
    }
    ctx->pc = 0x2B57D0u;
    // 0x2b57d0: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x2b57d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2b57d4: 0xc0ad5e8  jal         func_2B57A0
    ctx->pc = 0x2B57D4u;
    SET_GPR_U32(ctx, 31, 0x2B57DCu);
    ctx->pc = 0x2B57D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B57D4u;
    // 0x2b57d8: 0x8e330084  lw          $s3, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B57A0u;
    goto label_2b57a0;
    ctx->pc = 0x2B57DCu;
label_2b57dc:
    // 0x2b57dc: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B57DCu;
    {
        const bool branch_taken_0x2b57dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B57DCu;
        // 0x2b57e0: 0x8e230080  lw          $v1, 0x80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b57dc) {
            ctx->pc = 0x2B57F8u;
            goto label_2b57f8;
        }
    }
    ctx->pc = 0x2B57E4u;
    // 0x2b57e4: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x2b57e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x2b57e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B57E8u;
    {
        const bool branch_taken_0x2b57e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b57e8) {
            ctx->pc = 0x2B57F8u;
            goto label_2b57f8;
        }
    }
    ctx->pc = 0x2B57F0u;
    // 0x2b57f0: 0x52930025  beql        $s4, $s3, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B57F0u;
    {
        const bool branch_taken_0x2b57f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 19));
        if (branch_taken_0x2b57f0) {
            ctx->pc = 0x2B57F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B57F0u;
            // 0x2b57f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5888u;
            goto label_2b5888;
        }
    }
    ctx->pc = 0x2B57F8u;
label_2b57f8:
    // 0x2b57f8: 0x12930003  beq         $s4, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B57F8u;
    {
        const bool branch_taken_0x2b57f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 19));
        ctx->pc = 0x2B57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B57F8u;
        // 0x2b57fc: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b57f8) {
            ctx->pc = 0x2B5808u;
            goto label_2b5808;
        }
    }
    ctx->pc = 0x2B5800u;
    // 0x2b5800: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B5800u;
    {
        const bool branch_taken_0x2b5800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5800u;
        // 0x2b5804: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5800) {
            ctx->pc = 0x2B580Cu;
            goto label_2b580c;
        }
    }
    ctx->pc = 0x2B5808u;
label_2b5808:
    // 0x2b5808: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b5808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b580c:
    // 0x2b580c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x2b580cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2b5810: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5810u;
    {
        const bool branch_taken_0x2b5810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5810) {
            ctx->pc = 0x2B5838u;
            goto label_2b5838;
        }
    }
    ctx->pc = 0x2B5818u;
    // 0x2b5818: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2b5818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2b581c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B581Cu;
    {
        const bool branch_taken_0x2b581c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b581c) {
            ctx->pc = 0x2B5820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B581Cu;
            // 0x2b5820: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5838u;
            goto label_2b5838;
        }
    }
    ctx->pc = 0x2B5824u;
    // 0x2b5824: 0xc0aa56e  jal         func_2A95B8
    ctx->pc = 0x2B5824u;
    SET_GPR_U32(ctx, 31, 0x2B582Cu);
    ctx->pc = 0x2B5828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5824u;
    // 0x2b5828: 0x8e04008c  lw          $a0, 0x8C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A95B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A95B8u, 0x2B5824u, 0x2B582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B582Cu;
label_2b582c:
    // 0x2b582c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b582cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5830: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5830u;
    {
        const bool branch_taken_0x2b5830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5830u;
        // 0x2b5834: 0xae0200bc  sw          $v0, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5830) {
            ctx->pc = 0x2B5858u;
            goto label_2b5858;
        }
    }
    ctx->pc = 0x2B5838u;
label_2b5838:
    // 0x2b5838: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5838u;
    {
        const bool branch_taken_0x2b5838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5838) {
            ctx->pc = 0x2B5858u;
            goto label_2b5858;
        }
    }
    ctx->pc = 0x2B5840u;
    // 0x2b5840: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2b5840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2b5844: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5844u;
    {
        const bool branch_taken_0x2b5844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5844) {
            ctx->pc = 0x2B5858u;
            goto label_2b5858;
        }
    }
    ctx->pc = 0x2B584Cu;
    // 0x2b584c: 0xc0aa5be  jal         func_2A96F8
    ctx->pc = 0x2B584Cu;
    SET_GPR_U32(ctx, 31, 0x2B5854u);
    ctx->pc = 0x2B5850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B584Cu;
    // 0x2b5850: 0x8e04008c  lw          $a0, 0x8C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A96F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A96F8u, 0x2B584Cu, 0x2B5854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5854u;
label_2b5854:
    // 0x2b5854: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x2b5854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_2b5858:
    // 0x2b5858: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x2B5858u;
    SET_GPR_U32(ctx, 31, 0x2B5860u);
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x2B5858u, 0x2B5860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5860u;
label_2b5860:
    // 0x2b5860: 0xc0aadce  jal         func_2AB738
    ctx->pc = 0x2B5860u;
    SET_GPR_U32(ctx, 31, 0x2B5868u);
    ctx->pc = 0x2B5864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5860u;
    // 0x2b5864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB738u, 0x2B5860u, 0x2B5868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5868u;
label_2b5868:
    // 0x2b5868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b586c: 0x8e250074  lw          $a1, 0x74($s1)
    ctx->pc = 0x2b586cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2b5870: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b5870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5874: 0xc0ad5e8  jal         func_2B57A0
    ctx->pc = 0x2B5874u;
    SET_GPR_U32(ctx, 31, 0x2B587Cu);
    ctx->pc = 0x2B5878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5874u;
    // 0x2b5878: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B57A0u;
    goto label_2b57a0;
    ctx->pc = 0x2B587Cu;
label_2b587c:
    // 0x2b587c: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x2B587Cu;
    SET_GPR_U32(ctx, 31, 0x2B5884u);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x2B587Cu, 0x2B5884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5884u;
label_2b5884:
    // 0x2b5884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b5888:
    // 0x2b5888: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b5888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b588c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b588cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5890: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b5890u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5894: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b5894u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5898: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b5898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b589c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B589Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B58A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B589Cu;
        // 0x2b58a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B589Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B58A4u;
    // 0x2b58a4: 0x0  nop
    ctx->pc = 0x2b58a4u;
    // NOP
    ctx->pc = 0x2b58a8u;
}
