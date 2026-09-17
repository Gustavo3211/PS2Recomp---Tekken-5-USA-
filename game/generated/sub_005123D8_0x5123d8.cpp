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

// Function: sub_005123D8
// Address: 0x5123d8 - 0x512738
void sub_005123D8_0x5123d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005123D8_0x5123d8");
#endif

    switch (ctx->pc) {
        case 0x5123f0u: goto label_5123f0;
        case 0x512400u: goto label_512400;
        case 0x512428u: goto label_512428;
        case 0x512474u: goto label_512474;
        case 0x5124b8u: goto label_5124b8;
        case 0x5124c0u: goto label_5124c0;
        case 0x51251cu: goto label_51251c;
        case 0x512618u: goto label_512618;
        case 0x5126a8u: goto label_5126a8;
        case 0x5126d4u: goto label_5126d4;
        default: break;
    }

    ctx->pc = 0x5123d8u;

    // 0x5123d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5123d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5123dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5123dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5123e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5123e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5123e4: 0x814485a  j           func_512168
    ctx->pc = 0x5123E4u;
    ctx->pc = 0x5123E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5123E4u;
    // 0x5123e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512168u;
    sub_00512168_0x512168(rdram, ctx, runtime); return;
    ctx->pc = 0x5123ECu;
    // 0x5123ec: 0x0  nop
    ctx->pc = 0x5123ecu;
    // NOP
label_5123f0:
    // 0x5123f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5123f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5123f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5123f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5123f8: 0x3e00008  jr          $ra
    ctx->pc = 0x5123F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5123FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5123F8u;
        // 0x5123fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5123F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512400u;
label_512400:
    // 0x512400: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x512400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x512404: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x512404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x512408: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x512408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x51240c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x51240cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x512410: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x512410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x512414: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x512414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x512418: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x512418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x51241c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x51241cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x512420: 0xc124620  jal         func_491880
    ctx->pc = 0x512420u;
    SET_GPR_U32(ctx, 31, 0x512428u);
    ctx->pc = 0x512424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x512420u;
    // 0x512424: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x512420u, 0x512428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x512428u;
label_512428:
    // 0x512428: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x512428u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x51242c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x51242cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x512430: 0x84e7e820  lh          $a3, -0x17E0($a3)
    ctx->pc = 0x512430u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294961184)));
    // 0x512434: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x512434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x512438: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x512438u;
    {
        const bool branch_taken_0x512438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x51243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512438u;
        // 0x51243c: 0x3c150090  lui         $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)144 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512438) {
            ctx->pc = 0x51246Cu;
            goto label_51246c;
        }
    }
    ctx->pc = 0x512440u;
    // 0x512440: 0x26a5f080  addiu       $a1, $s5, -0xF80
    ctx->pc = 0x512440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963328));
    // 0x512444: 0x84a24cd0  lh          $v0, 0x4CD0($a1)
    ctx->pc = 0x512444u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 19664)));
    // 0x512448: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x512448u;
    {
        const bool branch_taken_0x512448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x51244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512448u;
        // 0x51244c: 0x2622002a  addiu       $v0, $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512448) {
            ctx->pc = 0x51246Cu;
            goto label_51246c;
        }
    }
    ctx->pc = 0x512450u;
    // 0x512450: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x512450u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x512454: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x512454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x512458: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x512458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x51245c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x51245cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x512460: 0x41403  sra         $v0, $a0, 16
    ctx->pc = 0x512460u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 16));
    // 0x512464: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x512464u;
    {
        const bool branch_taken_0x512464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x512468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512464u;
        // 0x512468: 0x28420018  slti        $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x512464) {
            ctx->pc = 0x512480u;
            goto label_512480;
        }
    }
    ctx->pc = 0x51246Cu;
label_51246c:
    // 0x51246c: 0xc144854  jal         func_512150
    ctx->pc = 0x51246Cu;
    SET_GPR_U32(ctx, 31, 0x512474u);
    ctx->pc = 0x512470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x51246Cu;
    // 0x512470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512150u, 0x51246Cu, 0x512474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x512474u;
