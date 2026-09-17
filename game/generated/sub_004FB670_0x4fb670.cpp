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

// Function: sub_004FB670
// Address: 0x4fb670 - 0x4fbe80
void sub_004FB670_0x4fb670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FB670_0x4fb670");
#endif

    switch (ctx->pc) {
        case 0x4fb7e8u: goto label_4fb7e8;
        case 0x4fb804u: goto label_4fb804;
        case 0x4fb814u: goto label_4fb814;
        case 0x4fb828u: goto label_4fb828;
        case 0x4fb840u: goto label_4fb840;
        case 0x4fb874u: goto label_4fb874;
        case 0x4fb888u: goto label_4fb888;
        case 0x4fb8c0u: goto label_4fb8c0;
        case 0x4fb910u: goto label_4fb910;
        case 0x4fb918u: goto label_4fb918;
        case 0x4fb920u: goto label_4fb920;
        case 0x4fb930u: goto label_4fb930;
        case 0x4fb948u: goto label_4fb948;
        case 0x4fb958u: goto label_4fb958;
        case 0x4fb97cu: goto label_4fb97c;
        case 0x4fb9f0u: goto label_4fb9f0;
        case 0x4fba00u: goto label_4fba00;
        case 0x4fba1cu: goto label_4fba1c;
        case 0x4fba70u: goto label_4fba70;
        case 0x4fba88u: goto label_4fba88;
        case 0x4fbaa8u: goto label_4fbaa8;
        case 0x4fbae0u: goto label_4fbae0;
        case 0x4fbaf8u: goto label_4fbaf8;
        case 0x4fbb1cu: goto label_4fbb1c;
        case 0x4fbb44u: goto label_4fbb44;
        case 0x4fbb80u: goto label_4fbb80;
        case 0x4fbbd0u: goto label_4fbbd0;
        case 0x4fbc28u: goto label_4fbc28;
        case 0x4fbc30u: goto label_4fbc30;
        case 0x4fbc38u: goto label_4fbc38;
        case 0x4fbdb8u: goto label_4fbdb8;
        case 0x4fbdc8u: goto label_4fbdc8;
        case 0x4fbde8u: goto label_4fbde8;
        case 0x4fbdf0u: goto label_4fbdf0;
        default: break;
    }

    ctx->pc = 0x4fb670u;

label_4fb670:
    // 0x4fb670: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4fb670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4fb674: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4fb674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4fb678: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x4fb678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x4fb67c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4fb67cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fb680: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x4fb680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x4fb684: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4fb684u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fb688: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x4fb688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x4fb68c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x4fb68cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fb690: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x4fb690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x4fb694: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x4fb694u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fb698: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x4fb698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x4fb69c: 0x2442bc90  addiu       $v0, $v0, -0x4370
    ctx->pc = 0x4fb69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950032));
    // 0x4fb6a0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x4fb6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x4fb6a4: 0x266a0010  addiu       $t2, $s3, 0x10
    ctx->pc = 0x4fb6a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x4fb6a8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x4fb6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x4fb6ac: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x4fb6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x4fb6b0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x4fb6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x4fb6b4: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x4fb6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x4fb6b8: 0x9668000e  lhu         $t0, 0xE($s3)
    ctx->pc = 0x4fb6b8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x4fb6bc: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x4fb6bcu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x72BC98u));
    // 0x4fb6c0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x4fb6c0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x72BC90u));
    // 0x4fb6c4: 0x31098000  andi        $t1, $t0, 0x8000
    ctx->pc = 0x4fb6c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32768);
    // 0x4fb6c8: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4fb6c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4fb6cc: 0x310803ff  andi        $t0, $t0, 0x3FF
    ctx->pc = 0x4fb6ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1023);
    // 0x4fb6d0: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x4fb6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x4fb6d4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x4fb6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x4fb6d8: 0x15200007  bnez        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4FB6D8u;
    {
        const bool branch_taken_0x4fb6d8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FB6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB6D8u;
        // 0x4fb6dc: 0x304403ff  andi        $a0, $v0, 0x3FF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb6d8) {
            ctx->pc = 0x4FB6F8u;
            goto label_4fb6f8;
        }
    }
    ctx->pc = 0x4FB6E0u;
    // 0x4fb6e0: 0x8662000a  lh          $v0, 0xA($s3)
    ctx->pc = 0x4fb6e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x4fb6e4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4fb6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4fb6e8: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x4fb6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x4fb6ec: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x4fb6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x4fb6f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4FB6F0u;
    {
        const bool branch_taken_0x4fb6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB6F0u;
        // 0x4fb6f4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb6f0) {
            ctx->pc = 0x4FB714u;
            goto label_4fb714;
        }
    }
    ctx->pc = 0x4FB6F8u;
label_4fb6f8:
    // 0x4fb6f8: 0x8663000a  lh          $v1, 0xA($s3)
    ctx->pc = 0x4fb6f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x4fb6fc: 0x81023  negu        $v0, $t0
    ctx->pc = 0x4fb6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x4fb700: 0x2407fff8  addiu       $a3, $zero, -0x8
    ctx->pc = 0x4fb700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x4fb704: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4fb704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x4fb708: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4fb708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4fb70c: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x4fb70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x4fb710: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x4fb710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_4fb714:
    // 0x4fb714: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4fb714u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4fb718: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x4fb718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x4fb71c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4FB71Cu;
    {
        const bool branch_taken_0x4fb71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fb71c) {
            ctx->pc = 0x4FB720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FB71Cu;
            // 0x4fb720: 0x8663000c  lh          $v1, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FB740u;
            goto label_4fb740;
        }
    }
    ctx->pc = 0x4FB724u;
    // 0x4fb724: 0x8662000c  lh          $v0, 0xC($s3)
    ctx->pc = 0x4fb724u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x4fb728: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4fb728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4fb72c: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x4fb72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x4fb730: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x4fb730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x4fb734: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4FB734u;
    {
        const bool branch_taken_0x4fb734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB734u;
        // 0x4fb738: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb734) {
            ctx->pc = 0x4FB758u;
            goto label_4fb758;
        }
    }
    ctx->pc = 0x4FB73Cu;
    // 0x4fb73c: 0x0  nop
    ctx->pc = 0x4fb73cu;
    // NOP
