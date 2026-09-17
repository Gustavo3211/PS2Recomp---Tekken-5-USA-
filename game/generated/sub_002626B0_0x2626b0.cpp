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

// Function: sub_002626B0
// Address: 0x2626b0 - 0x262910
void sub_002626B0_0x2626b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002626B0_0x2626b0");
#endif

    switch (ctx->pc) {
        case 0x2627a0u: goto label_2627a0;
        case 0x262848u: goto label_262848;
        default: break;
    }

    ctx->pc = 0x2626b0u;

    // 0x2626b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2626b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2626b4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2626b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2626b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2626b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2626bc: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2626bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2626c0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2626c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2626c4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2626c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2626c8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2626c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2626cc: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2626ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2626d0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2626d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2626d4: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2626d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2626d8: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x2626d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2626dc: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2626dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2626e0: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x2626e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2626e4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2626e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2626e8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2626e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2626ec: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2626ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2626f0: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2626f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2626f4: 0x8e8303d0  lw          $v1, 0x3D0($s4)
    ctx->pc = 0x2626f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 976)));
    // 0x2626f8: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x2626f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2626fc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2626FCu;
    {
        const bool branch_taken_0x2626fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626FCu;
        // 0x262700: 0xafa80030  sw          $t0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2626fc) {
            ctx->pc = 0x262798u;
            goto label_262798;
        }
    }
    ctx->pc = 0x262704u;
    // 0x262704: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x262704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x262708: 0xde280028  ld          $t0, 0x28($s1)
    ctx->pc = 0x262708u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x26270c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26270cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262710: 0xde230020  ld          $v1, 0x20($s1)
    ctx->pc = 0x262710u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x262714: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x262714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x262718: 0xde270000  ld          $a3, 0x0($s1)
    ctx->pc = 0x262718u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26271c: 0xde260008  ld          $a2, 0x8($s1)
    ctx->pc = 0x26271cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x262720: 0x2824821  addu        $t1, $s4, $v0
    ctx->pc = 0x262720u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x262724: 0xde240010  ld          $a0, 0x10($s1)
    ctx->pc = 0x262724u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x262728: 0x25220010  addiu       $v0, $t1, 0x10
    ctx->pc = 0x262728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x26272c: 0xde250018  ld          $a1, 0x18($s1)
    ctx->pc = 0x26272cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x262730: 0xa0570041  sb          $s7, 0x41($v0)
    ctx->pc = 0x262730u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 65), (uint8_t)GPR_U32(ctx, 23));
    // 0x262734: 0xa0550042  sb          $s5, 0x42($v0)
    ctx->pc = 0x262734u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 66), (uint8_t)GPR_U32(ctx, 21));
    // 0x262738: 0xfc470000  sd          $a3, 0x0($v0)
    ctx->pc = 0x262738u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x26273c: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x26273cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x262740: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x262740u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x262744: 0xfc450018  sd          $a1, 0x18($v0)
    ctx->pc = 0x262744u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x262748: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x262748u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x26274c: 0xfc480028  sd          $t0, 0x28($v0)
    ctx->pc = 0x26274cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 8));
    // 0x262750: 0xa0530040  sb          $s3, 0x40($v0)
    ctx->pc = 0x262750u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 19));
    // 0x262754: 0x8faa0030  lw          $t2, 0x30($sp)
    ctx->pc = 0x262754u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262758: 0xac4a0044  sw          $t2, 0x44($v0)
    ctx->pc = 0x262758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 10));
    // 0x26275c: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x26275cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x262760: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x262760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x262764: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x262764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x262768: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x262768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x26276c: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x26276cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x262770: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x262770u;
    {
        const bool branch_taken_0x262770 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x262774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262770u;
        // 0x262774: 0xffa80028  sd          $t0, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262770) {
            ctx->pc = 0x262780u;
            goto label_262780;
        }
    }
    ctx->pc = 0x262778u;
    // 0x262778: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x262778u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x26277c: 0x7d220040  sq          $v0, 0x40($t1)
    ctx->pc = 0x26277cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 64), GPR_VEC(ctx, 2));
label_262780:
    // 0x262780: 0x8e8303d0  lw          $v1, 0x3D0($s4)
    ctx->pc = 0x262780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 976)));
    // 0x262784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262788: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x262788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26278c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x26278Cu;
    {
        const bool branch_taken_0x26278c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26278Cu;
        // 0x262790: 0xae8303d0  sw          $v1, 0x3D0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 976), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26278c) {
            ctx->pc = 0x2628E0u;
            goto label_2628e0;
        }
    }
    ctx->pc = 0x262794u;
    // 0x262794: 0x0  nop
    ctx->pc = 0x262794u;
    // NOP
