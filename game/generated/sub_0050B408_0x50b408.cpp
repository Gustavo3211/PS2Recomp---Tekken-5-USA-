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

// Function: sub_0050B408
// Address: 0x50b408 - 0x50bc48
void sub_0050B408_0x50b408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050B408_0x50b408");
#endif

    switch (ctx->pc) {
        case 0x50b52cu: goto label_50b52c;
        case 0x50b584u: goto label_50b584;
        case 0x50b6b0u: goto label_50b6b0;
        case 0x50b6c0u: goto label_50b6c0;
        case 0x50b728u: goto label_50b728;
        case 0x50b814u: goto label_50b814;
        case 0x50b88cu: goto label_50b88c;
        case 0x50b8d0u: goto label_50b8d0;
        default: break;
    }

    ctx->pc = 0x50b408u;

label_50b408:
    // 0x50b408: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x50b408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x50b40c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50b40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50b410: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50b410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50b414: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50b414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50b418: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50b418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x50b41c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x50b41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x50b420: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x50b420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x50b424: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x50b424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x50b428: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x50b428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x50b42c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x50b42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x50b430: 0x14800029  bnez        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x50B430u;
    {
        const bool branch_taken_0x50b430 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x50B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B430u;
        // 0x50b434: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b430) {
            ctx->pc = 0x50B4D8u;
            goto label_50b4d8;
        }
    }
    ctx->pc = 0x50B438u;
    // 0x50b438: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50b438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50b43c: 0x3c16008f  lui         $s6, 0x8F
    ctx->pc = 0x50b43cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)143 << 16));
    // 0x50b440: 0x2447c610  addiu       $a3, $v0, -0x39F0
    ctx->pc = 0x50b440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952464));
    // 0x50b444: 0x26c8c60c  addiu       $t0, $s6, -0x39F4
    ctx->pc = 0x50b444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952460));
    // 0x50b448: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x50b448u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC610u));
    // 0x50b44c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x50b44cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x50b450: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x50b450u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC60Cu));
    // 0x50b454: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x50b454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x50b458: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x50b458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x50b45c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x50b45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x50b460: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x50b460u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x50b464: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x50b464u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50b468: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x50B468u;
    {
        const bool branch_taken_0x50b468 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x50B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B468u;
        // 0x50b46c: 0x94e40000  lhu         $a0, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b468) {
            ctx->pc = 0x50B488u;
            goto label_50b488;
        }
    }
    ctx->pc = 0x50B470u;
    // 0x50b470: 0x21023  negu        $v0, $v0
    ctx->pc = 0x50b470u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x50b474: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50b474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50b478: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50b478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50b47c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50b47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50b480: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x50b480u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x50b484: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x50b484u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_50b488:
    // 0x50b488: 0x2c820011  sltiu       $v0, $a0, 0x11
    ctx->pc = 0x50b488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x50b48c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x50B48Cu;
    {
        const bool branch_taken_0x50b48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50b48c) {
            ctx->pc = 0x50B490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50B48Cu;
            // 0x50b490: 0x26c7c60c  addiu       $a3, $s6, -0x39F4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952460));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50B4E0u;
            goto label_50b4e0;
        }
    }
    ctx->pc = 0x50B494u;
    // 0x50b494: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x50b494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x50b498: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x50b498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x50b49c: 0x2464f080  addiu       $a0, $v1, -0xF80
    ctx->pc = 0x50b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x50b4a0: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x50b4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x50b4a4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x50b4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x50b4a8: 0x94854e06  lhu         $a1, 0x4E06($a0)
    ctx->pc = 0x50b4a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x903E86u));
    // 0x50b4ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50b4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50b4b0: 0x248600c0  addiu       $a2, $a0, 0xC0
    ctx->pc = 0x50b4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x50b4b4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x50b4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x50b4b8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x50b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x50b4bc: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x50b4bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50b4c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x50b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x50b4c4: 0x3042fffc  andi        $v0, $v0, 0xFFFC
    ctx->pc = 0x50b4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65532);
    // 0x50b4c8: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x50b4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x50b4cc: 0xac864e08  sw          $a2, 0x4E08($a0)
    ctx->pc = 0x50b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 19976), GPR_U32(ctx, 6));
    // 0x50b4d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x50B4D0u;
    {
        const bool branch_taken_0x50b4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B4D0u;
        // 0x50b4d4: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b4d0) {
            ctx->pc = 0x50B4DCu;
            goto label_50b4dc;
        }
    }
    ctx->pc = 0x50B4D8u;
label_50b4d8:
    // 0x50b4d8: 0x3c16008f  lui         $s6, 0x8F
    ctx->pc = 0x50b4d8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)143 << 16));
label_50b4dc:
    // 0x50b4dc: 0x26c7c60c  addiu       $a3, $s6, -0x39F4
    ctx->pc = 0x50b4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952460));
