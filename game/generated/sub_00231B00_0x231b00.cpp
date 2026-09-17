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

// Function: sub_00231B00
// Address: 0x231b00 - 0x231d68
void sub_00231B00_0x231b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231B00_0x231b00");
#endif

    switch (ctx->pc) {
        case 0x231b8cu: goto label_231b8c;
        case 0x231bc8u: goto label_231bc8;
        case 0x231c0cu: goto label_231c0c;
        case 0x231c5cu: goto label_231c5c;
        case 0x231c94u: goto label_231c94;
        case 0x231ca0u: goto label_231ca0;
        case 0x231cb0u: goto label_231cb0;
        case 0x231cc4u: goto label_231cc4;
        case 0x231d28u: goto label_231d28;
        case 0x231d34u: goto label_231d34;
        default: break;
    }

    ctx->pc = 0x231b00u;

    // 0x231b00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x231b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x231b04: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x231b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x231b08: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x231b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x231b0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x231b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b10: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x231b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x231b14: 0x3a310000  xori        $s1, $s1, 0x0
    ctx->pc = 0x231b14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)0);
    // 0x231b18: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x231b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x231b1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x231b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b20: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x231b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x231b24: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x231b24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b28: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x231b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x231b2c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x231b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x231b30: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x231b30u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x231b34: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x231b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x231b38: 0x3c170016  lui         $s7, 0x16
    ctx->pc = 0x231b38u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)22 << 16));
    // 0x231b3c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x231b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x231b40: 0x26d2dda0  addiu       $s2, $s6, -0x2260
    ctx->pc = 0x231b40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294958496));
    // 0x231b44: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x231b44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x231b48: 0x86830012  lh          $v1, 0x12($s4)
    ctx->pc = 0x231b48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x231b4c: 0x86620012  lh          $v0, 0x12($s3)
    ctx->pc = 0x231b4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x231b50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x231b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x231b54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x231b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x231b58: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x231b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x231b5c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x231b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x231b60: 0x78640010  lq          $a0, 0x10($v1)
    ctx->pc = 0x231b60u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x231b64: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x231b64u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x231b68: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x231b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x231b6c: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x231b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x231b70: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x231b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231b74: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x231b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x231b78: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x231b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231b7c: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x231b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x231b80: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x231b80u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x231b84: 0xc08c67a  jal         func_2319E8
    ctx->pc = 0x231B84u;
    SET_GPR_U32(ctx, 31, 0x231B8Cu);
    ctx->pc = 0x231B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231B84u;
    // 0x231b88: 0x460d0341  sub.s       $f13, $f0, $f13 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2319E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2319E8u, 0x231B84u, 0x231B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231B8Cu;
label_231b8c:
    // 0x231b8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x231b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x231b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231b94: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x231b94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x231b98: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x231b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x231b9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x231b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x231ba0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x231ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ba4: 0x51800b  movn        $s0, $v0, $s1
    ctx->pc = 0x231ba4u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x231ba8: 0x26e2d350  addiu       $v0, $s7, -0x2CB0
    ctx->pc = 0x231ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294955856));
    // 0x231bac: 0xac50002c  sw          $s0, 0x2C($v0)
    ctx->pc = 0x231bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 16));
    // 0x231bb0: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x231bb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x231bb4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x231bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231bb8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x231bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231bbc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x231bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231bc0: 0xc08dc2e  jal         func_2370B8
    ctx->pc = 0x231BC0u;
    SET_GPR_U32(ctx, 31, 0x231BC8u);
    ctx->pc = 0x231BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231BC0u;
    // 0x231bc4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2370B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2370B8u, 0x231BC0u, 0x231BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231BC8u;
label_231bc8:
    // 0x231bc8: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x231bc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x231bcc: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x231bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x231bd0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x231bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x231bd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x231BD4u;
    {
        const bool branch_taken_0x231bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231BD4u;
        // 0x231bd8: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231bd4) {
            ctx->pc = 0x231BF0u;
            goto label_231bf0;
        }
    }
    ctx->pc = 0x231BDCu;
    // 0x231bdc: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x231bdcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231be0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x231be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x231be4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x231BE4u;
    {
        const bool branch_taken_0x231be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231BE4u;
        // 0x231be8: 0xc780851c  lwc1        $f0, -0x7AE4($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231be4) {
            ctx->pc = 0x231C04u;
            goto label_231c04;
        }
    }
    ctx->pc = 0x231BECu;
    // 0x231bec: 0x0  nop
    ctx->pc = 0x231becu;
    // NOP
label_231bf0:
    // 0x231bf0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x231bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x231bf4: 0xc7818520  lwc1        $f1, -0x7AE0($gp)
    ctx->pc = 0x231bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231bf8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x231bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x231bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231c00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_231c04:
    // 0x231c04: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x231C04u;
    SET_GPR_U32(ctx, 31, 0x231C0Cu);
    ctx->pc = 0x231C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C04u;
    // 0x231c08: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x231C04u, 0x231C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C0Cu;
label_231c0c:
    // 0x231c0c: 0x3c01457a  lui         $at, 0x457A
    ctx->pc = 0x231c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17786 << 16));
    // 0x231c10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x231c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x231c14: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x231c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231c18: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x231c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x231c1c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x231c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x231c20: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x231c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x231c24: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x231c24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x231c28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231C28u;
    {
        const bool branch_taken_0x231c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C28u;
        // 0x231c2c: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c28) {
            ctx->pc = 0x231C40u;
            goto label_231c40;
        }
    }
    ctx->pc = 0x231C30u;
    // 0x231c30: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x231c30u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231c34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x231c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x231c38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x231C38u;
    {
        const bool branch_taken_0x231c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C38u;
        // 0x231c3c: 0xc7808524  lwc1        $f0, -0x7ADC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c38) {
            ctx->pc = 0x231C54u;
            goto label_231c54;
        }
    }
    ctx->pc = 0x231C40u;