label_262798:
    // 0x262798: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x262798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26279c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x26279cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2627a0:
    // 0x2627a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2627a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2627a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2627a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2627a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2627a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2627ac: 0x282b021  addu        $s6, $s4, $v0
    ctx->pc = 0x2627acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2627b0: 0x26d00010  addiu       $s0, $s6, 0x10
    ctx->pc = 0x2627b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x2627b4: 0x12600020  beqz        $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x2627B4u;
    {
        const bool branch_taken_0x2627b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627B4u;
        // 0x2627b8: 0x92030040  lbu         $v1, 0x40($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627b4) {
            ctx->pc = 0x262838u;
            goto label_262838;
        }
    }
    ctx->pc = 0x2627BCu;
    // 0x2627bc: 0x6600044  bltz        $s3, . + 4 + (0x44 << 2)
    ctx->pc = 0x2627BCu;
    {
        const bool branch_taken_0x2627bc = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2627C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627BCu;
        // 0x2627c0: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627bc) {
            ctx->pc = 0x2628D0u;
            goto label_2628d0;
        }
    }
    ctx->pc = 0x2627C4u;
    // 0x2627c4: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2627C4u;
    {
        const bool branch_taken_0x2627c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627C4u;
        // 0x2627c8: 0x2e42000c  sltiu       $v0, $s2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627c4) {
            ctx->pc = 0x2628D4u;
            goto label_2628d4;
        }
    }
    ctx->pc = 0x2627CCu;
    // 0x2627cc: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x2627ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2627d0: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2627D0u;
    {
        const bool branch_taken_0x2627d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627D0u;
        // 0x2627d4: 0x2e42000c  sltiu       $v0, $s2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627d0) {
            ctx->pc = 0x2628D4u;
            goto label_2628d4;
        }
    }
    ctx->pc = 0x2627D8u;
    // 0x2627d8: 0xde270028  ld          $a3, 0x28($s1)
    ctx->pc = 0x2627d8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2627dc: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x2627dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2627e0: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x2627e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2627e4: 0xde240010  ld          $a0, 0x10($s1)
    ctx->pc = 0x2627e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2627e8: 0xde250018  ld          $a1, 0x18($s1)
    ctx->pc = 0x2627e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2627ec: 0xde260020  ld          $a2, 0x20($s1)
    ctx->pc = 0x2627ecu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2627f0: 0xa2170041  sb          $s7, 0x41($s0)
    ctx->pc = 0x2627f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 23));
    // 0x2627f4: 0xa2150042  sb          $s5, 0x42($s0)
    ctx->pc = 0x2627f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 21));
    // 0x2627f8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2627f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2627fc: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x2627fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x262800: 0xfe040010  sd          $a0, 0x10($s0)
    ctx->pc = 0x262800u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
    // 0x262804: 0xfe050018  sd          $a1, 0x18($s0)
    ctx->pc = 0x262804u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 5));
    // 0x262808: 0xfe060020  sd          $a2, 0x20($s0)
    ctx->pc = 0x262808u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 6));
    // 0x26280c: 0xfe070028  sd          $a3, 0x28($s0)
    ctx->pc = 0x26280cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 7));
    // 0x262810: 0xa2130040  sb          $s3, 0x40($s0)
    ctx->pc = 0x262810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 19));
    // 0x262814: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x262814u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262818: 0xae080044  sw          $t0, 0x44($s0)
    ctx->pc = 0x262818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 8));
    // 0x26281c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26281cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x262820: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x262820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x262824: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x262824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x262828: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x262828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x26282c: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x26282cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x262830: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x262830u;
    {
        const bool branch_taken_0x262830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262830u;
        // 0x262834: 0xffa70028  sd          $a3, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262830) {
            ctx->pc = 0x2628B4u;
            goto label_2628b4;
        }
    }
    ctx->pc = 0x262838u;
