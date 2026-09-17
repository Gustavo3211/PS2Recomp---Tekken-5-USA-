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

// Function: sub_004FD280
// Address: 0x4fd280 - 0x4fd678
void sub_004FD280_0x4fd280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FD280_0x4fd280");
#endif

    switch (ctx->pc) {
        case 0x4fd3d8u: goto label_4fd3d8;
        case 0x4fd3f4u: goto label_4fd3f4;
        case 0x4fd410u: goto label_4fd410;
        case 0x4fd450u: goto label_4fd450;
        case 0x4fd46cu: goto label_4fd46c;
        case 0x4fd488u: goto label_4fd488;
        case 0x4fd4c4u: goto label_4fd4c4;
        case 0x4fd4e0u: goto label_4fd4e0;
        case 0x4fd520u: goto label_4fd520;
        case 0x4fd53cu: goto label_4fd53c;
        case 0x4fd558u: goto label_4fd558;
        case 0x4fd594u: goto label_4fd594;
        case 0x4fd5b0u: goto label_4fd5b0;
        case 0x4fd5ecu: goto label_4fd5ec;
        case 0x4fd608u: goto label_4fd608;
        case 0x4fd624u: goto label_4fd624;
        case 0x4fd644u: goto label_4fd644;
        default: break;
    }

    ctx->pc = 0x4fd280u;

    // 0x4fd280: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4fd280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4fd284: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4fd284u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4fd288: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4fd288u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4fd28c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4fd28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x4fd290: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4fd290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x4fd294: 0x5b403  sra         $s6, $a1, 16
    ctx->pc = 0x4fd294u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4fd298: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4fd298u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4fd29c: 0x4a403  sra         $s4, $a0, 16
    ctx->pc = 0x4fd29cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4fd2a0: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x4fd2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x4fd2a4: 0x6bc03  sra         $s7, $a2, 16
    ctx->pc = 0x4fd2a4u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4fd2a8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4fd2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4fd2ac: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x4fd2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x4fd2b0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x4fd2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x4fd2b4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x4fd2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x4fd2b8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x4fd2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x4fd2bc: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x4fd2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x4fd2c0: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x4fd2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x4fd2c4: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x4fd2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x4fd2c8: 0x129600de  beq         $s4, $s6, . + 4 + (0xDE << 2)
    ctx->pc = 0x4FD2C8u;
    {
        const bool branch_taken_0x4fd2c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 22));
        ctx->pc = 0x4FD2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD2C8u;
        // 0x4fd2cc: 0xafa80024  sw          $t0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd2c8) {
            ctx->pc = 0x4FD644u;
            goto label_4fd644;
        }
    }
    ctx->pc = 0x4FD2D0u;
    // 0x4fd2d0: 0x12d700dd  beq         $s6, $s7, . + 4 + (0xDD << 2)
    ctx->pc = 0x4FD2D0u;
    {
        const bool branch_taken_0x4fd2d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 23));
        ctx->pc = 0x4FD2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD2D0u;
        // 0x4fd2d4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd2d0) {
            ctx->pc = 0x4FD648u;
            goto label_4fd648;
        }
    }
    ctx->pc = 0x4FD2D8u;
    // 0x4fd2d8: 0x129700db  beq         $s4, $s7, . + 4 + (0xDB << 2)
    ctx->pc = 0x4FD2D8u;
    {
        const bool branch_taken_0x4fd2d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 23));
        ctx->pc = 0x4FD2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD2D8u;
        // 0x4fd2dc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd2d8) {
            ctx->pc = 0x4FD648u;
            goto label_4fd648;
        }
    }
    ctx->pc = 0x4FD2E0u;
    // 0x4fd2e0: 0x3c100087  lui         $s0, 0x87
    ctx->pc = 0x4fd2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)135 << 16));
    // 0x4fd2e4: 0x8c44ced8  lw          $a0, -0x3128($v0)
    ctx->pc = 0x4fd2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
    // 0x4fd2e8: 0x260ac748  addiu       $t2, $s0, -0x38B8
    ctx->pc = 0x4fd2e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952776));
    // 0x4fd2ec: 0x14f100  sll         $fp, $s4, 4
    ctx->pc = 0x4fd2ecu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x4fd2f0: 0x2549000c  addiu       $t1, $t2, 0xC
    ctx->pc = 0x4fd2f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
    // 0x4fd2f4: 0xa4800038  sh          $zero, 0x38($a0)
    ctx->pc = 0x4fd2f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x4fd2f8: 0x3c91821  addu        $v1, $fp, $t1
    ctx->pc = 0x4fd2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 9)));
    // 0x4fd2fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4fd2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fd300: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4fd300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4fd304: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4FD304u;
    {
        const bool branch_taken_0x4fd304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FD308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD304u;
        // 0x4fd308: 0x169900  sll         $s3, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd304) {
            ctx->pc = 0x4FD348u;
            goto label_4fd348;
        }
    }
    ctx->pc = 0x4FD30Cu;
    // 0x4fd30c: 0x162900  sll         $a1, $s6, 4
    ctx->pc = 0x4fd30cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x4fd310: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x4fd310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x4fd314: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4fd314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fd318: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4fd318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4fd31c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4FD31Cu;
    {
        const bool branch_taken_0x4fd31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD31Cu;
        // 0x4fd320: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd31c) {
            ctx->pc = 0x4FD348u;
            goto label_4fd348;
        }
    }
    ctx->pc = 0x4FD324u;
    // 0x4fd324: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x4fd324u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x4fd328: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x4fd328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x4fd32c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4fd32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fd330: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4fd330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4fd334: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x4FD334u;
    {
        const bool branch_taken_0x4fd334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FD338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD334u;
        // 0x4fd338: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd334) {
            ctx->pc = 0x4FD630u;
            goto label_4fd630;
        }
    }
    ctx->pc = 0x4FD33Cu;
    // 0x4fd33c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4FD33Cu;
    {
        const bool branch_taken_0x4fd33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD33Cu;
        // 0x4fd340: 0x2602c748  addiu       $v0, $s0, -0x38B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd33c) {
            ctx->pc = 0x4FD350u;
            goto label_4fd350;
        }
    }
    ctx->pc = 0x4FD344u;
    // 0x4fd344: 0x0  nop
    ctx->pc = 0x4fd344u;
    // NOP