label_50b4e0:
    // 0x50b4e0: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x50b4e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50b4e4: 0x463001a  bgezl       $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x50B4E4u;
    {
        const bool branch_taken_0x50b4e4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x50b4e4) {
            ctx->pc = 0x50B4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50B4E4u;
            // 0x50b4e8: 0x3c030090  lui         $v1, 0x90 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50B550u;
            goto label_50b550;
        }
    }
    ctx->pc = 0x50B4ECu;
    // 0x50b4ec: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50b4f0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x50b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50b4f4: 0x2450f080  addiu       $s0, $v0, -0xF80
    ctx->pc = 0x50b4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x50b4f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x50b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x50b4fc: 0x26064e0c  addiu       $a2, $s0, 0x4E0C
    ctx->pc = 0x50b4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 19980));
    // 0x50b500: 0x31823  negu        $v1, $v1
    ctx->pc = 0x50b500u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x50b504: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x50b504u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50b508: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x50b508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x50b50c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50b50cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50b510: 0x3c15008f  lui         $s5, 0x8F
    ctx->pc = 0x50b510u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)143 << 16));
    // 0x50b514: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x50b514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x50b518: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x50b518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x50b51c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x50b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x50b520: 0x3c1e008f  lui         $fp, 0x8F
    ctx->pc = 0x50b520u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)143 << 16));
    // 0x50b524: 0xc142c36  jal         func_50B0D8
    ctx->pc = 0x50B524u;
    SET_GPR_U32(ctx, 31, 0x50B52Cu);
    ctx->pc = 0x50B528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50B524u;
    // 0x50b528: 0xa4c50000  sh          $a1, 0x0($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50B0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50B0D8u, 0x50B524u, 0x50B52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B52Cu;
label_50b52c:
    // 0x50b52c: 0x26a4c614  addiu       $a0, $s5, -0x39EC
    ctx->pc = 0x50b52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952468));
    // 0x50b530: 0x8e024e08  lw          $v0, 0x4E08($s0)
    ctx->pc = 0x50b530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19976)));
    // 0x50b534: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x50b534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50b538: 0x2442ffbc  addiu       $v0, $v0, -0x44
    ctx->pc = 0x50b538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967228));
    // 0x50b53c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50b53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50b540: 0xafc2c600  sw          $v0, -0x3A00($fp)
    ctx->pc = 0x50b540u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294952448), GPR_U32(ctx, 2));
    // 0x50b544: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x50B544u;
    {
        const bool branch_taken_0x50b544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B544u;
        // 0x50b548: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b544) {
            ctx->pc = 0x50B5A8u;
            goto label_50b5a8;
        }
    }
    ctx->pc = 0x50B54Cu;
    // 0x50b54c: 0x0  nop
    ctx->pc = 0x50b54cu;
    // NOP
label_50b550:
    // 0x50b550: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50b550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x50b554: 0x24a5c628  addiu       $a1, $a1, -0x39D8
    ctx->pc = 0x50b554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952488));
    // 0x50b558: 0x2470f080  addiu       $s0, $v1, -0xF80
    ctx->pc = 0x50b558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x50b55c: 0x86044e0c  lh          $a0, 0x4E0C($s0)
    ctx->pc = 0x50b55cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 19980)));
    // 0x50b560: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x50b560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x50b564: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x50b564u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC628u));
    // 0x50b568: 0x3c15008f  lui         $s5, 0x8F
    ctx->pc = 0x50b568u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)143 << 16));
    // 0x50b56c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x50b56cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x50b570: 0x3c1e008f  lui         $fp, 0x8F
    ctx->pc = 0x50b570u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)143 << 16));
    // 0x50b574: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50b574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50b578: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x50b578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x50b57c: 0xc142c60  jal         func_50B180
    ctx->pc = 0x50B57Cu;
    SET_GPR_U32(ctx, 31, 0x50B584u);
    ctx->pc = 0x50B580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50B57Cu;
    // 0x50b580: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50B180u, 0x50B57Cu, 0x50B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B584u;
