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

// Function: sub_00330AA0
// Address: 0x330aa0 - 0x330d08
void sub_00330AA0_0x330aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330AA0_0x330aa0");
#endif

    switch (ctx->pc) {
        case 0x330ae4u: goto label_330ae4;
        case 0x330afcu: goto label_330afc;
        case 0x330b18u: goto label_330b18;
        case 0x330b48u: goto label_330b48;
        case 0x330c64u: goto label_330c64;
        case 0x330c78u: goto label_330c78;
        default: break;
    }

    ctx->pc = 0x330aa0u;

    // 0x330aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x330aa4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x330aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x330aa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330ab0: 0x80cc25c  j           func_330970
    ctx->pc = 0x330AB0u;
    ctx->pc = 0x330AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330AB0u;
    // 0x330ab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330970u;
    sub_00330970_0x330970(rdram, ctx, runtime); return;
    ctx->pc = 0x330AB8u;
    // 0x330ab8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x330ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x330abc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x330abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x330ac0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x330ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ac4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x330ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x330ac8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x330ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x330accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ad0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x330ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x330ad4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x330ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x330ad8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x330ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x330adc: 0xc0cc362  jal         func_330D88
    ctx->pc = 0x330ADCu;
    SET_GPR_U32(ctx, 31, 0x330AE4u);
    ctx->pc = 0x330AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330ADCu;
    // 0x330ae0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330D88u, 0x330ADCu, 0x330AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330AE4u;
label_330ae4:
    // 0x330ae4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x330ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ae8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x330ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330aec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x330aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x330af0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x330af0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330af4: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x330AF4u;
    SET_GPR_U32(ctx, 31, 0x330AFCu);
    ctx->pc = 0x330AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330AF4u;
    // 0x330af8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x330AF4u, 0x330AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330AFCu;
label_330afc:
    // 0x330afc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x330afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x330b00: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x330B00u;
    {
        const bool branch_taken_0x330b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x330B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B00u;
        // 0x330b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330b00) {
            ctx->pc = 0x330B10u;
            goto label_330b10;
        }
    }
    ctx->pc = 0x330B08u;
    // 0x330b08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x330B08u;
    {
        const bool branch_taken_0x330b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B08u;
        // 0x330b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330b08) {
            ctx->pc = 0x330B28u;
            goto label_330b28;
        }
    }
    ctx->pc = 0x330B10u;
label_330b10:
    // 0x330b10: 0xc0cc25c  jal         func_330970
    ctx->pc = 0x330B10u;
    SET_GPR_U32(ctx, 31, 0x330B18u);
    ctx->pc = 0x330B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330B10u;
    // 0x330b14: 0x97a50000  lhu         $a1, 0x0($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330970u, 0x330B10u, 0x330B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330B18u;
label_330b18:
    // 0x330b18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x330B18u;
    {
        const bool branch_taken_0x330b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B18u;
        // 0x330b1c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330b18) {
            ctx->pc = 0x330B2Cu;
            goto label_330b2c;
        }
    }
    ctx->pc = 0x330B20u;
    // 0x330b20: 0x56600002  bnel        $s3, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x330B20u;
    {
        const bool branch_taken_0x330b20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x330b20) {
            ctx->pc = 0x330B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330B20u;
            // 0x330b24: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330B2Cu;
            goto label_330b2c;
        }
    }
    ctx->pc = 0x330B28u;
label_330b28:
    // 0x330b28: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x330b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_330b2c:
    // 0x330b2c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x330b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x330b30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x330b30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330b34: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x330b34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x330b38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x330b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x330B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B3Cu;
        // 0x330b40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330B44u;
    // 0x330b44: 0x0  nop
    ctx->pc = 0x330b44u;
    // NOP
label_330b48:
    // 0x330b48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x330b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x330b4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x330b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x330b50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x330b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330b54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x330b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x330b58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x330b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330b5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x330b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x330b60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x330b60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330b64: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x330b64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x330b68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x330b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x330b6c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x330b6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x330b70: 0xc6150000  lwc1        $f21, 0x0($s0)
    ctx->pc = 0x330b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x330b74: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x330B74u;
    {
        const bool branch_taken_0x330b74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x330B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B74u;
        // 0x330b78: 0xc6140004  lwc1        $f20, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x330b74) {
            ctx->pc = 0x330BC0u;
            goto label_330bc0;
        }
    }
    ctx->pc = 0x330B7Cu;
    // 0x330b7c: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x330b7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x330b80: 0x3c013c80  lui         $at, 0x3C80
    ctx->pc = 0x330b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15488 << 16));
    // 0x330b84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x330b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x330b88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330b8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330b8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x330b90: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x330b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330b94: 0xc6030024  lwc1        $f3, 0x24($s0)
    ctx->pc = 0x330b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x330b98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x330b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x330b9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x330b9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x330ba0: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x330ba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x330ba4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x330ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x330ba8: 0x86220010  lh          $v0, 0x10($s1)
    ctx->pc = 0x330ba8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x330bac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330bb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x330bb4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x330bb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x330bb8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x330BB8u;
    {
        const bool branch_taken_0x330bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330BB8u;
        // 0x330bbc: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330bb8) {
            ctx->pc = 0x330C08u;
            goto label_330c08;
        }
    }
    ctx->pc = 0x330BC0u;
