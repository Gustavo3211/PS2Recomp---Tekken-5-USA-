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

// Function: sub_002A6CE0
// Address: 0x2a6ce0 - 0x2a7120
void sub_002A6CE0_0x2a6ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6CE0_0x2a6ce0");
#endif

    switch (ctx->pc) {
        case 0x2a6dd8u: goto label_2a6dd8;
        case 0x2a6e1cu: goto label_2a6e1c;
        case 0x2a6e68u: goto label_2a6e68;
        case 0x2a6eb0u: goto label_2a6eb0;
        case 0x2a6efcu: goto label_2a6efc;
        case 0x2a6f4cu: goto label_2a6f4c;
        case 0x2a6f9cu: goto label_2a6f9c;
        case 0x2a6fecu: goto label_2a6fec;
        case 0x2a703cu: goto label_2a703c;
        case 0x2a70a0u: goto label_2a70a0;
        case 0x2a70e4u: goto label_2a70e4;
        default: break;
    }

    ctx->pc = 0x2a6ce0u;

    // 0x2a6ce0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a6ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a6ce4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2a6ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a6ce8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2a6ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2a6cec: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2a6cecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6cf0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a6cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a6cf4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2a6cf8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2a6cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2a6cfc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a6cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a6d00: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2a6d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2a6d04: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2a6d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2a6d08: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2a6d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2a6d0c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2a6d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2a6d10: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2a6d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2a6d14: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2a6d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2a6d18: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x2a6d18u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a6d1c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2a6d1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a6d20: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2a6d20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a6d24: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x2a6d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6d28: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2a6d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2a6d2c: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x2a6d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6d30: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2a6d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2a6d34: 0xc7d60018  lwc1        $f22, 0x18($fp)
    ctx->pc = 0x2a6d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a6d38: 0xc7d5001c  lwc1        $f21, 0x1C($fp)
    ctx->pc = 0x2a6d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a6d3c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6D3Cu;
    {
        const bool branch_taken_0x2a6d3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D3Cu;
        // 0x2a6d40: 0x8fd30000  lw          $s3, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6d3c) {
            ctx->pc = 0x2A6D50u;
            goto label_2a6d50;
        }
    }
    ctx->pc = 0x2A6D44u;
    // 0x2a6d44: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x2a6d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2a6d48: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A6D48u;
    {
        const bool branch_taken_0x2a6d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D48u;
        // 0x2a6d4c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6d48) {
            ctx->pc = 0x2A6D8Cu;
            goto label_2a6d8c;
        }
    }
    ctx->pc = 0x2A6D50u;
label_2a6d50:
    // 0x2a6d50: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2a6d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2a6d54: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6D54u;
    {
        const bool branch_taken_0x2a6d54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D54u;
        // 0x2a6d58: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6d54) {
            ctx->pc = 0x2A6D68u;
            goto label_2a6d68;
        }
    }
    ctx->pc = 0x2A6D5Cu;
    // 0x2a6d5c: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x2a6d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2a6d60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A6D60u;
    {
        const bool branch_taken_0x2a6d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D60u;
        // 0x2a6d64: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6d60) {
            ctx->pc = 0x2A6D8Cu;
            goto label_2a6d8c;
        }
    }
    ctx->pc = 0x2A6D68u;
label_2a6d68:
    // 0x2a6d68: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2a6d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2a6d6c: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x2a6d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x2a6d70: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x2a6d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x2a6d74: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2a6d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2a6d78: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x2a6d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x2a6d7c: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x2a6d7cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2a6d80: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2a6d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2a6d84: 0x44300a  movz        $a2, $v0, $a0
    ctx->pc = 0x2a6d84u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x2a6d88: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x2a6d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_2a6d8c:
    // 0x2a6d8c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2a6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a6d90: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a6d90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6d94: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x2a6d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a6d98: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x2a6d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2a6d9c: 0x8fc50010  lw          $a1, 0x10($fp)
    ctx->pc = 0x2a6d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6da0: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2a6da0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a6da4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2a6da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6da8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2a6da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2a6dac: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x2a6dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x2a6db0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2a6db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a6db4: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x2a6db4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x2a6db8: 0x18c000c4  blez        $a2, . + 4 + (0xC4 << 2)
    ctx->pc = 0x2A6DB8u;
    {
        const bool branch_taken_0x2a6db8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2A6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6DB8u;
        // 0x2a6dbc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6db8) {
            ctx->pc = 0x2A70CCu;
            goto label_2a70cc;
        }
    }
    ctx->pc = 0x2A6DC0u;
    // 0x2a6dc0: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x2a6dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x2a6dc4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a6dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a6dc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a6dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6dcc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a6dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a6dd0: 0x24567060  addiu       $s6, $v0, 0x7060
    ctx->pc = 0x2a6dd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 28768));
    // 0x2a6dd4: 0x2477cec8  addiu       $s7, $v1, -0x3138
    ctx->pc = 0x2a6dd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954696));
