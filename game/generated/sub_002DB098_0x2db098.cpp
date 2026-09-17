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

// Function: sub_002DB098
// Address: 0x2db098 - 0x2db378
void sub_002DB098_0x2db098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB098_0x2db098");
#endif

    switch (ctx->pc) {
        case 0x2db0ecu: goto label_2db0ec;
        case 0x2db11cu: goto label_2db11c;
        case 0x2db12cu: goto label_2db12c;
        case 0x2db200u: goto label_2db200;
        case 0x2db218u: goto label_2db218;
        case 0x2db220u: goto label_2db220;
        case 0x2db284u: goto label_2db284;
        case 0x2db29cu: goto label_2db29c;
        case 0x2db2d8u: goto label_2db2d8;
        case 0x2db2f8u: goto label_2db2f8;
        case 0x2db304u: goto label_2db304;
        case 0x2db31cu: goto label_2db31c;
        default: break;
    }

    ctx->pc = 0x2db098u;

    // 0x2db098: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2db098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2db09c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2db09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2db0a0: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x2db0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x2db0a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2db0a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db0a8: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x2db0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x2db0ac: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x2db0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x2db0b0: 0xffb30108  sd          $s3, 0x108($sp)
    ctx->pc = 0x2db0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 19));
    // 0x2db0b4: 0xffb40110  sd          $s4, 0x110($sp)
    ctx->pc = 0x2db0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 20));
    // 0x2db0b8: 0xffb50118  sd          $s5, 0x118($sp)
    ctx->pc = 0x2db0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 21));
    // 0x2db0bc: 0xffb60120  sd          $s6, 0x120($sp)
    ctx->pc = 0x2db0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 22));
    // 0x2db0c0: 0xffb70128  sd          $s7, 0x128($sp)
    ctx->pc = 0x2db0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 23));
    // 0x2db0c4: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x2db0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x2db0c8: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x2db0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x2db0cc: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x2db0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x2db0d0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2db0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2db0d4: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x2db0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x2db0d8: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2db0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2db0dc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DB0DCu;
    {
        const bool branch_taken_0x2db0dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0DCu;
        // 0x2db0e0: 0x2445f2f0  addiu       $a1, $v0, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db0dc) {
            ctx->pc = 0x2DB0F8u;
            goto label_2db0f8;
        }
    }
    ctx->pc = 0x2DB0E4u;
    // 0x2db0e4: 0xc0bf32c  jal         func_2FCCB0
    ctx->pc = 0x2DB0E4u;
    SET_GPR_U32(ctx, 31, 0x2DB0ECu);
    ctx->pc = 0x2FCCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCCB0u, 0x2DB0E4u, 0x2DB0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB0ECu;
label_2db0ec:
    // 0x2db0ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB0ECu;
    {
        const bool branch_taken_0x2db0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0ECu;
        // 0x2db0f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db0ec) {
            ctx->pc = 0x2DB0FCu;
            goto label_2db0fc;
        }
    }
    ctx->pc = 0x2DB0F4u;
    // 0x2db0f4: 0x0  nop
    ctx->pc = 0x2db0f4u;
    // NOP
label_2db0f8:
    // 0x2db0f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2db0f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db0fc:
    // 0x2db0fc: 0x12600092  beqz        $s3, . + 4 + (0x92 << 2)
    ctx->pc = 0x2DB0FCu;
    {
        const bool branch_taken_0x2db0fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0FCu;
        // 0x2db100: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db0fc) {
            ctx->pc = 0x2DB348u;
            goto label_2db348;
        }
    }
    ctx->pc = 0x2DB104u;
    // 0x2db104: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2db104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2db108: 0x242188d0  addiu       $at, $at, -0x7730
    ctx->pc = 0x2db108u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294936784));
    // 0x2db10c: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x2db10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2db110: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2db110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2db114: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2DB114u;
    SET_GPR_U32(ctx, 31, 0x2DB11Cu);
    ctx->pc = 0x2DB118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB114u;
    // 0x2db118: 0x84440042  lh          $a0, 0x42($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2DB114u, 0x2DB11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB11Cu;