label_330bc0:
    // 0x330bc0: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x330bc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x330bc4: 0x3c013c80  lui         $at, 0x3C80
    ctx->pc = 0x330bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15488 << 16));
    // 0x330bc8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x330bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x330bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330bd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330bd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x330bd4: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x330bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330bd8: 0xc6030024  lwc1        $f3, 0x24($s0)
    ctx->pc = 0x330bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x330bdc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x330bdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x330be0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x330be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x330be4: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x330be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x330be8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x330be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x330bec: 0x8622000a  lh          $v0, 0xA($s1)
    ctx->pc = 0x330becu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x330bf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330bf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330bf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x330bf8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x330bf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x330bfc: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x330BFCu;
    {
        const bool branch_taken_0x330bfc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x330C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330BFCu;
        // 0x330c00: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330bfc) {
            ctx->pc = 0x330C08u;
            goto label_330c08;
        }
    }
    ctx->pc = 0x330C04u;
    // 0x330c04: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x330c04u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_330c08:
    // 0x330c08: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x330c08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x330c0c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x330c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x330c10: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x330c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x330c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330c18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x330c1c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x330c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x330c20: 0x92220015  lbu         $v0, 0x15($s1)
    ctx->pc = 0x330c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
    // 0x330c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330c28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x330c2c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x330c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x330c30: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x330c30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x330c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330c38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x330c3c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x330c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x330c40: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x330c40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x330c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330c48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330c48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x330c4c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x330c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x330c50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x330c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x330c54: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x330C54u;
    {
        const bool branch_taken_0x330c54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x330C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C54u;
        // 0x330c58: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330c54) {
            ctx->pc = 0x330C70u;
            goto label_330c70;
        }
    }
    ctx->pc = 0x330C5Cu;
    // 0x330c5c: 0xc0c96e8  jal         func_325BA0
    ctx->pc = 0x330C5Cu;
    SET_GPR_U32(ctx, 31, 0x330C64u);
    ctx->pc = 0x330C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330C5Cu;
    // 0x330c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325BA0u, 0x330C5Cu, 0x330C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330C64u;
label_330c64:
    // 0x330c64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x330C64u;
    {
        const bool branch_taken_0x330c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330c64) {
            ctx->pc = 0x330C78u;
            goto label_330c78;
        }
    }
    ctx->pc = 0x330C6Cu;
    // 0x330c6c: 0x0  nop
    ctx->pc = 0x330c6cu;
    // NOP
label_330c70:
    // 0x330c70: 0xc0c96de  jal         func_325B78
    ctx->pc = 0x330C70u;
    SET_GPR_U32(ctx, 31, 0x330C78u);
    ctx->pc = 0x330C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330C70u;
    // 0x330c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B78u, 0x330C70u, 0x330C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330C78u;
label_330c78:
    // 0x330c78: 0x5240000f  beql        $s2, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x330C78u;
    {
        const bool branch_taken_0x330c78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x330c78) {
            ctx->pc = 0x330C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330C78u;
            // 0x330c7c: 0x8622000c  lh          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330CB8u;
            goto label_330cb8;
        }
    }
    ctx->pc = 0x330C80u;
    // 0x330c80: 0xe6150000  swc1        $f21, 0x0($s0)
    ctx->pc = 0x330c80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x330c84: 0x3c013c80  lui         $at, 0x3C80
    ctx->pc = 0x330c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15488 << 16));
    // 0x330c88: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x330c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x330c8c: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x330c8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x330c90: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x330c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x330c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330c98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x330c9c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x330c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330ca0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x330ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x330ca4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x330ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x330ca8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x330ca8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x330cac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x330CACu;
    {
        const bool branch_taken_0x330cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CACu;
        // 0x330cb0: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x330cac) {
            ctx->pc = 0x330CE4u;
            goto label_330ce4;
        }
    }
    ctx->pc = 0x330CB4u;
    // 0x330cb4: 0x0  nop
    ctx->pc = 0x330cb4u;
    // NOP
label_330cb8:
    // 0x330cb8: 0x3c013c80  lui         $at, 0x3C80
    ctx->pc = 0x330cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15488 << 16));
    // 0x330cbc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x330cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x330cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330cc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x330cc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x330cc8: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x330cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x330ccc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x330cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330cd0: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x330cd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x330cd4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x330cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x330cd8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x330cd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x330cdc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x330cdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x330ce0: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x330ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_330ce4:
    // 0x330ce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330ce8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x330ce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x330cec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x330cecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330cf0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x330cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x330cf4: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x330cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x330cf8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x330cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x330cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x330CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CFCu;
        // 0x330d00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330D04u;
    // 0x330d04: 0x0  nop
    ctx->pc = 0x330d04u;
    // NOP
    ctx->pc = 0x330d08u;
}