label_512474:
    // 0x512474: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x512474u;
    {
        const bool branch_taken_0x512474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x512478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512474u;
        // 0x512478: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512474) {
            ctx->pc = 0x5125F8u;
            goto label_5125f8;
        }
    }
    ctx->pc = 0x51247Cu;
    // 0x51247c: 0x0  nop
    ctx->pc = 0x51247cu;
    // NOP
label_512480:
    // 0x512480: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x512480u;
    {
        const bool branch_taken_0x512480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x512480) {
            ctx->pc = 0x512484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x512480u;
            // 0x512484: 0x8ca20050  lw          $v0, 0x50($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x51249Cu;
            goto label_51249c;
        }
    }
    ctx->pc = 0x512488u;
    // 0x512488: 0x26230022  addiu       $v1, $s1, 0x22
    ctx->pc = 0x512488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
    // 0x51248c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x51248cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x512490: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x512490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x512494: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x512494u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x512498: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x512498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_51249c:
    // 0x51249c: 0x26340028  addiu       $s4, $s1, 0x28
    ctx->pc = 0x51249cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x5124a0: 0x86920000  lh          $s2, 0x0($s4)
    ctx->pc = 0x5124a0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x5124a4: 0x26330026  addiu       $s3, $s1, 0x26
    ctx->pc = 0x5124a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 38));
    // 0x5124a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x5124a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x5124ac: 0x640003e  bltz        $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x5124ACu;
    {
        const bool branch_taken_0x5124ac = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x5124B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5124ACu;
        // 0x5124b0: 0x8cb00054  lw          $s0, 0x54($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5124ac) {
            ctx->pc = 0x5125A8u;
            goto label_5125a8;
        }
    }
    ctx->pc = 0x5124B4u;
    // 0x5124b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x5124b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5124b8:
    // 0x5124b8: 0xc14481c  jal         func_512070
    ctx->pc = 0x5124B8u;
    SET_GPR_U32(ctx, 31, 0x5124C0u);
    ctx->pc = 0x5124BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5124B8u;
    // 0x5124bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x5124B8u, 0x5124C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5124C0u;
label_5124c0:
    // 0x5124c0: 0x240aff4e  addiu       $t2, $zero, -0xB2
    ctx->pc = 0x5124c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967118));
    // 0x5124c4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x5124c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x5124c8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x5124c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x5124cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5124ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5124d0: 0x3508001a  ori         $t0, $t0, 0x1A
    ctx->pc = 0x5124d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)26);
    // 0x5124d4: 0x35290400  ori         $t1, $t1, 0x400
    ctx->pc = 0x5124d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1024);
    // 0x5124d8: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x5124d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x5124dc: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x5124dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x5124e0: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x5124E0u;
    {
        const bool branch_taken_0x5124e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x5124E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5124E0u;
        // 0x5124e4: 0x27a6000c  addiu       $a2, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5124e0) {
            ctx->pc = 0x512594u;
            goto label_512594;
        }
    }
    ctx->pc = 0x5124E8u;
    // 0x5124e8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x5124e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x5124ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x5124ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5124f0: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x5124f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x5124f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x5124f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x5124f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x5124f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x5124fc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x5124fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x512500: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x512500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x512504: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x512504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x512508: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x512508u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x51250c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x51250cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x512510: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x512510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x512514: 0xc1413da  jal         func_504F68
    ctx->pc = 0x512514u;
    SET_GPR_U32(ctx, 31, 0x51251Cu);
    ctx->pc = 0x512518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x512514u;
    // 0x512518: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504F68u, 0x512514u, 0x51251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x51251Cu;