label_4fb740:
    // 0x4fb740: 0x41023  negu        $v0, $a0
    ctx->pc = 0x4fb740u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x4fb744: 0x2407fff8  addiu       $a3, $zero, -0x8
    ctx->pc = 0x4fb744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x4fb748: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4fb748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x4fb74c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4fb74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4fb750: 0xafa70034  sw          $a3, 0x34($sp)
    ctx->pc = 0x4fb750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    // 0x4fb754: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x4fb754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_4fb758:
    // 0x4fb758: 0x92620008  lbu         $v0, 0x8($s3)
    ctx->pc = 0x4fb758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4fb75c: 0x92630009  lbu         $v1, 0x9($s3)
    ctx->pc = 0x4fb75cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
    // 0x4fb760: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x4fb760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fb764: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fb764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fb768: 0x8e670024  lw          $a3, 0x24($s3)
    ctx->pc = 0x4fb768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x4fb76c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4fb76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4fb770: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x4fb770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x4fb774: 0x24d40800  addiu       $s4, $a2, 0x800
    ctx->pc = 0x4fb774u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 2048));
    // 0x4fb778: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x4fb778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4fb77c: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x4fb77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x4fb780: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x4fb780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x4fb784: 0x24920800  addiu       $s2, $a0, 0x800
    ctx->pc = 0x4fb784u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    // 0x4fb788: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x4fb788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x4fb78c: 0x680012a  bltz        $s4, . + 4 + (0x12A << 2)
    ctx->pc = 0x4FB78Cu;
    {
        const bool branch_taken_0x4fb78c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x4FB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB78Cu;
        // 0x4fb790: 0xafa3001c  sw          $v1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb78c) {
            ctx->pc = 0x4FBC38u;
            goto label_4fbc38;
        }
    }
    ctx->pc = 0x4FB794u;
    // 0x4fb794: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x4fb794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4fb798: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4fb798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x4fb79c: 0x28421000  slti        $v0, $v0, 0x1000
    ctx->pc = 0x4fb79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x4fb7a0: 0x10400126  beqz        $v0, . + 4 + (0x126 << 2)
    ctx->pc = 0x4FB7A0u;
    {
        const bool branch_taken_0x4fb7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB7A0u;
        // 0x4fb7a4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb7a0) {
            ctx->pc = 0x4FBC3Cu;
            goto label_4fbc3c;
        }
    }
    ctx->pc = 0x4FB7A8u;
    // 0x4fb7a8: 0x6400124  bltz        $s2, . + 4 + (0x124 << 2)
    ctx->pc = 0x4FB7A8u;
    {
        const bool branch_taken_0x4fb7a8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x4FB7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB7A8u;
        // 0x4fb7ac: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb7a8) {
            ctx->pc = 0x4FBC3Cu;
            goto label_4fbc3c;
        }
    }
    ctx->pc = 0x4FB7B0u;
    // 0x4fb7b0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4fb7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4fb7b4: 0x28421000  slti        $v0, $v0, 0x1000
    ctx->pc = 0x4fb7b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x4fb7b8: 0x10400121  beqz        $v0, . + 4 + (0x121 << 2)
    ctx->pc = 0x4FB7B8u;
    {
        const bool branch_taken_0x4fb7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB7B8u;
        // 0x4fb7bc: 0xdfb10048  ld          $s1, 0x48($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb7b8) {
            ctx->pc = 0x4FBC40u;
            goto label_4fbc40;
        }
    }
    ctx->pc = 0x4FB7C0u;
    // 0x4fb7c0: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4fb7c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4fb7c4: 0x24020210  addiu       $v0, $zero, 0x210
    ctx->pc = 0x4fb7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x4fb7c8: 0x14620057  bne         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x4FB7C8u;
    {
        const bool branch_taken_0x4fb7c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4FB7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB7C8u;
        // 0x4fb7cc: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb7c8) {
            ctx->pc = 0x4FB928u;
            goto label_4fb928;
        }
    }
    ctx->pc = 0x4FB7D0u;
    // 0x4fb7d0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x4fb7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fb7d4: 0x8443d68a  lh          $v1, -0x2976($v0)
    ctx->pc = 0x4fb7d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294956682)));
    // 0x4fb7d8: 0x10640053  beq         $v1, $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x4FB7D8u;
    {
        const bool branch_taken_0x4fb7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4fb7d8) {
            ctx->pc = 0x4FB928u;
            goto label_4fb928;
        }
    }
    ctx->pc = 0x4FB7E0u;
    // 0x4fb7e0: 0xc13ea1e  jal         func_4FA878
    ctx->pc = 0x4FB7E0u;
    SET_GPR_U32(ctx, 31, 0x4FB7E8u);
    ctx->pc = 0x4FB7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB7E0u;
    // 0x4fb7e4: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FA878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA878u, 0x4FB7E0u, 0x4FB7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB7E8u;