label_4fd348:
    // 0x4fd348: 0x17a900  sll         $s5, $s7, 4
    ctx->pc = 0x4fd348u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x4fd34c: 0x2602c748  addiu       $v0, $s0, -0x38B8
    ctx->pc = 0x4fd34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952776));
label_4fd350:
    // 0x4fd350: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x4fd350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x4fd354: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x4fd354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4fd358: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x4fd358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x4fd35c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4fd35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fd360: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x4fd360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x4fd364: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4fd364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4fd368: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4fd368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4fd36c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x4fd36cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4fd370: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4fd370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4fd374: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4fd374u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4fd378: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4fd378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4fd37c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4fd37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4fd380: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4fd380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4fd384: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4fd384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4fd388: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4fd388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4fd38c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x4fd38cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4fd390: 0x504000ad  beql        $v0, $zero, . + 4 + (0xAD << 2)
    ctx->pc = 0x4FD390u;
    {
        const bool branch_taken_0x4fd390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fd390) {
            ctx->pc = 0x4FD394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FD390u;
            // 0x4fd394: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FD648u;
            goto label_4fd648;
        }
    }
    ctx->pc = 0x4FD398u;
    // 0x4fd398: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4fd398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4fd39c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4fd39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4fd3a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4fd3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4fd3a4: 0x8c63bd40  lw          $v1, -0x42C0($v1)
    ctx->pc = 0x4fd3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950208)));
    // 0x4fd3a8: 0x600008  jr          $v1
    ctx->pc = 0x4FD3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4FD3B0u: goto label_4fd3b0;
            case 0x4FD428u: goto label_4fd428;
            case 0x4FD4A0u: goto label_4fd4a0;
            case 0x4FD4F8u: goto label_4fd4f8;
            case 0x4FD570u: goto label_4fd570;
            case 0x4FD5C8u: goto label_4fd5c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FD3A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4FD3B0u;
label_4fd3b0:
    // 0x4fd3b0: 0x2612c748  addiu       $s2, $s0, -0x38B8
    ctx->pc = 0x4fd3b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952776));
    // 0x4fd3b4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x4fd3b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd3b8: 0x26500008  addiu       $s0, $s2, 0x8
    ctx->pc = 0x4fd3b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x4fd3bc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4fd3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd3c0: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x4fd3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x4fd3c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fd3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd3c8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4fd3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fd3cc: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x4fd3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x4fd3d0: 0xc13f2e8  jal         func_4FCBA0
    ctx->pc = 0x4FD3D0u;
    SET_GPR_U32(ctx, 31, 0x4FD3D8u);
    ctx->pc = 0x4FD3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD3D0u;
    // 0x4fd3d4: 0x2729821  addu        $s3, $s3, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FCBA0u, 0x4FD3D0u, 0x4FD3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD3D8u;
