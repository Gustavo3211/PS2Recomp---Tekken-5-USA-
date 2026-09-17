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

// Function: sub_002A43A0
// Address: 0x2a43a0 - 0x2a4618
void sub_002A43A0_0x2a43a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A43A0_0x2a43a0");
#endif

    switch (ctx->pc) {
        case 0x2a4460u: goto label_2a4460;
        case 0x2a4484u: goto label_2a4484;
        case 0x2a44a4u: goto label_2a44a4;
        case 0x2a44bcu: goto label_2a44bc;
        case 0x2a44d0u: goto label_2a44d0;
        case 0x2a4550u: goto label_2a4550;
        case 0x2a4570u: goto label_2a4570;
        case 0x2a4580u: goto label_2a4580;
        case 0x2a4598u: goto label_2a4598;
        default: break;
    }

    ctx->pc = 0x2a43a0u;

    // 0x2a43a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a43a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a43a4: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x2a43a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x2a43a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a43a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a43ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a43acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a43b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a43b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a43b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a43b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a43b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a43b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a43bc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2a43bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2a43c0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2a43c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2a43c4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2a43c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2a43c8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2a43c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2a43cc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2a43ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2a43d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a43d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A43D4u;
    {
        const bool branch_taken_0x2a43d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A43D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A43D4u;
        // 0x2a43d8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a43d4) {
            ctx->pc = 0x2A43ECu;
            goto label_2a43ec;
        }
    }
    ctx->pc = 0x2A43DCu;
    // 0x2a43dc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a43dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a43e0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a43e4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A43E4u;
    {
        const bool branch_taken_0x2a43e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A43E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A43E4u;
        // 0x2a43e8: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a43e4) {
            ctx->pc = 0x2A43FCu;
            goto label_2a43fc;
        }
    }
    ctx->pc = 0x2A43ECu;
label_2a43ec:
    // 0x2a43ec: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a43ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a43f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a43f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43f4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a43f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a43f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2a43fc:
    // 0x2a43fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a43fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4400: 0x244683c0  addiu       $a2, $v0, -0x7C40
    ctx->pc = 0x2a4400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x2a4404: 0x90c4002b  lbu         $a0, 0x2B($a2)
    ctx->pc = 0x2a4404u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 43)));
    // 0x2a4408: 0x90d1002d  lbu         $s1, 0x2D($a2)
    ctx->pc = 0x2a4408u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 45)));
    // 0x2a440c: 0x14830044  bne         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2A440Cu;
    {
        const bool branch_taken_0x2a440c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A4410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A440Cu;
        // 0x2a4410: 0x90d0002e  lbu         $s0, 0x2E($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 46)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a440c) {
            ctx->pc = 0x2A4520u;
            goto label_2a4520;
        }
    }
    ctx->pc = 0x2A4414u;
    // 0x2a4414: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x2a4414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2a4418: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x2a4418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a441c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a4420: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a4420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a4424: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a4424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2a4428: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x2a4428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2a442c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a4430: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a4430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a4434: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a4434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a4438: 0x8e640064  lw          $a0, 0x64($s3)
    ctx->pc = 0x2a4438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x2a443c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a4440: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a4440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a4444: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a4444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2a4448: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a4448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a444c: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x2a444cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
    // 0x2a4450: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2A4450u;
    {
        const bool branch_taken_0x2a4450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4450) {
            ctx->pc = 0x2A4454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4450u;
            // 0x2a4454: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4490u;
            goto label_2a4490;
        }
    }
    ctx->pc = 0x2A4458u;
    // 0x2a4458: 0xc07ebb6  jal         func_1FAED8
    ctx->pc = 0x2A4458u;
    SET_GPR_U32(ctx, 31, 0x2A4460u);
    ctx->pc = 0x1FAED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAED8u, 0x2A4458u, 0x2A4460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4460u;