label_4fb7e8:
    // 0x4fb7e8: 0x2610ceb4  addiu       $s0, $s0, -0x314C
    ctx->pc = 0x4fb7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954676));
    // 0x4fb7ec: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x4fb7ecu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fb7f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb7f4: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x4fb7f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x4fb7f8: 0x2631ce90  addiu       $s1, $s1, -0x3170
    ctx->pc = 0x4fb7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954640));
    // 0x4fb7fc: 0xc042d60  jal         func_10B580
    ctx->pc = 0x4FB7FCu;
    SET_GPR_U32(ctx, 31, 0x4FB804u);
    ctx->pc = 0x4FB800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB7FCu;
    // 0x4fb800: 0x24120800  addiu       $s2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B580u, 0x4FB7FCu, 0x4FB804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB804u;
label_4fb804:
    // 0x4fb804: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fb808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fb80c: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB80Cu;
    SET_GPR_U32(ctx, 31, 0x4FB814u);
    ctx->pc = 0x4FB810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB80Cu;
    // 0x4fb810: 0x24060146  addiu       $a2, $zero, 0x146 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 326));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB80Cu, 0x4FB814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB814u;
label_4fb814:
    // 0x4fb814: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb818: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x4fb818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x4fb81c: 0x34c60807  ori         $a2, $a2, 0x807
    ctx->pc = 0x4fb81cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2055);
    // 0x4fb820: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB820u;
    SET_GPR_U32(ctx, 31, 0x4FB828u);
    ctx->pc = 0x4FB824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB820u;
    // 0x4fb824: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB820u, 0x4FB828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB828u;
label_4fb828:
    // 0x4fb828: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb82c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x4fb82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4fb830: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4fb830u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4fb834: 0x34c60044  ori         $a2, $a2, 0x44
    ctx->pc = 0x4fb834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)68);
    // 0x4fb838: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB838u;
    SET_GPR_U32(ctx, 31, 0x4FB840u);
    ctx->pc = 0x4FB83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB838u;
    // 0x4fb83c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB838u, 0x4FB840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB840u;
label_4fb840:
    // 0x4fb840: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb844: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4fb844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fb848: 0x3406e200  ori         $a2, $zero, 0xE200
    ctx->pc = 0x4fb848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57856);
    // 0x4fb84c: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x4fb84cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x4fb850: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x4fb850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4fb854: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x4fb854u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x4fb858: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4fb858u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4fb85c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fb85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fb860: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4fb860u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4fb864: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x4fb864u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4fb868: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fb868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fb86c: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB86Cu;
    SET_GPR_U32(ctx, 31, 0x4FB874u);
    ctx->pc = 0x4FB870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB86Cu;
    // 0x4fb870: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB86Cu, 0x4FB874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB874u;
label_4fb874:
    // 0x4fb874: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb878: 0x3c0614ff  lui         $a2, 0x14FF
    ctx->pc = 0x4fb878u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5375 << 16));
    // 0x4fb87c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4fb87cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4fb880: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB880u;
    SET_GPR_U32(ctx, 31, 0x4FB888u);
    ctx->pc = 0x4FB884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB880u;
    // 0x4fb884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB880u, 0x4FB888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB888u;
label_4fb888:
    // 0x4fb888: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4fb888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fb88c: 0x96670000  lhu         $a3, 0x0($s3)
    ctx->pc = 0x4fb88cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4fb890: 0x3c067100  lui         $a2, 0x7100
    ctx->pc = 0x4fb890u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28928 << 16));
    // 0x4fb894: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4fb894u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4fb898: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb89c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fb89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fb8a0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x4fb8a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x4fb8a4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4fb8a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4fb8a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4fb8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fb8ac: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x4fb8acu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4fb8b0: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x4fb8b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x4fb8b4: 0x2463025  or          $a2, $s2, $a2
    ctx->pc = 0x4fb8b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | GPR_U64(ctx, 6));
    // 0x4fb8b8: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB8B8u;
    SET_GPR_U32(ctx, 31, 0x4FB8C0u);
    ctx->pc = 0x4FB8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB8B8u;
    // 0x4fb8bc: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB8B8u, 0x4FB8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB8C0u;
label_4fb8c0:
    // 0x4fb8c0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4fb8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fb8c4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x4fb8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x4fb8c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4fb8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fb8cc: 0x96670000  lhu         $a3, 0x0($s3)
    ctx->pc = 0x4fb8ccu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4fb8d0: 0x34038eff  ori         $v1, $zero, 0x8EFF
    ctx->pc = 0x4fb8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36607);
    // 0x4fb8d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4fb8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4fb8d8: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x4fb8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x4fb8dc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4fb8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4fb8e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4fb8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fb8e4: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x4fb8e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x4fb8e8: 0x24c60800  addiu       $a2, $a2, 0x800
    ctx->pc = 0x4fb8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2048));
    // 0x4fb8ec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4fb8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4fb8f0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4fb8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4fb8f4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x4fb8f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x4fb8f8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4fb8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4fb8fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb900: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4fb900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4fb904: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x4fb904u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x4fb908: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB908u;
    SET_GPR_U32(ctx, 31, 0x4FB910u);
    ctx->pc = 0x4FB90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB908u;
    // 0x4fb90c: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB908u, 0x4FB910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB910u;
label_4fb910:
    // 0x4fb910: 0xc042d66  jal         func_10B598
    ctx->pc = 0x4FB910u;
    SET_GPR_U32(ctx, 31, 0x4FB918u);
    ctx->pc = 0x4FB914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB910u;
    // 0x4fb914: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B598u, 0x4FB910u, 0x4FB918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB918u;