label_4fd3d8:
    // 0x4fd3d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fd3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd3dc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x4fd3dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4fd3e0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4fd3e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fd3e4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4fd3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd3e8: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x4fd3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x4fd3ec: 0xc13f2e8  jal         func_4FCBA0
    ctx->pc = 0x4FD3ECu;
    SET_GPR_U32(ctx, 31, 0x4FD3F4u);
    ctx->pc = 0x4FD3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD3ECu;
    // 0x4fd3f0: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FCBA0u, 0x4FD3ECu, 0x4FD3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD3F4u;
label_4fd3f4:
    // 0x4fd3f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4fd3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd3f8: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x4fd3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fd3fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4fd3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd400: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x4fd400u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4fd404: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4fd404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd408: 0xc13f32a  jal         func_4FCCA8
    ctx->pc = 0x4FD408u;
    SET_GPR_U32(ctx, 31, 0x4FD410u);
    ctx->pc = 0x4FD40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD408u;
    // 0x4fd40c: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FCCA8u, 0x4FD408u, 0x4FD410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD410u;
label_4fd410:
    // 0x4fd410: 0x2b22021  addu        $a0, $s5, $s2
    ctx->pc = 0x4fd410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x4fd414: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x4fd414u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fd418: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4fd418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd41c: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x4fd41cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4fd420: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x4FD420u;
    {
        const bool branch_taken_0x4fd420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FD424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD420u;
        // 0x4fd424: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd420) {
            ctx->pc = 0x4FD61Cu;
            goto label_4fd61c;
        }
    }
    ctx->pc = 0x4FD428u;
label_4fd428:
    // 0x4fd428: 0x2611c748  addiu       $s1, $s0, -0x38B8
    ctx->pc = 0x4fd428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952776));
    // 0x4fd42c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x4fd42cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd430: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x4fd430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4fd434: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4fd434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd438: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x4fd438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x4fd43c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4fd43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd440: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4fd440u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fd444: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x4fd444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x4fd448: 0xc13f2e8  jal         func_4FCBA0
    ctx->pc = 0x4FD448u;
    SET_GPR_U32(ctx, 31, 0x4FD450u);
    ctx->pc = 0x4FD44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD448u;
    // 0x4fd44c: 0x2b19821  addu        $s3, $s5, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FCBA0u, 0x4FD448u, 0x4FD450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD450u;
label_4fd450:
    // 0x4fd450: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4fd450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd454: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x4fd454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4fd458: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4fd458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fd45c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4fd45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd460: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x4fd460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x4fd464: 0xc13f2e8  jal         func_4FCBA0
    ctx->pc = 0x4FD464u;
    SET_GPR_U32(ctx, 31, 0x4FD46Cu);
    ctx->pc = 0x4FD468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD464u;
    // 0x4fd468: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FCBA0u, 0x4FD464u, 0x4FD46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD46Cu;
label_4fd46c:
    // 0x4fd46c: 0x3d12021  addu        $a0, $fp, $s1
    ctx->pc = 0x4fd46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
    // 0x4fd470: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x4fd470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fd474: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x4fd474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4fd478: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x4fd478u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4fd47c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4fd47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd480: 0xc13f32a  jal         func_4FCCA8
    ctx->pc = 0x4FD480u;
    SET_GPR_U32(ctx, 31, 0x4FD488u);
    ctx->pc = 0x4FD484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD480u;
    // 0x4fd484: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FCCA8u, 0x4FD480u, 0x4FD488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD488u;
label_4fd488:
    // 0x4fd488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4fd488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd48c: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x4fd48cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fd490: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4fd490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd494: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x4fd494u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4fd498: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x4FD498u;
    {
        const bool branch_taken_0x4fd498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FD49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD498u;
        // 0x4fd49c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd498) {
            ctx->pc = 0x4FD61Cu;
            goto label_4fd61c;
        }
    }
    ctx->pc = 0x4FD4A0u;
label_4fd4a0:
    // 0x4fd4a0: 0x2610c748  addiu       $s0, $s0, -0x38B8
    ctx->pc = 0x4fd4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952776));
    // 0x4fd4a4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x4fd4a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd4a8: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x4fd4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4fd4ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fd4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd4b0: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x4fd4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x4fd4b4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4fd4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd4b8: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4fd4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fd4bc: 0xc13f2e8  jal         func_4FCBA0
    ctx->pc = 0x4FD4BCu;
    SET_GPR_U32(ctx, 31, 0x4FD4C4u);
    ctx->pc = 0x4FD4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD4BCu;
    // 0x4fd4c0: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FCBA0u, 0x4FD4BCu, 0x4FD4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD4C4u;