label_50b584:
    // 0x50b584: 0x26a5c614  addiu       $a1, $s5, -0x39EC
    ctx->pc = 0x50b584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952468));
    // 0x50b588: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x50b588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50b58c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x50b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x50b590: 0x8e044e08  lw          $a0, 0x4E08($s0)
    ctx->pc = 0x50b590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19976)));
    // 0x50b594: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x50b594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x50b598: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50b598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50b59c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50b59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50b5a0: 0xafc4c600  sw          $a0, -0x3A00($fp)
    ctx->pc = 0x50b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294952448), GPR_U32(ctx, 4));
    // 0x50b5a4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x50b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_50b5a8:
    // 0x50b5a8: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50b5ac: 0x27c3c600  addiu       $v1, $fp, -0x3A00
    ctx->pc = 0x50b5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952448));
    // 0x50b5b0: 0x2445f080  addiu       $a1, $v0, -0xF80
    ctx->pc = 0x50b5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x50b5b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x50b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x50b5b8: 0x8ca94e10  lw          $t1, 0x4E10($a1)
    ctx->pc = 0x50b5b8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x903E90u));
    // 0x50b5bc: 0x3c0c008f  lui         $t4, 0x8F
    ctx->pc = 0x50b5bcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)143 << 16));
    // 0x50b5c0: 0x258bc61c  addiu       $t3, $t4, -0x39E4
    ctx->pc = 0x50b5c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4294952476));
    // 0x50b5c4: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x50b5c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x50b5c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x50B5C8u;
    {
        const bool branch_taken_0x50b5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B5C8u;
        // 0x50b5cc: 0xad690000  sw          $t1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b5c8) {
            ctx->pc = 0x50B5D4u;
            goto label_50b5d4;
        }
    }
    ctx->pc = 0x50B5D0u;
    // 0x50b5d0: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x50b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_50b5d4:
    // 0x50b5d4: 0x3c17008f  lui         $s7, 0x8F
    ctx->pc = 0x50b5d4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)143 << 16));
    // 0x50b5d8: 0x84a34e04  lh          $v1, 0x4E04($a1)
    ctx->pc = 0x50b5d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 19972)));
    // 0x50b5dc: 0x26e8c618  addiu       $t0, $s7, -0x39E8
    ctx->pc = 0x50b5dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952472));
    // 0x50b5e0: 0x96a4c614  lhu         $a0, -0x39EC($s5)
    ctx->pc = 0x50b5e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4294952468)));
    // 0x50b5e4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x50b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC618u));
    // 0x50b5e8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x50b5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x50b5ec: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x50b5ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x50b5f0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x50b5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x50b5f4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x50b5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x50b5f8: 0x1235024  and         $t2, $t1, $v1
    ctx->pc = 0x50b5f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x50b5fc: 0x26c7c60c  addiu       $a3, $s6, -0x39F4
    ctx->pc = 0x50b5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952460));
    // 0x50b600: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x50b600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x50b604: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x50b604u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50b608: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x50b608u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x50b60c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50b60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50b610: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x50b610u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x50b614: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x50b614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x50b618: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x50b618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x50b61c: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x50b61cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50b620: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x50b620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50b624: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x50b624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x50b628: 0x85690000  lh          $t1, 0x0($t3)
    ctx->pc = 0x50b628u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x50b62c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50b62cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50b630: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x50b630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x50b634: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x50b634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x50b638: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x50b638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50b63c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50b63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50b640: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x50b640u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x50b644: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x50b644u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x50b648: 0x11250003  beq         $t1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x50B648u;
    {
        const bool branch_taken_0x50b648 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x50B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B648u;
        // 0x50b64c: 0x354200ff  ori         $v0, $t2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b648) {
            ctx->pc = 0x50B658u;
            goto label_50b658;
        }
    }
    ctx->pc = 0x50B650u;
    // 0x50b650: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x50b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x50b654: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x50b654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_50b658:
    // 0x50b658: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x50b658u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x50b65c: 0x2584c61c  addiu       $a0, $t4, -0x39E4
    ctx->pc = 0x50b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294952476));
    // 0x50b660: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x50b660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x50b664: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x50b664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b668: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x50b668u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50b66c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x50b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50b670: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x50b670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x50b674: 0x86c6c60c  lh          $a2, -0x39F4($s6)
    ctx->pc = 0x50b674u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4294952460)));
    // 0x50b678: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x50b678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x50b67c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50b67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50b680: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50b680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50b684: 0x4c0006a  bltz        $a2, . + 4 + (0x6A << 2)
    ctx->pc = 0x50B684u;
    {
        const bool branch_taken_0x50b684 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x50B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B684u;
        // 0x50b688: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b684) {
            ctx->pc = 0x50B830u;
            goto label_50b830;
        }
    }
    ctx->pc = 0x50B68Cu;
    // 0x50b68c: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50b690: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50b690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50b694: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50b694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50b698: 0x3c050090  lui         $a1, 0x90
    ctx->pc = 0x50b698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)144 << 16));
    // 0x50b69c: 0x2450c610  addiu       $s0, $v0, -0x39F0
    ctx->pc = 0x50b69cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952464));
    // 0x50b6a0: 0x2471c600  addiu       $s1, $v1, -0x3A00
    ctx->pc = 0x50b6a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952448));
    // 0x50b6a4: 0x2494c5fc  addiu       $s4, $a0, -0x3A04
    ctx->pc = 0x50b6a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952444));
    // 0x50b6a8: 0x24b33e8c  addiu       $s3, $a1, 0x3E8C
    ctx->pc = 0x50b6a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 16012));
    // 0x50b6ac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x50b6acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EC610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC610u, _value); } while (0);