label_4fb918:
    // 0x4fb918: 0xc13ea58  jal         func_4FA960
    ctx->pc = 0x4FB918u;
    SET_GPR_U32(ctx, 31, 0x4FB920u);
    ctx->pc = 0x4FA960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA960u, 0x4FB918u, 0x4FB920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB920u;
label_4fb920:
    // 0x4fb920: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x4FB920u;
    {
        const bool branch_taken_0x4fb920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FB920u;
        // 0x4fb924: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fb920) {
            ctx->pc = 0x4FBC3Cu;
            goto label_4fbc3c;
        }
    }
    ctx->pc = 0x4FB928u;
label_4fb928:
    // 0x4fb928: 0xc13ea1e  jal         func_4FA878
    ctx->pc = 0x4FB928u;
    SET_GPR_U32(ctx, 31, 0x4FB930u);
    ctx->pc = 0x4FB92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB928u;
    // 0x4fb92c: 0x3c1e0057  lui         $fp, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FA878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA878u, 0x4FB928u, 0x4FB930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB930u;
label_4fb930:
    // 0x4fb930: 0x27d0ceb4  addiu       $s0, $fp, -0x314C
    ctx->pc = 0x4fb930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294954676));
    // 0x4fb934: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x4fb934u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fb938: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb93c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4fb93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x4fb940: 0xc042d60  jal         func_10B580
    ctx->pc = 0x4FB940u;
    SET_GPR_U32(ctx, 31, 0x4FB948u);
    ctx->pc = 0x4FB944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB940u;
    // 0x4fb944: 0x24715b00  addiu       $s1, $v1, 0x5B00 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 23296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B580u, 0x4FB940u, 0x4FB948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB948u;
label_4fb948:
    // 0x4fb948: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb94c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x4fb94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x4fb950: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB950u;
    SET_GPR_U32(ctx, 31, 0x4FB958u);
    ctx->pc = 0x4FB954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB950u;
    // 0x4fb954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB950u, 0x4FB958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB958u;
label_4fb958:
    // 0x4fb958: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4fb958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fb95c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4FB95Cu;
    {
        const bool branch_taken_0x4fb95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fb95c) {
            ctx->pc = 0x4FB960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FB95Cu;
            // 0x4fb960: 0x92620014  lbu         $v0, 0x14($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FB980u;
            goto label_4fb980;
        }
    }
    ctx->pc = 0x4FB964u;
    // 0x4fb964: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb968: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x4fb968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x4fb96c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4fb96cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4fb970: 0x34c60061  ori         $a2, $a2, 0x61
    ctx->pc = 0x4fb970u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)97);
    // 0x4fb974: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB974u;
    SET_GPR_U32(ctx, 31, 0x4FB97Cu);
    ctx->pc = 0x4FB978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB974u;
    // 0x4fb978: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB974u, 0x4FB97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB97Cu;
label_4fb97c:
    // 0x4fb97c: 0x92620014  lbu         $v0, 0x14($s3)
    ctx->pc = 0x4fb97cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
label_4fb980:
    // 0x4fb980: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4fb980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fb984: 0x8e66002c  lw          $a2, 0x2C($s3)
    ctx->pc = 0x4fb984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x4fb988: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x4fb988u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fb98c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fb98cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4fb990: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4fb990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fb994: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x4fb994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
    // 0x4fb998: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x4fb998u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4fb99c: 0x73cf8  dsll        $a3, $a3, 19
    ctx->pc = 0x4fb99cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 19);
    // 0x4fb9a0: 0x3c080130  lui         $t0, 0x130
    ctx->pc = 0x4fb9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)304 << 16));
    // 0x4fb9a4: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x4fb9a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4fb9a8: 0x94d38  dsll        $t1, $t1, 20
    ctx->pc = 0x4fb9a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 20);
    // 0x4fb9ac: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x4fb9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x4fb9b0: 0x52eb8  dsll        $a1, $a1, 26
    ctx->pc = 0x4fb9b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 26);
    // 0x4fb9b4: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x4fb9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x4fb9b8: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x4fb9b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x4fb9bc: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x4fb9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x4fb9c0: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x4fb9c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x4fb9c4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4fb9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4fb9c8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4fb9c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4fb9cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4fb9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4fb9d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb9d4: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x4fb9d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x4fb9d8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4fb9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4fb9dc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x4fb9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4fb9e0: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x4fb9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x4fb9e4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x4fb9e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x4fb9e8: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB9E8u;
    SET_GPR_U32(ctx, 31, 0x4FB9F0u);
    ctx->pc = 0x4FB9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB9E8u;
    // 0x4fb9ec: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB9E8u, 0x4FB9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FB9F0u;
label_4fb9f0:
    // 0x4fb9f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fb9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fb9f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fb9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fb9f8: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FB9F8u;
    SET_GPR_U32(ctx, 31, 0x4FBA00u);
    ctx->pc = 0x4FB9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FB9F8u;
    // 0x4fb9fc: 0x24060156  addiu       $a2, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FB9F8u, 0x4FBA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBA00u;
label_4fba00:
    // 0x4fba00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4fba00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fba04: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4FBA04u;
    {
        const bool branch_taken_0x4fba04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBA04u;
        // 0x4fba08: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fba04) {
            ctx->pc = 0x4FBA78u;
            goto label_4fba78;
        }
    }
    ctx->pc = 0x4FBA0Cu;
    // 0x4fba0c: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x4fba0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x4fba10: 0x34c60c05  ori         $a2, $a2, 0xC05
    ctx->pc = 0x4fba10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3077);
    // 0x4fba14: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FBA14u;
    SET_GPR_U32(ctx, 31, 0x4FBA1Cu);
    ctx->pc = 0x4FBA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FBA14u;
    // 0x4fba18: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FBA14u, 0x4FBA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBA1Cu;
