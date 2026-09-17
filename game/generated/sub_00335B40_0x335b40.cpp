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

// Function: sub_00335B40
// Address: 0x335b40 - 0x335c30
void sub_00335B40_0x335b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335B40_0x335b40");
#endif

    switch (ctx->pc) {
        case 0x335bb0u: goto label_335bb0;
        default: break;
    }

    ctx->pc = 0x335b40u;

    // 0x335b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335b44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335b48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x335b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335b4c: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x335b4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x335b50: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x335b50u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x335b54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335b58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x335b5c: 0xde220018  ld          $v0, 0x18($s1)
    ctx->pc = 0x335b5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x335b60: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x335b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x335b64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x335b64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x335b68: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x335b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x335b6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x335b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x335b70: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x335b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x335b74: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x335b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x335b78: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x335B78u;
    {
        const bool branch_taken_0x335b78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x335B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B78u;
        // 0x335b7c: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335b78) {
            ctx->pc = 0x335B90u;
            goto label_335b90;
        }
    }
    ctx->pc = 0x335B80u;
    // 0x335b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x335b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335b84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x335b84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x335b88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x335B88u;
    {
        const bool branch_taken_0x335b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B88u;
        // 0x335b8c: 0x46006002  mul.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335b88) {
            ctx->pc = 0x335BA0u;
            goto label_335ba0;
        }
    }
    ctx->pc = 0x335B90u;
label_335b90:
    // 0x335b90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x335b90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335b94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x335b94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x335b98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x335b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x335b9c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x335b9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_335ba0:
    // 0x335ba0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x335ba0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x335ba4: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x335ba4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x335ba8: 0xc040880  jal         func_102200
    ctx->pc = 0x335BA8u;
    SET_GPR_U32(ctx, 31, 0x335BB0u);
    ctx->pc = 0x335BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335BA8u;
    // 0x335bac: 0x26100290  addiu       $s0, $s0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102200u, 0x335BA8u, 0x335BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335BB0u;
label_335bb0:
    // 0x335bb0: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x335bb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x335bb4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x335bb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x335bb8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x335bb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x335bbc: 0x2406f000  addiu       $a2, $zero, -0x1000
    ctx->pc = 0x335bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x335bc0: 0x3c07ff80  lui         $a3, 0xFF80
    ctx->pc = 0x335bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65408 << 16));
    // 0x335bc4: 0x34e70fff  ori         $a3, $a3, 0xFFF
    ctx->pc = 0x335bc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4095);
    // 0x335bc8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x335bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335bcc: 0x32100fff  andi        $s0, $s0, 0xFFF
    ctx->pc = 0x335bccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4095);
    // 0x335bd0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x335BD0u;
    {
        const bool branch_taken_0x335bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x335BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335BD0u;
        // 0x335bd4: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335bd0) {
            ctx->pc = 0x335BDCu;
            goto label_335bdc;
        }
    }
    ctx->pc = 0x335BD8u;
    // 0x335bd8: 0x24a40048  addiu       $a0, $a1, 0x48
    ctx->pc = 0x335bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
label_335bdc:
    // 0x335bdc: 0xde220018  ld          $v0, 0x18($s1)
    ctx->pc = 0x335bdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x335be0: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x335be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x335be4: 0xde230040  ld          $v1, 0x40($s1)
    ctx->pc = 0x335be4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x335be8: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x335be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x335bec: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x335becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x335bf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335bf4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x335bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x335bf8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x335bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x335bfc: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x335bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x335c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335c04: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x335c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x335c08: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x335c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x335c0c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x335c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x335c10: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x335c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x335c14: 0xfe230040  sd          $v1, 0x40($s1)
    ctx->pc = 0x335c14u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 3));
    // 0x335c18: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x335c18u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x335c1c: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x335c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x335c20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335c20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335c24: 0x3e00008  jr          $ra
    ctx->pc = 0x335C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C24u;
        // 0x335c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335C2Cu;
    // 0x335c2c: 0x0  nop
    ctx->pc = 0x335c2cu;
    // NOP
    ctx->pc = 0x335c30u;
}