label_51251c:
    // 0x51251c: 0x87a30008  lh          $v1, 0x8($sp)
    ctx->pc = 0x51251cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x512520: 0x121500  sll         $v0, $s2, 20
    ctx->pc = 0x512520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 20));
    // 0x512524: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x512524u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x512528: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x512528u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x51252c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x51252cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x512530: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x512530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x512534: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x512534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x512538: 0x9624000c  lhu         $a0, 0xC($s1)
    ctx->pc = 0x512538u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x51253c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x51253cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x512540: 0x24420176  addiu       $v0, $v0, 0x176
    ctx->pc = 0x512540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 374));
    // 0x512544: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x512544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x512548: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x512548u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x51254c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x51254cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x512550: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x512550u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x512554: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x512554u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x512558: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x512558u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x51255c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x51255cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x512560: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x512560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x512564: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x512564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x512568: 0x3c010110  lui         $at, 0x110
    ctx->pc = 0x512568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)272 << 16));
    // 0x51256c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x51256cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x512570: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x512570u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x512574: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x512574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x512578: 0x96220022  lhu         $v0, 0x22($s1)
    ctx->pc = 0x512578u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x51257c: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x51257cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x512580: 0x96230024  lhu         $v1, 0x24($s1)
    ctx->pc = 0x512580u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x512584: 0xa604000c  sh          $a0, 0xC($s0)
    ctx->pc = 0x512584u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x512588: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x512588u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x51258c: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x51258cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x512590: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x512590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_512594:
    // 0x512594: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x512594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x512598: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x512598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x51259c: 0x29403  sra         $s2, $v0, 16
    ctx->pc = 0x51259cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
    // 0x5125a0: 0x641ffc5  bgez        $s2, . + 4 + (-0x3B << 2)
    ctx->pc = 0x5125A0u;
    {
        const bool branch_taken_0x5125a0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x5125A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5125A0u;
        // 0x5125a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5125a0) {
            ctx->pc = 0x5124B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_5124b8;
        }
    }
    ctx->pc = 0x5125A8u;
label_5125a8:
    // 0x5125a8: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x5125a8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5125ac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x5125acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x5125b0: 0x26a6f080  addiu       $a2, $s5, -0xF80
    ctx->pc = 0x5125b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963328));
    // 0x5125b4: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x5125b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x5125b8: 0x3067000f  andi        $a3, $v1, 0xF
    ctx->pc = 0x5125b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x5125bc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x5125bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x5125c0: 0xa6670000  sh          $a3, 0x0($s3)
    ctx->pc = 0x5125c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x5125c4: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x5125c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x5125c8: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x5125c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x5125cc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x5125ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5125d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x5125d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x5125d4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x5125d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x5125d8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x5125d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x5125dc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x5125dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x5125e0: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x5125e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x5125e4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x5125e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x5125e8: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x5125e8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x5125ec: 0xacd00054  sw          $s0, 0x54($a2)
    ctx->pc = 0x5125ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 16));
    // 0x5125f0: 0xacc50050  sw          $a1, 0x50($a2)
    ctx->pc = 0x5125f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 5));
    // 0x5125f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x5125f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5125f8:
    // 0x5125f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x5125f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5125fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x5125fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x512600: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x512600u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x512604: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x512604u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x512608: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x512608u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x51260c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x51260cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x512610: 0x3e00008  jr          $ra
    ctx->pc = 0x512610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512610u;
        // 0x512614: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512618u;