label_4fba1c:
    // 0x4fba1c: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x4fba1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4fba20: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4fba20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fba24: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4fba24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4fba28: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x4fba28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4fba2c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x4fba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4fba30: 0x33138  dsll        $a2, $v1, 4
    ctx->pc = 0x4fba30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 4);
    // 0x4fba34: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x4fba34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4fba38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4fba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4fba3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4fba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fba40: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4fba40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4fba44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4fba44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4fba48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4fba48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4fba4c: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x4fba4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4fba50: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x4fba50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x4fba54: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x4fba54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x4fba58: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4fba58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4fba5c: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4fba5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4fba60: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x4fba60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x4fba64: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x4fba64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x4fba68: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FBA68u;
    SET_GPR_U32(ctx, 31, 0x4FBA70u);
    ctx->pc = 0x4FBA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FBA68u;
    // 0x4fba6c: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FBA68u, 0x4FBA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBA70u;
label_4fba70:
    // 0x4fba70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4FBA70u;
    {
        const bool branch_taken_0x4fba70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBA70u;
        // 0x4fba74: 0x27d1ceb4  addiu       $s1, $fp, -0x314C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294954676));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fba70) {
            ctx->pc = 0x4FBA8Cu;
            goto label_4fba8c;
        }
    }
    ctx->pc = 0x4FBA78u;
label_4fba78:
    // 0x4fba78: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x4fba78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x4fba7c: 0x34c60807  ori         $a2, $a2, 0x807
    ctx->pc = 0x4fba7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2055);
    // 0x4fba80: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FBA80u;
    SET_GPR_U32(ctx, 31, 0x4FBA88u);
    ctx->pc = 0x4FBA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FBA80u;
    // 0x4fba84: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FBA80u, 0x4FBA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBA88u;
label_4fba88:
    // 0x4fba88: 0x27d1ceb4  addiu       $s1, $fp, -0x314C
    ctx->pc = 0x4fba88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 4294954676));
label_4fba8c:
    // 0x4fba8c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x4fba8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x4fba90: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4fba90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fba94: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x4fba94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4fba98: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4fba98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4fba9c: 0x34c60044  ori         $a2, $a2, 0x44
    ctx->pc = 0x4fba9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)68);
    // 0x4fbaa0: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FBAA0u;
    SET_GPR_U32(ctx, 31, 0x4FBAA8u);
    ctx->pc = 0x4FBAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FBAA0u;
    // 0x4fbaa4: 0x26700030  addiu       $s0, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FBAA0u, 0x4FBAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBAA8u;
label_4fbaa8:
    // 0x4fbaa8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4fbaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4fbaac: 0x8c43ce90  lw          $v1, -0x3170($v0)
    ctx->pc = 0x4fbaacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x56CE90u));
    // 0x4fbab0: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x4fbab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x4fbab4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4fbab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fbab8: 0x3406e200  ori         $a2, $zero, 0xE200
    ctx->pc = 0x4fbab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57856);
    // 0x4fbabc: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x4fbabcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x4fbac0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x4fbac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x4fbac4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x4fbac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4fbac8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4fbac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4fbacc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x4fbaccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x4fbad0: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x4fbad0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4fbad4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x4fbad4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x4fbad8: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FBAD8u;
    SET_GPR_U32(ctx, 31, 0x4FBAE0u);
    ctx->pc = 0x4FBADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FBAD8u;
    // 0x4fbadc: 0xe63025  or          $a2, $a3, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FBAD8u, 0x4FBAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBAE0u;
label_4fbae0:
    // 0x4fbae0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4fbae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fbae4: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x4fbae4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x4fbae8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fbae8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fbaec: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x4fbaecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x4fbaf0: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FBAF0u;
    SET_GPR_U32(ctx, 31, 0x4FBAF8u);
    ctx->pc = 0x4FBAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FBAF0u;
    // 0x4fbaf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FBAF0u, 0x4FBAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBAF8u;
label_4fbaf8:
    // 0x4fbaf8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4fbaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fbafc: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x4fbafcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4fbb00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4fbb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4fbb04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4fbb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fbb08: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4fbb08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4fbb0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fbb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fbb10: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fbb10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fbb14: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FBB14u;
    SET_GPR_U32(ctx, 31, 0x4FBB1Cu);
    ctx->pc = 0x4FBB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FBB14u;
    // 0x4fbb18: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FBB14u, 0x4FBB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBB1Cu;
label_4fbb1c:
    // 0x4fbb1c: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x4fbb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x4fbb20: 0x123100  sll         $a2, $s2, 4
    ctx->pc = 0x4fbb20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x4fbb24: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4fbb24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fbb28: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4fbb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fbb2c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fbb2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fbb30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4fbb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4fbb34: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x4fbb34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4fbb38: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4fbb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fbb3c: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FBB3Cu;
    SET_GPR_U32(ctx, 31, 0x4FBB44u);
    ctx->pc = 0x4FBB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FBB3Cu;
    // 0x4fbb40: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FBB3Cu, 0x4FBB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBB44u;
label_4fbb44:
    // 0x4fbb44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4fbb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fbb48: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x4fbb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4fbb4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4fbb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4fbb50: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x4fbb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4fbb54: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x4fbb54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4fbb58: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x4fbb58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fbb5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fbb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fbb60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fbb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fbb64: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4fbb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4fbb68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4fbb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4fbb6c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4fbb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4fbb70: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4fbb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4fbb74: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4fbb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4fbb78: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FBB78u;
    SET_GPR_U32(ctx, 31, 0x4FBB80u);
    ctx->pc = 0x4FBB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FBB78u;
    // 0x4fbb7c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FBB78u, 0x4FBB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBB80u;