label_2a6dd8:
    // 0x2a6dd8: 0x159080  sll         $s2, $s5, 2
    ctx->pc = 0x2a6dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2a6ddc: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2a6ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2a6de0: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x2a6de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2a6de4: 0x158840  sll         $s1, $s5, 1
    ctx->pc = 0x2a6de4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x2a6de8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2a6de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6dec: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x2a6decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x2a6df0: 0x8cc4cec8  lw          $a0, -0x3138($a2)
    ctx->pc = 0x2a6df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954696)));
    // 0x2a6df4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a6df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a6df8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2a6df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a6dfc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a6dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6e00: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A6E00u;
    {
        const bool branch_taken_0x2a6e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E00u;
        // 0x2a6e04: 0x568021  addu        $s0, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e00) {
            ctx->pc = 0x2A6E28u;
            goto label_2a6e28;
        }
    }
    ctx->pc = 0x2A6E08u;
    // 0x2a6e08: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a6e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a6e0c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a6e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a6e10: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a6e10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a6e14: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A6E14u;
    SET_GPR_U32(ctx, 31, 0x2A6E1Cu);
    ctx->pc = 0x2A6E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6E14u;
    // 0x2a6e18: 0x8ca40018  lw          $a0, 0x18($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A6E14u, 0x2A6E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E1Cu;
label_2a6e1c:
    // 0x2a6e1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6E1Cu;
    {
        const bool branch_taken_0x2a6e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E1Cu;
        // 0x2a6e20: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e1c) {
            ctx->pc = 0x2A6E30u;
            goto label_2a6e30;
        }
    }
    ctx->pc = 0x2A6E24u;
    // 0x2a6e24: 0x0  nop
    ctx->pc = 0x2a6e24u;
    // NOP
label_2a6e28:
    // 0x2a6e28: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2a6e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6e2c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2a6e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2a6e30:
    // 0x2a6e30: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x2a6e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2a6e34: 0x2351821  addu        $v1, $s1, $s5
    ctx->pc = 0x2a6e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x2a6e38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a6e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6e3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a6e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a6e40: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x2a6e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2a6e44: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2a6e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a6e48: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a6e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a6e4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A6E4Cu;
    {
        const bool branch_taken_0x2a6e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E4Cu;
        // 0x2a6e50: 0x768021  addu        $s0, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e4c) {
            ctx->pc = 0x2A6E70u;
            goto label_2a6e70;
        }
    }
    ctx->pc = 0x2A6E54u;
    // 0x2a6e54: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a6e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a6e58: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a6e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a6e5c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a6e5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a6e60: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A6E60u;
    SET_GPR_U32(ctx, 31, 0x2A6E68u);
    ctx->pc = 0x2A6E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6E60u;
    // 0x2a6e64: 0x8ca4001c  lw          $a0, 0x1C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A6E60u, 0x2A6E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E68u;
label_2a6e68:
    // 0x2a6e68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6E68u;
    {
        const bool branch_taken_0x2a6e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E68u;
        // 0x2a6e6c: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e68) {
            ctx->pc = 0x2A6E78u;
            goto label_2a6e78;
        }
    }
    ctx->pc = 0x2A6E70u;
