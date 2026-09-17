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

// Function: sub_0026D590
// Address: 0x26d590 - 0x26d6d8
void sub_0026D590_0x26d590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D590_0x26d590");
#endif

    switch (ctx->pc) {
        case 0x26d600u: goto label_26d600;
        case 0x26d648u: goto label_26d648;
        case 0x26d654u: goto label_26d654;
        default: break;
    }

    ctx->pc = 0x26d590u;

    // 0x26d590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26d590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26d594: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26d594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26d598: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x26d598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x26d59c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x26d59cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26d5a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x26d5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x26d5a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26d5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26d5a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26d5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26d5ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26d5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26d5b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x26d5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x26d5b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x26d5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x26d5b8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x26d5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x26d5bc: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x26d5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x26d5c0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x26d5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x26d5c4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26d5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d5c8: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x26d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x26d5cc: 0x2475012c  addiu       $s5, $v1, 0x12C
    ctx->pc = 0x26d5ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 300));
    // 0x26d5d0: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x26d5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x26d5d4: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x26d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26d5d8: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x26d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x26d5dc: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x26d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    // 0x26d5e0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d5e4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x26d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x26d5e8: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x26d5e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26d5ec: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x26d5ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26d5f0: 0x1045002b  beq         $v0, $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x26D5F0u;
    {
        const bool branch_taken_0x26d5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x26D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5F0u;
        // 0x26d5f4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d5f0) {
            ctx->pc = 0x26D6A0u;
            goto label_26d6a0;
        }
    }
    ctx->pc = 0x26D5F8u;
    // 0x26d5f8: 0x341e8000  ori         $fp, $zero, 0x8000
    ctx->pc = 0x26d5f8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26d5fc: 0x34038005  ori         $v1, $zero, 0x8005
    ctx->pc = 0x26d5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
label_26d600:
    // 0x26d600: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26D600u;
    {
        const bool branch_taken_0x26d600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26d600) {
            ctx->pc = 0x26D604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D600u;
            // 0x26d604: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D630u;
            goto label_26d630;
        }
    }
    ctx->pc = 0x26D608u;
    // 0x26d608: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x26d608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26d60c: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x26d60cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26d610: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x26d610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x26d614: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x26d614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x26d618: 0x96320014  lhu         $s2, 0x14($s1)
    ctx->pc = 0x26d618u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x26d61c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26d620: 0x8ca301b0  lw          $v1, 0x1B0($a1)
    ctx->pc = 0x26d620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x26d624: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x26d624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x26d628: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26D628u;
    {
        const bool branch_taken_0x26d628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D628u;
        // 0x26d62c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d628) {
            ctx->pc = 0x26D634u;
            goto label_26d634;
        }
    }
    ctx->pc = 0x26D630u;
label_26d630:
    // 0x26d630: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x26d630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26d634:
    // 0x26d634: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x26D634u;
    {
        const bool branch_taken_0x26d634 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D634u;
        // 0x26d638: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d634) {
            ctx->pc = 0x26D68Cu;
            goto label_26d68c;
        }
    }
    ctx->pc = 0x26D63Cu;
    // 0x26d63c: 0x3c140fff  lui         $s4, 0xFFF
    ctx->pc = 0x26d63cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4095 << 16));
    // 0x26d640: 0x3c170010  lui         $s7, 0x10
    ctx->pc = 0x26d640u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)16 << 16));
    // 0x26d644: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x26d644u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_26d648:
    // 0x26d648: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x26d648u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26d64c: 0xc09905e  jal         func_264178
    ctx->pc = 0x26D64Cu;
    SET_GPR_U32(ctx, 31, 0x26D654u);
    ctx->pc = 0x26D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D64Cu;
    // 0x26d650: 0x8f84aa7c  lw          $a0, -0x5584($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x26D64Cu, 0x26D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D654u;
label_26d654:
    // 0x26d654: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x26d654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x26d658: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x26d658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x26d65c: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x26d65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x26d660: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26D660u;
    {
        const bool branch_taken_0x26d660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d660) {
            ctx->pc = 0x26D664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D660u;
            // 0x26d664: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D680u;
            goto label_26d680;
        }
    }
    ctx->pc = 0x26D668u;
    // 0x26d668: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x26d668u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x26d66c: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x26d66cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x26d670: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x26d670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x26d674: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26D674u;
    {
        const bool branch_taken_0x26d674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D674u;
        // 0x26d678: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d674) {
            ctx->pc = 0x26D69Cu;
            goto label_26d69c;
        }
    }
    ctx->pc = 0x26D67Cu;
    // 0x26d67c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26d67cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_26d680:
    // 0x26d680: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x26d680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x26d684: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x26D684u;
    {
        const bool branch_taken_0x26d684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D684u;
        // 0x26d688: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d684) {
            ctx->pc = 0x26D648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d648;
        }
    }
    ctx->pc = 0x26D68Cu;
label_26d68c:
    // 0x26d68c: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x26d68cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x26d690: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x26d690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26d694: 0x145effda  bne         $v0, $fp, . + 4 + (-0x26 << 2)
    ctx->pc = 0x26D694u;
    {
        const bool branch_taken_0x26d694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x26D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D694u;
        // 0x26d698: 0x34038005  ori         $v1, $zero, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d694) {
            ctx->pc = 0x26D600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d600;
        }
    }
    ctx->pc = 0x26D69Cu;
label_26d69c:
    // 0x26d69c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26d6a0:
    // 0x26d6a0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x26d6a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d6a4: 0xac760128  sw          $s6, 0x128($v1)
    ctx->pc = 0x26d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 22));
    // 0x26d6a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26d6a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d6ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26d6acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26d6b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26d6b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d6b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x26d6b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26d6b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x26d6b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d6bc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x26d6bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d6c0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x26d6c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d6c4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x26d6c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26d6c8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x26d6c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26d6cc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x26d6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x26d6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x26D6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6D0u;
        // 0x26d6d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D6D8u;
}
