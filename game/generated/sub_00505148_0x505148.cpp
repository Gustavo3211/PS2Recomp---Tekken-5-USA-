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

// Function: sub_00505148
// Address: 0x505148 - 0x5052a8
void sub_00505148_0x505148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00505148_0x505148");
#endif

    switch (ctx->pc) {
        case 0x5051a4u: goto label_5051a4;
        case 0x505214u: goto label_505214;
        case 0x505240u: goto label_505240;
        default: break;
    }

    ctx->pc = 0x505148u;

    // 0x505148: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x505148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x50514c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x50514cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x505150: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x505150u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x505154: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x505154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x505158: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x505158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x50515c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x50515cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x505160: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x505160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x505164: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x505164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x505168: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x505168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x50516c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x50516cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x505170: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x505170u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x505174: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x505174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x505178: 0x32437fff  andi        $v1, $s2, 0x7FFF
    ctx->pc = 0x505178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32767);
    // 0x50517c: 0x3644ffff  ori         $a0, $s2, 0xFFFF
    ctx->pc = 0x50517cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x505180: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x505180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x505184: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x505184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x505188: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x505188u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x50518c: 0x32427fff  andi        $v0, $s2, 0x7FFF
    ctx->pc = 0x50518cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32767);
    // 0x505190: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x505190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x505194: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x505194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x505198: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x505198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x50519c: 0xc12a6c8  jal         func_4A9B20
    ctx->pc = 0x50519Cu;
    SET_GPR_U32(ctx, 31, 0x5051A4u);
    ctx->pc = 0x5051A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50519Cu;
    // 0x5051a0: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9B20u, 0x50519Cu, 0x5051A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5051A4u;
label_5051a4:
    // 0x5051a4: 0x3251ffff  andi        $s1, $s2, 0xFFFF
    ctx->pc = 0x5051a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x5051a8: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x5051a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x5051ac: 0x113040  sll         $a2, $s1, 1
    ctx->pc = 0x5051acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x5051b0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x5051b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x5051b4: 0x318821  addu        $s1, $at, $s1
    ctx->pc = 0x5051b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x5051b8: 0x3625ffff  ori         $a1, $s1, 0xFFFF
    ctx->pc = 0x5051b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x5051bc: 0x2c6704b7  sltiu       $a3, $v1, 0x4B7
    ctx->pc = 0x5051bcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1207) ? 1 : 0);
    // 0x5051c0: 0x2c630031  sltiu       $v1, $v1, 0x31
    ctx->pc = 0x5051c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
    // 0x5051c4: 0xb08824  and         $s1, $a1, $s0
    ctx->pc = 0x5051c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x5051c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x5051c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5051cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x5051CCu;
    {
        const bool branch_taken_0x5051cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5051D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5051CCu;
        // 0x5051d0: 0x462821  addu        $a1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5051cc) {
            ctx->pc = 0x5051E0u;
            goto label_5051e0;
        }
    }
    ctx->pc = 0x5051D4u;
    // 0x5051d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x5051D4u;
    {
        const bool branch_taken_0x5051d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5051D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5051D4u;
        // 0x5051d8: 0x36310006  ori         $s1, $s1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5051d4) {
            ctx->pc = 0x5051F8u;
            goto label_5051f8;
        }
    }
    ctx->pc = 0x5051DCu;
    // 0x5051dc: 0x0  nop
    ctx->pc = 0x5051dcu;
    // NOP
label_5051e0:
    // 0x5051e0: 0x50e00006  beql        $a3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x5051E0u;
    {
        const bool branch_taken_0x5051e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x5051e0) {
            ctx->pc = 0x5051E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5051E0u;
            // 0x5051e4: 0x84a30000  lh          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5051FCu;
            goto label_5051fc;
        }
    }
    ctx->pc = 0x5051E8u;
    // 0x5051e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x5051e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x5051ec: 0x3623ffff  ori         $v1, $s1, 0xFFFF
    ctx->pc = 0x5051ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x5051f0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x5051f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x5051f4: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x5051f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_5051f8:
    // 0x5051f8: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x5051f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_5051fc:
    // 0x5051fc: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x5051fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x505200: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x505200u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x505204: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x505204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x505208: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x505208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x50520c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50520Cu;
    SET_GPR_U32(ctx, 31, 0x505214u);
    ctx->pc = 0x505210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50520Cu;
    // 0x505210: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50520Cu, 0x505214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505214u;
label_505214:
    // 0x505214: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x505214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x505218: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x505218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50521c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x50521Cu;
    {
        const bool branch_taken_0x50521c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x505220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50521Cu;
        // 0x505220: 0x2303024  and         $a2, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50521c) {
            ctx->pc = 0x505264u;
            goto label_505264;
        }
    }
    ctx->pc = 0x505224u;
    // 0x505224: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x505224u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x505228: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x505228u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50522c: 0x31380  sll         $v0, $v1, 14
    ctx->pc = 0x50522cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
    // 0x505230: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x505230u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x505234: 0xc58825  or          $s1, $a2, $a1
    ctx->pc = 0x505234u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x505238: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x505238u;
    SET_GPR_U32(ctx, 31, 0x505240u);
    ctx->pc = 0x50523Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x505238u;
    // 0x50523c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x505238u, 0x505240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x505240u;
label_505240:
    // 0x505240: 0x87a40000  lh          $a0, 0x0($sp)
    ctx->pc = 0x505240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x505244: 0x111c00  sll         $v1, $s1, 16
    ctx->pc = 0x505244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x505248: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x505248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50524c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x50524cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x505250: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x505250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x505254: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x505254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x505258: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x505258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x50525c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x50525cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x505260: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x505260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_505264:
    // 0x505264: 0x121400  sll         $v0, $s2, 16
    ctx->pc = 0x505264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x505268: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x505268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50526c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50526cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x505270: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x505270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x505274: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x505274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x505278: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x505278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50527c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x50527cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x505280: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x505280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x505284: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x505284u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x505288: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x505288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x50528c: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x50528cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
    // 0x505290: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x505290u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x505294: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x505294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x505298: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x505298u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50529c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x50529cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5052a0: 0x3e00008  jr          $ra
    ctx->pc = 0x5052A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5052A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5052A0u;
        // 0x5052a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5052A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5052A8u;
}