label_262838:
    // 0x262838: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x262838u;
    {
        const bool branch_taken_0x262838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262838u;
        // 0x26283c: 0x2e42000c  sltiu       $v0, $s2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262838) {
            ctx->pc = 0x2628D4u;
            goto label_2628d4;
        }
    }
    ctx->pc = 0x262840u;
    // 0x262840: 0xc095334  jal         func_254CD0
    ctx->pc = 0x262840u;
    SET_GPR_U32(ctx, 31, 0x262848u);
    ctx->pc = 0x262844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262840u;
    // 0x262844: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254CD0u, 0x262840u, 0x262848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262848u;
label_262848:
    // 0x262848: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x262848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x26284c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x26284cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x262850: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x262850u;
    {
        const bool branch_taken_0x262850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262850u;
        // 0x262854: 0x2e42000c  sltiu       $v0, $s2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262850) {
            ctx->pc = 0x2628D4u;
            goto label_2628d4;
        }
    }
    ctx->pc = 0x262858u;
    // 0x262858: 0xde270028  ld          $a3, 0x28($s1)
    ctx->pc = 0x262858u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x26285c: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x26285cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x262860: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x262860u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x262864: 0xde240010  ld          $a0, 0x10($s1)
    ctx->pc = 0x262864u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x262868: 0xde250018  ld          $a1, 0x18($s1)
    ctx->pc = 0x262868u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x26286c: 0xde260020  ld          $a2, 0x20($s1)
    ctx->pc = 0x26286cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x262870: 0xa2170041  sb          $s7, 0x41($s0)
    ctx->pc = 0x262870u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 23));
    // 0x262874: 0xa2150042  sb          $s5, 0x42($s0)
    ctx->pc = 0x262874u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 21));
    // 0x262878: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x262878u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x26287c: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x26287cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x262880: 0xfe040010  sd          $a0, 0x10($s0)
    ctx->pc = 0x262880u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
    // 0x262884: 0xfe050018  sd          $a1, 0x18($s0)
    ctx->pc = 0x262884u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 5));
    // 0x262888: 0xfe060020  sd          $a2, 0x20($s0)
    ctx->pc = 0x262888u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 6));
    // 0x26288c: 0xfe070028  sd          $a3, 0x28($s0)
    ctx->pc = 0x26288cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 7));
    // 0x262890: 0x8faa0030  lw          $t2, 0x30($sp)
    ctx->pc = 0x262890u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262894: 0xae0a0044  sw          $t2, 0x44($s0)
    ctx->pc = 0x262894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 10));
    // 0x262898: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x262898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26289c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x26289cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x2628a0: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x2628a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x2628a4: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x2628a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
    // 0x2628a8: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x2628a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x2628ac: 0xffa70028  sd          $a3, 0x28($sp)
    ctx->pc = 0x2628acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 7));
    // 0x2628b0: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x2628b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
label_2628b4:
    // 0x2628b4: 0x53c0000a  beql        $fp, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2628B4u;
    {
        const bool branch_taken_0x2628b4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2628b4) {
            ctx->pc = 0x2628B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2628B4u;
            // 0x2628b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2628E0u;
            goto label_2628e0;
        }
    }
    ctx->pc = 0x2628BCu;
    // 0x2628bc: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x2628bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2628c0: 0x7ec20040  sq          $v0, 0x40($s6)
    ctx->pc = 0x2628c0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 64), GPR_VEC(ctx, 2));
    // 0x2628c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2628C4u;
    {
        const bool branch_taken_0x2628c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2628C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628C4u;
        // 0x2628c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2628c4) {
            ctx->pc = 0x2628E0u;
            goto label_2628e0;
        }
    }
    ctx->pc = 0x2628CCu;
    // 0x2628cc: 0x0  nop
    ctx->pc = 0x2628ccu;
    // NOP
label_2628d0:
    // 0x2628d0: 0x2e42000c  sltiu       $v0, $s2, 0xC
    ctx->pc = 0x2628d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_2628d4:
    // 0x2628d4: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x2628D4u;
    {
        const bool branch_taken_0x2628d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2628D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628D4u;
        // 0x2628d8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2628d4) {
            ctx->pc = 0x2627A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2627a0;
        }
    }
    ctx->pc = 0x2628DCu;
    // 0x2628dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2628dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2628e0:
    // 0x2628e0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2628e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2628e4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2628e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2628e8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2628e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2628ec: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2628ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2628f0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2628f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2628f4: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2628f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2628f8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2628f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2628fc: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2628fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x262900: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x262900u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x262904: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x262904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x262908: 0x3e00008  jr          $ra
    ctx->pc = 0x262908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262908u;
        // 0x26290c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262910u;
}