label_2db11c:
    // 0x2db11c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2db11cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db120: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2db120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2db124: 0xc0863a4  jal         func_218E90
    ctx->pc = 0x2DB124u;
    SET_GPR_U32(ctx, 31, 0x2DB12Cu);
    ctx->pc = 0x2DB128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB124u;
    // 0x2db128: 0x84440042  lh          $a0, 0x42($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E90u, 0x2DB124u, 0x2DB12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB12Cu;
label_2db12c:
    // 0x2db12c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2db12cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db130: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x2db130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2db134: 0x50400085  beql        $v0, $zero, . + 4 + (0x85 << 2)
    ctx->pc = 0x2DB134u;
    {
        const bool branch_taken_0x2db134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db134) {
            ctx->pc = 0x2DB138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB134u;
            // 0x2db138: 0xdfb000f0  ld          $s0, 0xF0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB34Cu;
            goto label_2db34c;
        }
    }
    ctx->pc = 0x2DB13Cu;
    // 0x2db13c: 0x114080  sll         $t0, $s1, 2
    ctx->pc = 0x2db13cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2db140: 0x3c0b003e  lui         $t3, 0x3E
    ctx->pc = 0x2db140u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)62 << 16));
    // 0x2db144: 0x256b83c0  addiu       $t3, $t3, -0x7C40
    ctx->pc = 0x2db144u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294935488));
    // 0x2db148: 0x1685821  addu        $t3, $t3, $t0
    ctx->pc = 0x2db148u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x2db14c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2db14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2db150: 0x5060007e  beql        $v1, $zero, . + 4 + (0x7E << 2)
    ctx->pc = 0x2DB150u;
    {
        const bool branch_taken_0x2db150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db150) {
            ctx->pc = 0x2DB154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB150u;
            // 0x2db154: 0xdfb000f0  ld          $s0, 0xF0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB34Cu;
            goto label_2db34c;
        }
    }
    ctx->pc = 0x2DB158u;
    // 0x2db158: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2db158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db15c: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x2db15cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2db160: 0x5040007a  beql        $v0, $zero, . + 4 + (0x7A << 2)
    ctx->pc = 0x2DB160u;
    {
        const bool branch_taken_0x2db160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db160) {
            ctx->pc = 0x2DB164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB160u;
            // 0x2db164: 0xdfb000f0  ld          $s0, 0xF0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB34Cu;
            goto label_2db34c;
        }
    }
    ctx->pc = 0x2DB168u;
    // 0x2db168: 0x75080  sll         $t2, $a3, 2
    ctx->pc = 0x2db168u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2db16c: 0x3c1e003d  lui         $fp, 0x3D
    ctx->pc = 0x2db16cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)61 << 16));
    // 0x2db170: 0x27de7de0  addiu       $fp, $fp, 0x7DE0
    ctx->pc = 0x2db170u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 32224));
    // 0x2db174: 0x3c8f021  addu        $fp, $fp, $t0
    ctx->pc = 0x2db174u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x2db178: 0x1434821  addu        $t1, $t2, $v1
    ctx->pc = 0x2db178u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2db17c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2db17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2db180: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2db180u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2db184: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2db184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db188: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2db188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2db18c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2db18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db190: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2db190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db194: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x2db194u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db198: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2db198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db19c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2db19cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db1a0: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2db1a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db1a4: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x2db1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x2db1a8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2db1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2db1ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2db1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db1b0: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2db1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db1b4: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x2db1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x2db1b8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2db1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2db1bc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2db1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db1c0: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2db1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db1c4: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x2db1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x2db1c8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2db1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2db1cc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2db1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2db1d0: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2db1d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db1d4: 0xafa8001c  sw          $t0, 0x1C($sp)
    ctx->pc = 0x2db1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
    // 0x2db1d8: 0x6ba80017  ldl         $t0, 0x17($sp)
    ctx->pc = 0x2db1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2db1dc: 0x6fa80010  ldr         $t0, 0x10($sp)
    ctx->pc = 0x2db1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2db1e0: 0x6ba9001f  ldl         $t1, 0x1F($sp)
    ctx->pc = 0x2db1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2db1e4: 0x6fa90018  ldr         $t1, 0x18($sp)
    ctx->pc = 0x2db1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2db1e8: 0xb3a80007  sdl         $t0, 0x7($sp)
    ctx->pc = 0x2db1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db1ec: 0xb7a80000  sdr         $t0, 0x0($sp)
    ctx->pc = 0x2db1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db1f0: 0xb3a9000f  sdl         $t1, 0xF($sp)
    ctx->pc = 0x2db1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db1f4: 0xb7a90008  sdr         $t1, 0x8($sp)
    ctx->pc = 0x2db1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db1f8: 0xc0b6fc2  jal         func_2DBF08
    ctx->pc = 0x2DB1F8u;
    SET_GPR_U32(ctx, 31, 0x2DB200u);
    ctx->pc = 0x2DB1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB1F8u;
    // 0x2db1fc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBF08u, 0x2DB1F8u, 0x2DB200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB200u;