label_4fd4c4:
    // 0x4fd4c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4fd4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd4c8: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x4fd4c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4fd4cc: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4fd4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fd4d0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4fd4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd4d4: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x4fd4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x4fd4d8: 0xc13f2e8  jal         func_4FCBA0
    ctx->pc = 0x4FD4D8u;
    SET_GPR_U32(ctx, 31, 0x4FD4E0u);
    ctx->pc = 0x4FD4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD4D8u;
    // 0x4fd4dc: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FCBA0u, 0x4FD4D8u, 0x4FD4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD4E0u;
label_4fd4e0:
    // 0x4fd4e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4fd4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd4e4: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x4fd4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fd4e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4fd4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd4ec: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x4fd4ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4fd4f0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x4FD4F0u;
    {
        const bool branch_taken_0x4fd4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FD4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD4F0u;
        // 0x4fd4f4: 0x2b03021  addu        $a2, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd4f0) {
            ctx->pc = 0x4FD61Cu;
            goto label_4fd61c;
        }
    }
    ctx->pc = 0x4FD4F8u;
label_4fd4f8:
    // 0x4fd4f8: 0x2611c748  addiu       $s1, $s0, -0x38B8
    ctx->pc = 0x4fd4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952776));
    // 0x4fd4fc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x4fd4fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd500: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x4fd500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4fd504: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4fd504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd508: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x4fd508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x4fd50c: 0x2719821  addu        $s3, $s3, $s1
    ctx->pc = 0x4fd50cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x4fd510: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4fd510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fd514: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4fd514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd518: 0xc13f2e8  jal         func_4FCBA0
    ctx->pc = 0x4FD518u;
    SET_GPR_U32(ctx, 31, 0x4FD520u);
    ctx->pc = 0x4FD51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD518u;
    // 0x4fd51c: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FCBA0u, 0x4FD518u, 0x4FD520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD520u;
label_4fd520:
    // 0x4fd520: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4fd520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd524: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x4fd524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4fd528: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4fd528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fd52c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4fd52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd530: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x4fd530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x4fd534: 0xc13f2e8  jal         func_4FCBA0
    ctx->pc = 0x4FD534u;
    SET_GPR_U32(ctx, 31, 0x4FD53Cu);
    ctx->pc = 0x4FD538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD534u;
    // 0x4fd538: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FCBA0u, 0x4FD534u, 0x4FD53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD53Cu;
label_4fd53c:
    // 0x4fd53c: 0x3d12021  addu        $a0, $fp, $s1
    ctx->pc = 0x4fd53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
    // 0x4fd540: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x4fd540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fd544: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x4fd544u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4fd548: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x4fd548u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4fd54c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4fd54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd550: 0xc13f32a  jal         func_4FCCA8
    ctx->pc = 0x4FD550u;
    SET_GPR_U32(ctx, 31, 0x4FD558u);
    ctx->pc = 0x4FD554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD550u;
    // 0x4fd554: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FCCA8u, 0x4FD550u, 0x4FD558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD558u;
label_4fd558:
    // 0x4fd558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4fd558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd55c: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x4fd55cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fd560: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4fd560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd564: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x4fd564u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4fd568: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x4FD568u;
    {
        const bool branch_taken_0x4fd568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FD56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD568u;
        // 0x4fd56c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd568) {
            ctx->pc = 0x4FD61Cu;
            goto label_4fd61c;
        }
    }
    ctx->pc = 0x4FD570u;
label_4fd570:
    // 0x4fd570: 0x2610c748  addiu       $s0, $s0, -0x38B8
    ctx->pc = 0x4fd570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952776));
    // 0x4fd574: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x4fd574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd578: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x4fd578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4fd57c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fd57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd580: 0x2718821  addu        $s1, $s3, $s1
    ctx->pc = 0x4fd580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x4fd584: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4fd584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd588: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4fd588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fd58c: 0xc13f2e8  jal         func_4FCBA0
    ctx->pc = 0x4FD58Cu;
    SET_GPR_U32(ctx, 31, 0x4FD594u);
    ctx->pc = 0x4FD590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD58Cu;
    // 0x4fd590: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FCBA0u, 0x4FD58Cu, 0x4FD594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD594u;
