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

// Function: sub_0024DC90
// Address: 0x24dc90 - 0x24de58
void sub_0024DC90_0x24dc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DC90_0x24dc90");
#endif

    switch (ctx->pc) {
        case 0x24dcc4u: goto label_24dcc4;
        case 0x24dce8u: goto label_24dce8;
        case 0x24dd14u: goto label_24dd14;
        case 0x24ddb0u: goto label_24ddb0;
        case 0x24de1cu: goto label_24de1c;
        case 0x24de38u: goto label_24de38;
        default: break;
    }

    ctx->pc = 0x24dc90u;

    // 0x24dc90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24dc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24dc94: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x24dc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x24dc98: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x24dc98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x24dc9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24dc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24dca0: 0x2662fb10  addiu       $v0, $s3, -0x4F0
    ctx->pc = 0x24dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966032));
    // 0x24dca4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x24dca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x24dca8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24dca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24dcac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24dcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24dcb0: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x24dcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3AFD84u));
    // 0x24dcb4: 0x54600061  bnel        $v1, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x24DCB4u;
    {
        const bool branch_taken_0x24dcb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dcb4) {
            ctx->pc = 0x24DCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DCB4u;
            // 0x24dcb8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DE3Cu;
            goto label_24de3c;
        }
    }
    ctx->pc = 0x24DCBCu;
    // 0x24dcbc: 0xc095344  jal         func_254D10
    ctx->pc = 0x24DCBCu;
    SET_GPR_U32(ctx, 31, 0x24DCC4u);
    ctx->pc = 0x24DCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DCBCu;
    // 0x24dcc0: 0x3c100004  lui         $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D10u, 0x24DCBCu, 0x24DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DCC4u;
label_24dcc4:
    // 0x24dcc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24dcc8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x24dcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24dccc: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x24dcccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x24dcd0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x24dcd4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x24dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x24dcd8: 0x24120400  addiu       $s2, $zero, 0x400
    ctx->pc = 0x24dcd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x24dcdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24dcdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dce0: 0x3610c000  ori         $s0, $s0, 0xC000
    ctx->pc = 0x24dce0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)49152);
    // 0x24dce4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x24dce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24dce8:
    // 0x24dce8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x24dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24dcec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x24dcecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24dcf0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x24dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x24dcf4: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x24dcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x24dcf8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24dcfc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24dd00: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x24dd00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24dd04: 0x18c0fff8  blez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24DD04u;
    {
        const bool branch_taken_0x24dd04 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x24DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD04u;
        // 0x24dd08: 0x508021  addu        $s0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd04) {
            ctx->pc = 0x24DCE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dce8;
        }
    }
    ctx->pc = 0x24DD0Cu;
    // 0x24dd0c: 0xc08926e  jal         func_2249B8
    ctx->pc = 0x24DD0Cu;
    SET_GPR_U32(ctx, 31, 0x24DD14u);
    ctx->pc = 0x24DD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD0Cu;
    // 0x24dd10: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2249B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2249B8u, 0x24DD0Cu, 0x24DD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD14u;
label_24dd14:
    // 0x24dd14: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x24dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x24dd18: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24DD18u;
    {
        const bool branch_taken_0x24dd18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD18u;
        // 0x24dd1c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd18) {
            ctx->pc = 0x24DD30u;
            goto label_24dd30;
        }
    }
    ctx->pc = 0x24DD20u;
    // 0x24dd20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24dd20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24dd24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24DD24u;
    {
        const bool branch_taken_0x24dd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD24u;
        // 0x24dd28: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd24) {
            ctx->pc = 0x24DD44u;
            goto label_24dd44;
        }
    }
    ctx->pc = 0x24DD2Cu;
    // 0x24dd2c: 0x0  nop
    ctx->pc = 0x24dd2cu;
    // NOP
label_24dd30:
    // 0x24dd30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24dd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24dd34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24dd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24dd38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24dd38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24dd3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24dd3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24dd40: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x24dd40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_24dd44:
    // 0x24dd44: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24DD44u;
    {
        const bool branch_taken_0x24dd44 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x24DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD44u;
        // 0x24dd48: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd44) {
            ctx->pc = 0x24DD58u;
            goto label_24dd58;
        }
    }
    ctx->pc = 0x24DD4Cu;
    // 0x24dd4c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x24dd4cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dd50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24DD50u;
    {
        const bool branch_taken_0x24dd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DD50u;
        // 0x24dd54: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dd50) {
            ctx->pc = 0x24DD6Cu;
            goto label_24dd6c;
        }
    }
    ctx->pc = 0x24DD58u;