label_4fbb80:
    // 0x4fbb80: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4fbb80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fbb84: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x4fbb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x4fbb88: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4fbb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fbb8c: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x4fbb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x4fbb90: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4fbb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4fbb94: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x4fbb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4fbb98: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4fbb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4fbb9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fbb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fbba0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4fbba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fbba4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4fbba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4fbba8: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x4fbba8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fbbac: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x4fbbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x4fbbb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4fbbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4fbbb4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4fbbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4fbbb8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4fbbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4fbbbc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4fbbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4fbbc0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4fbbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4fbbc4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4fbbc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4fbbc8: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FBBC8u;
    SET_GPR_U32(ctx, 31, 0x4FBBD0u);
    ctx->pc = 0x4FBBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FBBC8u;
    // 0x4fbbcc: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FBBC8u, 0x4FBBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBBD0u;
label_4fbbd0:
    // 0x4fbbd0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4fbbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x4fbbd4: 0x8c625b00  lw          $v0, 0x5B00($v1)
    ctx->pc = 0x4fbbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x515B00u));
    // 0x4fbbd8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4FBBD8u;
    {
        const bool branch_taken_0x4fbbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBBD8u;
        // 0x4fbbdc: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbbd8) {
            ctx->pc = 0x4FBC28u;
            goto label_4fbc28;
        }
    }
    ctx->pc = 0x4FBBE0u;
    // 0x4fbbe0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4fbbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4fbbe4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x4fbbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4fbbe8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x4fbbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4fbbec: 0x34138  dsll        $t0, $v1, 4
    ctx->pc = 0x4fbbecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 4);
    // 0x4fbbf0: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x4fbbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4fbbf4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4fbbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4fbbf8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4fbbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fbbfc: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x4fbbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4fbc00: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4fbc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4fbc04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4fbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4fbc08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4fbc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4fbc0c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x4fbc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x4fbc10: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x4fbc10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x4fbc14: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x4fbc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x4fbc18: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x4fbc18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x4fbc1c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x4fbc1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x4fbc20: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FBC20u;
    SET_GPR_U32(ctx, 31, 0x4FBC28u);
    ctx->pc = 0x4FBC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FBC20u;
    // 0x4fbc24: 0x1063025  or          $a2, $t0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FBC20u, 0x4FBC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBC28u;
label_4fbc28:
    // 0x4fbc28: 0xc042d66  jal         func_10B598
    ctx->pc = 0x4FBC28u;
    SET_GPR_U32(ctx, 31, 0x4FBC30u);
    ctx->pc = 0x4FBC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FBC28u;
    // 0x4fbc2c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B598u, 0x4FBC28u, 0x4FBC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBC30u;
label_4fbc30:
    // 0x4fbc30: 0xc13ea58  jal         func_4FA960
    ctx->pc = 0x4FBC30u;
    SET_GPR_U32(ctx, 31, 0x4FBC38u);
    ctx->pc = 0x4FA960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA960u, 0x4FBC30u, 0x4FBC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBC38u;
label_4fbc38:
    // 0x4fbc38: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x4fbc38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4fbc3c:
    // 0x4fbc3c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x4fbc3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4fbc40:
    // 0x4fbc40: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x4fbc40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4fbc44: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x4fbc44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4fbc48: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x4fbc48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4fbc4c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x4fbc4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4fbc50: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x4fbc50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4fbc54: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x4fbc54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4fbc58: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x4fbc58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4fbc5c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x4fbc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x4fbc60: 0x3e00008  jr          $ra
    ctx->pc = 0x4FBC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FBC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBC60u;
        // 0x4fbc64: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FBC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FBC68u;
    // 0x4fbc68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4fbc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4fbc6c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4fbc6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fbc70: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4fbc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4fbc74: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4fbc74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fbc78: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4fbc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4fbc7c: 0x91030008  lbu         $v1, 0x8($t0)
    ctx->pc = 0x4fbc7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4fbc80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4fbc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4fbc84: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x4fbc84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4fbc88: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4FBC88u;
    {
        const bool branch_taken_0x4fbc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBC88u;
        // 0x4fbc8c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbc88) {
            ctx->pc = 0x4FBCCCu;
            goto label_4fbccc;
        }
    }
    ctx->pc = 0x4FBC90u;
    // 0x4fbc90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4fbc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4fbc94: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4fbc94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4fbc98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4fbc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4fbc9c: 0x8c63bca0  lw          $v1, -0x4360($v1)
    ctx->pc = 0x4fbc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950048)));
    // 0x4fbca0: 0x600008  jr          $v1
    ctx->pc = 0x4FBCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4FBCA8u: goto label_4fbca8;
            case 0x4FBCB0u: goto label_4fbcb0;
            case 0x4FBCB8u: goto label_4fbcb8;
            case 0x4FBCC0u: goto label_4fbcc0;
            case 0x4FBCC8u: goto label_4fbcc8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FBCA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4FBCA8u;
label_4fbca8:
    // 0x4fbca8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4FBCA8u;
    {
        const bool branch_taken_0x4fbca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBCA8u;
        // 0x4fbcac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbca8) {
            ctx->pc = 0x4FBCCCu;
            goto label_4fbccc;
        }
    }
    ctx->pc = 0x4FBCB0u;
label_4fbcb0:
    // 0x4fbcb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4FBCB0u;
    {
        const bool branch_taken_0x4fbcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBCB0u;
        // 0x4fbcb4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbcb0) {
            ctx->pc = 0x4FBCCCu;
            goto label_4fbccc;
        }
    }
    ctx->pc = 0x4FBCB8u;