label_2a4460:
    // 0x2a4460: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a4460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4464: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A4464u;
    {
        const bool branch_taken_0x2a4464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A4468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4464u;
        // 0x2a4468: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4464) {
            ctx->pc = 0x2A4490u;
            goto label_2a4490;
        }
    }
    ctx->pc = 0x2A446Cu;
    // 0x2a446c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a446cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a4470: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a4470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2a4474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4478: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x2a4478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x2a447c: 0xc086408  jal         func_219020
    ctx->pc = 0x2A447Cu;
    SET_GPR_U32(ctx, 31, 0x2A4484u);
    ctx->pc = 0x2A4480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A447Cu;
    // 0x2a4480: 0x84640042  lh          $a0, 0x42($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219020u, 0x2A447Cu, 0x2A4484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4484u;
label_2a4484:
    // 0x2a4484: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4484u;
    {
        const bool branch_taken_0x2a4484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4484u;
        // 0x2a4488: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4484) {
            ctx->pc = 0x2A44A8u;
            goto label_2a44a8;
        }
    }
    ctx->pc = 0x2A448Cu;
    // 0x2a448c: 0x0  nop
    ctx->pc = 0x2a448cu;
    // NOP
label_2a4490:
    // 0x2a4490: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a4490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2a4494: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4498: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x2a4498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x2a449c: 0xc086408  jal         func_219020
    ctx->pc = 0x2A449Cu;
    SET_GPR_U32(ctx, 31, 0x2A44A4u);
    ctx->pc = 0x2A44A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A449Cu;
    // 0x2a44a0: 0x84640042  lh          $a0, 0x42($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219020u, 0x2A449Cu, 0x2A44A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A44A4u;
label_2a44a4:
    // 0x2a44a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a44a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a44a8:
    // 0x2a44a8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a44a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a44ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a44acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a44b0: 0x2450c668  addiu       $s0, $v0, -0x3998
    ctx->pc = 0x2a44b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952552));
    // 0x2a44b4: 0xc0a7a12  jal         func_29E848
    ctx->pc = 0x2A44B4u;
    SET_GPR_U32(ctx, 31, 0x2A44BCu);
    ctx->pc = 0x2A44B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A44B4u;
    // 0x2a44b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E848u, 0x2A44B4u, 0x2A44BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A44BCu;
label_2a44bc:
    // 0x2a44bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A44BCu;
    {
        const bool branch_taken_0x2a44bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A44C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A44BCu;
        // 0x2a44c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a44bc) {
            ctx->pc = 0x2A44F8u;
            goto label_2a44f8;
        }
    }
    ctx->pc = 0x2A44C4u;
    // 0x2a44c4: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x2a44c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2a44c8: 0xc0a7a12  jal         func_29E848
    ctx->pc = 0x2A44C8u;
    SET_GPR_U32(ctx, 31, 0x2A44D0u);
    ctx->pc = 0x2A44CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A44C8u;
    // 0x2a44cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E848u, 0x2A44C8u, 0x2A44D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A44D0u;
label_2a44d0:
    // 0x2a44d0: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x2a44d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x2a44d4: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x2a44d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2a44d8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a44dc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a44dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a44e0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a44e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a44e4: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x2a44e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2a44e8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a44ec: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a44ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a44f0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2A44F0u;
    {
        const bool branch_taken_0x2a44f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A44F0u;
        // 0x2a44f4: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a44f0) {
            ctx->pc = 0x2A45E8u;
            goto label_2a45e8;
        }
    }
    ctx->pc = 0x2A44F8u;
label_2a44f8:
    // 0x2a44f8: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x2a44f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2a44fc: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x2a44fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a4500: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a4500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a4504: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a4504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a4508: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a4508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2a450c: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x2a450cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2a4510: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a4510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a4514: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a4514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a4518: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2A4518u;
    {
        const bool branch_taken_0x2a4518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4518u;
        // 0x2a451c: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4518) {
            ctx->pc = 0x2A45E8u;
            goto label_2a45e8;
        }
    }
    ctx->pc = 0x2A4520u;
