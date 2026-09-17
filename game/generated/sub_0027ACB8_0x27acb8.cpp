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

// Function: sub_0027ACB8
// Address: 0x27acb8 - 0x27ae68
void sub_0027ACB8_0x27acb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027ACB8_0x27acb8");
#endif

    switch (ctx->pc) {
        case 0x27ad08u: goto label_27ad08;
        case 0x27ad1cu: goto label_27ad1c;
        case 0x27ad28u: goto label_27ad28;
        case 0x27ad70u: goto label_27ad70;
        case 0x27ad7cu: goto label_27ad7c;
        default: break;
    }

    ctx->pc = 0x27acb8u;

    // 0x27acb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27acb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27acbc: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x27acbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x27acc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27acc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27acc4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x27acc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x27acc8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27acc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27accc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x27acccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x27acd0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x27acd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x27acd4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x27acd4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27acd8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x27acd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27acdc: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x27acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x27ace0: 0x1460004d  bnez        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x27ACE0u;
    {
        const bool branch_taken_0x27ace0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ACE0u;
        // 0x27ace4: 0x2c62000c  sltiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ace0) {
            ctx->pc = 0x27AE18u;
            goto label_27ae18;
        }
    }
    ctx->pc = 0x27ACE8u;
    // 0x27ace8: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27ACE8u;
    {
        const bool branch_taken_0x27ace8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ace8) {
            ctx->pc = 0x27ACECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27ACE8u;
            // 0x27acec: 0x8e220310  lw          $v0, 0x310($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AD00u;
            goto label_27ad00;
        }
    }
    ctx->pc = 0x27ACF0u;
    // 0x27acf0: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x27acf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27acf4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x27acf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x27acf8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x27ACF8u;
    {
        const bool branch_taken_0x27acf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ACF8u;
        // 0x27acfc: 0xc641001c  lwc1        $f1, 0x1C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27acf8) {
            ctx->pc = 0x27AE44u;
            goto label_27ae44;
        }
    }
    ctx->pc = 0x27AD00u;
label_27ad00:
    // 0x27ad00: 0xc0af12c  jal         func_2BC4B0
    ctx->pc = 0x27AD00u;
    SET_GPR_U32(ctx, 31, 0x27AD08u);
    ctx->pc = 0x27AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD00u;
    // 0x27ad04: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC4B0u, 0x27AD00u, 0x27AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD08u;
label_27ad08:
    // 0x27ad08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27ad08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27ad0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27ad0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ad10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27ad10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ad14: 0xc096b10  jal         func_25AC40
    ctx->pc = 0x27AD14u;
    SET_GPR_U32(ctx, 31, 0x27AD1Cu);
    ctx->pc = 0x27AD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD14u;
    // 0x27ad18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC40u, 0x27AD14u, 0x27AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD1Cu;
label_27ad1c:
    // 0x27ad1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27ad1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ad20: 0xc0af21a  jal         func_2BC868
    ctx->pc = 0x27AD20u;
    SET_GPR_U32(ctx, 31, 0x27AD28u);
    ctx->pc = 0x27AD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD20u;
    // 0x27ad24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC868u, 0x27AD20u, 0x27AD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD28u;
label_27ad28:
    // 0x27ad28: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x27ad28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27ad2c: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x27ad2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x27ad30: 0xc7848c3c  lwc1        $f4, -0x73C4($gp)
    ctx->pc = 0x27ad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27ad34: 0x21023  negu        $v0, $v0
    ctx->pc = 0x27ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x27ad38: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x27ad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ad3c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27ad40: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x27ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ad44: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27ad44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27ad48: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x27ad48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ad4c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x27ad4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27ad50: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x27ad50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x27ad54: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x27ad54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27ad58: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x27ad58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27ad5c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x27ad5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27ad60: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27ad60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27ad64: 0x4604a502  mul.s       $f20, $f20, $f4
    ctx->pc = 0x27ad64u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x27ad68: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x27AD68u;
    SET_GPR_U32(ctx, 31, 0x27AD70u);
    ctx->pc = 0x27AD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD68u;
    // 0x27ad6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x27AD68u, 0x27AD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD70u;
label_27ad70:
    // 0x27ad70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27ad70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27ad74: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x27AD74u;
    SET_GPR_U32(ctx, 31, 0x27AD7Cu);
    ctx->pc = 0x27AD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD74u;
    // 0x27ad78: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x27AD74u, 0x27AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD7Cu;