label_4fd594:
    // 0x4fd594: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4fd594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd598: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x4fd598u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4fd59c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4fd59cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fd5a0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4fd5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd5a4: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x4fd5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x4fd5a8: 0xc13f2e8  jal         func_4FCBA0
    ctx->pc = 0x4FD5A8u;
    SET_GPR_U32(ctx, 31, 0x4FD5B0u);
    ctx->pc = 0x4FD5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD5A8u;
    // 0x4fd5ac: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FCBA0u, 0x4FD5A8u, 0x4FD5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD5B0u;
label_4fd5b0:
    // 0x4fd5b0: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x4fd5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x4fd5b4: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x4fd5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fd5b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4fd5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd5bc: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x4fd5bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4fd5c0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4FD5C0u;
    {
        const bool branch_taken_0x4fd5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD5C0u;
        // 0x4fd5c4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd5c0) {
            ctx->pc = 0x4FD61Cu;
            goto label_4fd61c;
        }
    }
    ctx->pc = 0x4FD5C8u;
label_4fd5c8:
    // 0x4fd5c8: 0x2610c748  addiu       $s0, $s0, -0x38B8
    ctx->pc = 0x4fd5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952776));
    // 0x4fd5cc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x4fd5ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd5d0: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x4fd5d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4fd5d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4fd5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd5d8: 0x3d18821  addu        $s1, $fp, $s1
    ctx->pc = 0x4fd5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
    // 0x4fd5dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4fd5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd5e0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4fd5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fd5e4: 0xc13f2e8  jal         func_4FCBA0
    ctx->pc = 0x4FD5E4u;
    SET_GPR_U32(ctx, 31, 0x4FD5ECu);
    ctx->pc = 0x4FD5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD5E4u;
    // 0x4fd5e8: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FCBA0u, 0x4FD5E4u, 0x4FD5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD5ECu;
label_4fd5ec:
    // 0x4fd5ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4fd5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd5f0: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x4fd5f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4fd5f4: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4fd5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fd5f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4fd5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd5fc: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x4fd5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x4fd600: 0xc13f2e8  jal         func_4FCBA0
    ctx->pc = 0x4FD600u;
    SET_GPR_U32(ctx, 31, 0x4FD608u);
    ctx->pc = 0x4FD604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD600u;
    // 0x4fd604: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FCBA0u, 0x4FD600u, 0x4FD608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD608u;
label_4fd608:
    // 0x4fd608: 0x3d02021  addu        $a0, $fp, $s0
    ctx->pc = 0x4fd608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x4fd60c: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x4fd60cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fd610: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4fd610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fd614: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x4fd614u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4fd618: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4fd618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4fd61c:
    // 0x4fd61c: 0xc13f32a  jal         func_4FCCA8
    ctx->pc = 0x4FD61Cu;
    SET_GPR_U32(ctx, 31, 0x4FD624u);
    ctx->pc = 0x4FD620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD61Cu;
    // 0x4fd620: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FCCA8u, 0x4FD61Cu, 0x4FD624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD624u;
label_4fd624:
    // 0x4fd624: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4FD624u;
    {
        const bool branch_taken_0x4fd624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FD628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD624u;
        // 0x4fd628: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fd624) {
            ctx->pc = 0x4FD648u;
            goto label_4fd648;
        }
    }
    ctx->pc = 0x4FD62Cu;
    // 0x4fd62c: 0x0  nop
    ctx->pc = 0x4fd62cu;
    // NOP
label_4fd630:
    // 0x4fd630: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x4fd630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x4fd634: 0x3ca2021  addu        $a0, $fp, $t2
    ctx->pc = 0x4fd634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 10)));
    // 0x4fd638: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x4fd638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x4fd63c: 0xc13f32a  jal         func_4FCCA8
    ctx->pc = 0x4FD63Cu;
    SET_GPR_U32(ctx, 31, 0x4FD644u);
    ctx->pc = 0x4FD640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FD63Cu;
    // 0x4fd640: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FCCA8u, 0x4FD63Cu, 0x4FD644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FD644u;
label_4fd644:
    // 0x4fd644: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4fd644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4fd648:
    // 0x4fd648: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x4fd648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4fd64c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4fd64cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4fd650: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x4fd650u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4fd654: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4fd654u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4fd658: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x4fd658u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4fd65c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4fd65cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4fd660: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x4fd660u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4fd664: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x4fd664u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4fd668: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x4fd668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4fd66c: 0x3e00008  jr          $ra
    ctx->pc = 0x4FD66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FD670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FD66Cu;
        // 0x4fd670: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FD66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FD674u;
    // 0x4fd674: 0x0  nop
    ctx->pc = 0x4fd674u;
    // NOP
    ctx->pc = 0x4fd678u;
}
