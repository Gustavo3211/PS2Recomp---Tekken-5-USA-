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

// Function: sub_0027EC68
// Address: 0x27ec68 - 0x27ed68
void sub_0027EC68_0x27ec68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EC68_0x27ec68");
#endif

    switch (ctx->pc) {
        case 0x27eca8u: goto label_27eca8;
        case 0x27ecb0u: goto label_27ecb0;
        case 0x27ecf0u: goto label_27ecf0;
        default: break;
    }

    ctx->pc = 0x27ec68u;

    // 0x27ec68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27ec68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27ec6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27ec6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ec70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27ec70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27ec74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27ec74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ec78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27ec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27ec7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27ec7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27ec80: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x27ec80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x27ec84: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x27ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x27ec88: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x27ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x27ec8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27ec90: 0x8e120050  lw          $s2, 0x50($s0)
    ctx->pc = 0x27ec90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x27ec94: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x27EC94u;
    {
        const bool branch_taken_0x27ec94 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC94u;
        // 0x27ec98: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec94) {
            ctx->pc = 0x27ECC8u;
            goto label_27ecc8;
        }
    }
    ctx->pc = 0x27EC9Cu;
    // 0x27ec9c: 0x18600021  blez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x27EC9Cu;
    {
        const bool branch_taken_0x27ec9c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EC9Cu;
        // 0x27eca0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ec9c) {
            ctx->pc = 0x27ED24u;
            goto label_27ed24;
        }
    }
    ctx->pc = 0x27ECA4u;
    // 0x27eca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27eca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27eca8:
    // 0x27eca8: 0xc09fafa  jal         func_27EBE8
    ctx->pc = 0x27ECA8u;
    SET_GPR_U32(ctx, 31, 0x27ECB0u);
    ctx->pc = 0x27ECACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ECA8u;
    // 0x27ecac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EBE8u, 0x27ECA8u, 0x27ECB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECB0u;
label_27ecb0:
    // 0x27ecb0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x27ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x27ecb4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x27ecb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27ecb8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x27ECB8u;
    {
        const bool branch_taken_0x27ecb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECB8u;
        // 0x27ecbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecb8) {
            ctx->pc = 0x27ECA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27eca8;
        }
    }
    ctx->pc = 0x27ECC0u;
    // 0x27ecc0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x27ECC0u;
    {
        const bool branch_taken_0x27ecc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECC0u;
        // 0x27ecc4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecc0) {
            ctx->pc = 0x27ED28u;
            goto label_27ed28;
        }
    }
    ctx->pc = 0x27ECC8u;
label_27ecc8:
    // 0x27ecc8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x27ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x27eccc: 0x38823  negu        $s1, $v1
    ctx->pc = 0x27ecccu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x27ecd0: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x27ecd0u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x27ecd4: 0x1010  mfhi        $v0
    ctx->pc = 0x27ecd4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x27ecd8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x27ECD8u;
    {
        const bool branch_taken_0x27ecd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ecd8) {
            ctx->pc = 0x27ECDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27ECD8u;
            // 0x27ecdc: 0xc6030060  lwc1        $f3, 0x60($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27ECF8u;
            goto label_27ecf8;
        }
    }
    ctx->pc = 0x27ECE0u;
    // 0x27ece0: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x27ece0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ece4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ece4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ece8: 0xc09fafa  jal         func_27EBE8
    ctx->pc = 0x27ECE8u;
    SET_GPR_U32(ctx, 31, 0x27ECF0u);
    ctx->pc = 0x27ECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ECE8u;
    // 0x27ecec: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EBE8u, 0x27ECE8u, 0x27ECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ECF0u;
label_27ecf0:
    // 0x27ecf0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27ECF0u;
    {
        const bool branch_taken_0x27ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ECF0u;
        // 0x27ecf4: 0xe6000060  swc1        $f0, 0x60($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ecf0) {
            ctx->pc = 0x27ED24u;
            goto label_27ed24;
        }
    }
    ctx->pc = 0x27ECF8u;
label_27ecf8:
    // 0x27ecf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27ecf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27ecfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x27ecfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27ed00: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x27ed00u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27ed04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x27ed04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x27ed08: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x27ed08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ed0c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x27ed0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x27ed10: 0x0  nop
    ctx->pc = 0x27ed10u;
    // NOP
    // 0x27ed14: 0x0  nop
    ctx->pc = 0x27ed14u;
    // NOP
    // 0x27ed18: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x27ed18u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x27ed1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27ed1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27ed20: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x27ed20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_27ed24:
    // 0x27ed24: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x27ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_27ed28:
    // 0x27ed28: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27ed2c: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x27ed2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x27ed30: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x27ed30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x27ed34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27ed38: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x27ed38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x27ed3c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27ED3Cu;
    {
        const bool branch_taken_0x27ed3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED3Cu;
        // 0x27ed40: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ed3c) {
            ctx->pc = 0x27ED48u;
            goto label_27ed48;
        }
    }
    ctx->pc = 0x27ED44u;
    // 0x27ed44: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x27ed44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_27ed48:
    // 0x27ed48: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x27ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x27ed4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27ed4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ed50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27ed50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27ed54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27ed54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ed58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x27ed58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27ed5c: 0x3e00008  jr          $ra
    ctx->pc = 0x27ED5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ED5Cu;
        // 0x27ed60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ED5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27ED64u;
    // 0x27ed64: 0x0  nop
    ctx->pc = 0x27ed64u;
    // NOP
    ctx->pc = 0x27ed68u;
}