label_27ad7c:
    // 0x27ad7c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x27ad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ad80: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x27ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27ad84: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x27ad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ad88: 0x46000942  mul.s       $f5, $f1, $f0
    ctx->pc = 0x27ad88u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27ad8c: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x27ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27ad90: 0x46151242  mul.s       $f9, $f2, $f21
    ctx->pc = 0x27ad90u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x27ad94: 0xc6280014  lwc1        $f8, 0x14($s1)
    ctx->pc = 0x27ad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x27ad98: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x27ad98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27ad9c: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x27ad9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27ada0: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x27ada0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x27ada4: 0xc6470000  lwc1        $f7, 0x0($s2)
    ctx->pc = 0x27ada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27ada8: 0xc626001c  lwc1        $f6, 0x1C($s1)
    ctx->pc = 0x27ada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27adac: 0x46092940  add.s       $f5, $f5, $f9
    ctx->pc = 0x27adacu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
    // 0x27adb0: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x27adb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x27adb4: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x27adb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x27adb8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x27adb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x27adbc: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x27adbcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x27adc0: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x27adc0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x27adc4: 0x46082201  sub.s       $f8, $f4, $f8
    ctx->pc = 0x27adc4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x27adc8: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x27adc8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27adcc: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x27adccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27add0: 0x46061981  sub.s       $f6, $f3, $f6
    ctx->pc = 0x27add0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x27add4: 0x460839c1  sub.s       $f7, $f7, $f8
    ctx->pc = 0x27add4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
    // 0x27add8: 0xe6270000  swc1        $f7, 0x0($s1)
    ctx->pc = 0x27add8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x27addc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x27addcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ade0: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x27ade0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x27ade4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x27ade4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x27ade8: 0xa64202b0  sh          $v0, 0x2B0($s2)
    ctx->pc = 0x27ade8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 688), (uint16_t)GPR_U32(ctx, 2));
    // 0x27adec: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x27adecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27adf0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x27adf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27adf4: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x27adf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27adf8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27adf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27adfc: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x27adfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x27ae00: 0xe64102e8  swc1        $f1, 0x2E8($s2)
    ctx->pc = 0x27ae00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 744), bits); }
    // 0x27ae04: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x27ae04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ae08: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x27ae08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x27ae0c: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x27ae0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x27ae10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27AE10u;
    {
        const bool branch_taken_0x27ae10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE10u;
        // 0x27ae14: 0xe64002ec  swc1        $f0, 0x2EC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 748), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae10) {
            ctx->pc = 0x27AE48u;
            goto label_27ae48;
        }
    }
    ctx->pc = 0x27AE18u;
label_27ae18:
    // 0x27ae18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27AE18u;
    {
        const bool branch_taken_0x27ae18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE18u;
        // 0x27ae1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae18) {
            ctx->pc = 0x27AE30u;
            goto label_27ae30;
        }
    }
    ctx->pc = 0x27AE20u;
    // 0x27ae20: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x27ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x27ae24: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27AE24u;
    {
        const bool branch_taken_0x27ae24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE24u;
        // 0x27ae28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae24) {
            ctx->pc = 0x27AE30u;
            goto label_27ae30;
        }
    }
    ctx->pc = 0x27AE2Cu;
    // 0x27ae2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ae30:
    // 0x27ae30: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27AE30u;
    {
        const bool branch_taken_0x27ae30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE30u;
        // 0x27ae34: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae30) {
            ctx->pc = 0x27AE4Cu;
            goto label_27ae4c;
        }
    }
    ctx->pc = 0x27AE38u;
    // 0x27ae38: 0xc6400750  lwc1        $f0, 0x750($s2)
    ctx->pc = 0x27ae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ae3c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x27ae3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x27ae40: 0xc6410758  lwc1        $f1, 0x758($s2)
    ctx->pc = 0x27ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ae44:
    // 0x27ae44: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x27ae44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_27ae48:
    // 0x27ae48: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x27ae48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27ae4c:
    // 0x27ae4c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x27ae4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x27ae50: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x27ae50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27ae54: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x27ae54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x27ae58: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x27ae58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27ae5c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x27ae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27ae60: 0x3e00008  jr          $ra
    ctx->pc = 0x27AE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE60u;
        // 0x27ae64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AE68u;
}