label_24dd58:
    // 0x24dd58: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x24dd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x24dd5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24dd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24dd60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24dd60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dd64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24dd64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24dd68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x24dd68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_24dd6c:
    // 0x24dd6c: 0x0  nop
    ctx->pc = 0x24dd6cu;
    // NOP
    // 0x24dd70: 0x0  nop
    ctx->pc = 0x24dd70u;
    // NOP
    // 0x24dd74: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x24dd74u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x24dd78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24dd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24dd7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24dd7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dd80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24dd80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24dd84: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x24DD84u;
    {
        const bool branch_taken_0x24dd84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24dd84) {
            ctx->pc = 0x24DD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DD84u;
            // 0x24dd88: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DD8Cu;
            goto label_24dd8c;
        }
    }
    ctx->pc = 0x24DD8Cu;
label_24dd8c:
    // 0x24dd8c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x24dd8cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dd90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24dd90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24dd94: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x24dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x24dd98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x24dd98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24dd9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dda0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24dda0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24dda4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24dda4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x24dda8: 0x44121000  mfc1        $s2, $f2
    ctx->pc = 0x24dda8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x24ddac: 0x2428018  mult        $s0, $s2, $v0
    ctx->pc = 0x24ddacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_24ddb0:
    // 0x24ddb0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x24ddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24ddb4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x24ddb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24ddb8: 0x3a42821  addu        $a1, $sp, $a0
    ctx->pc = 0x24ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x24ddbc: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x24ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x24ddc0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24ddc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ddc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24ddc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24ddc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24ddc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24ddcc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24ddccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x24ddd0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x24ddd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24ddd4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x24ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x24ddd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24dddc: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x24dddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x24dde0: 0x18c0fff3  blez        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x24DDE0u;
    {
        const bool branch_taken_0x24dde0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x24DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDE0u;
        // 0x24dde4: 0x908021  addu        $s0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dde0) {
            ctx->pc = 0x24DDB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ddb0;
        }
    }
    ctx->pc = 0x24DDE8u;
    // 0x24dde8: 0x2671fb10  addiu       $s1, $s3, -0x4F0
    ctx->pc = 0x24dde8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966032));
    // 0x24ddec: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x24ddecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24ddf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DDF0u;
    {
        const bool branch_taken_0x24ddf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDF0u;
        // 0x24ddf4: 0xae320264  sw          $s2, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ddf0) {
            ctx->pc = 0x24DE00u;
            goto label_24de00;
        }
    }
    ctx->pc = 0x24DDF8u;
    // 0x24ddf8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24DDF8u;
    {
        const bool branch_taken_0x24ddf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DDF8u;
        // 0x24ddfc: 0xae200260  sw          $zero, 0x260($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ddf8) {
            ctx->pc = 0x24DE20u;
            goto label_24de20;
        }
    }
    ctx->pc = 0x24DE00u;
label_24de00:
    // 0x24de00: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x24de00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x24de04: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x24de04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x24de08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24de08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24de0c: 0x24e73240  addiu       $a3, $a3, 0x3240
    ctx->pc = 0x24de0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12864));
    // 0x24de10: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24de10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24de14: 0xc089248  jal         func_224920
    ctx->pc = 0x24DE14u;
    SET_GPR_U32(ctx, 31, 0x24DE1Cu);
    ctx->pc = 0x24DE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DE14u;
    // 0x24de18: 0x34c60005  ori         $a2, $a2, 0x5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)5);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x24DE14u, 0x24DE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE1Cu;
label_24de1c:
    // 0x24de1c: 0xae220260  sw          $v0, 0x260($s1)
    ctx->pc = 0x24de1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
label_24de20:
    // 0x24de20: 0x2663fb10  addiu       $v1, $s3, -0x4F0
    ctx->pc = 0x24de20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966032));
    // 0x24de24: 0x8c620260  lw          $v0, 0x260($v1)
    ctx->pc = 0x24de24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 608)));
    // 0x24de28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DE28u;
    {
        const bool branch_taken_0x24de28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE28u;
        // 0x24de2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de28) {
            ctx->pc = 0x24DE38u;
            goto label_24de38;
        }
    }
    ctx->pc = 0x24DE30u;
    // 0x24de30: 0xc093796  jal         func_24DE58
    ctx->pc = 0x24DE30u;
    SET_GPR_U32(ctx, 31, 0x24DE38u);
    ctx->pc = 0x24DE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DE30u;
    // 0x24de34: 0xac620274  sw          $v0, 0x274($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 628), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DE58u, 0x24DE30u, 0x24DE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DE38u;
label_24de38:
    // 0x24de38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24de38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24de3c:
    // 0x24de3c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24de3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24de40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24de40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24de44: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x24de44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24de48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24de48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24de4c: 0x3e00008  jr          $ra
    ctx->pc = 0x24DE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE4Cu;
        // 0x24de50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DE54u;
    // 0x24de54: 0x0  nop
    ctx->pc = 0x24de54u;
    // NOP
    ctx->pc = 0x24de58u;
}
