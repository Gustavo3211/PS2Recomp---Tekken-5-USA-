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

// Function: sub_00368AC0
// Address: 0x368ac0 - 0x368bc8
void sub_00368AC0_0x368ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368AC0_0x368ac0");
#endif

    switch (ctx->pc) {
        case 0x368af4u: goto label_368af4;
        case 0x368b40u: goto label_368b40;
        case 0x368b48u: goto label_368b48;
        case 0x368b60u: goto label_368b60;
        case 0x368b6cu: goto label_368b6c;
        default: break;
    }

    ctx->pc = 0x368ac0u;

    // 0x368ac0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x368ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x368ac4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x368ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x368ac8: 0x3c11001d  lui         $s1, 0x1D
    ctx->pc = 0x368ac8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)29 << 16));
    // 0x368acc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x368accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x368ad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x368ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368ad4: 0x2631646c  addiu       $s1, $s1, 0x646C
    ctx->pc = 0x368ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 25708));
    // 0x368ad8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x368ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368adc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x368adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368ae0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x368ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x368ae4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x368ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x368ae8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x368ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x368aec: 0xc0da4a6  jal         func_369298
    ctx->pc = 0x368AECu;
    SET_GPR_U32(ctx, 31, 0x368AF4u);
    ctx->pc = 0x368AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368AECu;
    // 0x368af0: 0x2632fff4  addiu       $s2, $s1, -0xC (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369298u, 0x368AECu, 0x368AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368AF4u;
label_368af4:
    // 0x368af4: 0x2622ffdc  addiu       $v0, $s1, -0x24
    ctx->pc = 0x368af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967260));
    // 0x368af8: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x368af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x368afc: 0xc4420028  lwc1        $f2, 0x28($v0)
    ctx->pc = 0x368afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x368b00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x368b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b04: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x368b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x368b08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x368b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b0c: 0xc4440024  lwc1        $f4, 0x24($v0)
    ctx->pc = 0x368b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x368b10: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x368b10u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x368b14: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x368b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368b18: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x368b18u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x368b1c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x368b1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x368b20: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x368b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x368b24: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x368b24u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x368b28: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x368b28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x368b2c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x368b2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x368b30: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x368b30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x368b34: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x368b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x368b38: 0xc0da338  jal         func_368CE0
    ctx->pc = 0x368B38u;
    SET_GPR_U32(ctx, 31, 0x368B40u);
    ctx->pc = 0x368B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368B38u;
    // 0x368b3c: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x368CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368CE0u, 0x368B38u, 0x368B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368B40u;
label_368b40:
    // 0x368b40: 0xc0d8298  jal         func_360A60
    ctx->pc = 0x368B40u;
    SET_GPR_U32(ctx, 31, 0x368B48u);
    ctx->pc = 0x368B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368B40u;
    // 0x368b44: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x360A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360A60u, 0x368B40u, 0x368B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368B48u;
label_368b48:
    // 0x368b48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x368b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b4c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x368b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x368b50: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x368b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x368b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b58: 0xc0da4ac  jal         func_3692B0
    ctx->pc = 0x368B58u;
    SET_GPR_U32(ctx, 31, 0x368B60u);
    ctx->pc = 0x368B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368B58u;
    // 0x368b5c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3692B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3692B0u, 0x368B58u, 0x368B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368B60u;
label_368b60:
    // 0x368b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x368b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368b64: 0xc0da338  jal         func_368CE0
    ctx->pc = 0x368B64u;
    SET_GPR_U32(ctx, 31, 0x368B6Cu);
    ctx->pc = 0x368B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368B64u;
    // 0x368b68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368CE0u, 0x368B64u, 0x368B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368B6Cu;
label_368b6c:
    // 0x368b6c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x368b6cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x368b70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x368b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x368b74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x368b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368b78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x368b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368b7c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x368B7Cu;
    {
        const bool branch_taken_0x368b7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x368B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368B7Cu;
        // 0x368b80: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368b7c) {
            ctx->pc = 0x368BA8u;
            goto label_368ba8;
        }
    }
    ctx->pc = 0x368B84u;
    // 0x368b84: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x368b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x368b88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x368b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368b8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x368b8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368b90: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x368B90u;
    {
        const bool branch_taken_0x368b90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x368B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368B90u;
        // 0x368b94: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368b90) {
            ctx->pc = 0x368BACu;
            goto label_368bac;
        }
    }
    ctx->pc = 0x368B98u;
    // 0x368b98: 0x131023  negu        $v0, $s3
    ctx->pc = 0x368b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x368b9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x368b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x368ba0: 0x29c03  sra         $s3, $v0, 16
    ctx->pc = 0x368ba0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
    // 0x368ba4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x368ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_368ba8:
    // 0x368ba8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x368ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_368bac:
    // 0x368bac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x368bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x368bb0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x368bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x368bb4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x368bb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x368bb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x368bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x368BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368BBCu;
        // 0x368bc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368BC4u;
    // 0x368bc4: 0x0  nop
    ctx->pc = 0x368bc4u;
    // NOP
    ctx->pc = 0x368bc8u;
}