label_2a6e70:
    // 0x2a6e70: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x2a6e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6e74: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2a6e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2a6e78:
    // 0x2a6e78: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x2a6e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2a6e7c: 0x2351821  addu        $v1, $s1, $s5
    ctx->pc = 0x2a6e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x2a6e80: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a6e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6e84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a6e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a6e88: 0x8ee40008  lw          $a0, 0x8($s7)
    ctx->pc = 0x2a6e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x2a6e8c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2a6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a6e90: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a6e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a6e94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A6E94u;
    {
        const bool branch_taken_0x2a6e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E94u;
        // 0x2a6e98: 0x768021  addu        $s0, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e94) {
            ctx->pc = 0x2A6EB8u;
            goto label_2a6eb8;
        }
    }
    ctx->pc = 0x2A6E9Cu;
    // 0x2a6e9c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a6e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a6ea0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a6ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a6ea4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a6ea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a6ea8: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A6EA8u;
    SET_GPR_U32(ctx, 31, 0x2A6EB0u);
    ctx->pc = 0x2A6EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6EA8u;
    // 0x2a6eac: 0x8ca40020  lw          $a0, 0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A6EA8u, 0x2A6EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6EB0u;
label_2a6eb0:
    // 0x2a6eb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6EB0u;
    {
        const bool branch_taken_0x2a6eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EB0u;
        // 0x2a6eb4: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6eb0) {
            ctx->pc = 0x2A6EC0u;
            goto label_2a6ec0;
        }
    }
    ctx->pc = 0x2A6EB8u;
label_2a6eb8:
    // 0x2a6eb8: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2a6eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6ebc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2a6ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2a6ec0:
    // 0x2a6ec0: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x2a6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2a6ec4: 0x2351821  addu        $v1, $s1, $s5
    ctx->pc = 0x2a6ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x2a6ec8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a6ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6ecc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a6eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a6ed0: 0x8ee4000c  lw          $a0, 0xC($s7)
    ctx->pc = 0x2a6ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x2a6ed4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2a6ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2a6ed8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2a6ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a6edc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a6edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a6ee0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A6EE0u;
    {
        const bool branch_taken_0x2a6ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EE0u;
        // 0x2a6ee4: 0x768021  addu        $s0, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6ee0) {
            ctx->pc = 0x2A6F08u;
            goto label_2a6f08;
        }
    }
    ctx->pc = 0x2A6EE8u;
    // 0x2a6ee8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a6ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a6eec: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a6eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a6ef0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a6ef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a6ef4: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A6EF4u;
    SET_GPR_U32(ctx, 31, 0x2A6EFCu);
    ctx->pc = 0x2A6EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6EF4u;
    // 0x2a6ef8: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A6EF4u, 0x2A6EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6EFCu;
label_2a6efc:
    // 0x2a6efc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6EFCu;
    {
        const bool branch_taken_0x2a6efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EFCu;
        // 0x2a6f00: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6efc) {
            ctx->pc = 0x2A6F10u;
            goto label_2a6f10;
        }
    }
    ctx->pc = 0x2A6F04u;
    // 0x2a6f04: 0x0  nop
    ctx->pc = 0x2a6f04u;
    // NOP
label_2a6f08:
    // 0x2a6f08: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2a6f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6f0c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2a6f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2a6f10:
    // 0x2a6f10: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x2a6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2a6f14: 0x2351821  addu        $v1, $s1, $s5
    ctx->pc = 0x2a6f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x2a6f18: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a6f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6f1c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a6f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a6f20: 0x8ee40010  lw          $a0, 0x10($s7)
    ctx->pc = 0x2a6f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x2a6f24: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2a6f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2a6f28: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2a6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a6f2c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a6f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a6f30: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A6F30u;
    {
        const bool branch_taken_0x2a6f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F30u;
        // 0x2a6f34: 0x768021  addu        $s0, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f30) {
            ctx->pc = 0x2A6F58u;
            goto label_2a6f58;
        }
    }
    ctx->pc = 0x2A6F38u;
    // 0x2a6f38: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a6f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a6f3c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a6f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a6f40: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a6f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a6f44: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A6F44u;
    SET_GPR_U32(ctx, 31, 0x2A6F4Cu);
    ctx->pc = 0x2A6F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6F44u;
    // 0x2a6f48: 0x8ca40028  lw          $a0, 0x28($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A6F44u, 0x2A6F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F4Cu;
label_2a6f4c:
    // 0x2a6f4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6F4Cu;
    {
        const bool branch_taken_0x2a6f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F4Cu;
        // 0x2a6f50: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f4c) {
            ctx->pc = 0x2A6F60u;
            goto label_2a6f60;
        }
    }
    ctx->pc = 0x2A6F54u;
    // 0x2a6f54: 0x0  nop
    ctx->pc = 0x2a6f54u;
    // NOP