label_50b6b0:
    // 0x50b6b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x50b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50b6b4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x50b6b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x50b6b8: 0xc142c7c  jal         func_50B1F0
    ctx->pc = 0x50B6B8u;
    SET_GPR_U32(ctx, 31, 0x50B6C0u);
    ctx->pc = 0x50B6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50B6B8u;
    // 0x50b6bc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50B1F0u, 0x50B6B8u, 0x50B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B6C0u;
label_50b6c0:
    // 0x50b6c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x50b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50b6c4: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x50b6c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x50b6c8: 0x4600044  bltz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x50B6C8u;
    {
        const bool branch_taken_0x50b6c8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x50B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B6C8u;
        // 0x50b6cc: 0x96e2c618  lhu         $v0, -0x39E8($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4294952472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b6c8) {
            ctx->pc = 0x50B7DCu;
            goto label_50b7dc;
        }
    }
    ctx->pc = 0x50B6D0u;
    // 0x50b6d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50b6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50b6d4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x50b6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x50b6d8: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x50b6d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50b6dc: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x50b6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x50b6e0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x50b6e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x50b6e4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x50b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x50b6e8: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x50b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x50b6ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x50b6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x50b6f0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x50b6f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50b6f4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x50b6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x50b6f8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50b6f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50b6fc: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x50B6FCu;
    {
        const bool branch_taken_0x50b6fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B6FCu;
        // 0x50b700: 0x3c02008f  lui         $v0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b6fc) {
            ctx->pc = 0x50B7D8u;
            goto label_50b7d8;
        }
    }
    ctx->pc = 0x50B704u;
    // 0x50b704: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50b704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50b708: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50b708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50b70c: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50b70cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x50b710: 0x244ac604  addiu       $t2, $v0, -0x39FC
    ctx->pc = 0x50b710u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952452));
    // 0x50b714: 0x2467c610  addiu       $a3, $v1, -0x39F0
    ctx->pc = 0x50b714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952464));
    // 0x50b718: 0x2488c5fc  addiu       $t0, $a0, -0x3A04
    ctx->pc = 0x50b718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952444));
    // 0x50b71c: 0x24abc61c  addiu       $t3, $a1, -0x39E4
    ctx->pc = 0x50b71cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952476));
    // 0x50b720: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x50b720u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x50b724: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x50b724u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8EC610u));
label_50b728:
    // 0x50b728: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x50b728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50b72c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50b730: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x50b730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x50b734: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x50b734u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x50b738: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x50b738u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50b73c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50b740: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x50b740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x50b744: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x50b744u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x50b748: 0x85640000  lh          $a0, 0x0($t3)
    ctx->pc = 0x50b748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x50b74c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x50b74cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50b750: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x50b750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50b754: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x50b754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x50b758: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x50b758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50b75c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x50b75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x50b760: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50b760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50b764: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50b764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50b768: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x50b768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x50b76c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x50b76cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x50b770: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50b770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50b774: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x50b774u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50b778: 0x30421e1e  andi        $v0, $v0, 0x1E1E
    ctx->pc = 0x50b778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7710);
    // 0x50b77c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x50b77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x50b780: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50b780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50b784: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x50b784u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x50b788: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x50b788u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50b78c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x50b78cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50b790: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x50b790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x50b794: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50b794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50b798: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x50b798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x50b79c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x50b79cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x50b7a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50b7a4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x50b7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x50b7a8: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x50b7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x50b7ac: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x50b7acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x50b7b0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x50b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50b7b4: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x50b7b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50b7b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50b7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50b7bc: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x50b7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x50b7c0: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x50b7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x50b7c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50b7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50b7c8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x50b7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x50b7cc: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x50b7ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50b7d0: 0x463ffd5  bgezl       $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x50B7D0u;
    {
        const bool branch_taken_0x50b7d0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x50b7d0) {
            ctx->pc = 0x50B7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50B7D0u;
            // 0x50b7d4: 0x94e20000  lhu         $v0, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50B728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50b728;
        }
    }
    ctx->pc = 0x50B7D8u;
label_50b7d8:
    // 0x50b7d8: 0x96e2c618  lhu         $v0, -0x39E8($s7)
    ctx->pc = 0x50b7d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 4294952472)));