label_231c40:
    // 0x231c40: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x231c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x231c44: 0xc7818528  lwc1        $f1, -0x7AD8($gp)
    ctx->pc = 0x231c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231c48: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x231c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x231c4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231c50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x231c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_231c54:
    // 0x231c54: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x231C54u;
    SET_GPR_U32(ctx, 31, 0x231C5Cu);
    ctx->pc = 0x231C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C54u;
    // 0x231c58: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x231C54u, 0x231C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C5Cu;
label_231c5c:
    // 0x231c5c: 0x3c01457a  lui         $at, 0x457A
    ctx->pc = 0x231c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17786 << 16));
    // 0x231c60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x231c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231c64: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x231c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231c68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x231c68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x231c6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x231c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x231c70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x231c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231c74: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x231c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x231c78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231c7c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x231c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x231c80: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x231c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x231c84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x231c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x231c88: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x231c88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x231c8c: 0xc08c236  jal         func_2308D8
    ctx->pc = 0x231C8Cu;
    SET_GPR_U32(ctx, 31, 0x231C94u);
    ctx->pc = 0x231C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C8Cu;
    // 0x231c90: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308D8u, 0x231C8Cu, 0x231C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C94u;
label_231c94:
    // 0x231c94: 0xc78c852c  lwc1        $f12, -0x7AD4($gp)
    ctx->pc = 0x231c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x231c98: 0xc08c242  jal         func_230908
    ctx->pc = 0x231C98u;
    SET_GPR_U32(ctx, 31, 0x231CA0u);
    ctx->pc = 0x230908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230908u, 0x231C98u, 0x231CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CA0u;
label_231ca0:
    // 0x231ca0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x231ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ca4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x231ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ca8: 0xc08c69e  jal         func_231A78
    ctx->pc = 0x231CA8u;
    SET_GPR_U32(ctx, 31, 0x231CB0u);
    ctx->pc = 0x231CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CA8u;
    // 0x231cac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A78u, 0x231CA8u, 0x231CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CB0u;
label_231cb0:
    // 0x231cb0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x231cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231cb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x231cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231cb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x231cb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x231cbc: 0xc08c22c  jal         func_2308B0
    ctx->pc = 0x231CBCu;
    SET_GPR_U32(ctx, 31, 0x231CC4u);
    ctx->pc = 0x231CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CBCu;
    // 0x231cc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308B0u, 0x231CBCu, 0x231CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CC4u;
label_231cc4:
    // 0x231cc4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x231cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x231cc8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x231cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x231ccc: 0x8c4483c0  lw          $a0, -0x7C40($v0)
    ctx->pc = 0x231cccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x231cd0: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x231CD0u;
    {
        const bool branch_taken_0x231cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x231CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CD0u;
        // 0x231cd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231cd0) {
            ctx->pc = 0x231CE4u;
            goto label_231ce4;
        }
    }
    ctx->pc = 0x231CD8u;
    // 0x231cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231cdc: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x231CDCu;
    {
        const bool branch_taken_0x231cdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x231cdc) {
            ctx->pc = 0x231CE8u;
            goto label_231ce8;
        }
    }
    ctx->pc = 0x231CE4u;
label_231ce4:
    // 0x231ce4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x231ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231ce8:
    // 0x231ce8: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x231CE8u;
    {
        const bool branch_taken_0x231ce8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x231ce8) {
            ctx->pc = 0x231CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231CE8u;
            // 0x231cec: 0xaec0dda0  sw          $zero, -0x2260($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 4294958496), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231CF8u;
            goto label_231cf8;
        }
    }
    ctx->pc = 0x231CF0u;
    // 0x231cf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231cf4: 0xaec2dda0  sw          $v0, -0x2260($s6)
    ctx->pc = 0x231cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294958496), GPR_U32(ctx, 2));
label_231cf8:
    // 0x231cf8: 0xc7808530  lwc1        $f0, -0x7AD0($gp)
    ctx->pc = 0x231cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231cfc: 0x26e2d350  addiu       $v0, $s7, -0x2CB0
    ctx->pc = 0x231cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294955856));
    // 0x231d00: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x231d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x231d04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x231d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d08: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x231d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x231d0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x231d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d10: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x231d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x231d14: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x231d14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x231d18: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x231d18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x231d1c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x231d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x231d20: 0xc08c182  jal         func_230608
    ctx->pc = 0x231D20u;
    SET_GPR_U32(ctx, 31, 0x231D28u);
    ctx->pc = 0x231D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D20u;
    // 0x231d24: 0xac400044  sw          $zero, 0x44($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230608u, 0x231D20u, 0x231D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D28u;
label_231d28:
    // 0x231d28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x231d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d2c: 0xc08c182  jal         func_230608
    ctx->pc = 0x231D2Cu;
    SET_GPR_U32(ctx, 31, 0x231D34u);
    ctx->pc = 0x231D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D2Cu;
    // 0x231d30: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230608u, 0x231D2Cu, 0x231D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D34u;
label_231d34:
    // 0x231d34: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x231d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231d38: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x231d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x231d3c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x231d3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x231d40: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x231d40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x231d44: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x231d44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x231d48: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x231d48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x231d4c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x231d4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x231d50: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x231d50u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x231d54: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x231d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x231d58: 0xc7b40088  lwc1        $f20, 0x88($sp)
    ctx->pc = 0x231d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x231d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x231D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D5Cu;
        // 0x231d60: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231D64u;
    // 0x231d64: 0x0  nop
    ctx->pc = 0x231d64u;
    // NOP
    ctx->pc = 0x231d68u;
}