label_2a6f58:
    // 0x2a6f58: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2a6f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6f5c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2a6f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2a6f60:
    // 0x2a6f60: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x2a6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2a6f64: 0x2351821  addu        $v1, $s1, $s5
    ctx->pc = 0x2a6f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x2a6f68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a6f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6f6c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a6f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a6f70: 0x8ee40014  lw          $a0, 0x14($s7)
    ctx->pc = 0x2a6f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x2a6f74: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2a6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2a6f78: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2a6f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a6f7c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a6f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a6f80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A6F80u;
    {
        const bool branch_taken_0x2a6f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F80u;
        // 0x2a6f84: 0x768021  addu        $s0, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f80) {
            ctx->pc = 0x2A6FA8u;
            goto label_2a6fa8;
        }
    }
    ctx->pc = 0x2A6F88u;
    // 0x2a6f88: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a6f8c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a6f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a6f90: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a6f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a6f94: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A6F94u;
    SET_GPR_U32(ctx, 31, 0x2A6F9Cu);
    ctx->pc = 0x2A6F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6F94u;
    // 0x2a6f98: 0x8ca4002c  lw          $a0, 0x2C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A6F94u, 0x2A6F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F9Cu;
label_2a6f9c:
    // 0x2a6f9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6F9Cu;
    {
        const bool branch_taken_0x2a6f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6F9Cu;
        // 0x2a6fa0: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6f9c) {
            ctx->pc = 0x2A6FB0u;
            goto label_2a6fb0;
        }
    }
    ctx->pc = 0x2A6FA4u;
    // 0x2a6fa4: 0x0  nop
    ctx->pc = 0x2a6fa4u;
    // NOP
label_2a6fa8:
    // 0x2a6fa8: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x2a6fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6fac: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2a6facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2a6fb0:
    // 0x2a6fb0: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x2a6fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2a6fb4: 0x2351821  addu        $v1, $s1, $s5
    ctx->pc = 0x2a6fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x2a6fb8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a6fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6fbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a6fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a6fc0: 0x8ee40018  lw          $a0, 0x18($s7)
    ctx->pc = 0x2a6fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 24)));
    // 0x2a6fc4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2a6fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2a6fc8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2a6fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2a6fcc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a6fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a6fd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A6FD0u;
    {
        const bool branch_taken_0x2a6fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FD0u;
        // 0x2a6fd4: 0x768021  addu        $s0, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6fd0) {
            ctx->pc = 0x2A6FF8u;
            goto label_2a6ff8;
        }
    }
    ctx->pc = 0x2A6FD8u;
    // 0x2a6fd8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2a6fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2a6fdc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a6fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a6fe0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a6fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a6fe4: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A6FE4u;
    SET_GPR_U32(ctx, 31, 0x2A6FECu);
    ctx->pc = 0x2A6FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6FE4u;
    // 0x2a6fe8: 0x8ca40030  lw          $a0, 0x30($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A6FE4u, 0x2A6FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6FECu;
label_2a6fec:
    // 0x2a6fec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6FECu;
    {
        const bool branch_taken_0x2a6fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6FECu;
        // 0x2a6ff0: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6fec) {
            ctx->pc = 0x2A7000u;
            goto label_2a7000;
        }
    }
    ctx->pc = 0x2A6FF4u;
    // 0x2a6ff4: 0x0  nop
    ctx->pc = 0x2a6ff4u;
    // NOP
label_2a6ff8:
    // 0x2a6ff8: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2a6ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6ffc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2a6ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_2a7000:
    // 0x2a7000: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x2a7000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2a7004: 0x2351821  addu        $v1, $s1, $s5
    ctx->pc = 0x2a7004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x2a7008: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2a7008u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a700c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a700cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a7010: 0x8ee4001c  lw          $a0, 0x1C($s7)
    ctx->pc = 0x2a7010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x2a7014: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a7014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a7018: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2a7018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a701c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a701cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a7020: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A7020u;
    {
        const bool branch_taken_0x2a7020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7020u;
        // 0x2a7024: 0x76a021  addu        $s4, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7020) {
            ctx->pc = 0x2A7048u;
            goto label_2a7048;
        }
    }
    ctx->pc = 0x2A7028u;
    // 0x2a7028: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a7028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a702c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a702cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7030: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a7030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a7034: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A7034u;
    SET_GPR_U32(ctx, 31, 0x2A703Cu);
    ctx->pc = 0x2A7038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7034u;
    // 0x2a7038: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A7034u, 0x2A703Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A703Cu;