label_50b7dc:
    // 0x50b7dc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x50b7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50b7e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50b7e4: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x50b7e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50b7e8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x50b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x50b7ec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50b7ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50b7f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50b7f4: 0x96a5c614  lhu         $a1, -0x39EC($s5)
    ctx->pc = 0x50b7f4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4294952468)));
    // 0x50b7f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x50b7f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x50b7fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50b800: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x50b800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x50b804: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x50b804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x50b808: 0xa6640000  sh          $a0, 0x0($s3)
    ctx->pc = 0x50b808u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x50b80c: 0xc142c36  jal         func_50B0D8
    ctx->pc = 0x50B80Cu;
    SET_GPR_U32(ctx, 31, 0x50B814u);
    ctx->pc = 0x50B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50B80Cu;
    // 0x50b810: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50B0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50B0D8u, 0x50B80Cu, 0x50B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B814u;
label_50b814:
    // 0x50b814: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x50b814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x50b818: 0x86c3c60c  lh          $v1, -0x39F4($s6)
    ctx->pc = 0x50b818u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 4294952460)));
    // 0x50b81c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50b820: 0x29403  sra         $s2, $v0, 16
    ctx->pc = 0x50b820u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50b824: 0x72182a  slt         $v1, $v1, $s2
    ctx->pc = 0x50b824u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x50b828: 0x5060ffa1  beql        $v1, $zero, . + 4 + (-0x5F << 2)
    ctx->pc = 0x50B828u;
    {
        const bool branch_taken_0x50b828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50b828) {
            ctx->pc = 0x50B82Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50B828u;
            // 0x50b82c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50B6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50b6b0;
        }
    }
    ctx->pc = 0x50B830u;
label_50b830:
    // 0x50b830: 0x26c4c60c  addiu       $a0, $s6, -0x39F4
    ctx->pc = 0x50b830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952460));
    // 0x50b834: 0x86a5c614  lh          $a1, -0x39EC($s5)
    ctx->pc = 0x50b834u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4294952468)));
    // 0x50b838: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x50b838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50b83c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x50b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x50b840: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50b840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50b844: 0x4a1000c  bgez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x50B844u;
    {
        const bool branch_taken_0x50b844 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x50B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B844u;
        // 0x50b848: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b844) {
            ctx->pc = 0x50B878u;
            goto label_50b878;
        }
    }
    ctx->pc = 0x50B84Cu;
    // 0x50b84c: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50b850: 0x27c5c600  addiu       $a1, $fp, -0x3A00
    ctx->pc = 0x50b850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952448));
    // 0x50b854: 0x2444f080  addiu       $a0, $v0, -0xF80
    ctx->pc = 0x50b854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x50b858: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x50b858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50b85c: 0x24844e0c  addiu       $a0, $a0, 0x4E0C
    ctx->pc = 0x50b85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19980));
    // 0x50b860: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x50b860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x903E8Cu));
    // 0x50b864: 0x24630044  addiu       $v1, $v1, 0x44
    ctx->pc = 0x50b864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
    // 0x50b868: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50b868u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50b86c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x50b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x50b870: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x50b870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x50b874: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x50b874u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x903E8Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903E8Cu, _value); } while (0);
label_50b878:
    // 0x50b878: 0x8fc2c600  lw          $v0, -0x3A00($fp)
    ctx->pc = 0x50b878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294952448)));
    // 0x50b87c: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x50b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x50b880: 0x2470f080  addiu       $s0, $v1, -0xF80
    ctx->pc = 0x50b880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963328));
    // 0x50b884: 0xc124620  jal         func_491880
    ctx->pc = 0x50B884u;
    SET_GPR_U32(ctx, 31, 0x50B88Cu);
    ctx->pc = 0x50B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50B884u;
    // 0x50b888: 0xae024e08  sw          $v0, 0x4E08($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 19976), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x50B884u, 0x50B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B88Cu;
label_50b88c:
    // 0x50b88c: 0x96034e0c  lhu         $v1, 0x4E0C($s0)
    ctx->pc = 0x50b88cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 19980)));
    // 0x50b890: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50b890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50b894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50b894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50b898: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50b898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50b89c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50b89cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50b8a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x50b8a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50b8a4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x50b8a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50b8a8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x50b8a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50b8ac: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x50b8acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x50b8b0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x50b8b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x50b8b4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x50b8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x50b8b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x50b8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x50b8bc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x50b8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x50b8c0: 0xa423e810  sh          $v1, -0x17F0($at)
    ctx->pc = 0x50b8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961168), (uint16_t)GPR_U32(ctx, 3));
    // 0x50b8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x50B8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B8C4u;
        // 0x50b8c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50B8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50B8CCu;
    // 0x50b8cc: 0x0  nop
    ctx->pc = 0x50b8ccu;
    // NOP