label_2db200:
    // 0x2db200: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2db200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2db204: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2db204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db208: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2db208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db20c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2db20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2db210: 0xc0b6df0  jal         func_2DB7C0
    ctx->pc = 0x2DB210u;
    SET_GPR_U32(ctx, 31, 0x2DB218u);
    ctx->pc = 0x2DB214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB210u;
    // 0x2db214: 0xafa800e8  sw          $t0, 0xE8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7C0u, 0x2DB210u, 0x2DB218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB218u;
label_2db218:
    // 0x2db218: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x2db218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2db21c: 0x0  nop
    ctx->pc = 0x2db21cu;
    // NOP
label_2db220:
    // 0x2db220: 0x1358821  addu        $s1, $t1, $s5
    ctx->pc = 0x2db220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x2db224: 0x82280000  lb          $t0, 0x0($s1)
    ctx->pc = 0x2db224u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2db228: 0x5020044  bltzl       $t0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2DB228u;
    {
        const bool branch_taken_0x2db228 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x2db228) {
            ctx->pc = 0x2DB22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB228u;
            // 0x2db22c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB33Cu;
            goto label_2db33c;
        }
    }
    ctx->pc = 0x2DB230u;
    // 0x2db230: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x2db230u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2db234: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x2db234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x2db238: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2db238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db23c: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2db23cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2db240: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x2DB240u;
    {
        const bool branch_taken_0x2db240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db240) {
            ctx->pc = 0x2DB244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB240u;
            // 0x2db244: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB33Cu;
            goto label_2db33c;
        }
    }
    ctx->pc = 0x2DB248u;
    // 0x2db248: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2db248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2db24c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2db24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2db250: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db254: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x2db254u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2db258: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x2db258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2db25c: 0x3c090048  lui         $t1, 0x48
    ctx->pc = 0x2db25cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)72 << 16));
    // 0x2db260: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2db260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2db264: 0x2525f300  addiu       $a1, $t1, -0xD00
    ctx->pc = 0x2db264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963968));
    // 0x2db268: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x2db268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2db26c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2db26cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db270: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2db270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2db274: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2db274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db278: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x2db278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2db27c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2DB27Cu;
    SET_GPR_U32(ctx, 31, 0x2DB284u);
    ctx->pc = 0x2DB280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB27Cu;
    // 0x2db280: 0x8d070004  lw          $a3, 0x4($t0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2DB27Cu, 0x2DB284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB284u;
label_2db284:
    // 0x2db284: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2db284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db288: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2db288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2db28c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2db28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2db290: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x2db290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2db294: 0xc0b6d12  jal         func_2DB448
    ctx->pc = 0x2DB294u;
    SET_GPR_U32(ctx, 31, 0x2DB29Cu);
    ctx->pc = 0x2DB298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB294u;
    // 0x2db298: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB448u, 0x2DB294u, 0x2DB29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB29Cu;
