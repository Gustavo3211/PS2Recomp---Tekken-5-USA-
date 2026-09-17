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

// Function: sub_002401D0
// Address: 0x2401d0 - 0x240340
void sub_002401D0_0x2401d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002401D0_0x2401d0");
#endif

    switch (ctx->pc) {
        case 0x2401f0u: goto label_2401f0;
        case 0x24020cu: goto label_24020c;
        case 0x240214u: goto label_240214;
        case 0x2402b4u: goto label_2402b4;
        case 0x2402c0u: goto label_2402c0;
        case 0x2402dcu: goto label_2402dc;
        case 0x24031cu: goto label_24031c;
        case 0x240328u: goto label_240328;
        default: break;
    }

    ctx->pc = 0x2401d0u;

    // 0x2401d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2401d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2401d4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2401d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2401d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2401d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2401dc: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x2401dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2401e0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2401e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2401e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2401e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2401e8: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2401E8u;
    SET_GPR_U32(ctx, 31, 0x2401F0u);
    ctx->pc = 0x2401ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2401E8u;
    // 0x2401ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2401E8u, 0x2401F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2401F0u;
label_2401f0:
    // 0x2401f0: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x2401F0u;
    {
        const bool branch_taken_0x2401f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2401f0) {
            ctx->pc = 0x2401F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2401F0u;
            // 0x2401f4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240330u;
            goto label_240330;
        }
    }
    ctx->pc = 0x2401F8u;
    // 0x2401f8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2401F8u;
    {
        const bool branch_taken_0x2401f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2401FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401F8u;
        // 0x2401fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2401f8) {
            ctx->pc = 0x240214u;
            goto label_240214;
        }
    }
    ctx->pc = 0x240200u;
    // 0x240200: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x240200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x240204: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x240204u;
    SET_GPR_U32(ctx, 31, 0x24020Cu);
    ctx->pc = 0x240208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240204u;
    // 0x240208: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x240204u, 0x24020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24020Cu;
label_24020c:
    // 0x24020c: 0xc0b769e  jal         func_2DDA78
    ctx->pc = 0x24020Cu;
    SET_GPR_U32(ctx, 31, 0x240214u);
    ctx->pc = 0x240210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24020Cu;
    // 0x240210: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA78u, 0x24020Cu, 0x240214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240214u;
label_240214:
    // 0x240214: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x240214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x240218: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x240218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x24021c: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x24021cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
    // 0x240220: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x240220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
    // 0x240224: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x240224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x240228: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x240228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24022c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x24022cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x240230: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x240230u;
    {
        const bool branch_taken_0x240230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240230u;
        // 0x240234: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240230) {
            ctx->pc = 0x24023Cu;
            goto label_24023c;
        }
    }
    ctx->pc = 0x240238u;
    // 0x240238: 0x24024800  addiu       $v0, $zero, 0x4800
    ctx->pc = 0x240238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18432));
label_24023c:
    // 0x24023c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24023cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x240240: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x240240u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240244: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x240244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x240248: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240248u;
    {
        const bool branch_taken_0x240248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240248u;
        // 0x24024c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240248) {
            ctx->pc = 0x240258u;
            goto label_240258;
        }
    }
    ctx->pc = 0x240250u;
    // 0x240250: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x240250u;
    {
        const bool branch_taken_0x240250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240250u;
        // 0x240254: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240250) {
            ctx->pc = 0x240260u;
            goto label_240260;
        }
    }
    ctx->pc = 0x240258u;
label_240258:
    // 0x240258: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x240258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x24025c: 0x244602b8  addiu       $a2, $v0, 0x2B8
    ctx->pc = 0x24025cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 696));