label_4fbcb8:
    // 0x4fbcb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4FBCB8u;
    {
        const bool branch_taken_0x4fbcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBCB8u;
        // 0x4fbcbc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbcb8) {
            ctx->pc = 0x4FBCCCu;
            goto label_4fbccc;
        }
    }
    ctx->pc = 0x4FBCC0u;
label_4fbcc0:
    // 0x4fbcc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4FBCC0u;
    {
        const bool branch_taken_0x4fbcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBCC0u;
        // 0x4fbcc4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbcc0) {
            ctx->pc = 0x4FBCCCu;
            goto label_4fbccc;
        }
    }
    ctx->pc = 0x4FBCC8u;
label_4fbcc8:
    // 0x4fbcc8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4fbcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4fbccc:
    // 0x4fbccc: 0x91020009  lbu         $v0, 0x9($t0)
    ctx->pc = 0x4fbcccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
    // 0x4fbcd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4fbcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4fbcd4: 0x2c430010  sltiu       $v1, $v0, 0x10
    ctx->pc = 0x4fbcd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4fbcd8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4FBCD8u;
    {
        const bool branch_taken_0x4fbcd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBCD8u;
        // 0x4fbcdc: 0x25050014  addiu       $a1, $t0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbcd8) {
            ctx->pc = 0x4FBD20u;
            goto label_4fbd20;
        }
    }
    ctx->pc = 0x4FBCE0u;
    // 0x4fbce0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fbce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4fbce4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4fbce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4fbce8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4fbce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4fbcec: 0x8c63bce0  lw          $v1, -0x4320($v1)
    ctx->pc = 0x4fbcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950112)));
    // 0x4fbcf0: 0x600008  jr          $v1
    ctx->pc = 0x4FBCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4FBCF8u: goto label_4fbcf8;
            case 0x4FBD00u: goto label_4fbd00;
            case 0x4FBD08u: goto label_4fbd08;
            case 0x4FBD10u: goto label_4fbd10;
            case 0x4FBD18u: goto label_4fbd18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FBCF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4FBCF8u;
label_4fbcf8:
    // 0x4fbcf8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4FBCF8u;
    {
        const bool branch_taken_0x4fbcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBCF8u;
        // 0x4fbcfc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbcf8) {
            ctx->pc = 0x4FBD1Cu;
            goto label_4fbd1c;
        }
    }
    ctx->pc = 0x4FBD00u;
label_4fbd00:
    // 0x4fbd00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4FBD00u;
    {
        const bool branch_taken_0x4fbd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBD00u;
        // 0x4fbd04: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbd00) {
            ctx->pc = 0x4FBD1Cu;
            goto label_4fbd1c;
        }
    }
    ctx->pc = 0x4FBD08u;
label_4fbd08:
    // 0x4fbd08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4FBD08u;
    {
        const bool branch_taken_0x4fbd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBD08u;
        // 0x4fbd0c: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbd08) {
            ctx->pc = 0x4FBD1Cu;
            goto label_4fbd1c;
        }
    }
    ctx->pc = 0x4FBD10u;
label_4fbd10:
    // 0x4fbd10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4FBD10u;
    {
        const bool branch_taken_0x4fbd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FBD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBD10u;
        // 0x4fbd14: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbd10) {
            ctx->pc = 0x4FBD1Cu;
            goto label_4fbd1c;
        }
    }
    ctx->pc = 0x4FBD18u;
label_4fbd18:
    // 0x4fbd18: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x4fbd18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4fbd1c:
    // 0x4fbd1c: 0x25050014  addiu       $a1, $t0, 0x14
    ctx->pc = 0x4fbd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
label_4fbd20:
    // 0x4fbd20: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x4fbd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4fbd24: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4fbd24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fbd28: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x4fbd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x4fbd2c: 0x31280  sll         $v0, $v1, 10
    ctx->pc = 0x4fbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x4fbd30: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x4fbd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x4fbd34: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x4fbd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x4fbd38: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x4fbd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x4fbd3c: 0x344203f0  ori         $v0, $v0, 0x3F0
    ctx->pc = 0x4fbd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1008);
    // 0x4fbd40: 0x24420680  addiu       $v0, $v0, 0x680
    ctx->pc = 0x4fbd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x4fbd44: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4FBD44u;
    {
        const bool branch_taken_0x4fbd44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4FBD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBD44u;
        // 0x4fbd48: 0xa7a20030  sh          $v0, 0x30($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbd44) {
            ctx->pc = 0x4FBD54u;
            goto label_4fbd54;
        }
    }
    ctx->pc = 0x4FBD4Cu;
    // 0x4fbd4c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x4fbd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x4fbd50: 0xa7a20030  sh          $v0, 0x30($sp)
    ctx->pc = 0x4fbd50u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
label_4fbd54:
    // 0x4fbd54: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4fbd54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fbd58: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4FBD58u;
    {
        const bool branch_taken_0x4fbd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBD58u;
        // 0x4fbd5c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fbd58) {
            ctx->pc = 0x4FBD64u;
            goto label_4fbd64;
        }
    }
    ctx->pc = 0x4FBD60u;
    // 0x4fbd60: 0xa7a20030  sh          $v0, 0x30($sp)
    ctx->pc = 0x4fbd60u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 2));