label_2a703c:
    // 0x2a703c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A703Cu;
    {
        const bool branch_taken_0x2a703c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A703Cu;
        // 0x2a7040: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a703c) {
            ctx->pc = 0x2A7050u;
            goto label_2a7050;
        }
    }
    ctx->pc = 0x2A7044u;
    // 0x2a7044: 0x0  nop
    ctx->pc = 0x2a7044u;
    // NOP
label_2a7048:
    // 0x2a7048: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2a7048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a704c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2a704cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a7050:
    // 0x2a7050: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2a7050u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a7054: 0x4614b001  sub.s       $f0, $f22, $f20
    ctx->pc = 0x2a7054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x2a7058: 0x8ee40020  lw          $a0, 0x20($s7)
    ctx->pc = 0x2a7058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x2a705c: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x2a705cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x2a7060: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x2a7060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2a7064: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a7064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a7068: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2a7068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2a706c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a706cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a7070: 0x568821  addu        $s1, $v0, $s6
    ctx->pc = 0x2a7070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2a7074: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x2a7074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2a7078: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2a7078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a707c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2a707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a7080: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a7080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a7084: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7084u;
    {
        const bool branch_taken_0x2a7084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7084) {
            ctx->pc = 0x2A7088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7084u;
            // 0x2a7088: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A70A8u;
            goto label_2a70a8;
        }
    }
    ctx->pc = 0x2A708Cu;
    // 0x2a708c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a7090: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a7090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7094: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a7094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a7098: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A7098u;
    SET_GPR_U32(ctx, 31, 0x2A70A0u);
    ctx->pc = 0x2A709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7098u;
    // 0x2a709c: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A7098u, 0x2A70A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A70A0u;
label_2a70a0:
    // 0x2a70a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A70A0u;
    {
        const bool branch_taken_0x2a70a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A70A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70A0u;
        // 0x2a70a4: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a70a0) {
            ctx->pc = 0x2A70ACu;
            goto label_2a70ac;
        }
    }
    ctx->pc = 0x2A70A8u;
label_2a70a8:
    // 0x2a70a8: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2a70a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a70ac:
    // 0x2a70ac: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2a70acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a70b0: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x2a70b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x2a70b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a70b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a70b8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2a70b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2a70bc: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x2a70bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a70c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a70c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a70c4: 0x1440ff44  bnez        $v0, . + 4 + (-0xBC << 2)
    ctx->pc = 0x2A70C4u;
    {
        const bool branch_taken_0x2a70c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70C4u;
        // 0x2a70c8: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a70c4) {
            ctx->pc = 0x2A6DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6dd8;
        }
    }
    ctx->pc = 0x2A70CCu;
label_2a70cc:
    // 0x2a70cc: 0x8fc60014  lw          $a2, 0x14($fp)
    ctx->pc = 0x2a70ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a70d0: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x2a70d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x2a70d4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2a70d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a70d8: 0x24447060  addiu       $a0, $v0, 0x7060
    ctx->pc = 0x2a70d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28768));
    // 0x2a70dc: 0xc0c9700  jal         func_325C00
    ctx->pc = 0x2A70DCu;
    SET_GPR_U32(ctx, 31, 0x2A70E4u);
    ctx->pc = 0x2A70E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A70DCu;
    // 0x2a70e0: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C00u, 0x2A70DCu, 0x2A70E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A70E4u;
label_2a70e4:
    // 0x2a70e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a70e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a70e8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2a70e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a70ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a70ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a70f0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2a70f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a70f4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2a70f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a70f8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2a70f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a70fc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2a70fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a7100: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2a7100u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a7104: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2a7104u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7108: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2a7108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a710c: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x2a710cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a7110: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2a7110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a7114: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2a7114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a7118: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7118u;
        // 0x2a711c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7120u;
}