label_240260:
    // 0x240260: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x240260u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x240264: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x240264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240268: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x240268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24026c: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x24026cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x240270: 0xa6250070  sh          $a1, 0x70($s1)
    ctx->pc = 0x240270u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 112), (uint16_t)GPR_U32(ctx, 5));
    // 0x240274: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x240274u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x240278: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x240278u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x24027c: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x24027cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x240280: 0xa6230072  sh          $v1, 0x72($s1)
    ctx->pc = 0x240280u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 114), (uint16_t)GPR_U32(ctx, 3));
    // 0x240284: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x240284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x240288: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x240288u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x24028c: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x24028cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x240290: 0xa6220074  sh          $v0, 0x74($s1)
    ctx->pc = 0x240290u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 116), (uint16_t)GPR_U32(ctx, 2));
    // 0x240294: 0x94c60006  lhu         $a2, 0x6($a2)
    ctx->pc = 0x240294u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x240298: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x240298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x24029c: 0xa6260076  sh          $a2, 0x76($s1)
    ctx->pc = 0x24029cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 118), (uint16_t)GPR_U32(ctx, 6));
    // 0x2402a0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2402a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2402a4: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x2402a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x2402a8: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x2402a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x2402ac: 0xc0c597f  jal         func_3165FC
    ctx->pc = 0x2402ACu;
    SET_GPR_U32(ctx, 31, 0x2402B4u);
    ctx->pc = 0x2402B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2402ACu;
    // 0x2402b0: 0xafa70010  sw          $a3, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3165FCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3165FCu, 0x2402ACu, 0x2402B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2402B4u;
label_2402b4:
    // 0x2402b4: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x2402b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x2402b8: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2402B8u;
    SET_GPR_U32(ctx, 31, 0x2402C0u);
    ctx->pc = 0x2402BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2402B8u;
    // 0x2402bc: 0x24040052  addiu       $a0, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2402B8u, 0x2402C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2402C0u;
label_2402c0:
    // 0x2402c0: 0x8e260060  lw          $a2, 0x60($s1)
    ctx->pc = 0x2402c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2402c4: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x2402c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x2402c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2402c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2402cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2402ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2402d0: 0x24070300  addiu       $a3, $zero, 0x300
    ctx->pc = 0x2402d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x2402d4: 0xc0c598d  jal         func_316634
    ctx->pc = 0x2402D4u;
    SET_GPR_U32(ctx, 31, 0x2402DCu);
    ctx->pc = 0x2402D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2402D4u;
    // 0x2402d8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316634u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316634u, 0x2402D4u, 0x2402DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2402DCu;
label_2402dc:
    // 0x2402dc: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x2402dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2402e0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2402e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2402e4: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x2402e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2402e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2402e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2402ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2402ECu;
    {
        const bool branch_taken_0x2402ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2402F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402ECu;
        // 0x2402f0: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402ec) {
            ctx->pc = 0x24031Cu;
            goto label_24031c;
        }
    }
    ctx->pc = 0x2402F4u;
    // 0x2402f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2402F4u;
    {
        const bool branch_taken_0x2402f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2402F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402F4u;
        // 0x2402f8: 0x3406bb80  ori         $a2, $zero, 0xBB80 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402f4) {
            ctx->pc = 0x24030Cu;
            goto label_24030c;
        }
    }
    ctx->pc = 0x2402FCu;
    // 0x2402fc: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2402fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x240300: 0x3402ac44  ori         $v0, $zero, 0xAC44
    ctx->pc = 0x240300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44100);
    // 0x240304: 0x24065622  addiu       $a2, $zero, 0x5622
    ctx->pc = 0x240304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22050));
    // 0x240308: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x240308u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_24030c:
    // 0x24030c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24030cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240314: 0xc0c5afa  jal         func_316BE8
    ctx->pc = 0x240314u;
    SET_GPR_U32(ctx, 31, 0x24031Cu);
    ctx->pc = 0x240318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240314u;
    // 0x240318: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316BE8u, 0x240314u, 0x24031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24031Cu;
label_24031c:
    // 0x24031c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24031cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240320: 0xc090032  jal         func_2400C8
    ctx->pc = 0x240320u;
    SET_GPR_U32(ctx, 31, 0x240328u);
    ctx->pc = 0x240324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240320u;
    // 0x240324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2400C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2400C8u, 0x240320u, 0x240328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240328u;
label_240328:
    // 0x240328: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x240328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24032c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24032cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_240330:
    // 0x240330: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x240330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x240334: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x240334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240338: 0x3e00008  jr          $ra
    ctx->pc = 0x240338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240338u;
        // 0x24033c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240340u;
}