label_2a4520:
    // 0x2a4520: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a4520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4524: 0x14820031  bne         $a0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2A4524u;
    {
        const bool branch_taken_0x2a4524 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A4528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4524u;
        // 0x2a4528: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4524) {
            ctx->pc = 0x2A45ECu;
            goto label_2a45ec;
        }
    }
    ctx->pc = 0x2A452Cu;
    // 0x2a452c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a452cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a4530: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a4530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a4534: 0x245e88d0  addiu       $fp, $v0, -0x7730
    ctx->pc = 0x2a4534u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x2a4538: 0x2477c668  addiu       $s7, $v1, -0x3998
    ctx->pc = 0x2a4538u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952552));
    // 0x2a453c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a453cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4540: 0x26750008  addiu       $s5, $s3, 0x8
    ctx->pc = 0x2a4540u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2a4544: 0x2416efff  addiu       $s6, $zero, -0x1001
    ctx->pc = 0x2a4544u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a4548: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2a4548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2a454c: 0x0  nop
    ctx->pc = 0x2a454cu;
    // NOP
label_2a4550:
    // 0x2a4550: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2a4550u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2a4554: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x2a4554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2a4558: 0x24520050  addiu       $s2, $v0, 0x50
    ctx->pc = 0x2a4558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2a455c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a455cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a4560: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x2a4560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2a4564: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2a4564u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4568: 0xc086408  jal         func_219020
    ctx->pc = 0x2A4568u;
    SET_GPR_U32(ctx, 31, 0x2A4570u);
    ctx->pc = 0x2A456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4568u;
    // 0x2a456c: 0x84a40042  lh          $a0, 0x42($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219020u, 0x2A4568u, 0x2A4570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4570u;
label_2a4570:
    // 0x2a4570: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a4570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4574: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a4574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4578: 0xc0a7a12  jal         func_29E848
    ctx->pc = 0x2A4578u;
    SET_GPR_U32(ctx, 31, 0x2A4580u);
    ctx->pc = 0x2A457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4578u;
    // 0x2a457c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E848u, 0x2A4578u, 0x2A4580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4580u;
label_2a4580:
    // 0x2a4580: 0x2b21821  addu        $v1, $s5, $s2
    ctx->pc = 0x2a4580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2a4584: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a4584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4588: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A4588u;
    {
        const bool branch_taken_0x2a4588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4588u;
        // 0x2a458c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4588) {
            ctx->pc = 0x2A45C0u;
            goto label_2a45c0;
        }
    }
    ctx->pc = 0x2A4590u;
    // 0x2a4590: 0xc0a7a12  jal         func_29E848
    ctx->pc = 0x2A4590u;
    SET_GPR_U32(ctx, 31, 0x2A4598u);
    ctx->pc = 0x29E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E848u, 0x2A4590u, 0x2A4598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4598u;
label_2a4598:
    // 0x2a4598: 0x2b22821  addu        $a1, $s5, $s2
    ctx->pc = 0x2a4598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2a459c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2a459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2a45a0: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x2a45a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x2a45a4: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x2a45a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x2a45a8: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x2a45a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x2a45ac: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2a45acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a45b0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a45b4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a45b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a45b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A45B8u;
    {
        const bool branch_taken_0x2a45b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45B8u;
        // 0x2a45bc: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a45b8) {
            ctx->pc = 0x2A45DCu;
            goto label_2a45dc;
        }
    }
    ctx->pc = 0x2A45C0u;
label_2a45c0:
    // 0x2a45c0: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2a45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2a45c4: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2a45c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x2a45c8: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x2a45c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x2a45cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a45ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a45d0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a45d4: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2a45d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x2a45d8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a45d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2a45dc:
    // 0x2a45dc: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2a45dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a45e0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2A45E0u;
    {
        const bool branch_taken_0x2a45e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45E0u;
        // 0x2a45e4: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a45e0) {
            ctx->pc = 0x2A4550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4550;
        }
    }
    ctx->pc = 0x2A45E8u;
label_2a45e8:
    // 0x2a45e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a45e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a45ec:
    // 0x2a45ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a45ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a45f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a45f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a45f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a45f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a45f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a45f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a45fc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2a45fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a4600: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2a4600u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4604: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2a4604u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a4608: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2a4608u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a460c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2a460cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a4610: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4610u;
        // 0x2a4614: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4618u;
}