label_512618:
    // 0x512618: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x512618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x51261c: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x51261cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x512620: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x512620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x512624: 0x2468f080  addiu       $t0, $v1, -0xF80
    ctx->pc = 0x512624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x512628: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x512628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x51262c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x51262cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x512630: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x512630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x512634: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x512634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x512638: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x512638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x51263c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x51263cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x512640: 0x85024cd0  lh          $v0, 0x4CD0($t0)
    ctx->pc = 0x512640u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x903D50u));
    // 0x512644: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x512644u;
    {
        const bool branch_taken_0x512644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x512648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512644u;
        // 0x512648: 0x24c50022  addiu       $a1, $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512644) {
            ctx->pc = 0x5126A0u;
            goto label_5126a0;
        }
    }
    ctx->pc = 0x51264Cu;
    // 0x51264c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x51264cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x512650: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x512650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x512654: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x512654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x512658: 0x461002f  bgez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x512658u;
    {
        const bool branch_taken_0x512658 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x51265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512658u;
        // 0x51265c: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512658) {
            ctx->pc = 0x512718u;
            goto label_512718;
        }
    }
    ctx->pc = 0x512660u;
    // 0x512660: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x512660u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x512664: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x512664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x512668: 0x24c70014  addiu       $a3, $a2, 0x14
    ctx->pc = 0x512668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x51266c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x51266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x512670: 0x84d20012  lh          $s2, 0x12($a2)
    ctx->pc = 0x512670u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x512674: 0x38c03  sra         $s1, $v1, 16
    ctx->pc = 0x512674u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 16));
    // 0x512678: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x512678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x51267c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x51267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x512680: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x512680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x512684: 0x28c03  sra         $s1, $v0, 16
    ctx->pc = 0x512684u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
    // 0x512688: 0x111c00  sll         $v1, $s1, 16
    ctx->pc = 0x512688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x51268c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x51268cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x512690: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x512690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x512694: 0x2c4200d8  sltiu       $v0, $v0, 0xD8
    ctx->pc = 0x512694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)216) ? 1 : 0);
    // 0x512698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x512698u;
    {
        const bool branch_taken_0x512698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x51269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512698u;
        // 0x51269c: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x512698) {
            ctx->pc = 0x5126B0u;
            goto label_5126b0;
        }
    }
    ctx->pc = 0x5126A0u;
label_5126a0:
    // 0x5126a0: 0xc144854  jal         func_512150
    ctx->pc = 0x5126A0u;
    SET_GPR_U32(ctx, 31, 0x5126A8u);
    ctx->pc = 0x512150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512150u, 0x5126A0u, 0x5126A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5126A8u;
label_5126a8:
    // 0x5126a8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x5126A8u;
    {
        const bool branch_taken_0x5126a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5126ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5126A8u;
        // 0x5126ac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5126a8) {
            ctx->pc = 0x51271Cu;
            goto label_51271c;
        }
    }
    ctx->pc = 0x5126B0u;
label_5126b0:
    // 0x5126b0: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x5126b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x5126b4: 0x25140054  addiu       $s4, $t0, 0x54
    ctx->pc = 0x5126b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), 84));
    // 0x5126b8: 0x25130050  addiu       $s3, $t0, 0x50
    ctx->pc = 0x5126b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x5126bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x5126bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5126c0: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x5126c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x5126c4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x5126c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5126c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x5126c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5126cc: 0xc14481c  jal         func_512070
    ctx->pc = 0x5126CCu;
    SET_GPR_U32(ctx, 31, 0x5126D4u);
    ctx->pc = 0x5126D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5126CCu;
    // 0x5126d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x5126CCu, 0x5126D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5126D4u;
label_5126d4:
    // 0x5126d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5126d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5126d8: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x5126D8u;
    {
        const bool branch_taken_0x5126d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x5126DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5126D8u;
        // 0x5126dc: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5126d8) {
            ctx->pc = 0x51270Cu;
            goto label_51270c;
        }
    }
    ctx->pc = 0x5126E0u;
    // 0x5126e0: 0x2402022f  addiu       $v0, $zero, 0x22F
    ctx->pc = 0x5126e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    // 0x5126e4: 0xa6120004  sh          $s2, 0x4($s0)
    ctx->pc = 0x5126e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x5126e8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x5126e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x5126ec: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x5126ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x5126f0: 0xa6110006  sh          $s1, 0x6($s0)
    ctx->pc = 0x5126f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x5126f4: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x5126f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x5126f8: 0xa604000c  sh          $a0, 0xC($s0)
    ctx->pc = 0x5126f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x5126fc: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x5126fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x512700: 0xa604000a  sh          $a0, 0xA($s0)
    ctx->pc = 0x512700u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x512704: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x512704u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x512708: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x512708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_51270c:
    // 0x51270c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x51270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x512710: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x512710u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
    // 0x512714: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x512714u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_512718:
    // 0x512718: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x512718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_51271c:
    // 0x51271c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x51271cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x512720: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x512720u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x512724: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x512724u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x512728: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x512728u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x51272c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x51272cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x512730: 0x3e00008  jr          $ra
    ctx->pc = 0x512730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512730u;
        // 0x512734: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512738u;
}