label_50b8d0:
    // 0x50b8d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x50b8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x50b8d4: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50b8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x50b8d8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x50b8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x50b8dc: 0x24a5c618  addiu       $a1, $a1, -0x39E8
    ctx->pc = 0x50b8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952472));
    // 0x50b8e0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x50b8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x50b8e4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x50b8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x50b8e8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x50b8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x50b8ec: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x50b8ecu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
    // 0x50b8f0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x50b8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x50b8f4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x50b8f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x50b8f8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x50b8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x50b8fc: 0x8c2025  or          $a0, $a0, $t4
    ctx->pc = 0x50b8fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
    // 0x50b900: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x50b900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x50b904: 0x3c0a008f  lui         $t2, 0x8F
    ctx->pc = 0x50b904u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)143 << 16));
    // 0x50b908: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x50b908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x50b90c: 0x254ac61c  addiu       $t2, $t2, -0x39E4
    ctx->pc = 0x50b90cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952476));
    // 0x50b910: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x50b910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x50b914: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x50b914u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x50b918: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x50b918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x50b91c: 0x2508c5fc  addiu       $t0, $t0, -0x3A04
    ctx->pc = 0x50b91cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952444));
    // 0x50b920: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x50b920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x50b924: 0x3c07008f  lui         $a3, 0x8F
    ctx->pc = 0x50b924u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)143 << 16));
    // 0x50b928: 0x24e7c608  addiu       $a3, $a3, -0x39F8
    ctx->pc = 0x50b928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952456));
    // 0x50b92c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x50b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50b930: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x50b930u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x8EC61Cu));
    // 0x50b934: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50b934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50b938: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x50b938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x50b93c: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x50b93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x50b940: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50b940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50b944: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50b944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50b948: 0x248bf080  addiu       $t3, $a0, -0xF80
    ctx->pc = 0x50b948u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963328));
    // 0x50b94c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x50b94cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x50b950: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x50b950u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50b954: 0x257100c0  addiu       $s1, $t3, 0xC0
    ctx->pc = 0x50b954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 192));
    // 0x50b958: 0x8d664dec  lw          $a2, 0x4DEC($t3)
    ctx->pc = 0x50b958u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x903E6Cu));
    // 0x50b95c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50b960: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x50b960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x50b964: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50b964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50b968: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50b968u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50b96c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50b96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50b970: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x50b970u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50b974: 0xad110000  sw          $s1, 0x0($t0)
    ctx->pc = 0x50b974u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 17));
    // 0x50b978: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x50b978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x50b97c: 0x8c2025  or          $a0, $a0, $t4
    ctx->pc = 0x50b97cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
    // 0x50b980: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x50b980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x50b984: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x50b984u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x50b988: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50b988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50b98c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x50b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x50b990: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x50b990u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x50b994: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x50b994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x50b998: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50b998u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50b99c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50b99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50b9a0: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x50b9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x50b9a4: 0x854b0000  lh          $t3, 0x0($t2)
    ctx->pc = 0x50b9a4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x50b9a8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x50b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x50b9ac: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x50b9acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50b9b0: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x50b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x50b9b4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50b9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50b9b8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x50b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x50b9bc: 0x2484c60c  addiu       $a0, $a0, -0x39F4
    ctx->pc = 0x50b9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952460));
    // 0x50b9c0: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x50b9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x50b9c4: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x50b9c4u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x8EC60Cu));
    // 0x50b9c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50b9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50b9cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x50b9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50b9d0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50b9d4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x50b9d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x50b9d8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x50b9d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50b9dc: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x50b9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x50b9e0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x50b9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x50b9e4: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x50b9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x50b9e8: 0x24ca0002  addiu       $t2, $a2, 0x2
    ctx->pc = 0x50b9e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x50b9ec: 0x24c5000a  addiu       $a1, $a2, 0xA
    ctx->pc = 0x50b9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
    // 0x50b9f0: 0x24c30012  addiu       $v1, $a2, 0x12
    ctx->pc = 0x50b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 18));
    // 0x50b9f4: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x50b9f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50b9f8: 0x24cf0004  addiu       $t7, $a2, 0x4
    ctx->pc = 0x50b9f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x50b9fc: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x50b9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x50ba00: 0x24d50006  addiu       $s5, $a2, 0x6
    ctx->pc = 0x50ba00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x50ba04: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x50ba04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x50ba08: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x50ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x50ba0c: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x50ba0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x50ba10: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50ba14: 0x2442c60c  addiu       $v0, $v0, -0x39F4
    ctx->pc = 0x50ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952460));
    // 0x50ba18: 0x24c50014  addiu       $a1, $a2, 0x14
    ctx->pc = 0x50ba18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x50ba1c: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x50ba1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x8EC60Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC60Cu, _value); } while (0);
    // 0x50ba20: 0x24c90016  addiu       $t1, $a2, 0x16
    ctx->pc = 0x50ba20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 22));
    // 0x50ba24: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x50ba24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x50ba28: 0x24d70008  addiu       $s7, $a2, 0x8
    ctx->pc = 0x50ba28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x50ba2c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x50ba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x50ba30: 0x24c5001a  addiu       $a1, $a2, 0x1A
    ctx->pc = 0x50ba30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 26));
    // 0x50ba34: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x50ba34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x8EC60Cu));
    // 0x50ba38: 0x24c20018  addiu       $v0, $a2, 0x18
    ctx->pc = 0x50ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x50ba3c: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x50ba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x50ba40: 0x24c9001c  addiu       $t1, $a2, 0x1C
    ctx->pc = 0x50ba40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x50ba44: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x50ba44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x50ba48: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x50ba48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x50ba4c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x50ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x50ba50: 0x24c2001e  addiu       $v0, $a2, 0x1E
    ctx->pc = 0x50ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 30));
    // 0x50ba54: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x50ba54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x50ba58: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x50ba58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x50ba5c: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x50ba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x50ba60: 0x24690004  addiu       $t1, $v1, 0x4
    ctx->pc = 0x50ba60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x50ba64: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x50ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x50ba68: 0x246b0006  addiu       $t3, $v1, 0x6
    ctx->pc = 0x50ba68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x50ba6c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x50ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x50ba70: 0x246c0008  addiu       $t4, $v1, 0x8
    ctx->pc = 0x50ba70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x50ba74: 0x24de000c  addiu       $fp, $a2, 0xC
    ctx->pc = 0x50ba74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x50ba78: 0x24d0000e  addiu       $s0, $a2, 0xE
    ctx->pc = 0x50ba78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 14));
    // 0x50ba7c: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x50ba7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x50ba80: 0x246a000a  addiu       $t2, $v1, 0xA
    ctx->pc = 0x50ba80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x50ba84: 0xacef0000  sw          $t7, 0x0($a3)
    ctx->pc = 0x50ba84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 15));
    // 0x50ba88: 0x2479000c  addiu       $t9, $v1, 0xC
    ctx->pc = 0x50ba88u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x50ba8c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x50ba8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50ba90: 0x24ce0010  addiu       $t6, $a2, 0x10
    ctx->pc = 0x50ba90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x50ba94: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x50ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x50ba98: 0x2471000e  addiu       $s1, $v1, 0xE
    ctx->pc = 0x50ba98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x50ba9c: 0x24720010  addiu       $s2, $v1, 0x10
    ctx->pc = 0x50ba9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x50baa0: 0x24740012  addiu       $s4, $v1, 0x12
    ctx->pc = 0x50baa0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 18));
    // 0x50baa4: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x50baa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x50baa8: 0x246f0016  addiu       $t7, $v1, 0x16
    ctx->pc = 0x50baa8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
    // 0x50baac: 0xacf50000  sw          $s5, 0x0($a3)
    ctx->pc = 0x50baacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 21));
    // 0x50bab0: 0x24760014  addiu       $s6, $v1, 0x14
    ctx->pc = 0x50bab0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x50bab4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x50bab4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50bab8: 0x24c50020  addiu       $a1, $a2, 0x20
    ctx->pc = 0x50bab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x50babc: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x50babcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x50bac0: 0x24780018  addiu       $t8, $v1, 0x18
    ctx->pc = 0x50bac0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x50bac4: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x50bac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x50bac8: 0x2473001a  addiu       $s3, $v1, 0x1A
    ctx->pc = 0x50bac8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 26));
    // 0x50bacc: 0x246d001c  addiu       $t5, $v1, 0x1C
    ctx->pc = 0x50baccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x50bad0: 0x24c60022  addiu       $a2, $a2, 0x22
    ctx->pc = 0x50bad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 34));
    // 0x50bad4: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x50bad4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x50bad8: 0x2475001e  addiu       $s5, $v1, 0x1E
    ctx->pc = 0x50bad8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x50badc: 0xacf70000  sw          $s7, 0x0($a3)
    ctx->pc = 0x50badcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 23));
    // 0x50bae0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x50bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x50bae4: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x50bae4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50bae8: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x50bae8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x50baec: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x50baecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x50baf0: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x50baf0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50baf4: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x50baf4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50baf8: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x50baf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x50bafc: 0xad0c0000  sw          $t4, 0x0($t0)
    ctx->pc = 0x50bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 12));
    // 0x50bb00: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x50bb00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x50bb04: 0xacfe0000  sw          $fp, 0x0($a3)
    ctx->pc = 0x50bb04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 30));
    // 0x50bb08: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x50bb08u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50bb0c: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x50bb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x50bb10: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x50bb10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x50bb14: 0xacf00000  sw          $s0, 0x0($a3)
    ctx->pc = 0x50bb14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 16));
    // 0x50bb18: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x50bb18u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50bb1c: 0xad190000  sw          $t9, 0x0($t0)
    ctx->pc = 0x50bb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 25));
    // 0x50bb20: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50bb20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50bb24: 0xacee0000  sw          $t6, 0x0($a3)
    ctx->pc = 0x50bb24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 14));
    // 0x50bb28: 0xa7220000  sh          $v0, 0x0($t9)
    ctx->pc = 0x50bb28u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50bb2c: 0xad110000  sw          $s1, 0x0($t0)
    ctx->pc = 0x50bb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 17));
    // 0x50bb30: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x50bb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50bb34: 0x95c20000  lhu         $v0, 0x0($t6)
    ctx->pc = 0x50bb34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x50bb38: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x50bb38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x50bb3c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x50bb3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50bb40: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x50bb40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
    // 0x50bb44: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x50bb44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50bb48: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x50bb48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50bb4c: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x50bb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x50bb50: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x50bb50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50bb54: 0xad140000  sw          $s4, 0x0($t0)
    ctx->pc = 0x50bb54u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 20));
    // 0x50bb58: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x50bb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x50bb5c: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x50bb5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x50bb60: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x50bb60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x50bb64: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x50bb64u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50bb68: 0xad160000  sw          $s6, 0x0($t0)
    ctx->pc = 0x50bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 22));
    // 0x50bb6c: 0x8fa90010  lw          $t1, 0x10($sp)
    ctx->pc = 0x50bb6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50bb70: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x50bb70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50bb74: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x50bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x50bb78: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x50bb78u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50bb7c: 0xad0f0000  sw          $t7, 0x0($t0)
    ctx->pc = 0x50bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 15));
    // 0x50bb80: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x50bb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x50bb84: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x50bb84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x50bb88: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x50bb88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x50bb8c: 0xa5e20000  sh          $v0, 0x0($t7)
    ctx->pc = 0x50bb8cu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50bb90: 0xad180000  sw          $t8, 0x0($t0)
    ctx->pc = 0x50bb90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 24));
    // 0x50bb94: 0x8fa90018  lw          $t1, 0x18($sp)
    ctx->pc = 0x50bb94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50bb98: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x50bb98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50bb9c: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x50bb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x50bba0: 0xa7020000  sh          $v0, 0x0($t8)
    ctx->pc = 0x50bba0u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50bba4: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50bba8: 0xad130000  sw          $s3, 0x0($t0)
    ctx->pc = 0x50bba8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 19));
    // 0x50bbac: 0x2442c60c  addiu       $v0, $v0, -0x39F4
    ctx->pc = 0x50bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952460));
    // 0x50bbb0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x50bbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC60Cu));
    // 0x50bbb4: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x50bbb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x50bbb8: 0x8fa9001c  lw          $t1, 0x1C($sp)
    ctx->pc = 0x50bbb8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x50bbbc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x50bbbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x50bbc0: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x50bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x50bbc4: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x50bbc4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50bbc8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x50bbc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50bbcc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x50bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x50bbd0: 0xad0d0000  sw          $t5, 0x0($t0)
    ctx->pc = 0x50bbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 13));
    // 0x50bbd4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x50bbd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x50bbd8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x50bbd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x50bbdc: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x50bbdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x50bbe0: 0x8fa90020  lw          $t1, 0x20($sp)
    ctx->pc = 0x50bbe0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50bbe4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x50bbe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x50bbe8: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x50bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x50bbec: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x50bbecu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50bbf0: 0xad150000  sw          $s5, 0x0($t0)
    ctx->pc = 0x50bbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 21));
    // 0x50bbf4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x50bbf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x50bbf8: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x50bbf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x50bbfc: 0x3c09008f  lui         $t1, 0x8F
    ctx->pc = 0x50bbfcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)143 << 16));
    // 0x50bc00: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x50bc00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x50bc04: 0x2529c60c  addiu       $t1, $t1, -0x39F4
    ctx->pc = 0x50bc04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952460));
    // 0x50bc08: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x50bc08u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50bc0c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x50bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x50bc10: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x50bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x50bc14: 0x24633e88  addiu       $v1, $v1, 0x3E88
    ctx->pc = 0x50bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16008));
    // 0x50bc18: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x50bc18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x50bc1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x50bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x903E88u));
    // 0x50bc20: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x50bc20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x50bc24: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x50bc24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x50bc28: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x50bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x50bc2c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x50bc2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x50bc30: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x50bc30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x50bc34: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x50bc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x50bc38: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x50bc38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8EC60Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC60Cu, _value); } while (0);
    // 0x50bc3c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x50bc3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x903E88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x903E88u, _value); } while (0);
    // 0x50bc40: 0x8142d02  j           func_50B408
    ctx->pc = 0x50BC40u;
    ctx->pc = 0x50BC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50BC40u;
    // 0x50bc44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50B408u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_50b408;
    ctx->pc = 0x50BC48u;
}