label_4fbd64:
    // 0x4fbd64: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x4fbd64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4fbd68: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x4fbd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4fbd6c: 0x6903000f  ldl         $v1, 0xF($t0)
    ctx->pc = 0x4fbd6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4fbd70: 0x6d030008  ldr         $v1, 0x8($t0)
    ctx->pc = 0x4fbd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4fbd74: 0x69090017  ldl         $t1, 0x17($t0)
    ctx->pc = 0x4fbd74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x4fbd78: 0x6d090010  ldr         $t1, 0x10($t0)
    ctx->pc = 0x4fbd78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4fbd7c: 0x690a001f  ldl         $t2, 0x1F($t0)
    ctx->pc = 0x4fbd7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x4fbd80: 0x6d0a0018  ldr         $t2, 0x18($t0)
    ctx->pc = 0x4fbd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x4fbd84: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4fbd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fbd88: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4fbd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fbd8c: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x4fbd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fbd90: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x4fbd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fbd94: 0xb3a90017  sdl         $t1, 0x17($sp)
    ctx->pc = 0x4fbd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fbd98: 0xb7a90010  sdr         $t1, 0x10($sp)
    ctx->pc = 0x4fbd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fbd9c: 0xb3aa001f  sdl         $t2, 0x1F($sp)
    ctx->pc = 0x4fbd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fbda0: 0xb7aa0018  sdr         $t2, 0x18($sp)
    ctx->pc = 0x4fbda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4fbda4: 0x8d020020  lw          $v0, 0x20($t0)
    ctx->pc = 0x4fbda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x4fbda8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4fbda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fbdac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4fbdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4fbdb0: 0xc13ed9c  jal         func_4FB670
    ctx->pc = 0x4FBDB0u;
    SET_GPR_U32(ctx, 31, 0x4FBDB8u);
    ctx->pc = 0x4FBDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FBDB0u;
    // 0x4fbdb4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FB670u;
    goto label_4fb670;
    ctx->pc = 0x4FBDB8u;
label_4fbdb8:
    // 0x4fbdb8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4fbdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4fbdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x4FBDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FBDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBDBCu;
        // 0x4fbdc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FBDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FBDC4u;
    // 0x4fbdc4: 0x0  nop
    ctx->pc = 0x4fbdc4u;
    // NOP
label_4fbdc8:
    // 0x4fbdc8: 0x3c020084  lui         $v0, 0x84
    ctx->pc = 0x4fbdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)132 << 16));
    // 0x4fbdcc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4fbdccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4fbdd0: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x4fbdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x4fbdd4: 0x24423748  addiu       $v0, $v0, 0x3748
    ctx->pc = 0x4fbdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14152));
    // 0x4fbdd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4fbdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4fbddc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4fbddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4fbde0: 0xc13e654  jal         func_4F9950
    ctx->pc = 0x4FBDE0u;
    SET_GPR_U32(ctx, 31, 0x4FBDE8u);
    ctx->pc = 0x4FBDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FBDE0u;
    // 0x4fbde4: 0xac62ce98  sw          $v0, -0x3168($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954648), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9950u, 0x4FBDE0u, 0x4FBDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBDE8u;
label_4fbde8:
    // 0x4fbde8: 0xc13e654  jal         func_4F9950
    ctx->pc = 0x4FBDE8u;
    SET_GPR_U32(ctx, 31, 0x4FBDF0u);
    ctx->pc = 0x4FBDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FBDE8u;
    // 0x4fbdec: 0x245001fe  addiu       $s0, $v0, 0x1FE (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 510));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9950u, 0x4FBDE8u, 0x4FBDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FBDF0u;
label_4fbdf0:
    // 0x4fbdf0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4fbdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4fbdf4: 0x342101fe  ori         $at, $at, 0x1FE
    ctx->pc = 0x4fbdf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)510);
    // 0x4fbdf8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4fbdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4fbdfc: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x4fbdfcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fbe00: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x4fbe00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4fbe04: 0x3406fe00  ori         $a2, $zero, 0xFE00
    ctx->pc = 0x4fbe04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x4fbe08: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x4fbe08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x4fbe0c: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x4fbe0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4fbe10: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x4fbe10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x4fbe14: 0x51a3a  dsrl        $v1, $a1, 8
    ctx->pc = 0x4fbe14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) >> 8);
    // 0x4fbe18: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4fbe18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x4fbe1c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4fbe1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4fbe20: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4fbe20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4fbe24: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4fbe24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4fbe28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4fbe28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4fbe2c: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x4fbe2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x4fbe30: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4fbe30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4fbe34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4fbe34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4fbe38: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4fbe38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4fbe3c: 0xfc230100  sd          $v1, 0x100($at)
    ctx->pc = 0x4fbe3cu;
    runtime->Store64(rdram, ctx, 0x70000100u, GPR_U64(ctx, 3));
    // 0x4fbe40: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4fbe40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fbe44: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4fbe44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4fbe48: 0x4123a  dsrl        $v0, $a0, 8
    ctx->pc = 0x4fbe48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 8);
    // 0x4fbe4c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4fbe4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x4fbe50: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4fbe50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4fbe54: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4fbe54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4fbe58: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4fbe58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4fbe5c: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x4fbe5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x4fbe60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4fbe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4fbe64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4fbe64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fbe68: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4fbe68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4fbe6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4fbe6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4fbe70: 0xfc2201f0  sd          $v0, 0x1F0($at)
    ctx->pc = 0x4fbe70u;
    runtime->Store64(rdram, ctx, 0x700001F0u, GPR_U64(ctx, 2));
    // 0x4fbe74: 0x3e00008  jr          $ra
    ctx->pc = 0x4FBE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FBE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FBE74u;
        // 0x4fbe78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FBE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FBE7Cu;
    // 0x4fbe7c: 0x0  nop
    ctx->pc = 0x4fbe7cu;
    // NOP
    ctx->pc = 0x4fbe80u;
}