label_2db29c:
    // 0x2db29c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2db29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2db2a0: 0x82280000  lb          $t0, 0x0($s1)
    ctx->pc = 0x2db2a0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2db2a4: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x2db2a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2db2a8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2db2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2db2ac: 0x3c090015  lui         $t1, 0x15
    ctx->pc = 0x2db2acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21 << 16));
    // 0x2db2b0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2db2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db2b4: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x2db2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2db2b8: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x2db2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2db2bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2db2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db2c0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2db2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2db2c4: 0x25254568  addiu       $a1, $t1, 0x4568
    ctx->pc = 0x2db2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 17768));
    // 0x2db2c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2db2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db2cc: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2db2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2db2d0: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x2DB2D0u;
    SET_GPR_U32(ctx, 31, 0x2DB2D8u);
    ctx->pc = 0x2DB2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB2D0u;
    // 0x2db2d4: 0x8d070004  lw          $a3, 0x4($t0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x2DB2D0u, 0x2DB2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB2D8u;
label_2db2d8:
    // 0x2db2d8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2db2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2db2dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2db2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db2e0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2db2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2db2e4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DB2E4u;
    {
        const bool branch_taken_0x2db2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2E4u;
        // 0x2db2e8: 0xafa300e8  sw          $v1, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db2e4) {
            ctx->pc = 0x2DB338u;
            goto label_2db338;
        }
    }
    ctx->pc = 0x2DB2ECu;
    // 0x2db2ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2db2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db2f0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2db2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db2f4: 0x2248021  addu        $s0, $s1, $a0
    ctx->pc = 0x2db2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_2db2f8:
    // 0x2db2f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2db2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db2fc: 0xc0b6e2e  jal         func_2DB8B8
    ctx->pc = 0x2DB2FCu;
    SET_GPR_U32(ctx, 31, 0x2DB304u);
    ctx->pc = 0x2DB300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB2FCu;
    // 0x2db300: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8B8u, 0x2DB2FCu, 0x2DB304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB304u;
label_2db304:
    // 0x2db304: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2db304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db308: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2db308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2db30c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB30Cu;
    {
        const bool branch_taken_0x2db30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB30Cu;
        // 0x2db310: 0x8fa500e4  lw          $a1, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db30c) {
            ctx->pc = 0x2DB31Cu;
            goto label_2db31c;
        }
    }
    ctx->pc = 0x2DB314u;
    // 0x2db314: 0xc0b6d2c  jal         func_2DB4B0
    ctx->pc = 0x2DB314u;
    SET_GPR_U32(ctx, 31, 0x2DB31Cu);
    ctx->pc = 0x2DB318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB314u;
    // 0x2db318: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB4B0u, 0x2DB314u, 0x2DB31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB31Cu;
label_2db31c:
    // 0x2db31c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2db31cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2db320: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2db320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2db324: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db328: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x2db328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2db32c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2db32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db330: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2DB330u;
    {
        const bool branch_taken_0x2db330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db330) {
            ctx->pc = 0x2DB334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB330u;
            // 0x2db334: 0x2248021  addu        $s0, $s1, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db2f8;
        }
    }
    ctx->pc = 0x2DB338u;
label_2db338:
    // 0x2db338: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2db338u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2db33c:
    // 0x2db33c: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x2db33cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2db340: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x2DB340u;
    {
        const bool branch_taken_0x2db340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB340u;
        // 0x2db344: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db340) {
            ctx->pc = 0x2DB220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db220;
        }
    }
    ctx->pc = 0x2DB348u;
label_2db348:
    // 0x2db348: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x2db348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_2db34c:
    // 0x2db34c: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x2db34cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2db350: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x2db350u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2db354: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x2db354u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2db358: 0xdfb40110  ld          $s4, 0x110($sp)
    ctx->pc = 0x2db358u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2db35c: 0xdfb50118  ld          $s5, 0x118($sp)
    ctx->pc = 0x2db35cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2db360: 0xdfb60120  ld          $s6, 0x120($sp)
    ctx->pc = 0x2db360u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2db364: 0xdfb70128  ld          $s7, 0x128($sp)
    ctx->pc = 0x2db364u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2db368: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x2db368u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2db36c: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x2db36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2db370: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB370u;
        // 0x2db374: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB378u;
}
