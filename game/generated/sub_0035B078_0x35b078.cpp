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

// Function: sub_0035B078
// Address: 0x35b078 - 0x35b138
void sub_0035B078_0x35b078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B078_0x35b078");
#endif

    switch (ctx->pc) {
        case 0x35b0a8u: goto label_35b0a8;
        case 0x35b100u: goto label_35b100;
        default: break;
    }

    ctx->pc = 0x35b078u;

    // 0x35b078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35b078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35b07c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35b080: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x35b080u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x35b084: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35b084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35b088: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x35b088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x35b08c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35b08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35b090: 0x245012c0  addiu       $s0, $v0, 0x12C0
    ctx->pc = 0x35b090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x35b094: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35b094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35b098: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35b098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b09c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35b09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35b0a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35b0a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b0a4: 0x0  nop
    ctx->pc = 0x35b0a4u;
    // NOP
label_35b0a8:
    // 0x35b0a8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x35b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35b0ac: 0x58400018  blezl       $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x35B0ACu;
    {
        const bool branch_taken_0x35b0ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x35b0ac) {
            ctx->pc = 0x35B0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B0ACu;
            // 0x35b0b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B110u;
            goto label_35b110;
        }
    }
    ctx->pc = 0x35B0B4u;
    // 0x35b0b4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x35b0b4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35b0b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35b0b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35b0bc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x35b0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35b0c0: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x35b0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35b0c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35b0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x35b0c8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x35b0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x35b0cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x35b0ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35b0d0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x35b0d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x35b0d4: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x35b0d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35b0d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x35B0D8u;
    {
        const bool branch_taken_0x35b0d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B0D8u;
        // 0x35b0dc: 0xe6020000  swc1        $f2, 0x0($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b0d8) {
            ctx->pc = 0x35B0E8u;
            goto label_35b0e8;
        }
    }
    ctx->pc = 0x35B0E0u;
    // 0x35b0e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35B0E0u;
    {
        const bool branch_taken_0x35b0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B0E0u;
        // 0x35b0e4: 0xe6030000  swc1        $f3, 0x0($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b0e0) {
            ctx->pc = 0x35B0F4u;
            goto label_35b0f4;
        }
    }
    ctx->pc = 0x35B0E8u;
label_35b0e8:
    // 0x35b0e8: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x35b0e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35b0ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x35B0ECu;
    {
        const bool branch_taken_0x35b0ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35b0ec) {
            ctx->pc = 0x35B0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B0ECu;
            // 0x35b0f0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B0F4u;
            goto label_35b0f4;
        }
    }
    ctx->pc = 0x35B0F4u;
label_35b0f4:
    // 0x35b0f4: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x35b0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35b0f8: 0xc0d68c0  jal         func_35A300
    ctx->pc = 0x35B0F8u;
    SET_GPR_U32(ctx, 31, 0x35B100u);
    ctx->pc = 0x35B0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B0F8u;
    // 0x35b0fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A300u, 0x35B0F8u, 0x35B100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B100u;
label_35b100:
    // 0x35b100: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x35b100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x35b104: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x35b104u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x35b108: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x35b108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x35b10c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35b10cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_35b110:
    // 0x35b110: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x35b110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x35b114: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x35B114u;
    {
        const bool branch_taken_0x35b114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B114u;
        // 0x35b118: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b114) {
            ctx->pc = 0x35B0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b0a8;
        }
    }
    ctx->pc = 0x35B11Cu;
    // 0x35b11c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35b11cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b120: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35b120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b124: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35b124u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b128: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35b128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b12c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x35b12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35b130: 0x3e00008  jr          $ra
    ctx->pc = 0x35B130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B130u;
        // 0x35b134: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B138u;
}
